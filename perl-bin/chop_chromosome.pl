#!/usr/bin/perl -w
use strict;
use Getopt::Long;
use Bio::SeqIO;
use Bio::Seq::LargeSeq;
use Bio::Seq::LargePrimarySeq;
use Bio::Seq::LargeLocatableSeq;

# need to change this to take a list of chromosomes to chop up

die "Usage $0 fasta_file fragment_size out_dir initial_offset" unless @ARGV > 0;

my (@files,$frag_len,$outdir,$offset,$fs);
my @options = (
	'i=s',		\$fs,	# \s+ seperated quoted list
	'f=s',		\$frag_len,
	'o=s',		\$outdir,
	'off=s',	\$offset
);
&GetOptions(@options);

die "Error you must specify a fragment length -f" unless ($frag_len > 0);
die "Error you must specify an ouput directory -o" unless defined $outdir;
$offset = 0 unless defined $offset;
# files are specified on the command line like -i "fileA fileB ..."
@files = split(/\s+/,$fs);
die "Error no files specified for splitting" unless (@files > 0);

foreach my $file (@files){
	warn "Chopping $file";

	my $fastaio;
	if ($file =~ /.*\.gz$/){
		# open this using gunzip
		# could be a problem if gunzip is not in path
      		$fastaio = Bio::SeqIO->new(-file   => "gunzip -c $file |",
						-format => 'largefasta') or die "Error opening gzip'd file $file: $!";
	}else{
		# because the 'expected' usage is to be parsing assembled chromosomes you MUST be prepared for large files
		# therefore use BioPerl's LargeSeq routines
		$fastaio = Bio::SeqIO->new(	-file =>"<$file",
					-format => 'largefasta') or die "Error opening $ARGV[0] for reading: $!";
	}
	
	while(my $seq = $fastaio->next_seq()){
		if ($seq->length() <= $frag_len){
			my $file = write_new_seq($outdir,$seq);
			die "Error writting seq (",$seq->display_id(),")" unless defined $file;
		}else{
			fragment_seq($outdir,$seq,$frag_len,$offset);
		}	
	} 
}
exit;


sub write_new_seq{
	my $outdir = shift;
	my $sseq = shift;
	my $name = $sseq->display_id();
	$name =~ s/\|/-/g;
	# stopped using the display_id straight up because of the hassle it poses for shell level handling of the file
#	my $newfile = $outdir . '/' . $sseq->display_id() . '.nuc';
	my $newfile = $outdir . '/' . $name . '.nuc';
	my $outio = Bio::SeqIO->new(	-file => ">$newfile",
					-format => 'fasta') or die "Error opening $newfile for writting: $!";
	$outio->write_seq($sseq);
	$outio->close;
	return $newfile;
}

sub fragment_seq{
	my $outdir = shift;
	my $seq = shift;
	my $frag_len = shift;
	my $offset = shift;
	my $start;
	($offset > 0) ? $start = $offset : $start = 1;

	while ($start < $seq->length()){
		my $id = $seq->display_id();
		my $end;
		if ((($start + $frag_len) -1 ) > $seq->length()){
			$end = $seq->length();
		}else{
			$end = ($start + $frag_len) - 1;
		}
#		$id .= "(start,end)($start,$end)";
		$id .= "-$start-$end";
		my $sseq = Bio::Seq->new(	-seq => $seq->subseq($start,$end),
						-id => $id);
		my $file = write_new_seq($outdir,$sseq);
		die "Error writting seq (",$sseq->display_id(),")" unless defined $file;
		$start = $end + 1;
	}
}
