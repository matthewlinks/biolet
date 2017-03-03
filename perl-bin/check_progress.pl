#!/usr/bin/perl -w
use strict;
my $fragments = $ARGV[0];
die "Error you must specify the fragment directory" unless defined $fragments;

# config
my $num_wavelets = 11;
my $nuc_ext = 'nuc';
my $gff_ext = 'gff';

foreach my $fragments (@ARGV){
	my $num_frags = 0;
	my $num_gff = 0;
	my $other_files = 0;
	opendir(DIR, $fragments) or die "can't opendir $fragments: $!";
	while (defined(my $file = readdir(DIR))) {
		next if ($file =~ /^\./);
		if ($file =~ /\.$nuc_ext$/){
			++$num_frags;
		}elsif($file =~ /\.$gff_ext$/){
			++$num_gff;
		}else{
			++$other_files;
		}
	}
	closedir(DIR);
	
	die "Error the number of fragments was $num_frags" unless ($num_frags > 0);
	
	my $num_exp_gff = $num_wavelets * $num_frags;
	my $perc_comp = sprintf("%0.2f",(($num_gff/$num_exp_gff)*100));
	
	print <<EOF;
There are $num_frags fragments
There are $num_exp_gff gff files expected
There are $num_gff gff files 
Percent complete is $perc_comp %
EOF
}

exit;
