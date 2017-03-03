#! /usr/bin/perl
use strict;
use Bio::SeqIO;
#use Bio::Seq::LargeSeq;

$| = 1;
foreach my $dir (@ARGV){
#	warn "Looking at $dir\n";
	print "Looking at $dir\n";
	my $frags = get_frags_from($dir);
	if (defined $frags){
		my $num = @{$frags};
		print "\tThere were $num fragments\n";
		my $num_nucs = count_nucleotides($frags);
		print "\tThere were $num_nucs total nucleotides\n";
	}else{
		print "\tThere are no fragments present\n";
	}
}
exit;

sub count_nucleotides{
	my $frags = shift;
	my $count = 0;
	foreach my $f (@{$frags}){
#		warn "Looking at $f\n";
		my $fastaio = Bio::SeqIO->new(	-file =>"<$f",
# in case there are extremely large fragments (shouldn't happen) use the largefasta libraries
#						-format => 'largefasta') or die "Error opening $f for reading: $!";
						-format => 'fasta') or die "Error opening $f for reading: $!";
		while(my $seq = $fastaio->next_seq()){
			$count += $seq->length();
			undef $seq;
		}
        }
	return $count;
}


sub get_frags_from{
	my $d = shift;
	my @frags;
	my $frag_dir = $d . '/fragments';
	if (-d $frag_dir){
		opendir(DIR,$frag_dir) or die "$frag_dir is a directory but I cannot open it: $!";
		while(defined (my $frag = readdir(DIR)) ){
			next unless ($frag =~ /\.nuc$/);
			push (@frags,"$frag_dir/$frag");
		}
		closedir(DIR) or die "Error closing $frag_dir: $!";
	}else{
		warn "No fragment directory for $d";
	}
	return \@frags;
}
