#!/usr/bin/perl
use strict;
use Bio::SeqIO;
use Bio::Tools::GFF;
use File::Basename;
use File::Find;

$| = 1;
my $root = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05';
my $fungi_dir = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI';
my $suffix = '.gbk.gz';
my $gff_suffix = '.gff';
my $genbank_dir = 'genbank_gffs';
my @genbank_files;

my @org_list = qw(
	Apis_mellifera
	Arabidopsis_thaliana
	Canis_familiaris
	D_rerio
	Drosophila_melanogaster
	H_sapiens
	M_musculus
	Pan_troglodytes
	R_norvegicus
);

foreach my $f (@org_list){
	my $dir = $root . '/' . $f;
	print "Looking at $f -> $dir\n";

	my $gb_dir = ensure_gb_gff_dir($dir);

	undef @genbank_files;
	get_genbank_files($dir);
	foreach my $file (@genbank_files){
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
	warn "Getting genbank files from $dir";
	find(\&wanted,$dir);
}

sub wanted {
	push(@genbank_files,$File::Find::name) if ($_ =~ /$suffix$/);
}
