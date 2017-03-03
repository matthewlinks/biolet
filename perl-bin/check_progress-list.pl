#!/usr/bin/perl 
use strict;
$| =1;

my $exe = '/home/mlinks/CVSROOT/bio-wavelet/perl-bin/check_progress.pl';

my @list_folders = qw(
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI
	/bio_data/ftp.ncbi.nih.gov-genomes/21July05
);

foreach my $dirname (@list_folders){
	opendir(DIR, $dirname) or next;
	print "$dirname was a directory\n";
	while (defined(my $file = readdir(DIR))) {
		next if ($file =~ /^\./);
		if (-d "$dirname/$file"){
			handle_dir("$dirname/$file");
		}else{
			print "\tSkipping $dirname/$file because it is not a directory\n";
		}
	}			
	closedir(DIR);
}




#my @dirs = qw(
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Arabidopsis_thaliana
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Saccharomyces_cerevisiae
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Schizosaccharomyces_pombe
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Candida_glabrata_CBS138
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Cryptococcus_neoformans_var_JEC21
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Debaryomyces_hansenii_CBS767
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Yarrowia_lipolytica_CLIB99
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Kluyveromyces_lactis_NRRL_Y-1140
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Eremothecium_gossypii
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Encephalitozoon_cuniculi        
#	/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Drosophila_melanogaster/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/D_rerio/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/H_sapiens/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/M_musculus/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/R_norvegicus/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Pan_troglodytes/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Apis_mellifera/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Bos_taurus/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Canis_familiaris/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Encephalitozoon_cuniculi/
#        /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Gallus_gallus/
#);
#
#foreach my $d (@dirs){
#        handle_dir($d);
#}

sub handle_dir {
	my $dir = shift;
	print "Checking $dir\n";
	$dir .= '/fragments';
	if (-d $dir){
		system($exe,$dir);
	}else{
		print "\tThere was not a fragment dir $dir -> skipping\n";
	}
}

