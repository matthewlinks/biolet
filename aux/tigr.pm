# $Id: tigr.pm,v 1.1.1.1 2007/05/03 16:15:44 matthew_links Exp $
# BioPerl module for Bio::SeqIO::tigr
#
# Cared for by Josh Lauricha (laurichj@bioinfo.ucr.edu)
#
# Copyright Josh Lauricha
#
# You may distribute this module under the same terms as perl itself

# _history
# Feb. 25, 2004 Largely rewritten by Haidan(Wendy) Guo
# The Main improved implementation compare with Josh's code as following:
# (1) This module can deal with .xml and .coordset files wiht or without the assembly_sequence
# (2) Parse the whole TIGR XML DATA to seqIO object
# (3) Improve the efficient for processing, remove some of the repeat part for using _readline() and _pushback
# (4) Indicate the new methods or modified method, and how it is tested in each method's Notes
# (5) Add more detail internal note for each method.
# The test files:
# (1) chr01.xml 
# ftp://ftp.tigr.org/pub/data/Eukaryotic_Projects/o_sativa/annotation_dbs/pseudomolecules/version_1.0/chr01.dir/chr01.xml
# (2) sample.xml
# ftp://ftp.tigr.org/pub/data/Eukaryotic_Projects/o_sativa/annotation_dbs/pseudomolecules
# April 2004 -> Rewritten/modified/documented/formtted by Simon Chan.

# POD documentation - main docs before the code

=head1 NAME

Bio::SeqIO::tigr - TIGR XML sequence input/output stream

=head1 SYNOPSIS

Do not use this module directly.  Use it via the Bio::SeqIO class.

=head1 DESCRIPTION
his object can transform Bio::Seq objects to and from efa flat
file databases.

=head1 FEEDBACK

=head2 Mailing Lists

User feedback is an integral part of the evolution of this and other
Bioperl modules. Send your comments and suggestions preferably to one
of the Bioperl mailing lists.  Your participation is much appreciated.

  bioperl-l@bioperl.org            - General discussion
  http://bioperl.org/MailList.shtml - About the mailing lists

=head2 Reporting Bugs

Report bugs to the Bioperl bug tracking system to help us keep track
 the bugs and their resolution.
 Bug reports can be submitted via email or the web:

  bioperl-bugs@bio.perl.org
  http://bio.perl.org/bioperl-bugs/

=head1 AUTHORS - Josh Lauricha

Email: laurichj@cs.ucr.edu


=head1 APPENDIX

The rest of the documentation details each of the object
methods. Internal methods are usually preceded with a _

=cut

##########################################################################################################################################


# Let the code begin...
package Bio::SeqIO::tigr;
use vars qw(@ISA);
use strict;

use Bio::SeqIO;
use Bio::Seq::RichSeq;
use Bio::Species;
use Bio::Annotation::Comment;
use Bio::SeqFeature::Generic;
use Bio::Seq::SeqFactory;
use Bio::Seq::RichSeq;
use Data::Dumper;
use Storable qw(dclone);

@ISA = qw(Bio::SeqIO);



# ============================================================================================
=head2 _initialize

 Title    : _initialize
 Usage    : $self->_initialize();
  	  : it is inherited and called from SeqIO.pm
 Function : call _process function to get start the parsing.
 Args     :
 Returns  : Nothing.

=cut
sub _initialize {
    
        # The format followed by the _initialize sub in 
        # genbank.pm, fasta.pm, embl.pm, etc.

	my($self, @args) = @_;

        # 1.  call SeqIO's _initialize (@args -> -file, -format, etc).
	$self->SUPER::_initialize(@args);


        # tigr.pm sepcific stuff:
        # Initialize values and such:
	($self->{'tu'}, $self->{'model'})
	 = $self->_rearrange([qw(TU MODEL)], @args);
	$self->{'tu'}      = 1 if !defined($self->{'tu'});
	$self->{'model'}   = 1 if !defined($self->{'model'});
	$self->{'eof'}     = 0;
        $self->{'version'} = 1.0; # added by Simon.

        # 2.  Make a sequence factory:
	$self->sequence_factory(new Bio::Seq::SeqFactory(
			-type => 'Bio::Seq::RichSeq'));


	my $file_name;
	my $flag = 0;
	for my $arg (@args){
		if ($arg =~ /\-file/){
			$flag = 1;	
		} elsif ($flag == 1){
			$file_name = $arg;
			last;
		}
	}

	if ($file_name !~ />/){
        	$self->_process();
	}

}
# ============================================================================================
=head2 write_seq
 
 Title    : write_seq
 Usage    : $seq = $stream->write_seq();
 Function : writes out the next sequence in the stream
 Returns  : 1 for success, 0 for failure.
 Args     : Bio::Seq object to be written out.

=cut
=head2
sub write_seq {

    my ($self, @seqs) = @_;
    # print scalar @seqs , "\n";

    # use lib '/home/skchan/gq/BIO_SUPPORT/XML-Mini-1.2.8/blib/lib';
    # use lib '/home/skchan/modules/XML-Mini-1.2.8/blib/lib';
    use XML::Mini::Document;
    my $newDoc = XML::Mini::Document->new();
    my $xmlRoot = $newDoc->getRoot();

    # print "xmlRoot: $xmlRoot\n"; exit;    
    my $xmlHeader = $xmlRoot->header('xml');

    # add the version 
    $xmlHeader->attribute('version', '1.0');
    # print $newDoc->toString();

    my $tigr = $xmlRoot->createChild('TIGR');
    # my $child = $tigr->createChild('first')->text('John');

    # print $newDoc->toString();
    my $xml;
    for my $seq (@seqs){

        # use Data::Dumper;
        # print Data::Dumper->Dump([$seq]); exit;
        my $features = $seq->{_as_feat};
        # print Data::Dumper->Dump([$features]); exit;
        # print "features: $features\n"
        my @feature_keys = @{$features};
        print "feature_keys: @feature_keys\n"; print scalar @feature_keys , "\n"; 
        for my $feature_object (@feature_keys){
            # each feature object has the following keys to a hash ref:
            # _gsf_tag_hash _source_tag _gsf_seq _location _gsf_seq_id _primary_tag 
            # <ASSEMBLY> attributes and values are located in where $primary_tag eq "source"
            my $primary_tag = $feature_object->{_primary_tag};

            if (uc $primary_tag eq "SOURCE"){
               # this feature object contains data that I want to pull out for <ASSEMBLY>
               my %assembly_attributes = %{$$feature_object{"_gsf_tag_hash"}};
        #       print Data::Dumper->Dump([%assembly_attributes]); exit;
               my ($clone_name, $clone_id, $asmbl_id, $database, $chromosome, $end5, $end3, $strand);
              
               while ( my ($att_name, $att_value) = each %assembly_attributes ){
                   $att_name = uc $att_name;
                   my $value = uc $att_value->[0];
                   if ($att_name eq "CLONE_ID"){
                       $clone_id = $value;
                   } elsif ($att_name eq "DATABASE"){
                       $database = $value;
                   } elsif ($att_name eq "CHROMOSOME"){
                       $chromosome = $value;
                   } elsif ($att_name eq "ASMBL_ID"){
                       $asmbl_id = $value;
                   } elsif ($att_name eq "CLONE"){
                       $clone_name = $value;   
                   } elsif ($att_name eq "END5"){
                       $end5 = $value;
                   } elsif ($att_name eq "END3"){
                       $end3 = $value;
                   } elsif ($att_name eq "STRAND"){
                       $strand = $value;
                   }

              } # close the while loop.
              
              my $assembly = $tigr->createChild('ASSEMBLY');
              $assembly->attribute('CLONE_ID',$clone_id) if defined $clone_id; 
              $assembly->attribute('DATABASE',$database) if defined $database;
              $assembly->attribute(' CHROMOSOME',$chromosome) if defined $chromosome; 
							      # CHROMOSOME string has a space in front of it b/c
							      # without it, you get: <ASSEMBLYCHROMOSOME =
              my $date = localtime;
              $assembly->attribute('CURRENT_DATE',$date);
              
              if (defined $asmbl_id){
                  my $ASMBL_ID = $assembly->createChild('ASMBL_ID');
                  $ASMBL_ID->attribute('CLONE_NAME',$clone_name) if defined $clone_name;
                  $ASMBL_ID->text($asmbl_id);
              }
              if (defined $end3 && defined $end5){
                  my $coordset = $assembly->createChild('COORDSET');
                  my $END5 = $coordset->createChild('END5');
                  $END5->text($end5);
                  my $END3 = $coordset->createChild('END3');
                  $END3->text($end3);
              }

              my $header = $assembly->createChild('HEADER');

              if (defined $clone_name){
                  my $CLONE_NAME = $header->createChild('CLONE_NAME');
                  $CLONE_NAME->text($clone_name);
              }           

              my $gb_acc = $header->createChild('GB_ACCESSION');              
              my $seq_id = $$feature_object{"_gsf_seq"}->display_id;
              $gb_acc->text($seq_id);

              my $organism = $header->createChild('ORGANISM');
              $organism->text($seq->{species}->{_common_name});

              my $lineage = $header->createChild('LINEAGE');
              my $lineage_string = join(' ; ', reverse @{$seq->{species}->{_classification}});
              $lineage->text($lineage_string);
 
              # my $seq_group = $header->createChild('SEQ_GROUP');
              # $seq_group->text('TIGR');

              # skip author here
     
              if (defined $strand){ # the only thing I can put in for TILING_PATH is orientation.
                  my $tiling_path = $assembly->createChild('TILING_PATH'); 
 
                  if ($strand =~ /\+/ || $strand eq "POSITIVE" || $strand eq "WATSON" || $strand eq "1"){
                      $strand = "+";
                  } elsif ($strand =~ /\-/ || $strand eq "NEGATIVE" || $strand eq "CRICK" || $strand eq "-1"){
                      $strand = "-";
                  }
                  my $orientation = $tiling_path->createChild('ORIENTATION');
                  $orientation->text($strand);
              }


              my @models = $self->_process_get_models($features);
              if (scalar @models != 0){ 
                 my $gene_list = $assembly->createChild('GENE_LIST');
                 
                 my $protein_coding = $gene_list->createChild('PROTEIN_CODING'); # how do I know if it's a protein coding or rna gene???
                 # for my $model (@models){
                 for my $model (@{$self->{ASSEMBLY}->{GENE_LIST}->{PROTEIN_CODING}->{TU}}){

                     my $TU = $protein_coding->createChild('TU');

                     my @secondary_accession;
                     if (defined @{$seq->{_annotation}->{_annotation}->{secondary_accession}}){
                         @secondary_accession = @{$seq->{_annotation}->{_annotation}->{secondary_accession}};
                     }
                     my @temp;
                     for my $secondary_accession (@secondary_accession){
                         push @temp, $secondary_accession->{value} if defined $secondary_accession->{value};
                     }
                     my $tu_feat_name = join(', ',@temp);

                     my $feat_name;
                     if ($tu_feat_name){
                         $feat_name = $TU->createChild('FEAT_NAME');
                         $feat_name->text($tu_feat_name);
                         # print "in here: $tu_feat_name\n"; exit;
                     }

                     @temp = ();
                     my $GENE_INFO = $TU->createChild('GENE_INFO');

                     my $annotation_object = $seq->{_annotation};
                     my @secondary_accession_for_gene_info = @{$annotation_object->{_annotation}->{secondary_accession}};

                     for my $sec_acc (@secondary_accession_for_gene_info){
                         if (defined $sec_acc->{value}){
                             push @temp, $sec_acc->{value};
                             # last;
                         }
                     }
                     my $gene_info_locus = join(', ',@temp);

                     if (defined $gene_info_locus){
                         my $locus = $GENE_INFO->createChild('LOCUS');
                         $locus->text($gene_info_locus);                  
                     }                     

                     my @comment_objects;
                     if (defined @{$annotation_object->{_annotation}->{comment}}){
                        @comment_objects = @{$annotation_object->{_annotation}->{comment}};
                     }
                    
                     # print "comment: $comment\n"; exit;
                     # print Data::Dumper->Dump([@comment_object]); 
                     # print Data::Dumper->Dump([$a->{_typemap}]);
                     my $comment;
                     for my $comment_object (@comment_objects){

                         if (defined $comment_object->{text}){
                             $comment = $comment_object->{text};
                             last;
                         }

                     }### close for my $comment_object    

                     my $com_name = $GENE_INFO->createChild('COM_NAME');
                     $com_name->text($seq->{primary_seq}->{desc});

                     # print "comment: $comment\n"; exit;
                     if (defined $comment){
                         my $comment_tag = $GENE_INFO->createChild('COMMENT');
                         $comment_tag->text($comment);
                     }

                     # print $model->{_gsf_tag_hash}->{_primary_tag} , "\n"; exit;
                     my ($MODEL, $FEAT_NAME);
                     my @names = keys %{$model->{_gsf_tag_hash}};
                     if (defined $model->{_gsf_tag_hash}->{$names[0]}->[0]){
                         $MODEL = $TU->createChild('MODEL');
                         $FEAT_NAME = $MODEL->createChild('FEAT_NAME');                      
                         $FEAT_NAME->text($model->{_gsf_tag_hash}->{$names[0]}->[0]);
                     }

                     my $PUB_LOCUS;
                     if (defined $model->{_gsf_tag_hash}->{locus}->[0]){
                         $PUB_LOCUS = $MODEL->createChild('PUB_LOCUS');
                         $PUB_LOCUS->text($model->{_gsf_tag_hash}->{locus}->[0]);
                     }

                     my @exons = $self->_process_get_exons($features);
                     if (scalar @exons != 0){
                        
                        my $EXON;
                        for my $exon (@exons){

                            $EXON = $MODEL->createChild('EXON');
                            my $exon_feat_name = $EXON->createChild('FEAT_NAME');

                            my @names = keys %{$exon->{_gsf_tag_hash}};
                            my @temp;
                            for my $name (@names){
                                push @temp, $exon->{_gsf_tag_hash}->{$name}->[0];
                            }
                            my $feature_name = join(',',@temp);
                            $exon_feat_name->text($feature_name);

                            
                            my $COORDSET = $EXON->createChild('COORDSET');
                            my $END5 = $COORDSET->createChild('END5');

                            my ($start, $end);
                            if ($exon->{_location}->{_sublocations}){
                               $start = $exon->{_location}->{_sublocations}->[0]->{_start};
                               $end   = $exon->{_location}->{_sublocations}->[0]->{_end};
                            } else {

                               if ($exon->{_location} =~ /Bio::Location::Fuzzy/){
                                    $start = $exon->{_location}->{_min_start};
                                    $end   = $exon->{_location}->{_max_end};
                               } elsif ($exon->{_location} =~ /Bio::Location::Simple/){
                                    $start = $exon->{_location}->{_start};
                                    $end   = $exon->{_location}->{_end};
                               } else {
                                 die "what is this: " , $exon->{_location};
                               }

                            } # close else of if ($exon->{_location}->{_sublocations}){

                            $start = "NULL" if !defined $start; $end = "NULL" if !defined $end;
                            $END5->text($start);

                            my $END3 = $COORDSET->createChild('END3');
                            $END3->text($end);
                        }


                        # no exons also means no utrs, so only worry about utrs if there are exons:
                        my @UTRS = $self->_process_get_utrs($features);
                        my @left_utrs  = @{$UTRS[0]}; # 5' 
                        my @right_utrs = @{$UTRS[1]}; # 3'

                        my $UTR;
                        if (scalar @left_utrs != 0 || scalar @right_utrs != 0){
                           $UTR = $EXON->createChild('UTRS');
                        }

                        for my $utr_object (@left_utrs){
 
                            my ($start, $end);
                            my $LEFT_UTR = $UTR->createChild('LEFT_UTR');
                            my $COORDSET = $LEFT_UTR->createChild('COORDSET');
                            my $end5     = $COORDSET->createChild('END5');
                            my $end3     = $COORDSET->createChild('END3');
                            if ($utr_object =~ /Bio::Location::Fuzzy/){
                                $start = $utr_object->{_location}->{_min_start};
                                $end   = $utr_object->{_location}->{_max_end};
                            } elsif ($utr_object =~ /Bio::Location::Simple/){
                                $start = $utr_object->{_location}->{_start};
                                $end   = $utr_object->{_location}->{_end};
                            }

                            $start = "NULL" if !defined $start;
                            $end   = "NULL" if !defined $end;
                            $end5->text($start);
                            $end3->text($end);
                        }

                        for my $utr_object (@right_utrs){
                            
                            my ($start, $end);
                            my $RIGHT_UTR = $UTR->createChild('RIGHT_UTR');
                            my $COORDSET  = $RIGHT_UTR->createChild('COORDSET');
                            my $end5      = $COORDSET->createChild('END5');
                            my $end3      = $COORDSET->createChild('END3');
                            if ($utr_object =~ /Bio::Location::Fuzzy/){
                                $start = $utr_object->{_location}->{_min_start};
                                $end   = $utr_object->{_location}->{_max_end};
                            } elsif ($utr_object =~ /Bio::Location::Simple/){
                                $start = $utr_object->{_location}->{_start};
                                $end   = $utr_object->{_location}->{_end};
                            }

                            $start = "NULL" if !defined $start;
                            $end   = "NULL" if !defined $end;              
                            $end5->text($start);
                            $end3->text($end);
                        }


                     } # closes if (scalar @exons != 0){

                        my @CDS = $self->_process_get_cds($features);
                        my $protein_sequence = $MODEL->createChild('PROTEIN_SEQUENCE');
                        $protein_sequence->text($CDS[0]->{_gsf_tag_hash}->{translation}->[0]);

                        my $assembly_sequence = $assembly->createChild('ASSEMBLY_SEQUENCE');
                        $assembly_sequence->text($seq->{primary_seq}->seq); 
                       



                 } # closes for my $model (@models){

              } # closes if (scalar @model != 0){

              # print $newDoc->toString();
              my $xml_string = $newDoc->toString();
              my @xml_array = split('\n',$xml_string);
              my $count = 0;
              my $flag = 0;
              my $line;
              my $append_line;
              my $closing_tag;
              for my $xml_line (@xml_array){
       
                  $line .= "<!DOCTYPE TIGR SYSTEM \"tigrxml.dtd\">\n" if $count == 1;
                  $line .= "$xml_line\n";
                  $count++;

              }
              print "$line\n";


           } elsif ($primary_tag eq "MODEL"){ # closes if ($primary_tag eq "SOURCE"){

           }

       } # close for my $feature_object (@feature_keys){       


    } # close for my $seq (@seqs)


} # close the sub
=cut
sub _process_get_cds {

    my ($self, $features) = @_;

    my @CDS;
    for my $feature_object (@$features){
        my $primary_tag = $feature_object->{_primary_tag};
        $primary_tag = uc $primary_tag;
        push @CDS, $feature_object if $primary_tag eq "CDS";
    }
    
    return @CDS; 

}


sub _process_get_utrs {

    my ($self, $features) = @_;
    my @left_utrs; # 5'
    my @right_utrs; # 3'
    for my $feature_object (@$features){
        my $primary_tag = $feature_object->{_primary_tag};
        $primary_tag = uc $primary_tag;
        # print "primary_tag: $primary_tag\n";
        if ($primary_tag eq "5'UTR"){
           push @left_utrs, $feature_object;
        } elsif ($primary_tag eq "3'UTR"){
           push @right_utrs, $feature_object;
        }

    }

    return (\@left_utrs, \@right_utrs);

}

sub _process_get_exons {

    my ($self, $features) = @_;
    my @exons = ();
    for my $feature_object (@$features){
        my $primary_tag = $feature_object->{_primary_tag};
        $primary_tag = uc $primary_tag;
        # print "primary_tag: $primary_tag\n";
        push @exons, $feature_object if $primary_tag eq "EXON";
    }

    # print Data::Dumper->Dump([@exons]); exit;
    return @exons;
}

sub _process_get_models {

    my ($self, $features) = @_;

    my @models = ();
    for my $feature_object (@$features){
        my $primary_tag = $feature_object->{_primary_tag};        
        $primary_tag = uc $primary_tag;
        push @models, $feature_object if $primary_tag eq "MODEL" || $primary_tag eq "GENE";
      
    } 

    # print Data::Dumper->Dump([@models]); exit;
   
    return @models;
}


sub _tigr_write_seq_helper_for_species {

    my ($self, $species) = @_;
    # print Data::Dumper->Dump([$data]); exit;
    my $common_name = $species->{_common_name};
    my $class       = $species->{_classification};
    my %return;
    $return{common_name} = $common_name;
    $return{classification} = $class;
    return %return;

}
# ============================================================================================
=head2 next_seq

 Title   : next_seq
 Usage   : $seq = $stream->next_seq()
 Function: returns the next sequence in the stream
 Returns : Bio::Seq object
 Args    : NONE

=cut

=head2
sub next_seq {


	my ($self) = @_;
	print Data::Dumper->Dump([$self]);
	exit;
}
=cut


sub next_seq {

	my ($self) = @_;

	$self->_process_seq;
=head2
	### $self->_process_seq_tu;
	my $list=$self->{'ASSEMBLY'}->{'GENE_LIST'}->{'PROTEIN_CODING'}->{'TU'};

	return 0 if $self->{'eof'} == 1;
	if(defined(@{$self->{'seq'}}) and @{$self->{'seq'}} > 0) {
		return shift @{$self->{'seq'}};
	} else {
		# die;
	}
	# $self->{'eof'} = 0;
	while($self->{'eof'} == 0) {
		print "in while loop!\n";
		until( (defined(@$list) and @$list > 0) or $self->{'eof'} == 1) {
		    print "before _process call! " , $self->{'eof'}  , "\n";
		    $self->_process();
		    print "after _process call! " , $self->{'eof'} , "\n";

		}
		while(defined(@$list) and @$list > 0 and
			(!defined(@{$self->{'seq'}}) or @{$self->{'seq'}} == 0)
		) {
			$self->_process_seq();
		}

		if(defined(@{$self->{'seq'}}) and @{$self->{'seq'}} > 0) {
			return shift @{$self->{'seq'}};
		}
	} # close outer most while loop
	
	        #if(defined(@{$self->{'seq'}}) and @{$self->{'seq'}} > 0) {

		#	my $blah = shift @{$self->{'seq'}};
		#	print "blah: $blah\n"; exit;
 #               #        return shift @{$self->{'seq'}};
                #} else {
		#	print "nope\n";
		#}

=cut
	return undef;
}

=head2 _get_sequence

 Title   : _get_sequence
 Usage   : $seq = $self->_get_sequence()
 Function: order ASSEMBLY_SEQUENCE from the seqIO object.
 Returns : assembly sequence
 Args    : the sequence's two ends
 Note	:Josh's code
=cut
sub _get_sequence {
	my($self, $start, $end) = @_;
	my $dir   = ($start < $end)? 1 : -1;
	my $len   = ($end - $start) * $dir + 1;
	my $seqstr;


	if($dir == -1) { # Crick 
		$seqstr = reverse(substr(
			$self->{'ASSEMBLY'}->{'ASSEMBLY_SEQUENCE'},
			$end - 1, $len));
		$seqstr =~ tr/acgtrymkswhbvdnxACGTRYMKSWHBVDNX/tgcayrkmswdvbhnxTGCAYRKMSWDVBHNX/;
	} else { # Watson
		$seqstr = substr(
			$self->{'ASSEMBLY'}->{'ASSEMBLY_SEQUENCE'},
			$start - 1, $len);
	}

	return $seqstr;
}
=head2 _process_seq

 Title   : _process_seq
 Usage   : $seq = $stream->_process_seq()
 Function: get TU from the seqIO object.
 Returns :
 Args    :
 Note	 : Josh's code
=cut
sub _process_seq
{
	my ($self) = @_;
 
        # array ref:
	my $list=$self->{'ASSEMBLY'}->{'GENE_LIST'}->{'PROTEIN_CODING'}->{'TU'};
       
	my $kw = join(' ', @{$self->{'ASSEMBLY'}->{'HEADER'}->{'KEYWORDS'}})
		if defined($self->{'ASSEMBLY'}->{'HEADER'}->{'KEYWORDS'});
        # if there are keywords, stick 'em into $kw with the following format:
        # keyword1 keyword2 keyword3 etc.

	my $tu = shift(@$list); # $list is an array ref of transcriptional units
                                # here, we pull out the last tu.

	# get the TU from seqIO object
        # print "tu: $tu\n";
        # print Data::Dumper->Dump([$tu]); exit;

        # if it contains data, _process_seq_tu($tu)
	push(@{$self->{'seq'}}, $self->_process_seq_tu($tu))
		if defined($self->{'tu'});


}
=head2 _process_seq_tu
 Title   : _process_seq_tu
 Usage   : $seq = $stream->_process_seq_tu()
 Function:
 Returns :
 Args    :
 Note	: Josh's code
=cut
sub _process_seq_tu()
{

	my ($self, $tu) = @_;
        
	my $start  = $tu->{'COORDSET'}->{'END5'}; # start of the transcriptional unit.
	my $end    = $tu->{'COORDSET'}->{'END3'}; # end of the transcriptional unit.

my $seqstr;
#if ($tu->{GENE_INFO}->{PUB_LOCUS} eq "At1g75660"){
	$seqstr = $self->_get_sequence($start, $end); # obtain the sequence for this
                                                         # particular $tu from the
#                                                  }       # assembly.
                                                         # $seqstr is the sequence
                                                         # from the assembly of this
                                                         # $tu.
        

        my $strand = 1;
        $strand = -1 if $start > $end;

	# my $id = $tu->{GENE_INFO}->{PUB_LOCUS};
        my $id = $self->{ASSEMBLY}->{HEADER}->{GB_ACCESSION};
	if(!defined($id) or $id =~ /^\s*$/o) {
		$id = $tu->{FEAT_NAME};
	}
 
        # At1g75480 

        # return unless $id eq "At1g75690";
        # return unless $id eq "At1g75490";
        # return unless $id eq "At1g75500";
        # return unless $id eq "At1g75660";
        # return unless $strand == 1;
        # return unless $id eq "At1g75480";
        # return unless $strand == -1;
 
        my ($c_real_start, $c_real_end);

        # print "self: $self\n"; # tigr object.

        # create a sequence object with the TU sequence ($seqstr).
	my $seq = $self->sequence_factory()->create(
		-id => $id,
		-seq => $seqstr, # only a portion of $seqstr (and $seq->seq)
                                 # is the CDS.
		-accession_number => $id
	);
        # print Data::Dumper->Dump([$seq]); exit;
        # print "seq: $seq\n"; # Bio::Seq::RichSeq=HASH(0x862d9c8)

        # GENBANK ALERT!
        # $seq's primary_id is used as the LOCUS name in a genbank record.
        # $id was obtained from $tu->{GENE_INFO}->{PUB_LOCUS}
        # see above.
        # See, the code by Josh uses $id as the LOCUS value, but if you go to 
        # NCBI and enter $id, you won't find that any sequence is indexed by such a
        # name.....
        # you'll find sequences, though...Better check with BC.
	$seq->primary_id($id); # set the primary id:
                               # print "id: $id\n"; # At1g75690

        # GENBANK ALERT!
        # $date is the date that is displayed in the first line of a genbank file.
        my $date = $tu->{'DATE'};
	$seq->add_date($date) if defined($tu->{'DATE'});
 
        # another date is being added...only this time, it's the <DATE></DATE> found
        # in <GENE_INFO></GENE_INFO>
	$seq->add_date($tu->{'GENE_INFO'}->{'DATE'});

        # GENBANK ALERT!  
        # the data add here will make up the ACCESSION header.
	$seq->add_secondary_accession($tu->{'FEAT_NAME'})
        unless $tu->{FEAT_NAME} eq $id;
        # This stores $tu->{FEAT_NAME} as a secondary accession number(s).
        # The line looks like this: <FEAT_NAME>51284.t00010</FEAT_NAME>
        # print "id: $id , " , $tu->{FEAT_NAME} , "\n"; exit;
        # why does this add the locus again???
        # It has already been stored in $seq->id; (which is used by genbank.pm
        # as the LOCUS name in a genbank file).
	$seq->add_secondary_accession($tu->{'GENE_INFO'}->{'LOCUS'});
	$seq->add_secondary_accession($tu->{'GENE_INFO'}->{'ALT_LOCUS'})
	 	if defined($tu->{'GENE_INFO'}->{'ALT_LOCUS'});
        ###  
 
        # GENBANK ALERT!          
        # This will be used as the description in the fasta header and as the
        # DEFINITION in the genbank file.
	$seq->description(join(' | ',
		'genomic nucleotide', # this genomic nucleotide shouldn't be hard
                                      # coded in.
		$tu->{'GENE_INFO'}->{'COM_NAME'}
	));

        # GENBANK ALERT!
        # Here we start to store the data that will appear in the FEATURES header.
#	my $strand = 1;
#	$strand = -1 if $start > $end;
	my $source = new Bio::SeqFeature::Generic(
		-primary => 'source',
		-start   => 1,
		-end     => $seq->length(),
		-tag     => {
			date    =>  $tu->{DATE},
			end5    =>  $tu->{COORDSET}->{END5},
			end3    =>  $tu->{COORDSET}->{END3},
			strand  => ($tu->{COORDSET}->{END5} < $tu->{COORDSET}->{END3} ? "positive" : "negative"),
                        database => $self->{ASSEMBLY}->{DATABASE}, # include the attributes of the ASSEMBLY element.
                       
                        clone_ID  => $self->{ASSEMBLY}->{CLONE_ID},                    
                        ASMBL_ID  => $self->{ASSEMBLY}->{ASMBL_ID},
		}
	);

        # Adding data to the FEATURES header in a genbank file:
	$self->_add_source($source);

        # this line actually adds this sequence feature ($source) so that genbank.pm
        # can add it to the FEATURE section.
	$seq->add_SeqFeature($source);

        # GENBANK ALERT!
        # add the data in MODEL to the FEATURES header.
	foreach my $model (@{$tu->{'MODEL'}}) {
		my @exons;
		my @cds;
                my @CDS;          

                # add one to offset the 0 start.
                # You have a portion of the ASSEMBLY sequence in $seq.
                # Need to alter the MODEL start and stop coordinates (which are wrt
                # the whole ASSEMBLY) to be wrt the $seq.
                # Same goes for exon, CDS, UTRs, etc.
		my $mstart = $strand*($model->{'COORDSET'}->{'END5'} - $start) + 1;
		my $mend   = $strand*($model->{'COORDSET'}->{'END3'} - $start) + 1;


                if (!$mstart || !$mend){
                    die "missing mstart, mend";
                }


		my $locus = $model->{PUB_LOCUS};
		if(!defined($locus) or $locus =~ /^\s*$/) {
			$locus = $model->{FEAT_NAME};
		}

                # Why is he adding the locus name to the ACCESSION data again???
		# $seq->add_secondary_accession($locus);
		# $seq->add_secondary_accession($model->{FEAT_NAME}) unless $locus eq $model->{FEAT_NAME};

                # GENBANK ALERT!
                # add the features for MODEL to the FEATURE section in a genbank file.
		my $mfeat = new Bio::SeqFeature::Generic(
			-primary     => 'MODEL',
			-start       => $mstart,
			-end         => $mend,
			-tag => {
				locus => $locus,
				feat_name => $model->{'FEAT_NAME'}
			}
		);

                # add this sequence feature to the object so that genbank.pm can 
                # display it in the FEATURE section.
		$seq->add_SeqFeature($mfeat);

                # print "strand: $strand ! \n"; exit;

                # GENBANK ALERT!
                # add the exons to the FEATURE section.
		foreach my $exon (@{$model->{'EXON'}}) {
			my $estart = $strand * ($exon->{'COORDSET'}->{'END5'} - $start) + 1;
			my $eend   = $strand * ($exon->{'COORDSET'}->{'END3'} - $start) + 1;

			push @exons, {
				"start" => $estart,
				"end"   => $eend,
				"date"  => $exon->{'DATE'},
				"locus" => $exon->{'FEAT_NAME'},
			};


			if(defined($exon->{'CDS'})) {
				my $c = $exon->{'CDS'};

                                $c_real_start = $c->{COORDSET}->{END5};
                                $c_real_end   = $c->{COORDSET}->{END3};
				my $cstart = $strand * ($c->{'COORDSET'}->{'END5'} - $start) + 1;
				my $cend   = $strand * ($c->{'COORDSET'}->{'END3'} - $start) + 1;

                                # the coding sequence (ie the exon):
                                # $exon->{'COORDSET'}->{'END5'} should be the
                                # same as $c->{'COORDSET'}->{'END5'}, right?
                                # the exon should be the same as the coding sequence..
				push @cds, {
					"start" => $cstart,
					"end"   => $cend,
					"date"  => $c->{'DATE'},
					"locus" => $c->{'FEAT_NAME'},
				};

                                push @CDS, {
                                          "start" => $c_real_start,
                                          "end"   => $c_real_end,
                                          "date"  => $c->{DATE},
                                          "locus" => $c->{FEAT_NAME},
                                }

			}

			if(defined($exon->{'UTRS'})) {
				my $u = $exon->{'UTRS'};

				while( defined @{$u->{'LEFT_UTR'}} and 0 < @{$u->{'LEFT_UTR'}}) {
					my $lutr = shift @{$u->{'LEFT_UTR'}};
					my $us = $strand * ($lutr->{'END5'} - $start) + 1;
					my $ue = $strand * ($lutr->{'END3'} - $start) + 1;

                                        # add the utr sequence feature to the object 
                                        # so that genbank.pm can pull it out and
                                        # place it in the FEATURE section.
					$seq->add_SeqFeature(new Bio::SeqFeature::Generic(
						-primary => '3\'UTR',
						-start   => $us,
						-end     => $ue,
						-tag     => {
							locus => $model->{'PUB_LOCUS'} || $model->{'FEAT_NAME'}
						}
					));
			}

				while( defined @{$u->{'RIGHT_UTR'}} and 0 < @{$u->{'RIGHT_UTR'}}) {
					my $rutr = shift @{$u->{'RIGHT_UTR'}};
					my $us = $strand * ($rutr->{'END5'} - $start) + 1;
					my $ue = $strand * ($rutr->{'END3'} - $start) + 1;

                                        # add the utr sequence feature to the object
                                        # so that genbank.pm can pull it out and place
                                        # it in the FEATURE section.
					$seq->add_SeqFeature(new Bio::SeqFeature::Generic(

                                                # value of primary is the actual string that is shown.
                                                # according to http://www.ncbi.nlm.nih.gov/projects/collab/FT/index.html#7.3
                                                # utrs names should be 5' UTR, 3'UTR.
                                                # So a "RIGHT_UTR" is a 5' UTR (see UTR section in DTD file)
						-primary => '5\'UTR',
						-start   => $us,
						-end     => $ue,
						-tag => {
							locus => $model->{'PUB_LOCUS'} || $model->{'FEAT_NAME'}
						}
					));
				}

				while( defined @{$u->{'EXTENDED_UTR'}} and 0 < @{$u->{'EXTENDED_UTR'}}) {
					my $eutr = shift @{$u->{'EXTENDED_UTR'}};
					my $us = $strand * ($eutr->{'END5'} - $start) + 1;
					my $ue = $strand * ($eutr->{'END3'} - $start) + 1;

                                        # EXTENDED_UTR is not one of the FEATURE types
                                        # that genbank allows....
                                        # Should this even be added?
					$seq->add_SeqFeature(new Bio::SeqFeature::Generic(
						-primary => 'EXTENDED_UTR',
						-start   => $us,
						-end     => $ue,
						-tag => {
							locus => $model->{'PUB_LOCUS'} || $model->{'FEAT_NAME'}
						}
					));
				}
			}
		}

                # GENBANK ALERT!
                # this location object will store the location of the EXON, which
                # is located in the FEATURE section.
                # ie: join(1..199,283..366,480..531,667..823,926..1110)
		my $loc = new Bio::Location::Split();
                # print scalar @exons , "\n"; print "exons: @exons\n"; exit;
		foreach my $e (@exons) {
			$loc->add_sub_Location(new Bio::Location::Simple(
					-start => $e->{'start'},
                                        # -start => "simon_rocks",
					-end   => $e->{'end'}
			));
		}

                  
                # GENBANK ALERT!
                # actually add the EXON header to the FEATURE section and specify
                # the locus as well (which is the <PUB_LOCUS></PUB_LOCUS> 
		my $efeat = new Bio::SeqFeature::Generic(
			-primary      => 'EXON',
			-location     => $loc,
			-tag => {
				locus => $model->{'PUB_LOCUS'} || $model->{'FEAT_NAME'}
			}
		);
                # add this feature to the object so that genbank.pm can pull it out
                # and enter it into a genbank file.
		$seq->add_SeqFeature($efeat);


                # GENBANK ALERT!
                # Here we add the coding sequence to the FEATURES section.
		if(scalar(@CDS) > 0) {
                        # add the coordinates for the CDS. 
                        # join(50..199,283..366,480..531,667..823,926..947)
			$loc = new Bio::Location::Split();
			foreach my $c (@CDS) {
                                my ($start, $end) = ($c->{'start'},$c->{'end'});
                                # print "start: $start, end: $end\n";
                                # first time through, start is 50, end is 199
                                # yet neither of them is in the xml file...????
                                # print "start: $start , end: $end\n"; exit;

                                # Add the join() part for the CDS.
                                if ($strand == 1){
				    $loc->add_sub_Location(new Bio::Location::Simple(
			        		    -start => $c->{'start'},
						    -end   => $c->{'end'}
				    ));
                                }
                              
			} 



                        # GENBANK ALERT!  add the CDS to the FEATURE section and
                        # specify the locus.
			my $cfeat = new Bio::SeqFeature::Generic(
				-primary     => 'CDS',
				-location    => $loc,
				-tag => {
                                        locus => $model->{'PUB_LOCUS'} ||
                                                 $model->{'FEAT_NAME'},
                                        # simon_rocks => 1,

                                        # typo on Josh's part:
					# locus => $model->{'PUB_LOCU'} || $model->{'FEAT_NAME'}
				}
			);

                        # this is the translation for the CDS sequence....
                        # by definition, this CDS sequence should have no stop codons
                        # within it!
			my $trans;

                        # Now we have the sequence coordinates of the CDS regions.
                        # Let's get the protein sequence... 
                        # print Data::Dumper->Dump([$loc]); exit;




                        my $assembly_sequence = $self->{ASSEMBLY}->{ASSEMBLY_SEQUENCE};
                        die "No assembly seq!" if !$assembly_sequence;

                         # Watson (+) Vs. Crick (-):
                         my $CDS;
                         if ($strand == 1){ # watson strand

                            # END5 < END3
                            for my $cds (@CDS){
                                my ($start, $end) = ($cds->{start},$cds->{end});
                                my $length = $end - $start + 1; die "neg" if $length < 0;
                                my $cds_sequence = substr($assembly_sequence, --$start, $length);
                                $CDS .= $cds_sequence;
                                print "($start, $end, $strand): $cds_sequence\n";
                                # my $seq_obj = new Bio::Seq(-seq => $cds_sequence);
                                # print $seq_obj->translate->seq() , "\n"; exit;
                            }

                         } elsif ($strand == -1){ # crick strand

                             # END5 > END3
                             for my $cds (@CDS){
                                 my ($start, $end) = ($cds->{start}, $cds->{end});
                                 my $length = $start - $end + 1; die "neg" if $length < 0;
                                 my $cds_sequence = substr($assembly_sequence, --$end, $length);
                                 $cds_sequence = reverse($cds_sequence);
                                 $cds_sequence =~ tr/AGCTagct/TCGAtcga/;
                                 $CDS .= $cds_sequence;
                                 print "($start, $end, $strand): $cds_sequence\n";
                             }

                         } else {

                             # should never happen since $strand is defined within this sub.  But just in case...
                             die "Unknown strand: $strand";

                         }
                         # print "CDS: $CDS\n";

			eval {
				$trans = new Bio::PrimarySeq(
					-id => $seq->primary_id(),
 
                                         # using the CDS coordinates in $loc,
                                         # extract a portion of $seq->seq.
					 #-seq => $seq->subseq($loc, $strand)
                                         -seq => $CDS
				);

# The construtor above defines the sequence to be translated.  -seq is given the value
# of $seq->subseq($loc,$strand), which takes a portion of the assembly (specified by
# $loc.  $strand will complement the sequence if it has a value of -1).
#
# This returns a PrimarySeq object that has been translated:
# $trans->translate(undef, undef,undef,undef,1,0);
# This translates the PrimarySeq and then prints the protein sequence:
# $trans->translate(undef,undef,undef,undef,1,0)->seq();

#if ($trans->translate(undef,undef,undef,undef,1,0)->seq =~ /\*/){
#   print "id contains a stop codon in its sequence: $id\n";
#   print $trans->translate(undef,undef,undef,undef,1,0)->seq , "\n"; exit;
#}


			        $cfeat->add_tag_value('translation', $trans->translate(undef, undef, undef, undef, 1, 0)->seq

# The above is what Josh had by default.  The 1 specifies that the sequence passed
# in is a full Coding sequence (CDS).  But the sequence being passed in is an 
# ASSEMBLY....
# Below, I changed the 1 to a 0 (that is, sequence passed in is not a CDS):
# $trans->translate(undef, undef, undef, undef, 0,0)->seq
# By definition, a CDS in the FEATURES section of a genbank file cannot have a stop
# codon within it....
# Therefore, it is correct of him to pass in 1 for the FullCDS flag...
# Perhaps the coordinates are incorrect, thus pulling out the incorrect sequence?

				                     );


			}; # this closes eval.

			if($@) {
				$self->warn("Unable to translate protein. Probably a psuedo-protein.");
			} else {
				$seq->add_SeqFeature($cfeat);
			}
		}
	}

        # GENBANK ALERT!
        # KEYWORDS:	
	my $kw = $self->{'ASSEMBLY'}->{'HEADER'}->{'KEYWORDS'};
        ### @$kw = qw(Simon Rocks);
	$seq->keywords(join(' ', @$kw)) if defined(@$kw);
	$self->_add_species($seq);

        # GEBANK ALERT!
        # Annotation:	
	while(my $comment = shift @{$tu->{'GENE_INFO'}->{'COMMENT'}}) {
                # print "comment: $comment!\n"; exit;
		my $com = new Bio::Annotation::Comment('-text' => $comment);
		$seq->annotation()->add_Annotation('comment', $com);
	    }
	
	return $seq;
}
=head2 _add_species
Note	:Josh's code
=cut
sub _add_species
{
	my($self, $seq) = @_;
	my $o = $self->{'ASSEMBLY'}->{'HEADER'}->{'ORGANISM'};
	my $lineage = $self->{'ASSEMBLY'}->{'HEADER'}->{'LINEAGE'};
	my $species = new Bio::Species(-classification => $lineage);
	my ($genus, $spec, @sub) = split(/ /, $o);

	$species->genus($genus);
	$species->species($spec);
	$species->sub_species(join(' ', @sub));

	$seq->species($species);
}
=head2 _add_source
 Note	:Josh's code
=cut
sub _add_source
{
	my($self, $source) = @_;
	$source->add_tag_value("chromosome", $self->{ASSEMBLY}->{CHROMOSOME});
	$source->add_tag_value("clone", $self->{ASSEMBLY}->{HEADER}->{CLONE_NAME});
}

# ============================================================================================
=head2 _process

    Title    : _process
    Usage    : $self->_process()
    Function : start to parse the tigr xml data to seqIO objectget.
    Return   :  tigr's seqIO object.
    Note     : (1) Josh coded this method, and tested by chr01.xml and sample.xml.
    	       (2) Haidan document it.
    	       (3) Read throught first part of the tigr xml data
	       (4) Simon Chan modifed/commented this method.  The FIRST/START sub.
=cut
sub _process {

	my ($self) = @_;

	my $line; # the XML line.

	my $tu = undef;
	return if $self->{'eof'} == 1;

	# This do {} while loop will take care of the whole xml file:
	do {
             
		# get the first line:
		$line = $self->_readline();
		# print "line: $line\n";
		# next if !defined $line;
		# last if !defined $line;

		# read the first line of the xml data
		if($line =~ /<\?xml\s+version\s?=\s?"\d+\.\d+"\?>/o) {


			# do nothing


		# read the second line of the xml data
		} elsif ($line =~ /<!DOCTYPE (\w+) SYSTEM "[\w\.]+">/o) {

			# Basically check to see if the XML file is from TIGR.
			$self->throw("The DOCTYPE $1 is not TIGR!\n") if $1 ne "TIGR";


		# read the third line of the xml data
		# Pretty much all of the processing should occur within the below block of code:
		} elsif ($line =~ /<TIGR>/o) {

#			print "\tprocessing <TIGR>\n";
			$self->_process_tigr($line);
			# print "line at end of tigr call: $line\n;


		# read the fourth line of the xml data
		} elsif ($line =~ /<ASSEMBLY.*?>/o) { # handles multiple <ASSEMBLY> tags...

			print "Before _process_assembly call\n"; die;
			$self->_process_assembly($line);
			# print "this is the second assembly!\n"; # print Data::Dumper->Dump([$self]); exit;


		} elsif ($line =~ /<PSEUDOCHROMOSOME>/) { # handles mutiple <PSEUDOCHROMOSOME> tags...


			print "Before _process_pseudochromosome call\n"; die;
			$self->_process_pseudochromosome($line);



		# read the last line of xml data and end this loop:
		} elsif ($line =~ /<\/TIGR>/o) {

#			print "\tprocessing </TIGR>\n";
			$self->{'eof'} = 1;
			return;


		} else {

			# If the file is a properly formatted TIGR XML file, this should never occur:
			$self->throw("Unknown or Invalid process directive:",
				join('', ($line =~ /^\s*(<[^>]+>)/o)));
		}

		# Not needed:
		# $tu = $self->{'ASSEMBLY'}->{'GENE_LIST'}->{'PROTEIN_CODING'};


        } while(1); # There are xml files with multiple <ASSEMBLY> and/or <PSEUDOCHROMOSOME> tags...
		    # The "until" conditional below does not handle them...
		    # The only way to exit this do {} while loop is when the </TIGR> tag is reached.

	#} until((defined($tu->{'TU'}) and @{$tu->{'TU'}} != 0)
	#		or !defined($line));

}
# ============================================================================================
=head2 _process_tigr
    Title    : _process_tigr
    Usage    : $self->_process_tigr()
    Function : Process all the subtags within <TIGR></TIGR>.
    Args     : Scalar holding value of the XML line (in this case, <TIGR>).
    Returns  : Nothing.
    Note     : (1) Josh coded this method, and tested by chr01.xml and sample.xml.
    	       (2) Haidan modify and document it.
    	       (3) TIGR is the root element for XML.  TIGR contains at least one ASSEMBLY element.
=cut
sub _process_tigr {

	my($self, $line) = @_;

	if($line !~ /<TIGR>/o) {
		$self->throw(error_message('<TIGR>', 'missing', $line));
	}


	$line = $self->_readline();
	while (1){

		if($line =~ /<PSEUDOCHROMOSOME>/) {

			# print "Parsing <PSEUDOCHROMOSOME> tag: $line\n";

			### $self->{'PSEUDOCHROMOSOME'} = $self->_process_pseudochromosome($line);
			my $pseudo;
			($pseudo, $line) = $self->_process_pseudochromosome($line);
			push @{$self->{'pseudochromosome'}}, $pseudo;

		} elsif ($line =~ /<ASSEMBLY.*?>/) {

			### $self->{'ASSEMBLY'} = $self->_process_assembly($line);                
			my $assembly;
			($assembly, $line) = $self->_process_assembly($line);
			push @{$self->{'assembly'}}, $assembly;
			# print "line at end of assembly: $line\n";
			# last if $line =~ /<\/TIGR>/;		

		}

		last if $line =~ /<\/TIGR>/;

	} # close while loop


	# Push back </TIGR> into the buffer so that it can be matched again within sub _process
	$self->_pushback($line);
        # print "Finished processing Assembly.....\n";

        # $line = $self->_readline();
        # while ($line !~ /<\/TIGR>/){
        # } # close while loop


}
# ============================================================================================
=head2 _process_pseudochromosome

    Title    : _process_pseudochromosome
    Usage    : $self->_process_pseudochromosome()
    Function : Process the data within the <PSEUDOCHROMOSOME></PSEUDOCHROMOSOME> tag.
    Ags      : Scalar holding value of the XML line (<PSEUDOCHROMOSOME>).
    Return   : $pseud data structure containing all the data and the next $line in the buffer.
    Note     : (1) Josh coded this method, and tested by chr01.xml and sample.xml.
    	       (2) Haidan modify and document it.
    	       (3) TIGR is the root element for XML.  TIGR contains at least one ASSEMBLY element.
	       (4) 

=cut
sub _process_pseudochromosome {

        # Sub tags for <PSEUDOCHROMOSOME>:
        # 1 <SCAFFOLD>
        # 1 <ASSEMBLY>

	my($self, $line) = @_;
	my $pseud;

	if ($line !~ /<PSEUDOCHROMOSOME>/o){
		$self->throw(error_message('<PSEUDOCHROMOSOME>','missing', $line));
	}


	$line = $self->_readline();
	if($line =~ /<SCAFFOLD>/o) {

		$pseud->{'SCAFFOLD'} = $self->_process_scaffold($line);# change
		# $self->{'SCAFFOLD'} = $self->_process_scaffold($line);
		$line = $self->_readline();

	} else {

		$self->throw(error_message('<SCAFFOLD>', 'missing', $line));
	}

	# print "line before assembly conditional: $line\n";
	if($line =~ /<ASSEMBLY.*>/) {

		my $assembly;
		($assembly, $line) = $self->_process_assembly($line);
		$pseud->{'ASSEMBLY'} = $assembly;
		# $self->{'ASSEMBLY'} = $self->_process_assembly($line);
		# push @{$self->{'assembly'}}, $self->_process_assembly($line);
		### $line = $self->_readline(); # don't need this. There's already a readline prior to the return of _process_assembly

	} else {

		$self->throw(error_message('<ASSEMBLY>', 'missing/invalid', $line));

	}
	# print "line: $line\n"; exit;

	# Check for the closing tag:
	if($line =~ /<\/PSEUDOCHROMOSOME>/) {
		$line = $self->_readline;
		return ($pseud, $line);
	} else {
		$self->throw(error_message('</PSEUDOCHROMOSOME>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_assembly

  Title    : _process_assembly
  Usage    : $self->_process_assembly()
  Function : Process the data within <ASSEMBLY></ASSEMBLY>.
  Args     : Scalar holding the value of the XML line (<ASSEMBLY>).
  Return   : Return the $assembly data structure and the next $line in the buffer.
  Note     : Josh's code

=cut
sub _process_assembly {

        # ASSEMBLY sub tags:
        # 1 ASMBL_ID,
        # 1 Coordset
        # 1 Header
        # 0 or 1 Tiling path
        # 1 Gene list
        # 0 or 1 Misc info
        # 0 or 1 repeat lst
        # 1 Assembly seq.

	my($self, $line) = @_;
	my $assembly;

	# print "line in start of _process_assembly: $line\n";
	# check the ASSEMBLY tag:
	if($line !~ /<ASSEMBLY([^>]*)>/) {
		$self->throw(error_message('<ASSEMBLY>', 'invalid', $line));
	}


	# parse the assembly's attributes:
	# CHROMOSOME attribute is #IMPLIED, the rest are #REQUIRED.
	$assembly = $self->get_attribs($1, $assembly);
	# my %attribs = ($1 =~ /(\w+)\s*=\s+"(.*?)"/g);
	# foreach my $key (keys(%attribs)) {
        #     # ASSEMBLY attribute list:
        #     # CLONE_ID
        #     # DATABASE
        #     # CHROMOSOME
        #     # CURRENT_DATE
        #     $assembly->{$key} = $attribs{$key};
	# }


	# parse the ASMBL_ID value and its attribute (only one attribute, which is IMPLIED.):
	$line = $self->_readline();
	my ($attr, $val);
	if ( ($attr, $val) = ($line =~ /<ASMBL_ID([^>]*)>([^<]*)<\/ASMBL_ID>/) ){

		$assembly = $self->get_attribs($1, $assembly);
		# %attribs = ($attr =~ /(\w+)\s*=\s+"(.*?)"/g);
		# foreach my $key (keys(%attribs)){
                #         # ASMBL_ID attribute list:
                #         # CLONE_NAME
		# 	$assembly->{$key} = $attribs{$key};
		# }
		$assembly->{'ASMBL_ID'} = $val;
		$line = $self->_readtag();
		#$line = $self->_readline();

	} elsif ($line =~ /<ASMBL_ID>([^<]*)<\/ASMBL_ID>/){
	
		$assembly->{ASMBL_ID} = $1;
		$line = $self->_readtag();

	} else {
	
		$self->throw(error_message('<ASMBL_ID>', 'missing', $line));
	}


        # Parse the COORDSET and its both ends:
	if($line =~ /<COORDSET>/o) {

	    $assembly->{'COORDSET'} = $self->_process_coordset($line);
	    $line = $self->_readline();

	} else {

		$self->throw(error_message('<COORDSET>', 'missing', $line));

	}


	# Parse the infomation from HEADER ELEMENTS.
	if($line =~ /<HEADER>/o) {

		$assembly->{'HEADER'} = $self->_process_header($line);
		$line = $self->_readline();

	} else {

		$self->throw(error_message('<HEADER>', 'missing', $line));

	}

	# Parse the information from TILING_PATH's elements if the TILING_PATH exists.
	if($line =~ /<TILING_PATH>/o) {

		$assembly->{'TILING_PATH'} = $self->_process_tiling_path($line);
		$line = $self->_readline();

	}


	# Parse the information from GENE_LIST's elements.
	if($line =~ /<GENE_LIST>/o) {

		$assembly->{'GENE_LIST'} = $self->_process_gene_list($line);
		$line = $self->_readline();

	} else {

		$self->throw(error_message('<GENE_LIST>', 'missing', $line));

	}


	# Parse the information from MISC_INFO's elements if it exists.
	if ($line =~ /<MISC_INFO>/o){

		$assembly->{'MISC_INFO'} = $self->_process_misc_info($line);
		$line = $self->_readline();

	}


	# Parse the information from REPEAT_LIST if it exists.
	if ($line =~ /<REPEAT_LIST>/o){

		$assembly->{'REPEAT_LIST'} = $self->_process_repeat_list($line);
		$line = $self->_readline();

	}

	# Parse the ASSEMBLY_SEQUENCE, It must exist in TIGRXMLDTD format.
	if ($line =~ /<ASSEMBLY_SEQUENCE>\s*$/o){

	    # This method is deprecated:
	    # $assembly->{'ASSEMBLY_SEQUENCE'}=$self->_process_assembly_seq($line);
	    $line = $self->_readline();
	    if ($line =~ /^(.+)<\/ASSEMBLY_SEQUENCE>/){

		$assembly->{'ASSEMBLY_SEQUENCE'}=$1;
		$line = $self->_readline();

	    } else {

	    	$self->throw(error_message('</ASSEMBLY_SEQUENCE>', 'missing', $line));

	    }

	} elsif ($line =~ /<ASSEMBLY_SEQUENCE>(.*?)<\/ASSEMBLY_SEQUENCE>/){

		$assembly->{'ASSEMBLY_SEQUENCE'} = $1;
		$line = $self->_readline;

	} else {

		$self->throw(error_message('<ASSEMBLY_SEQUENCE>', 'missing', $line));

	}

       
	# </ASSEMBLY>:
	if($line =~ /<\/ASSEMBLY>/o) {
		$line = $self->_readline;
		return ($assembly, $line);
	} else {
		$self->throw(error_message('</ASSEMBLY>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_assembly_seq

			METHOD IS DEPRECATED
  Title    : _process_assembly_seq
  Usage    : $self->_process_assembly_seq()
  Function : parse whole assembly's usful value in the TIGRXML file
  Return   : object hold whole usful infomation from TIGRXML file
  Args     : a string line which contains <ASSEMBLY CLOONE_ID ="***" ...>
  Note     : (1) Josh's code.
	     (2) Haidan removed this method.
=cut
# sub _process_assembly_seq{
#
#	my ($self, $line) = @_;
#
#	if ($line !~ /<ASSEMBLY_SEQUENCE>/o){
#		$self->throw("Bio::SeqIO::tigr::_process_assembly_seq called ".
#			     "with no <ASSEMBLY_SEQUENCE> in the stream");
#	}
#
#	$line = $self->_readline();
#	if($line =~ /^(.+)<\/ASSEMBLY_SEQUENCE>/o) {
#		return $1;
# 	}
# 
# 
# 	$self->throw("Reached end of _proces_assembly");
# }
=cut
# ============================================================================================
=head2 _process_coordset

  Title    : _process_coordset
  Usage    : $self->_process_coordset($line)
  Function : Parse the data in <COORDSET></COORDSET>.  
  Args     : Scalar ($line) with the <COORDSET><END5></END5><END3></END3></COORDSET> (see regexp below).
  Return   : 5' and 3' coordinates.
  Note     : (1) Josh's code.

=cut
sub _process_coordset {

    my ($self, $line) = @_;

    my $coord;

    if ($line =~ /<COORDSET>\s*<END5>\s*(\d+)\s*<\/END5>\s*<END3>\s*(\d+)\s*<\/END3>/s){

	($coord->{'END5'}, $coord->{'END3'}) = ($1,$2);

	if (!defined($coord->{'END5'}) or !defined($coord->{'END3'})) {
	    $self->throw("Invalid <COORDSET>");
	}

	return $coord;

    } else {

	$self->throw(error_message('<COORDSET>', 'missing/invalid', $line));
    }

}
# ============================================================================================
=head2 _process_header

  Title    : _process_header
  Usage    : $self->_process_header($line)
  Function : Parse the data within <HEADER>.
  Args     : Scalar ($line) holding the XML line (<HEADER>).
  Return   : $header data structure containing all the data.
  Note     : (1) Haidan modifys it, add authors to the object.

=cut
sub _process_header {

        # The header tag contains the following sub tags:
        # 1 clone name
        # 1 seq last touched
        # 1 gb accession
        # 1 organism
        # 1 lineage
        # 1 seq group
        # 0 or more keywords
        # 0 or more gb desc
        # 0 or more gb comment
        # 1 author list

	my ($self, $line) = @_;
	my $header;

	if($line !~ /<HEADER>/o) {
		$self->throw(error_message('<HEADER>', 'missing', $line));
	}

	$line = $self->_readtag();

	# <CLONE_NAME>:
        $header = $self->one_and_only_one('CLONE_NAME', \$line, $header, 'tag');
	# if($line =~ /<CLONE_NAME>([^>]+)<\/CLONE_NAME>/) {
	# 	$header->{'CLONE_NAME'} = $1;
	# 	$line = $self->_readtag();
	# } else {
        #	$self->throw("Required <CLONE_NAME> missing");
	# }

	# <SEQ_LAST_TOUCHED>:
	if($line =~ /<SEQ_LAST_TOUCHED>/o) {
		($header->{'SEQ_LAST_TOUCHED'}) =
			($line =~ /<DATE>([^<]+)<\/DATE>/o);
		$line = $self->_readtag();
	} else {
		$self->throw("Reqired <SEQ_LAST_TOUCHED> missing");
	}

	# <GB_ACCESSION>:
	$header = $self->one_and_only_one('GB_ACCESSION', \$line, $header, 'tag');
	# if($line =~ /<GB_ACCESSION>([^<]*)<\/GB_ACCESSION>/) {
	# 	$header->{'GB_ACCESSION'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <GB_ACCESSION> missing");
	# }

	# <ORGANISM>:
	$header = $self->one_and_only_one('ORGANISM', \$line, $header, 'tag');
	# if($line =~ /<ORGANISM>([^<]*)<\/ORGANISM>/) {
	# 	$header->{'ORGANISM'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <ORGANISM> missing");
	# }

	# <LINEAGE>:
	if ($line =~ /<LINEAGE>([^<]*)<\/LINEAGE>/) {
                # it appears that Josh wanted the species name
                # first.
		@{$header->{'LINEAGE'}}
			= reverse(split(/\s*;\s*/, $1));
		$line = $self->_readtag();
	} else {
		$self->throw("Required <LINEAGE> missing");
	}

	# print "line before: $line\n";
	$header = $self->one_and_only_one('SEQ_GROUP', \$line, $header, 'line'); # change from 'tag' to 'line'
	# if ($line =~ /<SEQ_GROUP>([^<]*)<\/SEQ_GROUP>/) {
	# 	$header->{'SEQ_GROUP'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <SEQ_GROUP> missing");
	# }
	# print "line after: $line\n"; exit;
	# print "line before keywords: $line\n";

	# <KEYWORDS>*
	while($line =~ /<KEYWORDS>([^<]+)<\/KEYWORDS>/) {
		# print "Found Keyword: $1\n";
		push(@{$header->{'KEYWORDS'}}, $1);
		$line = $self->_readtag();
	}

	# <GB_DESCRIPTION>*
	while($line =~ /<GB_DESCRIPTION>([^<]+)<\/GB_DESCRIPTION>/) {
		push(@{$header->{'GB_DESCRIPTION'}},$1);
		$line = $self->_readtag();
		# print "line in GB: $line\n";
	}

	# <GB_COMMENT>*
	while($line =~ /<GB_COMMENT>([^<]+)<\/GB_COMMENT>/) {
		push(@{$header->{'GB_COMMENT'}}, $1);
	#	$line = $self->_readtag();
		$line = $self->_readline;
		# print "line in comment: $line\n";
	}
	# print "line: $line\n"; exit;

	#print "line before: $line\n";
        # The CONTACT attribute for AUTHOR_LIST is #IMPLIED, thus optional.
	if ( my %h = ($line =~ /<AUTHOR_LIST(?:\s*(\w+)\s*=\s*"([^"]+)"\s*)*>/) ){
		# get the AUTHOR_LIST's attribute
		# print "storing contact: $h{CONTACT}\n";
		$header->{'AUTHOR_LIST'}=$h{'CONTACT'};
		$line = $self->_readline;
        } elsif ($line =~ /<AUTHOR_LIST>/){
		$line = $self->_readline;
        } else {
                $self->throw(error_message('<AUTHOR_LIST>', 'missing', $line));
        }

	if ($line =~ /<AUTHOR/){

		# The LNAME attribute is #REQUIRED, the rest are #IMPLIED
		#print "line to be extracted: $line\n";
	        $line =~ s/<AUTHOR_LIST.*?>//g; # print "line: $line\n";

		while ($line =~ /<AUTHOR/){

=head2
	        my @author_names = split('\n',$line);
	        for my $author (@author_names){

			print "author: $author\n";
	                if ($author !~ /<AUTHOR([^>]*)>/o) {
	                	$self->throw(error_message('<AUTHOR>', 'missing/invalid', $line));
	                }

	                my $author_obj;
	                my %attribs = ($1 =~ /(\w+)\s*=\s+"(.*?)"/og);
	                for my $key (keys %attribs){
				print "\t: $key , $attribs{$key}\n";
	 			$author_obj->{$key} = $attribs{$key};
	                	push (@{$header->{'AUTHOR'}}, $author_obj);
	                }

		} # close the for my $author

=cut
                        if ($line !~ /<AUTHOR([^>]*)>/){
                                $self->throw(error_message('<AUTHOR>', 'missing/invalid', $line));
                        }

                        my $author_obj;
                        my %attribs = ($1 =~ /(\w+)\s*=\s+"(.*?)"/og);
                        for my $key (keys %attribs){
                                #print "\t: $key , $attribs{$key}\n";
                                $author_obj->{$key} = $attribs{$key};
                                push (@{$header->{'AUTHOR'}}, $author_obj);
                        }

	        	$line = $self->_readline();

		} # close the while loop

	} # close the if ($line =~ /<AUTHOR/){

        if ($line =~ /<\/AUTHOR_LIST>/o){
		$line = $self->_readline;
	} else {
		$self->throw(error_message('</AUTHOR_LIST>', 'missing', $line));
	}


	# </HEADER>:
	if ($line =~ /<\/HEADER>/) {
		return $header;
	} else {
		$self->throw(error_message('</HEADER>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_tiling_path

    Title    : _process_tiling_path
    Usage    : $self->_process_tiling_path()
    Function : get TILING_PATH from  stream
    Args     : Scalar holding value of XML LINE (<TILING_PATH>)
    Return   : $tiling_path data structure holding the values.
    Note     : (1) TILING_PATH provides all of the information required to position the current ASSEMBLY in the 
                   context of it's neighboring ASSEMBLY(s)
               (2) Haidan code this method, and tested by chr01.xml and sample.xml.

=cut
sub _process_tiling_path {

    # Sub tags for the tiling_path tag:
    # 1 left_asmbl
    # 1 right_asmbl
    # 1 from_connect
    # 1 to_connect
    # 1 orientation
    # 1 from_overlap_size
    # 1 from_overhand_size
    # 1 to_overhang_size
    # 1 from_overlap_type
    # 1 to_overlap_type
    # 1 date.

    my ($self, $line) = @_;
    my $tiling_path;

    # my $line = $self->_readline();

    if($line !~ /<TILING_PATH>/o) {
	$self->throw(error_message('<TILING_PATH', 'missing', $line));
    }
    $line = $self->_readtag();

    # BUG!  LEFT/RIGHT_ASMBL both have CLONE_NAME as an attribute, so the code
    # below bashes the CLONE_NAME key. I've fixed by giving them slightly different keys.
    # Also, note that both CLONE_NAME's are #IMPLIED, thus are optional.
    my ($attr, $val);
    if ( ($attr, $val) = ($line =~ /<LEFT_ASMBL([^>]*)>([^<]*)<\/LEFT_ASMBL>/) ){

	my %attribs = ($attr =~ /(\w+)\s*=\s*"(.*?)"/g);
	foreach my $key (keys(%attribs)) {
            # print "in sub _process_tiling_path: $key\n";
	    $tiling_path->{"L".$key} =  $attribs{$key};
            # print "L$key\n"; exit;
            # Attributes for left_asmbl:
            # clone_name
	}
	$tiling_path->{'LEFT_ASMBL'} = $val;
	$line = $self->_readtag();

    } elsif ($line =~ /<LEFT_ASMBL>([^<]*)<\/LEFT_ASMBL>/){

	$tiling_path->{'LEFT_ASMBL'} = $1;
        $line = $self->_readtag();
        
    } else {
	$self->throw(error_message('<LEFT_ASMBL>', 'missing/invalid', $line));
    }


    my ($attr2, $val2);
    if ( ($attr2, $val2) = ($line =~ /<RIGHT_ASMBL([^>]*)>([^<]*)<\/RIGHT_ASMBL>/) ){
	my %attribs2 = ($attr2 =~ /(\w+)\s*=\s*"(.*?)"/o);
	foreach my $key2 (keys(%attribs2)) {
            # print "in sub _process_tiling_path: $key2\n";
	    $tiling_path->{"R".$key2} =  $attribs2{$key2};
            # Attributes for right_asmbl:
            # clone_name
	}
	$tiling_path->{'RIGHT_ASMBL'} = $val2;
	$line = $self->_readtag();

    } elsif ($line =~ /<RIGHT_ASMBL>([^<]*)<\/RIGHT_ASMBL>/){
        
	$tiling_path->{'RIGHT_ASMBL'} = $1;
        $line = $self->_readtag();

    } else {
	$self->throw(error_message('<RIGHT_ASMBL>', 'missing/invalid', $line));
    }	


    # <FROM_CONNECT>:
    $tiling_path = $self->one_and_only_one('FROM_CONNECT', \$line, $tiling_path,'tag');

    # <TO_CONNECT>:
    $tiling_path = $self->one_and_only_one('TO_CONNECT', \$line, $tiling_path, 'tag');

    # <ORIENTATION>:
    $tiling_path = $self->one_and_only_one('ORIENTATION', \$line, $tiling_path, 'tag');

    # <FROM_OVERLAP_SIZE>:
    $tiling_path = $self->one_and_only_one('FROM_OVERLAP_SIZE', \$line, $tiling_path, 'tag');

    # <FROM_OVERHANG_SIZE>:
    $tiling_path = $self->one_and_only_one('FROM_OVERHANG_SIZE', \$line, $tiling_path, 'tag');

    # <TO_OVERHANG_SIZE>:
    $tiling_path = $self->one_and_only_one('TO_OVERHANG_SIZE', \$line, $tiling_path, 'tag');

    # <FROM_OVERLAP_TYPE>:
    $tiling_path = $self->one_and_only_one('FROM_OVERLAP_TYPE', \$line, $tiling_path, 'tag');

    # <TO_OVERLAP_TYPE>:
    $tiling_path = $self->one_and_only_one('TO_OVERLAP_TYPE', \$line, $tiling_path, 'tag');

    # <DATE>:
    $tiling_path = $self->one_and_only_one('DATE', \$line, $tiling_path, 'tag');
 
    # </TILING_PATH>: 
    if($line =~ /<\/TILING_PATH>/o) {
	return $tiling_path;
    } else {
	$self->throw(error_message('</TILING_PATH>', 'missing', $line));
    }

}
# ============================================================================================
=head2 _process_gene_list

    Title    : _process_gene_list
    Usage    : $self->_process_gene_list()
    Function : Parse the data located in <GENE_LIST></GENE_LIST>.
    Args     : Scalar ($line) holding the XML line (<GENE_LIST>).
    Return   : $gene_list data structure holding the data.
    Note     : (1) GENE_LIST contains all gene features broken down into two parent nodes: the protein coding
		   genes and the RNA genes.
	       (2) Josh coded this method, and tested by chr01.xml and sample.xml.

=cut
sub _process_gene_list {

        # The subtags for <GENE_LIST>:
        # 1 set of <PROTEIN_CODING></PROTEIN_CODING>
        # 1 set of <RNA_GENES></RNA_GENES>
      
	my ($self, $line) = @_;
	my $gene_list;


	#$line = $self->_readline();
	if ($line !~ /<GENE_LIST>/o){
		$self->throw(error_message('<GENE_LIST>', 'missing', $line));
	}
	$line = $self->_readline();

	# <PROTEIN_CODING>:
	if ($line =~ /<PROTEIN_CODING>/o){

		$gene_list->{'PROTEIN_CODING'} = $self->_process_protein_coding($line);
		$line = $self->_readline();
	} else {
		$self->throw(error_message('<PROTEIN_CODING>', 'missing', $line));
	}

	# <RNA_GENES>:
	if ($line =~ /<RNA_GENES>/o){
		$gene_list->{'RNA_GENES'} = $self->_process_rna_genes($line);
		$line = $self->_readline();
	} else {
		$self->throw(error_message('<RNA_GENES>', 'missing', $line));
	}

	# </GENE_LIST>:
	if ($line =~ /<\/GENE_LIST>/o){
		return $gene_list;
	} else {
		$self->throw(error_message('</GENE_LIST>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_protein_coding

    Title    : _process_protein_coding
    Usage    : $self->_process_protein_coding()
    Function : Parse the data between the <TU></TU> tags.
    Args     : Scalar holding value of XML line (<TU>).
    Return   : $prot data structure.
    Note     : (1) PROTEIN_CODING genes are represented by at least four components: TU, MODEL, EXON, CDS.
	       (2) Josh code this method, and tested by chr01.xml and sample.xml.

=cut
sub _process_protein_coding
{
        # Sub tag for <PROTEIN_CODING>:
        # 0 or more <TU></TU>

	my ($self, $line) = @_;
	my $prot;

	if($line !~ /<PROTEIN_CODING>/o) {
		$self->throw(error_message('<PROTEIN_CODING>', 'missing', $line));
	}

	$line = $self->_readline();
	while($line =~ /<TU>/o) {
		# $self->_pushback($line);
		push(@{$prot->{'TU'}}, $self->_process_tu($line));
		$line = $self->_readline();
	}

	if ($line =~ /<\/PROTEIN_CODING>/o){
		return $prot;
	} else {
		$self->throw(error_message('</PROTEIN_CODING>', 'missing', $line));
	}
}
# ============================================================================================
=head2 _process_rna_genes

    Title    : _process_rna_genes
    Usage    : $self->_process_rna_genes()
    Function : Parse data between the <RNA_GENES></RNA_GENES> tags.
    Args     : Scalar ($line) holding the XML line (<RNA_GENES>).
    Return   : $rna_genes data structure holding the values.
    Note     : (1) RNA_GENES contains each of the non-protein coding genes that TIGR may provide annotation forlikes TU,
    	       (2) Haidan code this method, and tested by chr01.xml and sample.xml.

=cut
sub _process_rna_genes {

        # Sub tags for <RNA_GENES>:
        # 0 or more <PRE-TRNA>
        # 0 or more <SNRNA>
        # 0 or more <SNORNA>
        # 0 or more <RRNA>

	my ($self, $line) = @_;
	my $rna_genes;

	if ($line !~ /<RNA_GENES>/o){
		$self->throw(error_message('<RNA_GENES>', 'missing', $line));
	}

	$line = $self->_readline();
	while($line =~ /<PRE-TRNA>/o) {
		push(@{$rna_genes->{'PRE-TRNA'}}, $self->_process_pre_trna($line));
		$line = $self->_readline();
	}	

	while($line =~ /<SNRNA>/o) {
		### $self->_pushback($line); Simon: Comment this out.
		push @{$rna_genes->{'SNRNA'}}, $self->_process_rna2('SNRNA', $line);
		$line = $self->_readline();
	}	

	while($line =~ /<SNORNA>/o) {
		### $self->_pushback($line); Simon:  Comment this out.
		push @{$rna_genes->{'SNORNA'}}, $self->_process_rna2('SNORNA', $line);
		$line = $self->_readline();
	}
	# print "line after <SNORNA>: $line\n"; exit;
	# At this point, $line should either be <RRNA> or </RNA_GENES>

	while($line =~ /<RRNA>/o) {
		### $self->_pushback($line); Simon: Comment this out.
		push @{$rna_genes->{'RRNA'}}, $self->_process_rna2('RRNA', $line);
		$line = $self->_readline();
	}

	if($line =~ /<\/RNA_GENES>/o) {
		return $rna_genes;
	} else {
		$self->throw(error_message('</RNA_GENES>', 'missing', $line));	
	}
	
}
# ============================================================================================
=head2 _process_pre_trna

    Title    : _process_pre_trna
    Usage    : $self->_process_pre_trna()
    Function : Parse the data between <PRE-TRNA></PRE-TRNA> tags.
    Args     : Scalar ($line) holding the XML line (<PRE-TRNA>).
    Return   : $pre_trna data structure holding the values.
    Note     : (1) PRE-TRNA like TU,
    	       (2) Haidan code this method, and tested by F10A5.xml and sample.xml, not in chr01.xml.

=cut
sub _process_pre_trna {

        # Sub tags for <PRE-TRNA>:
        # 0 or 1 <PUB_LOCUS>
        # 1 <FEAT_NAME>
        # 1 <DATE>
        # 1 <COORDSET>
        # 1 <TRNA>


    	my ($self, $line) = @_;
	my $pre_trna;
	if ($line !~ /<PRE-TRNA>/o){
		$self->throw(error_message('<PRE-TRNA>', 'missing', $line));
	}
	$line = $self->_readtag();

	# <PUB_LOCUS>?
	$pre_trna = $self->zero_or_one('PUB_LOCUS', \$line, $pre_trna, 'tag');
	# if ($line =~ /<PUB_LOCUS>([\w\.]+)<\/PUB_LOCUS>/o){
	# 	$pre_trna->{'PUB_LOCUS'} = $1;
	# 	$line = $self->_readtag();
	# } 

	# <FEAT_NAME>:
	$pre_trna = $self->one_and_only_one('FEAT_NAME', \$line, $pre_trna, 'line');

	# <DATE>:
	$pre_trna = $self->one_and_only_one('DATE', \$line, $pre_trna, 'tag');

	# <COORDSET>:
	if($line =~ /<COORDSET>/o) {
		$pre_trna->{'COORDSET'} = $self->_process_coordset($line);
		$line = $self->_readline();
	} else {
		$self->throw("Invalid Coordset In Process Pre-TRNA");
	}	

	# <TRNA>:
	if($line =~ /<TRNA.*>/o) {
		$pre_trna->{'TRNA'} = $self->_process_trna($line);
		$line = $self->_readline();
	} else {
		$self->throw("Invalid Trna");
	}

	# </PRE-TRNA>:
	if($line =~ /<\/PRE-TRNA>/o) {
		return $pre_trna;
	} else {
		$self->throw(error_message('</PRE-TNRA>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_trna

    Title    : _process_trna
    Usage    : $self->_process_trna()
    Function : Process the data between the <TRNA></TRNA> tags.
    Args     : Scalar holding the XML line (<TRNA>).
    Return   : $trna data structure holding the values.
    Note     : (1) TRNA genes are represented by multiple components.  The structure is analogous to that
   		   provided for protein coding genes (see PROTEIN_CODING).  The major difference is the lack
    		   of a CDS, since no protein is encoded by tRNA genes.
    	       (2) Haidan code this method, and tested by F01A5.xml and sample.xml, not in chr01.xml .

=cut
sub _process_trna {

        # Sub tags for <TRNA>:
        # 1 <FEAT_NAME>
        # 1 <DATE>
        # 1 <COORDSET>
        # 1 <COM_NAME>
        # 1 or more <RNA-EXON>

	my($self, $line) = @_;
	my $trna;
	if($line !~ /<TRNA ([^>]+)>/o) {
		$self->throw(error_message('<TRNA>', 'invalid', $line));
	}

	# Attribute for <TRNA>: ANTICODON (it's REQUIRED).
	$trna = $self->get_attribs($1, $trna);
	# my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/g);
	# $trna->{'ANTICODON'} = $attribs{'ANTICODON'};

	$line = $self->_readline();

	# <FEAT_NAME>:
	$trna = $self->one_and_only_one('FEAT_NAME', \$line, $trna, 'tag');	
	# if($line =~ /<FEAT_NAME>([^>]+)<\/FEAT_NAME>/) {
	# 	$trna->{'FEAT_NAME'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Invalid Feat_Name In Process Trna");
	# }

	
	# <DATE>:
	$trna = $self->one_and_only_one('DATE', \$line, $trna, 'tag');

	# <COORDSET>:
	$trna = $self->check_coordset_tag(\$line, $trna, 'line');
	# if ($line =~ /<COORDSET>/o){
	# 	$trna->{'COORDSET'} = $self->_process_coordset($line);
	# 	$line = $self->_readline();
	# } else {
	# 	$self->throw(error_message('COORDSET', 'missing/invalid', $line));
	# }


	# <COM_NAME>:
	$trna = $self->one_and_only_one('COM_NAME', \$line, $trna, 'line');

	# <RNA-EXON>+
	if($line =~ /<RNA-EXON[^>]*>/o) {

		do {
			push(@{$trna->{'RNA-EXON'}}, $self->_process_rna_exon($line));
			$line = $self->_readline();

		} while ($line =~ /<RNA-EXON[^>]*>/);

	} else {
		$self->throw(error_message('<RNA-EXON>', 'missing', $line));
	}


	# </TRNA>:
	if($line =~ /<\/TRNA>/o) {
		return $trna;
	} else {
		$self->throw(error_message('</TRNA>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_rna_exon

    Title    : _process_rna_exon
    Usage    : $self->_process_rna_exon()
    Function : Parses data between <RNA-EXON></RNA-EXON> tags.
    Args     : Scalar holding XML line (<RNA-EXON>).
    Return   : $rna_exon data structure containing the values.
    Note     : (1) Haidan code this method, and tested by F10A5.xml and sample.xml, not chr01.xml.

=cut
sub _process_rna_exon {

    # Sub tags for <RNA-EXON>:
    # 1 <FEAT_NAME>
    # 1 <DATE>
    # 1 <COORDSET>

    my($self, $line) = @_;

    my $rna_exon;
    if($line !~ /<RNA-EXON>/o) {
	$self->throw(error_message('<RNA-EXON>', 'missing', $line));
    }    
    $line = $self->_readtag();
    

    # <FEAT_NAME>:
    $rna_exon = $self->one_and_only_one('FEAT_NAME', \$line, $rna_exon, 'tag');

    # <DATE>:
    $rna_exon = $self->one_and_only_one('DATE', \$line, $rna_exon, 'tag');


    # <COORDSET>:
    $rna_exon = $self->check_coordset_tag(\$line, $rna_exon, 'line');
    # if ($line =~ /<COORDSET>/o){
    #	$rna_exon->{'COORDSET'} = $self->_process_coordset($line);
    #	$line = $self->_readline();
    # } else {
    #	$self->throw(error_message('<COORDSET>', 'missing/invalid', $line));
    # }	


    # </RNA-EXON>:
    if ($line =~ /<\/RNA-EXON>/o){	
	return $rna_exon;
    } else {
	$self->throw(error_message('</RNA-EXON>', 'missing', $line));
    }

}
# ============================================================================================
=head2 one_and_only_one
                                                                                                                                             
    Title    : one_and_only_one
    Usage    : $self->one_and_only_one()
    Function : Parses data between tags that exist once and only once within the current root.
	       ie In the DTD, you see this: <!ELEMENT RNA-EXON (FEAT_NAME, DATE, COORDSET)>
	       You can use this method to extract out the data between <FEAT_NAME> and <DATE> because they exist only once within a 
	       <RNA-EXON> tag (use sub check_coordset_tag for <COORDSET>).
    Args     : Scalar $tag_name (So, 'FEAT_NAME' in the above example),
	       Scalar ref ($line) of the line containing the XML line,
	       Scalar ($data_structure) to hold the values parsed,
	       Scalar ($read) to hold the value of either 'read' or 'tag' to determine which subroutine (_readline or _readtag, 
	       respectively) to call.
    Return   : $data_structure holding the values.
    Note     :
                                                                                                                                             
=cut
sub one_and_only_one {

	my ($self, $tag_name, $line, $data_structure, $read, $flag) = @_;
	# $$line =~ s/\s*//g;
	# print "tag_name: $tag_name, line: $$line\n" if $tag_name eq "DATE";
	# print "tag_name: $tag_name\n";
	if ($$line =~ /<$tag_name\s*([^>]*)>([^>]+)<\/$tag_name>/   ||
	    $$line =~ /<$tag_name\s*([^>]*)>([\w\.]+)<\/$tag_name>/
	){ 
									# Do not put the 'o' regexp modifer here since $tag_name will vary.
		print "Undefined value for <$tag_name></$tag_name>\n" if !defined $2;

                if (defined $1 && defined $flag){
                        $data_structure = $self->get_attribs($1, $data_structure);
                        # push @{$data_structure->{$tag_name}}, $attribute_list;
                }

		$data_structure->{$tag_name} = $2;
		$self->get_next_line($line, $read);

	} elsif ($$line =~ /<$tag_name\s*([^>]*)><\/$tag_name>/){

		if (defined $1 && defined $flag){
			$data_structure = $self->get_attribs($1, $data_structure);
		}
		$data_structure->{$tag_name} = 'null';
		$self->get_next_line($line, $read);
		

	} else {
		$self->throw(error_message("<$tag_name>", 'missing', $$line));
	}
	return $data_structure;

}
# ============================================================================================
sub one_or_more {

	my ($self, $tag_name, $line, $data_structure, $read, $flag) = @_;
        if ($$line =~ /<$tag_name\s*([^>]*)>([^>]+)<\/$tag_name>/ ||
            $$line =~ /<$tag_name\s*([^>]*)>([\w\.]+)<\/$tag_name>/ )
        {

		print "Sub one_or_more: undefined value for <$tag_name>!\n" if !defined $2;
		push @{$data_structure->{$tag_name}}, $2;
		if (defined $1 && defined $flag){
			# print "attribute: $1\n"; exit;
                        $data_structure= $self->get_attribs($1, $data_structure);
                        # push @{$data_structure->{$tag_name}}, $attribute_list;
		}


		# Now you know that there is at least 1, so now go get more of them...
		$data_structure = $self->zero_or_more($tag_name, $line, $data_structure, $read, $flag);


	} else {
		$self->throw(error_message("<$tag_name>", 'missing/invalid', $$line));
	}	


}
# ============================================================================================
=head2 zero_or_more
                                                                                                                                             
    Title    : zero_or_more
    Usage    : $self->zero_or_more()
    Function : Parses data between tags that may occur zero or many times.
               ie In the DTD, you see this: <!ELEMENT SCAFFOLD (SCAFFOLD_COMPONENT*) >
               You can use this method to extract out the data between <SCAFFOLD_COMPONENT>, if it exists.
    Args     : Scalar $tag_name (So, 'SCAFFOLD_COMPONENT' in the above example),
               Scalar ref ($line) of the line containing the XML line,
               Scalar ($data_structure) to hold the values parsed,
               Scalar ($read) to hold the value of either 'read' or 'tag' to determine which subroutine (_readline or _readtag,
               respectively) to call.
	       Scalar ($flag)
    Return   : $data_structure holding the values.
    Note     :
                                                                                                                                             
=cut
sub zero_or_more {

	my ($self, $tag_name, $line, $data_structure, $read, $flag) = @_;
	while ($$line =~ /<$tag_name\s*(.*?)>([^>]+)<\/$tag_name>/ ||
	       $$line =~ /<$tag_name\s*(.*?)>([\w\.]+)<\/$tag_name>/
              ){

                print "Undefined value for <$tag_name>!\n" if !defined $2;

		push @{$data_structure->{$tag_name}}, $2;

	        # $1 is the data, if any, between the $tag_name and the closing ">".
		if (defined $1 && defined $flag){
			$data_structure= $self->get_attribs($1, $data_structure);
			# push @{$data_structure->{$tag_name}}, $attribute_list;
		}
		get_next_line($self, $line, $read);
	}

	return $data_structure;

}
# ============================================================================================
=head2 zero_or_one
                                                                                                                                             
    Title    : zero_or_one
    Usage    : $self->zero_or_one()
    Function : Parses data between tags that may occur once or no times at all.
               ie In the DTD, you see this: <!ELEMENT PRE-TRNA (PUB_LOCUS?, ....)>
               You can use this method to extract out the data between <PUB_LOCUS>, if it exists.
    Args     : Scalar $tag_name (So, 'FEAT_NAME' in the above example),
               Scalar ref ($line) of the line containing the XML line,
               Scalar ($data_structure) to hold the values parsed,
               Scalar ($read) to hold the value of either 'read' or 'tag' to determine which subroutine (_readline or _readtag,
               respectively) to call.
    Return   : $data_structure holding the values.
    Note     :
                                                                                                                                             
=cut
sub zero_or_one {

	my ($self, $tag_name, $line, $data_structure, $read, $flag) = @_;
	if ($$line =~ /<$tag_name>$/){
		my $string;
		while (1){
			$$line = $self->_readline if $read eq 'line';
			$$line = $self->_readtag if $read eq 'tag';
			$string .= $$line;
			last if $$line =~ /<\/$tag_name>/;
		}
		$string =~ s/<\/$tag_name>//g;
		$data_structure->{$tag_name} = $string;
		$$line = $self->_readline if $read eq 'line';
		$$line = $self->_readtag if $read eq 'tag';

	} elsif ($$line =~ /<$tag_name\s*(.*?)>([^>]+)<\/$tag_name>/ ||
	         $$line =~ /<$tag_name\s*(.*?)>([\w\.]+)<\/$tag_name>/ ||
		 $$line =~ /<$tag_name\s*(.*?)>(.*)<\/$tag_name>/
	){

                print "Sub zero_or_one: undefined value for <$tag_name>!\n" if !defined $2;
		
                if (defined $1 && defined $flag){
                        $data_structure= $self->get_attribs($1, $data_structure);
                        # push @{$data_structure->{$tag_name}}, $attribute_list;
                }

		$data_structure->{$tag_name} = $2;
		$self->get_next_line($line, $read);

	} elsif ($$line =~ /<$tag_name\s*(.*?)>/){

		if ($tag_name =~ /SEQUENCE|SEQ/){

			my $sequence;
			while ($$line !~ /<\/$tag_name>/){
				$sequence .= $$line;
				$$line = $self->_readline;
			}
			$$line = $self->_readline; # This will be the line after </*SEQUENCE|SEQ>.
			$self->throw("Error.  <$tag_name></$tag_name> appears to be empty.\n") if !defined $sequence;
			$data_structure->{$tag_name} = $sequence;

		} else {
			print "line: $$line\n";
			die; # not sure what to do if this is the case...
		}

	} # else { print "didn't match! $tag_name\n"; print "line: $$line\n"; exit if $tag_name eq "CDS_SEQUENCE"; }

	# print "line: $line\n"; exit;
	return $data_structure;

}
# ============================================================================================
=head2

    Title    : get_next_line
    Usage    : $self->get_next_line()
    Function : Obtains the next line in the buffer.
    Args     : Scalar ref to hold the next line.
               Scalar ($read) 'line' or 'tag' (so the method knows to run _readline or _readtag, respetively).
    Return   : Nothing.
    Note     :
                                                                                                                                             
=cut
sub get_next_line {

	my ($self, $line, $read) = @_;

        if ($read eq "line"){
	        $$line = $self->_readline;
        } elsif ($read eq "tag"){
                $$line = $self->_readtag;
        } else {
                $self->throw("Error. Do not recognize this read value: $read\n");
        }

}
# ============================================================================================
=head2

    Title    : check_coordset_tag
    Usage    : check_coordset_tag()
    Function : Parse the data between the <COORDSET></COORDSET> tags (<END5></END5> , <END3></END3>).
    Args     : Scalar ref ($line) holding the XML line, 
	       Scalar ($data_structure) that will hold the parsed values, 
	       Scalar ($read) 'line' or 'tag' (so the method knows to run _readline or _readtag, respetively).
    Return   : $rna data structure holding the values.
    Note     : This method was added to avoid the redundant code of checking for coordinates within the <COORDSET></COORDSET> tags.

=cut
sub check_coordset_tag {

	my ($self, $line, $data_structure, $read) = @_;

	if($$line =~ /<COORDSET>/o) {
        	$data_structure->{'COORDSET'} = $self->_process_coordset($$line);
		if ($read eq "line"){
			$$line = $self->_readline;
		} elsif ($read eq "tag"){
			$$line = $self->_readtag;
		} else {
			$self->throw("Error.  Do not recongize this read value: $read\n");
		}
	} else {
		$self->throw(error_message('<COORDSET>', 'missing', $$line));
	}
	# print "line in check_coorset_tag: $$line\n"; exit;
	return $data_structure;
                                                                                                              
}
# ============================================================================================
=head2

    Title    : _process_rna2
    Usage    : $self->_process_rna2()
    Function : Parse the data within <SNRNA> or <SNORNA> or <RRNA>.
    Args     : Scalar specifying the RNA type (SNRNA, SNORNA, RRNA) and scalar holding the XML line.
    Return   : $rna data structure holding the values.
    Note     : (1) RRNA encompasses ribosomal RNA genes.
               (2) SNRNA encompasses small nuclear RNA genes.
               (3) SNORNA encompasses small nucleolar RNA genes.
               (4) This method replaces _process_rna.

=cut
sub _process_rna2 {

	my ($self, $rna_type, $line) = @_;


	# Data structure to hold the values.
	my $rna;

	# check to see if <$rna_type> tag exists:
	unless ($line =~ /<$rna_type/){
		$self->throw(error_message("<$rna_type>", 'missing', $line));
	}
	
	# get the next line:
	$line = $self->_readline;
	
	# PUB_LOCUS?
	$rna = $self->zero_or_one('PUB_LOCUS', \$line, $rna, 'line');

	# FEAT_NAME
	# print "line before one_and_only_one: $line\n";	
	$rna = $self->one_and_only_one('FEAT_NAME', \$line, $rna, 'line');

	# DATE
	$rna = $self->one_and_only_one('DATE', \$line, $rna, 'tag'); # 

	# COORDSET
	# print "coordset line: $line\n";
	$rna = $self->check_coordset_tag(\$line, $rna, 'line');	
	
	# COM_NAME
	$rna = $self->one_and_only_one('COM_NAME', \$line, $rna, 'line');
	
	# print "line: $line\n"; 
	# print Data::Dumper->Dump([$rna]);
	# exit;

	# All Done.  Now close up the <$rna_type> tag:
	if ($line =~ /<\/$rna_type>/){
		return $rna;
	} else {
		$self->throw(error_message("</$rna_type>", 'missing', $line));
	}


}
# ============================================================================================
=head2 _process_rna


		METHOD IS DEPRECATED!  Use _process_rna2 instead.
    Title    : _process_rna
    Usage    : $self->_process_rna()
    Function : get SNRNA or SNORNA or RRNA from stream
    Args     : 
    Return   :  SNRNA or SNORNA or RRNA
    Note     : (1) RRNA encompasses ribosomal RNA genes.
    	       (2) SNRNA encompasses small nuclear RNA genes.
	       (3) SNORNA encompasses small nucleolar RNA genes.
	       (4) it will paser the contains for SNRNA or SNORNA or RRNA
               (2) Haidan code this method, and no tested.

=cut
# sub _process_rna {
#     # This sub handles the tags: <SNRNA>, <SNORNA>, <RRNA>
#     # The sub tags are:
#     # 0 or 1 <PUB_LOCUS>
#     # 1 <FEAT_NAME>
#     # 1 <DATE>
#     # 1 <COORDSET>
#     # 1 <COM_NAME>
# 
#     # this sub calls _process_rna_help, which is the sub that
#     # does the actual work...
# 
#     my($self,$type, $line) = @_;
#     # my $line = $self->_readline();
#     my $rrna;
# 
#     if($line !~ /<$type *>/) {
#	$self->throw("Subroutine _process_rna called when no <$type > tag input!  XML Line: $line\n");
#     }
# 
# 
#     # print "line in _process_rna: $line\n"; exit;
#     $rrna = $self->_process_rna_help($type, $line);
#     $line = $self->_readline(); # print "line: $line\n"; exit;
# 
#     return $rrna;
# 
# }
# ============================================================================================
=head2 _process_rna_help

    Title    : _process_rna_help
    Usage    : $self->_process_rna_help()
    Function : get SNRNA or SNORNA or RRNA from stream
    Return   :  SNRNA or SNORNA or RRNA
    Note     : (1) RRNA encompasses ribosomal RNA genes.
    	       (2) SNRNA encompasses small nuclear RNA genes.
	       (3) SNORNA encompasses small nucleolar RNA genes.
	       (4) In this help method, it will paser the contains for SNRNA or SNORNA or RRNA
               (2) Haidan code this method, and no tested.

=cut
sub _process_rna_help {

    my($self, $rna_type, $line) = @_;

    ### my $line = $self->_readline();
    my $rna;

    ### $line = $self->_readtag(); I'm going to comment this out.

    # <PUB_LOCUS>:
    $rna = $self->one_and_only_one('PUB_LOCUS', \$line, $rna, 'tag');
    #if ($line =~ /<PUB_LOCUS>([\w\.]+)<\/PUB_LOCUS>/o) {
    # 
    # 	$rna->{'PUB_LOCUS'} = $1;
    #	$line = $self->_readtag();
    #	print "PUB_LOCUS: $line\n";
    #}


    # <FEAT_NAME>:
    $rna = $self->one_and_only_one('FEAT_NAME', \$line, $rna, 'line');
    # if($line =~ /<FEAT_NAME>([^>]+)<\/FEAT_NAME>/o) {
    # 	$rna->{'FEAT_NAME'} = $1;
    # 	$line = $self->_readline();
    # } else {
    #	$self->throw(error_message('<FEAT_NAME>', 'invalid', $line));
    #}


    # <DATE>:
    $rna = $self->one_and_only_one('DATE', \$line, $rna, 'tag');
    # if ($line =~ /<DATE>([^>]+)<\/DATE>/o) {
    #	$rna->{'DATE'} = $1;
    #	$line = $self->_readtag(); # This _readtag is correct.  The subroutine _process_coordset requires that the $line contain
    #				   # everything between <COORDSET></COORDSET>
    #	# print "line in DATE: $line\n"; exit;
    #} else {
    #	$self->throw("Invalid date In Process RNA Help");
    #}

    
    # <COORDSET>:
    $rna = $self->check_coordset_tag(\$line, $rna, 'line');
    # if($line =~ /<COORDSET>/o) {
    # 	$rna->{'COORDSET'} = $self->_process_coordset($line);
    # 	$line = $self->_readline();
    # } else {
    # 	$self->throw("Invalid Coordset In Process RNA Help");
    # }


    # <COM_NAME>:
    $rna = $self->one_and_only_one('COM_NAME', \$line, $rna, 'line');
    # if($line =~ /<COM_NAME>([^>]+)<\/COM_NAME>/o) {
    # 	### $self->_pushback($line); Simon: I'm going to comment this out.
    # 	# What's up with this _pushback?  
    # 	$rna->{'COM_NAME'} = $1;
    # 	$line = $self->_readline();
    # 	# print "line: $line\n"; exit;
    # } else {
    # 	$self->throw("Invalid COM_NAME In Process RNA Help");
    # }


    # Simon's addition:
    # Closing tag.
    if ($line =~ /<\/$rna_type>/){
	# print "returning!: $line\n"; exit;
	return $rna;
    } else {
	my $tag_name = "</$rna_type>";
	$self->throw(error_message($tag_name,'missing',$line));
    }

}
# ============================================================================================
=head2

    Title    : error_message
    Usage    : error_message()
    Function : Create an error message to throw.
    Args     : Scalar: Name of tag, Scalar: 'missing' or 'invalid' or 'missing/invalid', Scalar: the xml line.
    Return   : String (error_message).
    Note     : This sub was coded up to 'generalize' the error messages.

=cut
sub error_message {

    my ($tag_name, $adj, $xml_line) = @_;
    return "Error.  $tag_name is $adj in the XML line: $xml_line\n";

}
# ============================================================================================
=head2
                                                                                                                                             
    Title    : get_attribs
    Usage    : $self->get_attribs()
    Function : Extract the attributes for a given element.
    Args     : Scalar ($attribute_line) holding the string between the element name and the closing ">" =>  <ELEMENT_NAME(.*?)>
    Return   : Hash ref.
    Note     :
                                                                                                                                             
=cut
sub get_attribs {

	my ($self, $attribute_line, $data_structure) = @_;
 	my %attribs = ($attribute_line =~ /(\w+)\s*=\s*"([^"]*)"/g);

	my $attribute_list;
	for my $key (keys %attribs){
		# print "key: $key , value: $attribs{$key}\n"; exit;
		$data_structure->{$key} = $attribs{$key};
	}
	
	return $data_structure;

}
# ============================================================================================
=head2 _process_misc_info

    Title    : _process_misc_info
    Usage    : $self->_process_misc_info()
    Function : Parse the data between the <MISC_INFO></MISC_INFO> tags.
    Args     : Scalar ($line) holding the value of the XML line (<MISC_INFO>).
    Return   : $misc data structure containing the values.
    Note     : (1) MISC_INFO is the component in which we can store any comments regarding the ASSEMBLY.  The FEATURE_DESC element
                   contains the feature description text, and a COORDSET element identifies the position the comment is 
		   referring to.MISC_FEATURE contains REPEAT elements
      	       (2) Haidan code this method, and tested by sample.xml and F10A5.xml, not in chr01.xml

=cut
sub _process_misc_info {

        # Sub tags for <MISC_INFO>:
        # 1 or more <MISC_FEATURE>

	my ($self, $line) = @_;
	### my $line = $self->_readline();
	my $misc;

	if($line =~ /<MISC_INFO>/o) {

	    $line = $self->_readline();

	    do{
		push(@{$misc->{'MISC_FEATURE'}}, $self->_process_misc_feature($line));
		$line = $self->_readline();

	    } while ($line =~ /<MISC_FEATURE>/o);

	}

        # Simon's addition:
        return $misc;

}
# ============================================================================================
=head2 _process_misc_feature

    Title    : _process_misc_feature
    Usage    : $self->_process_misc_feature()
    Function : Parse the data between the <MISC_FEATURE></MISC_FEATURE> tags.
    Args     : Scalar ($line) varaible holding the XML line (<MISC_FEATURE>).
    Return   : $misc_feature data structure holding the values.
    Note     : (1) MISC_INFO is the component in which we can store any comments regarding the ASSEMBLY.  The FEATURE_DESC element
		   contains the feature description text, and a COORDSET element identifies the position the comment is referring 
		   to.MISC_FEATURE contains REPEAT element
 	       (2) Haidan code this method, and tested by sample.xml

=cut
sub _process_misc_feature {

        # Sub tags for <MISC_FEATURE>:
        # 1 <COORDSET>
        # 1 <DATE>
        # 1 <FEATURE_DESC>

	my($self,$line) = @_;
	my $misc_feature;

	if($line !~ /<MISC_FEATURE>/o) {
		$self->throw(error_message('MISC_FEATURE', 'missing', $line));
	}
	$line = $self->_readtag();


	# COORDSET
	$misc_feature = $self->check_coordset_tag(\$line, $misc_feature, 'line');
	#if($line =~ /<COORDSET>/o) {
	#	### $self->_pushback($line);
	#	$misc_feature->{'COORDSET'} = $self->_process_coordset($line);
	#	$line = $self->_readline();
	#} else {
	#	$self->throw("Required <COORDSET> missing in Process Misc Feature");
	#}


	# DATE
	$misc_feature = $self->one_and_only_one('DATE', \$line, $misc_feature, 'tag');
	#if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
	#	$misc_feature->{'DATE'} = $1;
	#	$line = $self->_readtag();
	#} else {
	#	$self->throw(error_message('DATE', 'missing',$line));
	#}

	
	# FEATURE_DESC
	$misc_feature = $self->one_and_only_one('FEATURE_DESC', \$line, $misc_feature, 'tag');
	#if($line =~ /<FEATURE_DESC>([^<]+)<\/FEATURE_DESC>/o) {
	#	$misc_feature->{'FEATURE_DESC'} = $1;
	#	$line = $self->_readtag();
	#} else {
	#	$self->throw("Required <FEATURE_DESC> missing");
	#}


	# print Data::Dumper->Dump([$misc_feature]); exit;
	if($line =~ /<\/MISC_FEATURE>/o) {
		return $misc_feature;
	} else {
		$self->throw(error_message('MISC_FEATURE', 'missing', $line));
	}


}
# ============================================================================================
=head2 _process_repeat_list

    Title    : _process_repeat_list
    Usage    : $self->_process_repeat_list()
    Function : Parse the data between the <REPEAT_LIST></REPEAT_LIST>
    Args     : Scalar holding the value of the XML line (<REPEAT_LIST>)
    Return   : REPEAT LIST's value
    Note     : (1) REPEAT_LIST contains REPEAT elements
      	       (2) Haidan code this method, and tested by F01A5.xml, not in chr01.xml and sample.xml

=cut
sub _process_repeat_list {

        # Sub tags for <REPEAT_LIST>:
        # 0 or more <REPEAT>

	my ($self, $line) = @_;
#	my $line = $self->_readline();
	my $repeat_list;

	# <REPEAT_LIST>:
	if($line =~ /<REPEAT_LIST>/o) {
	    $line = $self->_readline();

	    while($line =~ /<REPEAT>/o){
		push(@{$repeat_list->{'REPEAT'}}, $self->_process_repeat($line));
		$line = $self->_readline();
	    } 
	
	}


        # Simon's Addition:
        return $repeat_list;


}
# ============================================================================================
=head2 _process_repeat

    Title    : _process_repeat
    Usage    : $self->_process_repeat()
    Function : Parse the data between the <REPEAT_LIST></REPEAT_LIST> tags.
    Args     : Scalar variable holding the value of the XML line (<REPEAT>).
    Return   : $repeat data structure holding the values of the parsed data.
    Note     : (1) A repeat is a repetitive nucleotide sequence.
      	       (2) Haidan code this method, and tested by F01A5.xml, not in chr01.xml and sample.xml

=cut
sub _process_repeat {

        # Sub tags for <REPEAT>:
        # 1 <FEAT_NAME>
        # 1 <DATE>
        # 1 <COORDSET>
        # 1 <REPEAT_TYPE>

	my($self, $line) = @_;
	my $repeat;
	if($line !~ /<REPEAT>/o) {
		$self->throw(error_message('REPEAT', 'missing', $line));
	}
	$line = $self->_readline();

	# <FEAT_NAME>:
	$repeat = $self->one_and_only_one('FEAT_NAME', \$line, $repeat, 'line');
	# if($line =~ /<FEAT_NAME>([^<]+)<\/FEAT_NAME>/o) {
	# 	$repeat->{'FEAT_NAME'} = $1;
	#      	$line = $self->_readline();
	# } else {
	# 	$self->throw("Required <FEAT_NAME> missing In Process Repeat");
	# }

	
	# <DATE>:
	$repeat = $self->one_and_only_one('DATE', \$line, $repeat, 'tag');
	# if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
	# 	$repeat->{'DATE'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <DATE> missing in Process Repeat");
	# }


	# <COORDSET>:
	$repeat = $self->check_coordset_tag(\$line, $repeat, 'line');
	# if($line =~ /<COORDSET>/o) {
	# 	$repeat->{'COORDSET'} = $self->_process_coordset($line);
	# 	$line = $self->_readline();
	# } else {
	# 	$self->throw("Required <COORDSET> missing in Process Repeat");
	# }


	# <REPEAT_TYPE>:
	$repeat = $self->one_and_only_one('REPEAT_TYPE', \$line, $repeat, 'tag');
	# if($line =~ /<REPEAT_TYPE>([^<]+)<\/REPEAT_TYPE>/o) {
	# 	$repeat->{'REPEAT_TYPE'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <REPEAT_TYPE> missing in Process Repeat");
	# }
	

	# </REPEAT>:
	if($line =~ /<\/REPEAT>/o) {
		return $repeat;
	} else {
		$self->throw(error_message('</REPEAT>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_scaffold

    Title    : _process_scaffold
    Usage    : $self->_process_scaffold()
    Function : Parse the data between the <SCAFFOLD></SCAFFOLD> tags.
    Args     : Scalar value holding the value of the XML line (<SCAFFOLD>).
    Return   : SCAFFOLD's value
    Note     : (1) SCAFFOLD is composed of SCAFFOLD_COMPONENT, and it represents the entire pseudo-chromosome nucleotide sequence
	       (2) Haidan code this method, and tested by chr01.xml &sample.xml

=cut
sub _process_scaffold {

        # Sub tags for <SCAFFOLD>:
        # 0 or more <SCAFFOLD_COMPONENT>

	my ($self, $line) = @_;
	my $scaffold;
	if ($line !~ /<SCAFFOLD>/o) {
		$self->throw(error_message('<SCAFFOLD>', 'missing', $line));
	}     
	$line = $self->_readline();

	# <SCAFFOLD_COMPONENT>*
	while ($line =~ /<SCAFFOLD_COMPONENT>/o){
		push(@{$scaffold->{'SCAFFOLD_COMPONET'}}, $self->_process_scaffold_component($line));
		$line = $self->_readline();
	}

	# </SCAFFOLD>
	if ($line =~ /<\/SCAFFOLD>/o){
                return $scaffold;
        } else {
	        $self->throw(error_message('</SCAFFOLD>', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_scaffold_component

    Title    : _process_scaffold_component
    Usage    : $self->_process_scaffold_component()
    Function : Parse the data between the <SCAFFOLD_COMPONENT></SCAFFOLD_COMPONENT> tags.
    Args     : Scalar ($line) holding the value of the XML line (<SCAFFOLD_COMPONENT>).
    Return   : $scaffold_component data structure holding the values.
    Note     : (1) SCAFFOLD_COMPONET indicates the portion of a given nucleotide assembly (ie. BAC) from
                   which a segment of the pseudochromosome was constructed.
	       (2) Haidan code this method, and tested by chr01.xml, not in sample.xml and F10A5.xml

=cut
sub _process_scaffold_component {
  
    # Sub tags for <SCAFFOLD_COMPONENT>:
    # 1 <ASMBL_ID>
    # 1 <CHR_LEFT_COORD>
    # 1 <CHR_RIGHT_COORD>
    # 1 <ASMBL_LEFT_COORD>
    # 1 <ASMBL_RIGHT_COORD>
    # 1 <ORIENTATION>
    # 1 <DATE>

    my ($self, $line) = @_;
    my $scaffold_component;
  
    if ($line !~ /<SCAFFOLD_COMPONENT>/o){
		$self->throw(error_message('<SCAFFOLD_COMPONENT>', 'missing', $line));
    }     
    $line = $self->_readtag();

    my ($attr, $val);
    
    if ( ($attr, $val) = ($line =~ /<ASMBL_ID([^>]*)>([^<]*)<\/ASMBL_ID>/o)) {
	$scaffold_component = $self->get_attribs($attr, $scaffold_component);
	$scaffold_component->{'ASMBL_ID'} = $val;
	$line = $self->_readtag();
    } else {
	$self->throw("Bio::SeqIO::tigr::_Process_scaffold_component called ",
		     "but required <ASMBL_ID> missing");
    }


    if($line =~ /<CHR_LEFT_COORD>([^>]+)<\/CHR_LEFT_COORD>/o) {
	$scaffold_component->{'CHR_LEFT_COORD'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <CHR_LEFT_COORD> missing");
    }    
   
    if($line =~ /<CHR_RIGHT_COORD>([^>]+)<\/CHR_RIGHT_COORD>/o) {
	$scaffold_component->{'CHR_RIGHT_COORD'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <CHR_RIGHT_COORD> missing");
    }    
   
    if($line =~ /<ASMBL_LEFT_COORD>([^>]+)<\/ASMBL_LEFT_COORD>/o) {
	$scaffold_component->{'ASMBL_LEFT_COORD'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <ASMBL_LEFT_COORD> missing");
    }    
   
    if($line =~ /<ASMBL_RIGHT_COORD>([^>]+)<\/ASMBL_RIGHT_COORD>/o) {
	$scaffold_component->{'ASMBL_RIGHT_COORD'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <ASMBL_RIGHT_COORD> missing");
    }    
   
    if($line =~ /<ORIENTATION>([^>]+)<\/ORIENTATION>/o) {
	$scaffold_component->{'ORIENTATION'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <ORIENTATION> missing");
    } 
    if($line =~ /<DATE>([^>]*)<\/DATE>/o) {    
	$scaffold_component->{'DATE'} = $1;
	$line = $self->_readtag();
    } else {
	$self->throw("Required <DATE> missing");
    }
   
    if($line =~ /<\/SCAFFOLD_COMPONENT>/o ) {
	return $scaffold_component;
    }else{
	$self->throw("Bio::SeqIO::tigr::_Process_scaffold_component called ",
		     "but required </SCAFFOLD_COMPONENT> missing");
    }
}
# ============================================================================================
=head2 _process_tu

    Title    : _process_tu
    Usage    : $self->_process_tu()
    Function : Parse the data between <TU></TU> tags.
    Args     : Scalar ($line) holding the value of the XML line (<TU>).
    Return   : $tu data structure holding the values.
    Note     : (1) TU represents the transcriptional unit and is the highest order component of the gene
               (2) Haidan add some on this method, and tested by chr01.xml &sample.xml
=cut
sub _process_tu {

    # Sub tags for <TU>:
    # 1 <FEAT_NAME></FEAT_NAME>
    # 0 or more <GENE_SYNONYM></GENE_SYNONYM>
    # 0 or more <CHROMO_LINK></CHROMO_LINK>
    # 1 <DATE></DATE>
    # 1 <GENE_INFO></GENE_INFO>
    # 1 <COORDSET></COORDSET>
    # 1 or more <MODEL></MODEL>
    # 0 or 1 <TRANSCRIPT_SEQUENCE></TRANSCRIPT_SEQUENCE>
    # 0 or 1 <GENE_EVIDENCE></GENE_EVIDENCE>
    # 0 or more <URL></URL>

    my($self, $line) = @_;
    my $tu;
    
    if($line !~ /<TU>/o) {
	$self->throw(error_message('<TU>', 'missing', $line));
    }
    $line = $self->_readtag();

    # <FEAT_NAME>:
    $tu = $self->one_and_only_one('FEAT_NAME', \$line, $tu, 'tag');
    # if ($line =~ /<FEAT_NAME>([\w\.]+)<\/FEAT_NAME>/o) {
    # 	$tu->{'FEAT_NAME'} = $1;
    # 	$line = $self->_readtag();
    # } else {
    # 	$self->throw("Invalid Feat_Name");
    # }
    
    # <GENE_SYNONYM>*
    while ($line =~ /<GENE_SYNONYM>([^<]+)<\/GENE_SYNONYM>/){
	push(@{$tu->{'GENE_SYNONYM'}}, $1);
	$line = $self->_readtag();
    }
    
    # <CHROMO_LINK>:
    while ($line =~ /<CHROMO_LINK>([\w\.]+)<\/CHROMO_LINK>/){
	push @{$tu->{'CHROMO_LINK'}}, $1;
	$line = $self->_readtag();
    }
    
    
    # <DATE>:
    $tu = $self->one_and_only_one('DATE', \$line, $tu, 'line');
    # if ($line =~ /<DATE>([^>]+)<\/DATE>/o) {
    # 	$tu->{'DATE'} = $1;
    # 		$line = $self->_readline();
    # } else {
    # 	$self->throw("Process tu invalid date");
    # }
    

    # <GENE_INFO>:
    if ($line =~ /<GENE_INFO>/o){
	$tu->{'GENE_INFO'} = $self->_process_gene_info($line);
	$line = $self->_readtag();
    } else {
	$self->throw("Invalid Gene_Info");
    }
    

    # <COORDSET>:
    $tu = $self->check_coordset_tag(\$line, $tu, 'line');
    # if($line =~ /<COORDSET>/o) {
    # 	$tu->{'COORDSET'} = $self->_process_coordset($line);
    # 	$line = $self->_readline();
    # } else {
    # 	$self->throw("Invalid Coordset");
    # }
    

    # <MODEL>:
    if ($line =~ /<MODEL[^>]*>/){

	do {
	    push(@{$tu->{'MODEL'}},$self->_process_model($line));
	    $line = $self->_readline();
	} while ($line =~ /<MODEL[^>]*>/);

	# here read and put back for the resean to read tag to follow the do loop part.
	$self->_pushback($line);

	$line = $self->_readtag(); # change to readline
	# $line = $self->_readline;
	# print "line in _process_tu: $line\n"; exit;

    } else {
	$self->throw(error_message('<MODEL>', 'missing/invalid', $line));
    }

    # <TRANSCRIPT_SEQUENCE>+
    if ($line =~ /<TRANSCRIPT_SEQUENCE>([^>]*)<\/TRANSCRIPT_SEQUENCE>/){
	$tu->{'TRANSCRIPT_SEQUENCE'} = $1;
	$line = $self->_readline();
    }

    # <GENE_EVIDENCE>+
    if ($line =~ /<GENE_EVIDENCE>/o){
	$tu->{'GENE_EVIDENCE'} = $self->_process_gene_evidence('GENE_EVIDENCE',$line);
	$line = $self->_readtag();
    }
    
    # This element may exist zero or more.
    # haidan add
    # Modified by Simon.  I noticed that the URL has an attribute
    # of URLNAME.  Haidan seems to just ignore it....
    # NOT TESTED YET b/c none of the text xml files have a url.
    while ($line =~ /<URL URLNAME = "(.*?)">(.*)<\/URL>/){
	# push(@{$tu->{'URL'}}, $1);
        my %url_info = ();
        $url_info{'URL_NAME'} = $1;
        $url_info{'URL_LINK'} = $2;
	$line = $self->_readline();
        push (@{$tu->{'URL'}}, \%url_info);	
    }
# print "line here: $line\n"; exit;	
    if ($line =~ /<\/TU>/){
	return $tu;
    } else {
	$self->throw(error_message('</TU>', 'missing', $line));
    }
	
}
# ============================================================================================
=head2 _process_gene_evidence

    Title    : _process_gene_evidence
    Usage    : $self->_process_gene_evidence()
    Function : Parses data between the <MODEL_EVIDENCE></MODEL_EVIDENCE> and the <GENE_EVIDENCE></GENE_EVIDENCE> tags.
    Args     : Scalar ($x_evidence) that holds the value of either 'MODEL_EVIDENCE' or 'GENE_EVIDENCE',
	       Scalar ($line) that holds the XML line.
    Return   : $gene_evidence data structure that holds the value.
    Note     : (1) GENE_EVIDENCE provides all annotation data that may support the gene structure for the TU
               (2) Haidan code this method, and not tested

=cut
sub _process_gene_evidence {

    # Sub tags for <MODEL_EVIDENCE>:
    # 1 <EVIDENCE_TYPE>
    # This sub also handles the tag <GENE_EVIDENCE>.
   
    my ($self, $x_evidence,$line) = @_;
    my $gene_evidence;

    if($line !~ /<$x_evidence>/o) {
	$self->throw(error_message("<$x_evidence>", 'missing/invalid', $line));
    }
    $line = $self->_readline();


    # <EVIDENCE_TYPE>:
    if ($line =~ /<EVIDENCE_TYPE>/o) {
	### $self->_pushback($line); Simon: I'm going to comment this one out b/c I want the _process_evidence_type subroutine to 
	#			            handle the next lines.
	$gene_evidence->{'EVIDENCE_TYPE'} = $self->_process_evidence_type($line);
	$line = $self->_readline();
    } else {
	$self->throw(error_message('<EVIDENCE_TYPE>', 'missing', $line));
    }


    # Closing tag:
    if($line =~ /<\/$x_evidence>/o) {
	return $gene_evidence;
    } else {
	$self->throw(error_message("</$x_evidence>", 'missing/invalid', $line));
    }

}
# ============================================================================================
=head2 _process_evidence_type

    Title    : _process_evidence_type
    Usage    : $self->_process_evidence_type()
    Function : Parse the data between the <EVIDENCE_TYPE></EVIDENCE_TYPE> tags.
    Args     : Scalar ($line) holding the XML line.
    Return   : $evidence_type data structure which holds the values.
    Note     : (1) Haidan code this method, and not tested

=cut
sub _process_evidence_type {

    # Sub tags for <EVIDENCE_TYPE>:
    # 0 or more <SEQUENCE_DB_MATCH>
    # 0 or more <COMPUT_PREDICTION> 
    my ($self, $line) = @_;
    my $evidence_type;

    $line = $self->_readline();

    # <SEQUENCE_DB_MATCH>*
    while($line =~ /<SEQUENCE_DB_MATCH>/o) {
	### $self->_pushback($line); Simon: I'm going to comment this out.
	$line = $self->_readline();	# I added this.
	push(@{$evidence_type->{'SEQUENCE_DB_MATCH'}}, $self->_process_sequence_db_match('SEQUENCE_DB_MATCH', $line));
	$line = $self->_readline();
	# print "line in _process_evidence_type, first while loop: $line\n";
    }


    # <COMPUT_PREDICTION>*
    while($line =~ /<COMPUT_PREDICTION>/o) {
	$self->_pushback($line);
	push(@{$evidence_type->{'COMPUT_PREDICTION'}}, $self->_process_sequence_db_match('COMPUT_PREDICTION'));
	$line = $self->_readline();
    }

    # </EVIDENCE_TYPE>:
    if ($line =~ /<\/EVIDENCE_TYPE>/){
	return $evidence_type;
    } else {
    	$self->throw(error_message('</EVIDENCE_TYPE>', 'missing', $line));
    }

}
# ============================================================================================
=head2 _process_sequence_db_match

    Title    : _process_sequence_db_match
    Usage    : $self->_process_sequence_db_match($line)
    Function : get SEQUENCE_DB_MATCH or COMPUT_PREDICTION from stream
    Args     : Scalar ($SEQUENCE_DB_MATCH) which will either have the value of 'SEQUENCE_DB_MATCH' or 'COMPUT_PREDICTION'
    Return   : $seq_db_match data structure which holds the values.
    Note     : (1)Haidan code this method, and not tested

=cut
sub _process_sequence_db_match {

    # This sub processes both SEQUENCE_DB_MATCH and
    # COMPUT_PREDICTION tags.  I (Simon) wouldn't have done it this way.
    # Instead, I would have sepereated them into their own
    # methods to keep within the format of the code...
    # However, no big deal... 
    # see sub _process_search_db

    my($self, $SEQUENCE_DB_MATCH, $line) = @_;

    # no $line pass from call methoc
    # my $line = $self->_readline();
    # my $line;

    my $seq_db_match;
    my $SEARCH_DB;

    if($SEQUENCE_DB_MATCH =~ /SEQUENCE_DB_MATCH/){
    	# get pattern for Search_db element
	$SEARCH_DB = "SEARCH_DB";
    }elsif($SEQUENCE_DB_MATCH =~ /COMPUT_PREDICTION/) {
    	# get pattern for Prediction_set element
	$SEARCH_DB = "PREDICTION_SET";
    }else{
    	# passed error throw execption
	$self->throw("1.  Process_Sequence_db_match called when no $SEQUENCE_DB_MATCH tag: $line");
    }

    # check passed input
    #if($line !~ /<$SEQUENCE_DB_MATCH>/o) {
    #	$self->throw("2.  Process_Sequence_db_match called when no <$SEQUENCE_DB_MATCH> tag: $line");
    #}
    #$line = $self->_readline();


    while($line =~ /<$SEARCH_DB/) { # SEARCH_DB
	# print "\n\n=========\n\n";
	# print "line in while loop: $line\n";
	push(@{$seq_db_match->{$SEARCH_DB}}, $self->_process_search_db($SEARCH_DB,$line));
	### $line = $self->_readtag();
	$line = $self->_readline();
    }

    # print Data::Dumper->Dump([$seq_db_match]); exit;

    if($line =~ /<\/$SEQUENCE_DB_MATCH>/) {
	return $seq_db_match;
    } else {
	$self->throw(error_message("</$SEQUENCE_DB_MATCH>", 'missing/invalid', $line)); # SEQUENCE_DB_MATCH
    }

}
# ============================================================================================
=head2 _process_search_db

    Title    : _process_search_db
    Usage    : $self->_process_search_db()
    Function : Parse data between <SEARCH_DB></SEARCH_DB> or <PREDICTION_SET></PREDICTION_SET> tags.
    Args     : Scalar ($search_db) holding the value of either 'SEARCH_DB' or 'PREDICTION_SET',
               Scalar ($line) holding the XML line.
    Return   : $s_db data structure holding the values.
    Note     : Haidan code this method, and no tested on it.

=cut
sub _process_search_db {
    # see _process_sequence_db_match for comments on this sub.
    # Sub tags for <SEARCH_DB> or <PREDICTION_SET>:
    # 0 or more <SEQ_ELEMENT>

    my($self, $search_db, $line) = @_;
    my $s_db;

    if($line !~ /<$search_db([^>]*)>/) {
	# note the SEARCH_DB maybe the SEARCH_DB or PREDICTION_SET
	$self->throw(error_message("<$search_db>", 'missing/invalid', $line));
    }


    # my %attribs = ($1 =~ /(\w+)\s*=\s+"(.*?)"/g);
    $s_db = $self->get_attribs($1, $s_db);
    $line = $self->_readline();


    # <SEQ_ELEMENT>*
    while ($line =~ /<SEQ_ELEMENT/o){
	push(@{$s_db->{'SEQ_ELEMENT'}}, $self->_process_seq_element($line));
	$line = $self->_readline(); # should this be a readtag or a readline?.  try readline
	# print "line in SEQ_ELEMENT: $line\n";
    }


    if($line =~ /<\/$search_db>/) {
    	return $s_db;
    } else {
	$self->throw(error_message("</$search_db>", 'missing', $line));
    }

}
# ============================================================================================
=head2 _process_seq_element

    Title    : _process_seq_element
    Usage    : $self->_process_seq_element()
    Function : Parse the data between <SEQ_ELEMENT></SEQ_ELEMENT> tags.
    Args     : Scalar ($line) holding the XML line (<SEQ_ELEMENT>).
    Return   : $seq_element data structure holding the values.
    Note : (1) SEQ_ELENMENT represent features that provide evidence for the existing annotation
               and can include gene predictions, splice site predictions or databas mathces.
           (2) Haidan code this method, and no tested on it.

=cut
sub _process_seq_element {

    # Sub tags for <SEQ_ELEMENT>:
    # 0 or 1 <ASMBL_COORDS>
    # 0 or 1 <MATCH_COORDS>
    # 0 or 1 <RELATIVE_COORDS>
    
    my($self, $line) = @_;
    my $seq_element;
   

    # FEAT_TYPE is a #REQUIRED attribute, whereas all the rest are #IMPLIED 
    if($line !~ /<SEQ_ELEMENT([^>]*)>/o) {
	$self->throw(error_message('<SEQ_ELEMENT>', 'missing/invalid', $line));
    }	


    # get the 8 attributes for the seq_element
    # some attribute may exist different format
    $seq_element = $self->get_attribs($1, $seq_element);
=head2
    my %attribs = ($1 =~ /(\w+)\s*=\s*"(.*?)"/og);
    # get 8 attributes for seq_element
    foreach my $key (keys(%attribs)) {
        # Attributes for <SEQ_ELEMENT>:
        # 1.  FEAT_TYPE
        # 2.  METHOD
        # 3.  ACCESSION
        # 4.  DESCRIPTION
        # 5.  PER_ID
        # 6.  SCORE
        # 7.  E_VALUE
        # 8.  ELEMENT_NUM
	$seq_element->{$key} =  $attribs{$key};
	# print "attributes: " , $seq_element->{$key}, "\n";
    }
=cut

    # print "line: $line\n"; exit;
    $line = $self->_readline(); # print "line: $line\n";


    # <ASMBL_COORDS>:
    if($line =~ /<ASMBL_COORDS>/o) {
       # print "ASMBL_COORDS: $line\n";
       $seq_element->{'ASMBL_COORDS'} = $self->_process_ext_utr($line);
       $line = $self->_readline();
    } 


    # <MATCH_COORDS>:
    if($line =~ /<MATCH_COORDS>/o) {
	# print "MATCH_COORDS: $line\n";
	$seq_element->{'MATCH_COORDS'} = $self->_process_ext_utr($line);
	$line = $self->_readline();
    }

    # <RELATIVE_COORDS>:
    if($line =~ /<RELATIVE_COORDS>/o) {
	# print "RELATIVE_COORDS: $line\n";
	$seq_element->{'RELATIVE_COORDS'} = $self->_process_ext_utr($line);
	$line = $self->_readline();
    }

    if ($line =~ /<\/SEQ_ELEMENT>/o){
    	return $seq_element;
    } else {
        $self->throw(error_message('</SEQ_ELEMENT>', 'missing', $line));
    }  

}
# ============================================================================================
=head2 _process_gene_info

    Title    : _process_gene_info
    Usage    : $self->_process_gene_info()
    Function : Parse the data between <GENE_INFO></GENE_INFO> tags.
    Args     : Scalar ($line) holding the XML line (<GENE_INFO>).
    Return   : $geneinfo data structure that holds the values of the parsed data.
    Note     : (1) GENE_INFO contains the gene name, locus, and functional category role assignment information
               (2) tested by chr01.xml &sample.xml

=cut
sub _process_gene_info {
        # Sub tags for <GENE_INFO>:
        # 1 <LOCUS>
        # 0 or 1 <ALT_LOCUS>
        # 0 or 1 <PUB_LOCUS>
        # 1 <COM_NAME>
        # 0 or 1 <COMMENT>
        # 0 or 1 <PUB_COMMENT>
        # 0 or 1 <EC_NUM>
        # 0 or 1 <GENE_SYM>
        # 1 <IS_PSEUDOGENE>
        # 0 or more <FUNCT_ANNOT_EVIDENCE>
        # 1 <DATE>
        # 0 or 1 <GENE_ONTOLOGY>
        # 0 or 1 <ROLE_LIST>

	my($self, $line) = @_;
	my $geneinfo;
	$self->throw(error_message('<GENE_INFO>', 'missing', $line)) if $line !~ /<GENE_INFO>/o;
	$line = $self->_readline();

	# <LOCUS>:
	$geneinfo = $self->zero_or_one('LOCUS', \$line, $geneinfo, 'line');


        # <ALT_LOCUS>*
	$geneinfo = $self->zero_or_more('ALT_LOCUS', \$line, $geneinfo, 'line');
	# if($line =~ /<ALT_LOCUS>([^>]+)<\/ALT_LOCUS>/o) {
	# 	$geneinfo->{'ALT_LOCUS'} = $1;
	# 	$line = $self->_readline();
	# }  


        # <PUB_LOCUS>?:
	$geneinfo = $self->zero_or_one('PUB_LOCUS', \$line, $geneinfo, 'tag');
	# if($line =~ /<PUB_LOCUS>([^>]+)<\/PUB_LOCUS>/o) {
	# 	$geneinfo->{'PUB_LOCUS'} = $1;
	# 	$line = $self->_readtag();
	#}

 
        # <COM_NAME>+
        # Simon: the CURATED attribute is "IMPLIED", which means that it does not have to be included.
	$geneinfo = $self->one_or_more('COM_NAME', \$line, $geneinfo, 'tag', 'IMPLIED');

        
        # <COMMENT>?
	#print "comment line: $line\n"; exit;
	$geneinfo = $self->zero_or_one('COMMENT', \$line, $geneinfo, 'tag');
	# if($line =~ /<COMMENT>([^<]+)<\/COMMENT>/o) {
	# 	push(@{$geneinfo->{'COMMENT'}}, $1);
	# 	$line = $self->_readtag();
	# }


        # <PUB_COMMENT>?
	$geneinfo = $self->zero_or_one('PUB_COMMENT', \$line, $geneinfo, 'tag');
	# if($line =~ /<PUB_COMMENT>([^<]+)<\/PUB_COMMENT>/o) {
	# 	push(@{$geneinfo->{'PUB_COMMENT'}}, $1);
	#	$line = $self->_readtag();
	# }


        # <EC_NUM>?
	$geneinfo = $self->zero_or_one('EC_NUM', \$line, $geneinfo, 'tag');
	# if($line =~ /<EC_NUM>([\w\-\\\.]+)<\/EC_NUM>/o) {
	#	$geneinfo->{'EC_NUM'} = $1;
	#	$line = $self->_readtag();
	# }


        # <GENE_SYM>?
	$geneinfo = $self->zero_or_one('GENE_SYM', \$line, $geneinfo, 'tag');
	# if($line =~ /<GENE_SYM>([^<]+)<\/GENE_SYM>/o) {
	# 	$geneinfo->{'GENE_SYM'} = $1;
	# 	$line = $self->_readtag();
	# }


	# <IS_PSEUDOGENE>
	$geneinfo = $self->one_and_only_one('IS_PSEUDOGENE', \$line, $geneinfo, 'tag');


	# <FUNCT_ANNOT_EVIDENCE>*
	while($line =~ /<FUNCT_ANNOT_EVIDENCE/o) {	
		push(@{$geneinfo->{'FUNCT_ANNOT_EVIDENCE'}}, 
		$self->_process_funct_annot_evidence($line));
		$line = $self->_readline();
	}

        # <DATE>:
	if($line =~ /<DATE>([^>]+)<\/DATE>/o) {
		$geneinfo->{'DATE'} = $1;
		$line = $self->_readline();
	} else {
		$self->throw(error_message('DATE', 'missing', $line));
	}


        # <GENE_ONTOLOGY>?
	if($line =~ /<GENE_ONTOLOGY>/o) {
	    $geneinfo->{'GENE_ONTOLOGY'} = $self->_process_gene_ontology($line);
	    $line = $self->_readline();
	}


	# <ROLE_LIST>?
	if($line =~ /<ROLE_LIST>/o) {
	    $geneinfo->{'ROLE_LIST'} = $self->_process_role_list($line);
	    $line = $self->_readline();
	}
	

	# </GENE_INFO>
	if($line =~ /<\/GENE_INFO/o) {
	    return $geneinfo ;
	} else{
	    $self->throw(error_message('GENE_INFO', 'missing', $line));
	}

}
# ============================================================================================
=head2 _process_funct_annot_evidence

    Title    : _process_funct_annot_evidence
    Usage    : $self->_process_funct_annot_evidence()
    Function : Parse the data between <FUNCT_ANNOT_EVIDENCE></FUNCT_ANNOT_EVIDENCE>.
    Args     : Scalar ($line) holding the XML line (<FUNCT_ANNOT_EVIDENCE>).
    Return   : $funct data structure holding the values.
    Note     : Haidan code this method, and tested by chr01.xml

=cut
sub _process_funct_annot_evidence {

    # Sub tags for <FUNCT_ANNOT_EVIDENCE>:
    # 0 or more <ASSIGN_ACC>

    my ($self, $line) = @_;
    # my $line = $self->_readline();
    my $funct;

    if($line !~ /<FUNCT_ANNOT_EVIDENCE ([^>]+)>/o) {
	$self->throw(error_message('<FUNCT_ANNOT_EVIDENCE>', 'missing/invalid', $line));
    }


    $funct = $self->get_attribs($1, $funct);
    # my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/og);
    # Attributes for FUNCT_ANNOT_EVIDENCE:
    # TYPE
    # $funct->{'TYPE'} = $attribs{'TYPE'};

    # <ASSING_ACC>*
    while ($line =~ /<ASSIGN_ACC>([^>]+)<\/ASSIGN_ACC>/){
	$self->_pushback($line);
	push @{$funct->{'ASSIGN_ACC'}}, $self->_process_assign_acc();
	$line = $self->_readline();
    }

    # Closing tag:
    if ($line =~ /<\/FUNCT_ANNOT_EVIDENCE>/){
	return $funct;
    } else {
	$self->throw(error_message('</FUNCT_ANNOT_EVIDENCE>', 'missing', $line));
    }


}
# ============================================================================================
=head2 _process_assign_acc
    Title    : _process_assign_acc
    Usage    : $self->_process_assign_acc()
    Function : Parse the data between the <ASSIGN_ACC></ASSIGN_ACC> tags.
    Args     : Scalar ($line) holding the XML line (<ASSIGN_ACC>).
    Return   : $acc data structure holding the values.
    Note     : Haidan code this method, and tested by chr01.xml

=cut
sub _process_assign_acc {

        # No subtags for <ASSIGN_ACC>.
        # However, there is an attribute for the <ASSIGN_ACC>
        # tag: ASSIGN_METHOD

 	my ($self, $line) = @_;
	my $acc;

	# check the passed string whether is valid
	if($line !~ /<ASSIGN_ACC ([^>]+)>/) {
		$self->throw(error_message('<ASSIGN_ACC>', 'missing/invalid', $line));
	}

	#parse the attribute to assign_acc element
	my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/og);
	$acc->{'ASSIGN_METHOD'} = $attribs{'ASSIGN_METHOD'};
	if ($line =~ /<ASSIG_ACC *([^>]+)<\/ASSIGN_ACC>/o) {
        	$acc->{'ASSIGN_ACC'} =$1;
		return $acc;
    	} else{
		$self->throw(error_messager('</ASSIGN_ACC>', 'missing/invalid', $line));
        }
}
# ============================================================================================
=head2 _process_gene_outology

    Title    : _process_gene_outology
    Usage    : $self->_process_gene_outology()
    Function : Parse the data between the <GENE_ONTOLOGY></GENE_ONTOLOGY> tags.
    Args     : Scalar ($line) holding the XML line (<GENE_ONTOLOGY>).
    Return   : $ontology data structure holding the values.
    Note     : Haidan code this method, and tested by Sample.xml  
           
=cut
sub _process_gene_ontology {
    # Sub tags for <GENE_ONTOLOGY>:
    # 0 or more <GO_ID>

    my($self,$line) = @_;
    my $ontology;
    # it checks whether the passed line is valid
    $self->throw(error_message('<GENE_ONTOLOGY>', 'missing', $line)) if $line !~ /<GENE_ONTOLOGY>/o;
    $line = $self->_readline();

     # <GO_ID>*
     # Attribute for GO_ID: ASSIGNMENT.
     while($line =~ /<GO_ID ASSIGNMENT/o) {
	push (@{$ontology->{'GO_ID'}}, $self->_process_go_id($line));
	$line = $self->_readline();
    }

    # </GENE_ONTOLOGY>:
    if($line =~ /<\/GENE_ONTOLOGY>/o) {
	return $ontology;
    } else {
    	$self->throw(error_message('</GENE_ONTOLOGY>', 'missing', $line));
    }

}
# ============================================================================================
=head2 _process_go_id

    Title    : _process_go_id
    Usage    : $self->_process_go_id()
    Function : Parse the data between the <GO_ID></GO_ID> tags.
    Args     : Scalar ($line) holding the XML line (<GO_ID>).
    Return   : $go_id data structure holding the values.
    Note     : Haidan code this method, and tested by Sample.xml  
           
=cut
sub _process_go_id {

    # Sub tags for <GO_ID>
    # 1 <DATE>
    # 0 or more <GO_EVIDENCE>

    my($self, $line) = @_;
    my $go_id;

    if($line !~ /<GO_ID ([^>]+)>/o) {
	$self->throw(error_message('<GO_ID>', 'missing/invalid', $line));
    }

    # get the attribute of GO_ID 
    $go_id = $self->get_attribs($1, $go_id);
    # my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/g);
    # $go_id->{'ASSIGNMENT'} = $attribs{'ASSIGNMENT'};
    $line = $self->_readline();

    # <DATE>:
    # get the DATE for GO_ID
    $go_id = $self->one_and_only_one('DATE', \$line, $go_id, 'line');
    # if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
    #      $go_id->{'DATE'} = $1;
    #      $line = $self->_readline();
    # }
    # else {
    # 	$self->throw("Required <DATE> missing in Go ID");
    # }


    # <GO_TERM>:
    $go_id = $self->one_and_only_one('GO_TERM', \$line, $go_id, 'line');

    # <GO_TYPE>:
    $go_id = $self->one_and_only_one('GO_TYPE', \$line, $go_id, 'line');


    # <GO_EVIDENCE>*
    while($line =~ /<GO_EVIDENCE>/o) {
	push @{$go_id->{'GO_EVIDENCE'}}, $self->_process_go_evidence($line);
	$line = $self->_readline();
    }

    # closing tag:
    if($line =~ /<\/GO_ID>/o) {
	return $go_id;
    } else {
	$self->throw(error_message('</GO_ID>', 'missing', $line));
    }
}
# ============================================================================================
=head2 _process_go_evidence

    Title    : _process_go_evidence
    Usage    : $self->_process_go_evidence()
    Function : Parse the data between the <GO_EVIDENCE></GO_EVIDENCE> tags.
    Args     : Scalar ($line) holding the XML line (<GO_EVIDENCE>).
    Return   : $go_evidence data structure holding the values.
    Note     : Haidan code this method, and tested by sample.xml  

=cut
sub _process_go_evidence {

    # Sub tags for <GO_EVIDENCE>:
    # 1 <EV_CODE>
    # 1 <EVIDENCE>
    # 0 or 1 <WITH_EV>


    my ($self, $line) = @_;
    my $go_evidence;

    if($line !~ /<GO_EVIDENCE>/o) {
	$self->throw(error_message('<GO_EVIDENCE>','missing',$line))
    } 
    $line = $self->_readline();    

    # <EV_CODE>
#    print "line: $line\n"; exit; ### <EV_CODE CODE="ND" />
    if ($line =~ /<EV_CODE CODE\s?=\s?"(.*)"\s?\/>/) {
        # Attribute for <EV_CODE>: CODE
	$go_evidence->{'CODE'} = $1;
        $line = $self->_readline();
    } else {
	$self->throw(error_message('<EV_CODE>', 'missing', $line));
    }
    
    # <EVIDENCE>
    if($line =~ /<EVIDENCE>([^<]+)<\/EVIDENCE>/o){
	$go_evidence->{'EVIDENCE'} = $1;
	$line = $self->_readline();
    } elsif ($line =~ /<EVIDENCE>(.*?)$/){

        my $evidence = $1;
	$evidence =~ s/\s*$//g;
	$go_evidence->{'EVIDENCE'} = $evidence;
	$line = $self->_readline;
	$line = $self->_readline;
	# print "line: $line\n";
	# $line = $self->_readline;
	# print "line: $line\n";

    } else {
	$self->throw(error_message('<EVIDENCE>', 'missing/invalid', $line));
    } 
    
    # <WITH_EV>?
    if($line =~ /<WITH_EV>([^<]+)<\/WITH_EV>/os) {
	$go_evidence->{'WITH_EV'} = $1;
        $line = $self->_readline();
    }
  

    # Closing tag:
    if($line =~ /<\/GO_EVIDENCE>/o){
	return $go_evidence;
    } else {
    	$self->throw(error_message('</GO_EVIDENCE>', 'missing', $line));    
    }


}
# ============================================================================================
=head2 _process_role_list

	METHOD IS DEPRECATED!  According to the DTD, ROLE_LIST (and thus ROLE_INFO) is now deprecated.
        <!-- ROLE_INFO has been deprecated.  Gene Ontology assignments are now employed. -->

    Title    : _process_role_list
    Usage    : $self->_process_role_list()
    Function : Parse data between the <ROLE_LIST></ROLE_LIST> tags.
    Args     : Scalar ($line) holding the value of the XML line (<ROLE_LIST>).
    Return   : $role data structure holding the parsed values.
    Note     : Haidan code this method, and without tested by Sample.xml & chr01.xml 
           
=cut
# sub _process_role_list {
# 
#     # Sub tag for <ROLE_LIST>:
#     # 1 or more <ROLE_INFO>
# 
#     my($self, $line) = @_;
#     my $role;
#    
#     if($line !~ /<ROLE_LIST>/o){
# 	$self->throw(error_message('<ROLE_LIST>', 'missing', $line));
#     }
#     $line = $self->_readline();
# 
# 
#     # <ROLE_INFO>+
#     while($line =~ /<ROLE_INFO>/o) {
# 	push (@{$role->{'ROLE_INFO'}}, $self->_process_role_info($line));
# 	$line = $self->_readline();
#     }
# 
#     if($line =~ /<\/ROLE_LIST>/o) {
# 	return $role;
#     }
#     $self->throw("unexpected end of role_list");
# }
# ============================================================================================
=head2 _process_role_info

	METHOD IS DEPRECATED!  See the perldoc for _process_role_list for more info.

    Title : _process_role_info
    Usage : $self->_process_role_info($line)
    Function : get ROLE_LIST's ROLE_INFO from stream 
    Return : ROEL_INFOs's value
    Agrs : the tag for <ROLE_INFO>.
    Note : Haidan code this method, and without tested by Sample.xml & chr01.xml 
           
=cut
#parse the role_info's each element and copy from go_evidence
# sub _process_role_info
# {
# 
#     # Sub tags for <ROLE_INFO>:
#     # 1 <COMPARTMENT>
#     # 1 <DATE>
#     # 1 <MAIN_ROLE>
#     # 0 or 1 <SUBROLE_1>
#     # 0 or 1 <SUBROLE_2>
#     # 0 or 1 <SUBROLE_3>
#     # 0 or 1 <SUBROLE_4>
# 
#     my($self, $line) = @_;
#     my $role_info;
#     # check the tag value
#     if($line !~ /<ROLE_INFO>/o) {
# 	$self->throw("Invalid ROLE_INFO: $line");
#     }
#     
#     $line = $self->_readline();
#     # get the COMPARTMENT value, which must exist.
#     if($line =~ /<COMPARTMENT>([^<]+)<\/COMPARTMENT>/o) {
# 	$role_info->{'COMPARTMENT'} = $1;
# 	$line = $self->_readline();
#     } else {
# 	$self->throw("Required <COMPARTMENT> missing role_info");
#     }
#     # get the DATE value, which must exist.
#     if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
# 	$role_info->{'DATE'} = $1;
# 	$line = $self->_readline();
#     } else {
# 	$self->throw("Required <DATE> missing in role_info");
#     }
#     # get the MAIN_ROLE value, which must exist.
#     if($line =~ /<MAIN_ROLE>([^<]+)<\/MAIN_ROLE>/o) {
# 	$role_info->{'MAIN_ROLE'} = $1;
# 	$line = $self->_readline();
#     } else {
# 	$self->throw("Required <MAIN_ROLE> missing in role_info");
#     }
#     # get the SUBROLE_1 value, which may exist.
#     if($line =~ /<SUBROLE_1>([^<]+)<\/SUBROLE_1>/os) {
# 	$role_info->{'SUBROLE_1'} = $1;
#         $line = $self->_readline();
#     }
#     # get the SUBROLE_2 value, which may exist.
#     if($line =~ /<SUBROLE_2>([^<]+)<\/SUBROLE_2>/os) {
# 	$role_info->{'SUBROLE_2'} = $1;
#         $line = $self->_readline();
#     }
#     # get the SUBROLE_3 value, which may exist.
#     if($line =~ /<SUBROLE_3>([^<]+)<\/SUBROLE_3>/os) {
# 	$role_info->{'SUBROLE_3'} = $1;
#         $line = $self->_readline();
#     }
#     # get the SUBROLE_4 value, which may exist.
#     if($line =~ /<SUBROLE_4>([^<]+)<\/SUBROLE_4>/os) {
# 	$role_info->{'SUBROLE_4'} = $1;
#         $line = $self->_readline();
#     }
#     # check the end tag for ROLE_INFO
#     if($line =~ /<\/ROLE_INFO>/os) {
# 	return $role_info;
#     }
#     $self->throw("unexpected end of ROLE_INFO");
# }
# ============================================================================================
=head2 _process_model

    Title    : _process_model
    Usage    : $self->_process_model()
    Function : Parse the data between the <MODEL></MODEL> tag.
    Args     : Scalar ($line) holding the XML line (<MODEL>).
    Return   : $model data structure holding the value of the parsed data.
    Note     : Haidan modif this method, and test by Sample.xml & chr01.xml 
           
=cut
sub _process_model {

        # Sub tags for <MODEL>:
        # 1 <FEAT_NAME>
        # 0 or 1 <PUB_LOCUS>
        # 0 or 1 <CDNA_SUPPORT>
        # 0 or more <GENE_SYNONYM>
        # 0 or more <CHROMO_LINK>
        # 1 <DATE>
        # 1 <COOORDSET>
        # 0 or 1 <MODEL_ATTRIBUTE>
        # 0 or 1 <MODEL_EVIDENCE>
        # 1 or more <EXON>
        # 0 or 1 <CDS_SEQUENCE>
        # 0 or 1 <PROTEIN_SEQUENCE>

	my($self,$line) = @_;
	my $model;

	# CURATED, COMMENT are MODEL attributes.  They are #IMPLIED, which means that they are optional
	if($line =~ /<MODEL ([^>]+)>/o) {
        	# parse the model's attribute
		$model = $self->get_attribs($1, $model);
		# my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/og);
	        # Attribute for <MODEL>: CURATED
		# $model->{'CURATED'} = $attribs{'CURATED'};
		# $model->{'COMMENT'} = $attribs{'COMMENT'};

        } elsif ($line =~ /<MODEL>/){

		# do nothing...

        } else {

		$self->throw(error_message('<MODEL>', 'missing/invalid', $line));

	}
	$line = $self->_readline();
        

        # <FEAT_NAME>:
        $model = $self->one_and_only_one('FEAT_NAME', \$line, $model, 'line');

        # <PUB_LOCUS>:
	$model = $self->zero_or_one('PUB_LOCUS', \$line, $model, 'line');

        # <CDNA_SUPPORT>?
	if($line =~ /<CDNA_SUPPORT>/o) {
		$model->{'CDNA_SUPPORT'} = $self->_process_cdna_support($line);
		$line = $self->_readline();
	}

        # <GENE_SYNONYM>*
        $model = $self->zero_or_more('GENE_SYNONYM', \$line, $model, 'line');
        # while($line =~ /<GENE_SYNONYM>([^>]+)<\/GENE_SYNONYM>/o) {
	# 	push @{$model->{'GENE_SYNONYM'}}, $1;
	# 	$line = $self->_readline();
	# } 
	
        # <CHROMO_LINK>*
	$model = $self->zero_or_more('CHROMO_LINK', \$line, $model, 'line');
        # while($line =~ /<CHROMO_LINK>([^>]+)<\/CHROMO_LINK>/o) {
	# 	push @{$model->{'CHROMO_LINK'}}, $1;
	# 	$line = $self->_readline();
	# } 

        # <DATE>:
	$model = $self->one_and_only_one('DATE', \$line, $model, 'tag');
        
        # <COORDSET>:
	$model = $self->check_coordset_tag(\$line, $model, 'line');

        # <MODEL_ATTRIBUTE>?
	if ($line =~ /<MODEL_ATTRIBUTE>/o){
		$model->{'MODEL_ATTRIBUTE'} = $self->_process_model_attribute($line);
		$line = $self->_readline;
	}

        # <MODEL_EVIDENCE>?
        if($line =~ /<MODEL_EVIDENCE>/o){
		# Change _process_evidence_type to _process_gene_evidence();###Feb23, 2004
		$model->{'MODEL_EVIDENCE'} = $self->_process_gene_evidence('MODEL_EVIDENCE',$line);
		$line = $self->_readline();
        }

        # <EXON>+
	if($line =~ /<EXON>/o) {

		do {
			push(@{$model->{'EXON'}}, $self->_process_exon($line));
			$line = $self->_readline();

		} while($line =~ /<EXON>/o);

	} else {
		$self->throw(error_message('<EXON>', 'missing', $line));
	}

        # <CDS_SEQUENCE>?
	# print "line: $line\n";
	$model = $self->zero_or_one('CDS_SEQUENCE', \$line, $model, 'line');
	# print $model->{CDS_SEQUENCE} , "\n"; exit;

        # <PROTEIN_SEQUENCE>?
	$model = $self->zero_or_one('PROTEIN_SEQUENCE', \$line, $model, 'line');

        # Closing tag:
	if ($line =~ /<\/MODEL>/o) {
		# $line = $self->_readline();
	        # print "line: $line\n";
		return $model;
	} else {
		$self->throw(error_message('</MODEL>', 'missing', $line));
	}
}
# ============================================================================================
=head2 _process_model_attribute

    Title    : _process_model_attribute
    Usage    : $self->_process_model_attribute()
    Function : Parse data between <ATTRIBUTE_TYPE></ATTRIBUTE_TYPE> tags.
    Args     : Scalar ($line) holding the XML line (<ATTRIBUTE_TYPE>).
    Return   : $attr data structure holding the value of the parsed data.
    Note     : (1) MODEL ATTRIBUTE provides annotation info regarding the attributes of a model
               (2) Haidan code this method, and not test by Sample.xml or chr01.xml F10A5.xml
           
=cut
sub _process_model_attribute {

    # Sub tags for <MODEL_ATTRIBUTE>:
    # 0 or more <ATTRIBUTE_TYPE>

    my($self,$line) = @_;
    # $line is the <MODEL_ATTRIBUTE>
    my $attr;

    if($line !~ /<MODEL_ATTRIBUTE>/o) {
	$self->throw(error_message('<MODEL_ATTRIBUTE>', 'missing', $line));
    }
    $line = $self->_readline();

    # <ATTRIBUTE_TYPE>*
    while($line =~ /<ATTRIBUTE_TYPE /o) {
	push @{$attr->{'ATTRIBUTE_TYPE'}}, $self->_process_att_score($line);
	$line = $self->_readline();
    } 

   # closing tag: </MODEL_ATTRIBUTE> 
   if ($line =~ /<\/MODEL_ATTRIBUTE>/o) {
	return $attr;
   } else {
	$self->throw(error_message('</MODEL_ATTRIBUTE>', 'missing', $line));
   }

}
# ============================================================================================
=head2 _process_att_score

    Title    : _process_att_score
    Usage    : $self->_process_att_score()
    Function : Parse the data between the <ATT_SCORE></ATT_SCORE> tags.
    Args     : Scalar ($line) holding the XML line (<ATT_SCORE>).
    Return   : $att_score data structure holding the value.
    Note     : Haidan code this method, and not test by Sample.xml or chr01.xml 

=cut
sub _process_att_score { 
    # Sub tags <ATTRIBUTE_TYPE>:
    # 0 or more <ATT_SCORE>

    my ($self,$line) = @_;
    my $att_score; 

    if($line !~ /<ATTRIBUTE_TYPE ([^>]*)>/o) {
	$self->throw(error_message('<ATTRIBUTE_TYPE>', 'missing/invalid', $line));
    }

    # get the attribute for the ATTRIBUTE_TYPE
    $att_score = $self->get_attribs($1, $att_score);
    # my %attribs = ($1 =~ /(\w+)\s*=\s*"([^"]*)"/og);
    # Attribute for <ATTRIBUTE_TYPE>: METHOD.
    # $att_score->{'METHOD'} = $attribs{'METHOD'};
    $line = $self->_readline(); 


    # <ATT_SCORE>*
    while($line =~ /<ATT_SCORE DESC="([^"]*)">(.*)<\/ATT_SCORE>/){
	push (@{$att_score->{'ATT_SCORE'}}, $2);
	push (@{$att_score->{'DESC'}}, $1);
	$line = $self->_readline();
    } 

    if ($line =~ /<\/ATTRIBUTE_TYPE>/o){
	return $att_score;
    } else {
	$self->throw(error_message('</ATTRIBUTE_TYPE>', 'missing', $line)); 
    }

}
# ============================================================================================
=head2 _process_cdna_support
    Title    : _process_cdna_support
    Usage    : $self->_process_cdna_support()
    Function : Parse the data between the <CDNA_SUPPORT></CDNA_SUPPORT> tags.
    Args     : Scalar ($line) holding the XML line (<CDNA_SUPPORT>).
    Return   : $cdna data structure holding the parsed values.
    Note     : (1)CDNA_SUPPORT provides the accession of complete cDNAs which support the annotated.  CDS structure for the gene model, and hence the annotated protein sequence.
	   (2) Haidan code it
	   tested by sample.xml and F10A5.xml
=cut
sub _process_cdna_support {
    # Sub tags for <CDNA_SUPPORT>:
    # 1 or more <ACCESSION>

    my($self, $line) = @_;
    my $cdna;
    if($line !~ /<CDNA_SUPPORT>/o) {
	$self->throw(error_message('<CDNA_SUPPORT>', 'missing', $line));
    }
    $line = $self->_readline();

    # there are at least one of Accession for cdna 
    do {	
	push @{$cdna->{'ACCESSION'}}, $self->_process_accession($line);
        # print Data::Dumper->Dump([$self->_process_accession($line)]);
	$line = $self->_readline();
    } while($line !~ /<\/CDNA_SUPPORT>/o);

    # Closing tag:
    if ($line =~ /<\/CDNA_SUPPORT>/o){
	return $cdna;
    } else {   
	$self->throw(error_message('</CDNA_SUPPORT>', 'missing', $line));
    }
}
# ============================================================================================
=head2 _process_accession

    Title    : _process_accession
    Usage    : $self->_process_accession()
    Function : Parse the data between the <ACCESSION></ACCESSION> tags.
    Args     : Scalar ($line) holding the XML line.
    Return   : $accession data structure holding the parsed values.
    Note     : (1) ACCESSION is PCDATA holds comments
                   DBXRED is accession to genBank
                   IS_FLI is flag, 1 is full length, 0 not full length
                   UNIQUE_TO_ISOFORM is flag, 1 = unique, 0 shared between isoforms
                   ANNOT_INCORP is flag, 1=incorporated into gene model verified, 0=incorporation not verified
	       (2) Haidan code it and tested chr01.xml and sample.xml

=cut
sub _process_accession {
    # Sub tags for <ACCESSION>:
    # <ACCESSION> + some attributes:


    my($self, $line) = @_;
    my $accession;
    my $key ; 
    # the pattern (.*)>(.*) first is attrivutes for the accession, second is the value for accession
    # sample's examle <ACCESSION DBXREF="gi|2413441|gb|AA598018.1|AA598018" IS_FLI="0" 
    #   UNIQUE_TO_ISOFORM="0" ANNOT_INCORP="1">-Matching gene and cDNA alignment are identical.</ACCESSION>
    # so (.*)> is attributes, (.*)</ACCESSION> is value
    # ACCESSION ([^>].*)>(.*)<\/ACCESSION>/o) {
    #if($line =~ /<ACCESSION ([^>].*)>(.*)<\/ACCESSION>/o) {# this pattern match is ok

    # The attributes for <ACCESSION> are all #IMPLIED (thus, optional).


    if($line =~ /<ACCESSION (.*)>(.*)<\/ACCESSION>/o) {
	$accession->{'ACCESSION'}=$2;
	$accession = $self->get_attribs($1, $accession);
	# my %attribs = ($1 =~ /(\w+)="(.*?)"/g);
	# four attributes DBXRED, IS_FLI,UNIQUE_TO_ISOFORM,ANNOT_INCORP.
	# foreach $key (keys(%attribs)) {
        #    # Attributes for <ACCESSION>:
        #    # 1.  DBXREF
        #    # 2.  IS_FLI
        #    # 3.  UNIQUE_TO_ISOFORM
        #    # 4.  ANNOT_INCORP
	#    $accession->{$key} =  $attribs{$key};
	# }
       
        # print Data::Dumper->Dump([$accession]);  exit;
        # Simon's addition:
        return $accession;
	
   } elsif ($line =~ /<ACCESSION>(.*)<\/ACCESSION>/){

	$accession->{'ACCESSION'} = $1;
        # $accession->{DBXREF} = "NULL";
        # $accession->{IS_FLI} = "NULL";
        # $accession->{UNIQUE_TO_ISOFORM} = "NULL";
	# $accession->{ANNOT_INCORP} = "NULL";

        return $accession;

    }else{ 
	$self->throw(error_message('<ACCESSION>', 'missing/invalid', $line));	
    }

}
# ============================================================================================
=head2 _process_exon
    Title    : _process_exon
    Usage    : $self->_process_exon()
    Function : Parse the data between the <EXON></EXON> tags.
    Args     : Scalar ($line) holding the XML line (<EXON>).
    Return   : $exon data structure holding the parsed values.
    Note     : The mRNA EXON partially represents the code for protein,
               exactly the case where upstream or downstream untranslated
               (1) Josh coded it
=cut
sub _process_exon {

    # Sub tags for <EXON>:
    # 1 <FEAT_NAME>
    # 1 <DATE>
    # 1 <COORDSET>
    # 0 or 1 <CDS>
    # 0 or 1 <UTRS>

    my($self, $line) = @_;
    my $exon;#key;
   
    # check the <EXON>tag exist.
    if($line !~ /<EXON>/o) {
	$self->throw(error_message('<EXON>', 'missing', $line));
    }
    $line = $self->_readtag();

    # <FEAT_NAME>:
    $exon = $self->one_and_only_one('FEAT_NAME', \$line, $exon, 'tag');
    # if($line =~ /<FEAT_NAME>([^<]+)<\/FEAT_NAME>/o) {
    # 	$exon->{'FEAT_NAME'} = $1;
    # 	$line = $self->_readtag();
    # } else {
    # 	$self->throw("Required <FEAT_NAME> missing in EXON");
    # }


    # <DATE>:
    $exon = $self->one_and_only_one('DATE', \$line, $exon, 'tag');
    # if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
    # 	$exon->{'DATE'} = $1;
    # 	$line = $self->_readtag();
    # } else {
    # 	$self->throw("Required <DATE> missing in EXON");
    # }
    
    # <COORDSET>:
    $exon = $self->check_coordset_tag(\$line, $exon, 'line');
    # if($line =~ /<COORDSET>/o) {
    # 	$exon->{'COORDSET'} = $self->_process_coordset($line);
    # 	$line = $self->_readline();
    # } else {
    # 	$self->throw("Required <COORDSET> missing");
    # }
    
    # <CDS>?
    if($line =~ /<CDS>/o){
	$exon->{'CDS'} = $self->_process_cds($line);
	$line = $self->_readline();
    }

    # <UTRS>?
    if($line =~ /<UTRS>/o){
	$exon->{'UTRS'} = $self->_process_utrs($line);
	$line = $self->_readline();
    }

    # end of EXON reading
    if($line =~ /<\/EXON>/o){
	return $exon;
    } else {
        $self->throw(error_message('</EXON>', 'missing', $line));
    }
}
# ============================================================================================
=head2 _process_cds

    Title    : _process_cds
    Usage    : $self->_process_cds()
    Function : get EXONs CDS  from stream.
    Args     : Scalar ($line) holding the XML line (<CDS>).
    Return   : $cds data structure holding the parsed values.
    Note     : (1) The CDS represent the protein coding portion of an individual EXON 
    	       (2) Josh coded it.
=cut
sub _process_cds {
 
        # Sub tags for <CDS>:
        # 1 <FEAT_NAME>
        # 1 <DATE>
        # 1 <COORDSET>

	my($self, $line) = @_;
	my $cds;

	# check the <CDS>tag
	if($line !~ /<CDS>/o) {
		$self->throw(error_message('<CDS>', 'missing', $line));
	}
	$line = $self->_readtag();

	# <FEAT_NAME>:
	$cds = $self->one_and_only_one('FEAT_NAME', \$line, $cds, 'tag');
	# if ($line =~ /<FEAT_NAME>([^<]+)<\/FEAT_NAME>/o){
	# 	$cds->{'FEAT_NAME'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <FEAT_NAME> missing in CDS");
	# }
	
	# <DATE>:
	$cds = $self->one_and_only_one('DATE', \$line, $cds, 'tag');
	# if($line =~ /<DATE>([^<]+)<\/DATE>/o) {
	# 	$cds->{'DATE'} = $1;
	# 	$line = $self->_readtag();
	# } else {
	# 	$self->throw("Required <DATE> missing");
	# }

        # <COORDSET>:
	$cds = $self->check_coordset_tag(\$line, $cds, 'line');
	# if($line =~ /<COORDSET>/o) {
	# 	$cds->{'COORDSET'} = $self->_process_coordset($line);
	# 	#$line = $self->_readtag(); #### change to readline
	# 	$line = $self->_readline();
	# } else {
	# 	$self->throw("Required <COORDSET> missing");
	# }

	# </CDS> closing tag:
	if ($line =~ /<\/CDS>/o){
		return $cds;
	} else {
		$self->throw(error_message('</CDS>', 'missing', $line));
	}
}
# ============================================================================================
=head2 _process_utrs

    Title    : _process_utrs
    Usage    : $self->_process_utrs()
    Function : Parse the data between the <UTRS></UTRS> tags.
    Args     : Scalar ($line) holds XML line (<UTRS>).
    Return   : $utrs data structure holding the values parsed.
    Note     :  UTRS will represent the non-protein-coding portions of the RNA EXON(s)
                UTRS are not currently supported TIGR data types outside of this DTD 
                and they exist here only to facilitate extenal data analysis.
	        Josh coded it.
=cut
sub _process_utrs {

    # Sub tags for <UTRS>:
    # 0 or more <LEFT_UTR> OR
    # 0 or more <RIGHT_UTR> OR
    # 0 or more <EXTENDED_UTR>

    my($self, $line) = @_;
    my $utrs;

    # check the first tag as expected
    if($line !~ /<UTRS/o) {
	$self->throw(error_message('<UTRS>', 'missing', $line));
    }
    # UTRS specify each UTRS or untranslated region
    # There can be more than one if it's a single exon gene
    $line = $self->_readline();

    while($line !~ /<\/UTRS>/o) {

	if($line =~ /<LEFT_UTR>/o) {
	    push(@{$utrs->{'LEFT_UTR'}}, $self->_process_ext_utr($line));
	} elsif ($line =~ /<RIGHT_UTR>/o) {
	    push(@{$utrs->{'RIGHT_UTR'}}, $self->_process_ext_utr($line));
	} elsif ($line =~ /<EXTENDED_UTR>/o) {
	    push(@{$utrs->{'EXTENDED_UTR'}}, $self->_process_ext_utr($line));
	} else {
	    $self->throw("In sub _process_utrs, do not recognize this UTR type: $line\n");
	}
	$line = $self->_readline();

    } # close while loop
    
    # end of the UTRS's checking 
    if($line =~ /<\/UTRS>/o) {
	return $utrs;
    } else {
    	$self->throw(error_message('</UTRS>','missing', $line));
    }
}
# ============================================================================================
=head2 _process_ext_utr

    Title    : _process_ext_utr
    Usage    : $self->_process_ext_utr()
    Function : Parse data between <EXTENDED_UTR></EXTENDED_UTR>, <RIGHT_UTR></RIGHT_UTR>, <LEFT_UTR></LEFT_UTR>
	       <ASMBL_COORDS></ASMBL_COORDS>, <MATCH_COORDS></MATCH_COORDS>, <RELATIVE_COORDS></RELATIVE_COORDS> tags.
    Args     : None.
    Return   : $coordset data structure holding the parsed data values.
    Note     : Haidan modify it

=cut
sub _process_ext_utr {
        # this sub handles the tags for <ASMBL_COORDS>,
        # <MATCH_COORDS>, <RELATIVE_COORDS>.
        # The sub tags are the same for all three (thus merging
        # 3 potention subs into 1).
        # Sub tags:
        # 1 <COORDSET>
 
        # Actually, this sub also handles:
        # <LEFT_UTR>, <RIGHT_UTR>, <EXTENDEND_UTR>



	my($self,$line1) = @_;
	my $coordset;
	# check if the passed line with expect tags
	# if no expext tags as follow throw exception
	# because the passed $line already check before it be passed,
	# so I donot check any more 
	#unless($line !~ /<EXTENDED_UTR>/o || $line !~ /<RIGHT_UTR>/o || $line =~ /<LEFT_UTR>/) {
	#	$self->throw("Bio::SeqIO::tigr::_process_ext_utr called but ",
	#	             "no <EXTENDED_UTR> found in stream");
	#}
        # read coordset
	my $line = $self->_readtag();
	if($line =~ /<COORDSET>/o) {
	    # here you cannot add {'COORDSET'} to $coordset 
	    # It is quit weir!!! which  is diff with other coordset parse
	    # $coordset->{'COORDSET'} = $self->_process_coordset($line);#error
	      $coordset = $self->_process_coordset($line);
	} else {
		$self->throw("Required <COORDSET> missing");
	}
	# read the end tag
	$line = $self->_readline();
	# make a end tag 
	my $str = "</";
	# remove the whitespace from the $line1
	$line1 =~ s/^\s+//;
	# get the Ssubstring from $line1, without "<"
	my $ str2= substr($line1,1);
	my $str3 = $str.$str2;
	# remove the whitespace from the $line
	$line =~ s/^\s+//;
	if($line =~ $str){
	   return $coordset;
	}
	$self->throw("Reached end of Bio::SeqIO::tigr::_process_ext_utr");
}
# ============================================================================================
=head2 _readtag

    Title    : _readtag
    Usage    : $self->_readtag()
    Function : Read the complete tag from the stream.
    Args     : None.
    Return   : String.
       
=cut
sub _readtag {

	my ($self) = @_;
	my $line = $self->_readline();
	chomp($line);

	my $tag;
	if(($tag) = ($line =~ /^[^<]*<\/(\w+)/o)) {
		$self->_pushback($1) if $line =~ /<\/$tag>(.+)$/;
		return "</$tag>";
	}
 
	until(($tag) = ($line =~ /<(\w+)[^>]*>/o)) {
		$line = $self->_readline();
		chomp $line;
	}

	until($line =~ /<\/$tag>/) {
		### last if !defined $line;
		# print "line: $line\n";
		# print "tag: $tag\n";
		$line .= $self->_readline();
	}

	if(my ($val) = ($line =~ /(<$tag.*>.*?<\/$tag>)/s)) {
		if($line =~ /<\/$tag>\s*(\w+[\s\w]*?)\s*$/s) {
			$self->_pushback($1)
		}
		return $val;
	}
	
	# Should have returned by now....
	$self->throw("Error in sub _readtag!\n");
}
# ============================================================================================
=head2 _readline
    Title : _readline
    Usage : $self->_readline()
    Function : read one line from stream 
    Return : one string
=cut
# this sub is inherited by SeqIO.pm (ISA SeqIO)
# However, SeqIO does not have _readline defined.
# SeqIO.pm ISA Bio::Root::Root,Bio::Root::IO, Bio::Factory::SequenceStreamI 
# Bio::Root::IO is the module with _readline defined.
sub _readline
{
	my($self) = @_;
	my $line;
	do {
		$line = $self->SUPER::_readline();
	} while(defined($line) and $line =~ /^\s*$/o);

	return $line;
}
# ============================================================================================
=head2 throw
    Title : throw
    Usage : $self->_throw($args)
    Function : throw exception with error msg 
    Return : 
    Args : a string, the error msg from where it happens
=cut
sub throw
{
	my($self, @s) = @_;
	my $string = "[$.]" . join('', @s);
	$self->SUPER::throw($string);
}

1;
