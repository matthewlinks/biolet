#!/usr/bin/perl
use strict;
use Cwd;

#time ./crunch_capt.sh > /home/mlinks/CVSROOT/bio-wavelet/crunch.log 2>&1

# ordered list of the genomes to process
my @dirs = qw(
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Drosophila_melanogaster/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/D_rerio/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/H_sapiens/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/M_musculus/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/R_norvegicus/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Pan_troglodytes/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Apis_mellifera/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Bos_taurus/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Canis_familiaris/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Encephalitozoon_cuniculi/
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Gallus_gallus/
);

foreach my $d (@dirs){
	handle_dir($d);
}

sub handle_dir{
	my $dir = shift;
	my $starting_dir = getcwd();

	system('date');
	warn "starting $starting_dir";
	chdir($dir) or die "Error changing to $dir";
	warn "now in $dir";
	
	system('make','clean');	
	system('make','chop');
	system('make','-j',3);

	chdir($starting_dir) or die "Error changing to $starting_dir";		
	warn "Now in ",getcwd();
}
