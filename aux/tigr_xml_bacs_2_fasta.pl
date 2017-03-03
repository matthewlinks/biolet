#!/usr/bin/perl -w
use strict;

foreach my $dir (@ARGV){
	process_dir($dir);
}

exit 0;

sub process_dir {
	my $dir = shift;
	opendir(DIR,$dir) or die "Error opening $dir for reading: $!";
	while(defined( my $file = readdir(DIR))){
		if ($file =~ /\.xml?/i){
			process_file($dir,$file);
		}
	}
	closedir(DIR);
}

sub process_file{
	my $dir = shift;
	my $file = shift;
	die "Error lost directory" unless defined $dir;
	die "Error lost filename" unless defined $file;
	print "Parse $dir/$file\n";

	my $file = Bio::SeqIO->new(
}

