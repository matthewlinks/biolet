#!/usr/bin/perl
use strict;
use Bio::SeqIO;
use Bio::Tools::GFF;
use File::Basename;

$| = 1;
my $fungi_dir = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI';
my $suffix = '.gbk.gz';
my $gff_suffix = '.gff';
my $genbank_dir = 'genbank_gffs';


my @fungi_list = qw(
	Candida_glabrata_CBS138
	Cryptococcus_neoformans_var_JEC21
	Debaryomyces_hansenii_CBS767
	Encephalitozoon_cuniculi
	Eremothecium_gossypii
	Kluyveromyces_lactis_NRRL_Y-1140
	Saccharomyces_cerevisiae
	Schizosaccharomyces_pombe
	Yarrowia_lipolytica_CLIB99
);

# ignored due to some prior handling problem
#
#Aspergillus_nidulans_FGSC_A4
#Gibberella_zeae_PH-1
#Magnaporthe_grisea_70-15
#Neurospora_crassa
#Yarrowia_lipolytica

foreach my $f (@fungi_list){
	my $dir = $fungi_dir . '/' . $f;
	print "Looking at $f -> $dir\n";

	my $gb_dir = ensure_gb_gff_dir($dir);

	my $files = get_genbank_files($dir);
	foreach my $file (@{$files}){
		print "\t$file\n";
		if ($file =~ /\.gz$/){
			my $gbio = Bio::SeqIO->new(	-file   => "gunzip -c $file |",
							-format => 'genbank') or die "Error opening gzip'd file $file: $!";
			my $base = basename($file);
#			($base, $dir, $ext) = fileparse($path);
			my $gff_file = $dir . '/' . $genbank_dir . '/' . $base . $gff_suffix;

			my $out = Bio::Tools::GFF->new(	-gff_version => 2,
							-file => ">$gff_file"
			) or die "Error opening $gff_file for writting: $!";
			
			while(my $seq = $gbio->next_seq()){
				my @allfeatures = $seq->all_SeqFeatures();
				foreach my $f (@allfeatures){
					$out->write_feature($f);
				}
			}
		}else{
			die "Error expecting a compressed file and got $file";
		}
				

	}
}
	
sub ensure_gb_gff_dir{
	my $d = shift;
	my $gb_gff_dir = $d . '/' . $genbank_dir;
	if (!(-d $gb_gff_dir)){
		mkdir($gb_gff_dir) or die "Error creating $gb_gff_dir: $!";
	}
	return $gb_gff_dir;
}

sub get_genbank_files{
	my $dir = shift;
	my @files;
	opendir(DIR,$dir) or die "Error opening $dir for reading: $!";
	while(defined( my $file = readdir(DIR))){
		next unless ($file =~ /$suffix$/);
		push(@files,"$dir/$file");
	}
	closedir(DIR) or die "Error closing $dir: $!";

	return \@files;
}


