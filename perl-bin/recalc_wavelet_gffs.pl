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
my $wavelet_dir = 'wavelet_gffs';

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
	my $frag_dir = $dir . '/' . 'fragments';

	my $wave_dir = ensure_wavelet_dir($dir);

	my $files = get_wavelet_files($frag_dir);
	foreach my $file (@{$files}){
		print "\t$file\n";

		if (-z $file){
			warn "$file has size 0 so skipping";
			next;
		}

		my $offset = 0;
		my $max;
		if ($file =~ /(\d+)\-(\d+)\.nuc_out_db\d+\.gff$/){
			# this file has an offset
			$offset = $1;
			$max = $2;
			print "\tOFFSET = $offset MAX = $max\n";
		}else{
			print "\tNO OFFSET\n";
		}

		open(WAVE,"<$file") or die "Error opening $file for reading: $!";
		my $line = <WAVE>;
		chomp $line;

		die "Error lost first line of file $file" unless defined $line;
		my @data = split(/\t/,$line);
		my $acc = parse_acc($data[0],$offset);
		my $wave_gff = $wave_dir . '/' . $acc . $gff_suffix;
		open(WAVE_GFF,">>$wave_gff") or die "Error opening $wave_gff for appending: $!";

		write_gff(\*WAVE_GFF,\@data,$acc,$offset,$max);

		# # # # # #
		while(defined ($line = <WAVE>)){
			chomp $line;
			@data = split(/\t/,$line);
			my $new_acc = parse_acc($data[0],$offset);
			die "Error accessions don't match ($acc,$new_acc)" unless ($acc == $new_acc);
			write_gff(\*WAVE_GFF,\@data,$acc,$offset,$max);
		}
		close(WAVE_GFF) or die "Error closing $wave_gff: $!";
	}
}

sub write_gff{
	my $fh = shift;
	my $data = shift;
	my $acc = shift;
	my $offset = shift;
	my $max = shift;
	if ($offset > 0){
		die "Error max value is messed up" unless defined $max;
		die "Error start (",$data->[3],") is going to be greater that $max if we add offset $offset" 
			if (($offset + $data->[3] - 1) > $max);
		die "Error end (",$data->[4],") is going to be greater that $max if we add offset $offset" 
			if (($offset + $data->[4] - 1) > $max);
		my $line = $acc . "\t" . $data->[1] . "\t" . $data->[2] . "\t" . ($offset + $data->[3] - 1) . "\t" . ($offset + $data->[4] - 1) . 
			"\t" . $data->[5] . "\t" . $data->[6] . "\t" . $data->[7];
		print $fh "$line\n";
	}else{
		my $line = $acc . "\t" . $data->[1] . "\t" . $data->[2] . "\t" . $data->[3] . "\t" . $data->[4] . 
			"\t" . $data->[5] . "\t" . $data->[6] . "\t" . $data->[7];
		print $fh "$line\n";	
	}
}

sub parse_acc{
	my $line = shift;
	my $offset = shift;
	my $acc;
	if ($offset > 0){
		if ($line =~ /\|([\w\d\_]+)\.\d+\|\-(\d+)\-\d+$/){
			$acc = $1;	
			my $noff = $2;
			die "Error the offsets don't line up ($offset,$noff)" unless ($offset == $noff);
		}else{
			die "Error can't parse $line $offset";
		}
	}else{
		if ($line =~ /\|([\w\d\_]+)\.\d+\|$/){
			$acc = $1;
		}else{
			die "Error can't parse $line 2";
		}
	}
	return $acc;
}
	
sub ensure_gb_gff_dir{
	my $d = shift;
	my $gb_gff_dir = $d . '/' . $genbank_dir;
	if (!(-d $gb_gff_dir)){
		mkdir($gb_gff_dir) or die "Error creating $gb_gff_dir: $!";
	}
	return $gb_gff_dir;
}
sub ensure_wavelet_dir{
	my $d = shift;
	my $dir = $d . '/' . $wavelet_dir;
	if (!(-d $dir)){
		mkdir($dir) or die "Error creating $dir: $!";
	}
	return $dir;
}

sub get_wavelet_files{
	my $dir = shift;
	my @files;
	opendir(DIR,$dir) or die "Error opening $dir for reading: $!";
	while(defined( my $file = readdir(DIR))){
		next unless ($file =~ /_out_db\d+\.gff$/);
		push(@files,"$dir/$file");
	}
	closedir(DIR) or die "Error closing $dir: $!";

	return \@files;
}


