#!/usr/bin/perl
use strict;
use Bio::SeqIO;
use Bio::Tools::GFF;
use File::Basename;

$| = 1;
my $fungi_dir = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI';
#my $suffix = '.gbk.gz';
my $gb_gff_suffix = '.gbk.gz.gff';
my $wave_gff_suffix = '.gff';
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
my @ranges = qw(
	2
	4
	8
);

# ignored due to some prior handling problem
#
#Aspergillus_nidulans_FGSC_A4
#Gibberella_zeae_PH-1
#Magnaporthe_grisea_70-15
#Neurospora_crassa
#Yarrowia_lipolytica

my %genbank_feat_types;

foreach my $f (@fungi_list){
	my $dir = $fungi_dir . '/' . $f;
	print "Looking at $f -> $dir\n";


	# get all of the genbank gff files
	# gb_gffs is an arrayref of the filenames
	my $gb_dir = ensure_gb_gff_dir($dir);
	my $gb_gffs = get_gb_gffs($gb_dir);

	# get all of the wavelet gff files
	# N.B acc2waveGff is a hash on the accession to the filename of the coresponding wavelet gff
	my $wave_dir = ensure_wavelet_dir($dir);
	my $acc2waveGff = get_wave_gffs($wave_dir);

	my (@counts,@means);

	foreach my $gb_file (@{$gb_gffs}){
		my ($acc,$path,$suffix) = fileparse($gb_file,$gb_gff_suffix);
		my $seq_len = get_seq_length($acc,$dir);
		my ($mean,$count) = comparative_genomics($acc,$acc2waveGff->{$acc},$gb_file,$seq_len);
		push(@counts,$count);
		push(@means,$mean);
	}

	my $total_count = 0;
	my $floating_mean = 0;
	for(my $i = 0; $i < @counts;++$i){
		$total_count += $counts[$i];
		$floating_mean += ($counts[$i] * $means[$i]);
	}

	print "There were $total_count genes with a mean distance of ",sprintf("%0.2f",$floating_mean/$total_count),"\n";

}

sub comparative_genomics{
	my $acc = shift;
	my $gff_file1 = shift;
	my $gff_file2 = shift;
	my $seq_len = shift;

	my %allowed_feats = (	gene	=> 1
	);
	my %ignored_feats;

	my $gff1io = Bio::Tools::GFF->new(	-file => $gff_file1,
						-gff_version => 2) or die "Error opening GFFstream for $gff_file1: $!";
	my $gff2io = Bio::Tools::GFF->new(	-file => $gff_file2,
						-gff_version => 2) or die "Error opening GFFstream for $gff_file2: $!";

	# the main purpose here is to look at the significance of the features in gff_file1 w.r.t. those features in gff_file2
	# to that end we load all of gff_file1 features into memory 
	# N.B. in the belief that the features being considered are the smaller of the two sets
	my @gff1_feats;
#	while(my $f1 = $gff1io->next_feature()){
#		push(@gff1_feats,$f1);
#	}
#	$gff1io->close();
#	warn "Loaded all features from $gff_file1 into memory\n";
#	@gff1_feats = sort sort_feats_by_start @gff1_feats;

	my @gff2_feats;
	my $count_possible = 0;
	while(my $f2 = $gff2io->next_feature()){
		if ($allowed_feats{$f2->primary_tag()}){
			push(@gff2_feats,$f2);
			++$count_possible;
		}else{
			++$ignored_feats{$f2->primary_tag()};
		}
	}
	warn "Loaded all features from $gff_file2 into memory\n";
#	@gff2_feats = sort sort_feats_by_start @gff2_feats;
	$gff2io->close();
#
#	print "The following features were ignored\n";
#	foreach my $f (keys %ignored_feats){
#		print "\t$f => ",$ignored_feats{$f},"\n";
#	}

	# what is the average intergenic distance 
	my $mean_dist = $seq_len / $count_possible;
	return (sprintf("%0.2f",$mean_dist),$count_possible);
#	foreach my $r (@ranges){
#		my $range = $mean_dist / $r ;
#		my $range = $mean_dist;
#		warn "$r\n";
#		print "$range: Looking for wavelet features within ",sprintf("%0.2f",$range),"\n";
#
#		# get the closest feats 
#		my ($gene_proxim,$wave_types) = get_gene_proximity(\@gff1_feats,\@gff2_feats,$range);
#	
#		# print the findings
#		interpret_results(\@gff1_feats,\@gff2_feats,$gene_proxim,$count_possible,$wave_types,$seq_len);
##	}

}

sub interpret_results{
	my $gff1 = shift;
	my $gff2 = shift;
	my $proxim = shift;
	my $c_pos = shift;
	my $wave_types = shift;
	my $seq_len = shift;

	my %mincounts;
	my %types;
	my $unmatched = 0;
	my %distinct_2nd;

	for(my $i = 0; $i < @{$gff1};++$i){
		if (defined ( $proxim->{$i}->{min} )){
			++$mincounts{$proxim->{$i}->{min}};
			++$types{$gff2->[$proxim->{$i}->{feat}]->primary_tag()};
			++$distinct_2nd{$proxim->{$i}->{feat}};
		}else{
			++$unmatched;
		}
	}
	
	my $num = @{$gff1};
	print "There were $num features\n";
	print "There were ",($num - $unmatched)," features matched\n";
	print "percent matching ",sprintf("%0.2f",((($num -$unmatched)/$num)*100)),"\n";
	print "There were ",$unmatched," features unmatched\n";
	print "percent not matching ",sprintf("%0.2f",(($unmatched/$num)*100)),"\n";

#	print "Distinct features from the 2nd gff file which were hit within reange";
#	print "\tfeature index\t count\n";
	my $c = 0;
	foreach my $e (sort {$a <=> $b} keys %distinct_2nd){
#		print "\t$e\t",$distinct_2nd{$e},"\n";
		++$c;
	}
	print "There were $c distinct features hit from the 2nd gff\n";
	print "percentge hit ",sprintf("%0.2f",(($c/$c_pos)*100)),"\n";

	my $bin_frac = 16;
	my $mean_dist = $seq_len / $c_pos;
	my $bin_size = int($mean_dist / $bin_frac);
	my %bins;

	print "Proximity frequencies\n";
	print "\tDistance (bps)\tCount\n";
	foreach my $e (sort {$a <=> $b} keys %mincounts){
		print "\t$e\t",$mincounts{$e},"\n";
		my $bin = int ($e / $bin_size);
		$bins{$bin} += $mincounts{$e};	
	}
	
	print "Bin stats for bin_size = $bin_size\n";
	print "MIN\tMAX\tCENTER\tCOUNT\tPERCENTAGE\n";

	my ($min,$max) = (0,$bin_size);
	for(my $i = 0;$i <= $bin_frac; ++$i){
		my $n = $bins{$i};
		my $per = sprintf("%0.2f",($n/$num)*100);
		my $cent = $min + (($max-$min) / 2);

		print "$min\t$max\t$cent\t$n\t$per\n";
		$min += $bin_size;
		$max += $bin_size;
	}

	my $n_overlaps = $mincounts{0};	
	if ($n_overlaps > 0){
		print "Wavelet type bias to overlaps\n";
		foreach my $wave (sort keys %{$wave_types->{overlap}} ){
				print "\t$wave\n";
				my $sub = 0;
			foreach my $level (sort keys %{$wave_types->{overlap}->{$wave}}){
				my $n = $wave_types->{overlap}->{$wave}->{$level};
				$sub += $n;
				print "\t\t$level\t$n\t",sprintf("%0.2f",($n/$n_overlaps)*100),"\n";
			}
			print "\t\tTotal\t$sub\t",sprintf("%0.2f",($sub/$n_overlaps)*100),"\n";
		}
	}

	# if there is a bias in the representation of overlaps then we could also look at distributions against all ranges
	#push(@{$wavelet_types{in_range}->{$wavelet}->{$level}},$min_dist);



#	print <<EOF;
#matched feature Type counts
#N.B. This is unlikely going to be anything interesting unless you are using a pattern to match a series of feature types
#	Feature Type	Count
#EOF
#	foreach my $e (keys %types){
#		print "\t$e\t$types{$e}\n";
#	}
#	
}

sub get_seq_length{
	my $acc = shift;
	my $dir = shift;

	my $frag_dir = $dir . '/fragments';

	my @files;

	opendir(DIR,"$frag_dir") or die "Error opening $frag_dir: $!";
	while(defined (my $file = readdir(DIR))){
		if (
			($file =~ /\-$acc\.\d+\-\.nuc$/) or	 	# lone file
			($file =~ /\-$acc\.\d+\-\-\d+\-\d+\.nuc$/)	# multiple fragments
		){
			push(@files,"$frag_dir/$file");
		}
	}
	closedir(DIR) or die "Error closing $frag_dir: $!";

	my $length = 0;
	my $nseqs = 0;
	my $nfiles = 0;

#	print "$acc\n";
	foreach my $file (@files){
#		print "\t$file\n";
		++$nfiles;
		my $seqio = Bio::SeqIO->new(	-file => $file,
						-type => 'fasta') or die "Error opening $file for reading: $!";
		while(my $seq = $seqio->next_seq()){
			++$nseqs;
			$length += $seq->length();
		}
#		$seqio->close() or die "Error closing seqio: $!";
	}

	if ($nseqs != $nfiles){
		die "Error nseqs is not the same as nfiles ($nseqs <=> $nfiles)";
	}

	return $length;
}


sub get_gene_proximity{
	my $first = shift;
	my $second = shift;
	my $range = shift;
	return get_proximity($first,$second,'gene',$range);
}

sub get_proximity{
	my $gff1s = shift;
	my $gff2s = shift;
	my $f_type = shift;
	my $range = shift;
	die "Error you must specify a range limit >= 0" unless $range >= 0;

	my $n = @{$gff1s};
	warn "There are $n feats from the first gff";
	my $n = @{$gff2s};
	warn "There are $n feats from the second gff";

	my %wavelet_types;

	my %gff1_matches;
	for( my $i = 0;$i < @{$gff1s};++$i){
		my $f1 = $gff1s->[$i];
		my $matched = 0;
		my $min_dist;
		my $min_feat;
		for(my $j = 0; $j < @{$gff2s};++$j){
			my $f2 = $gff2s->[$j];
	
			# if f_type was specified then only look for features matching that type
			next if ((defined $f_type) and ($f2->primary_tag() !~ /$f_type/));

			# skip this feature if we're sure its not going to hit
			next if (
				(abs($f2->start - $f1->start) > $range)
					and
				(abs($f2->start - $f1->end) > $range)
					and
				(abs($f1->start - $f2->start) > $range)
					and
				(abs($f1->start - $f2->end) > $range)
			);
			
			my $dist = min_match($f1,$f2,$range);
			die "Error got undef checking minimum match when there should have been some reason for the match" unless defined $dist;

			if ($dist == 0){
				# the features overlap
				# doesn't matter how	
				$matched = 1;
				# record an overlap
				$min_dist = 0;
				$min_feat = $j;
				last; # match can't get any better
			}else{
				# the features hit within $range of each other
				# check to see if this hit is better than the previous ones
				unless (($matched)and($dist >= $min_dist)){
					$min_dist = $dist;
					$min_feat = $j;
				}
			}
		}
		if ($matched){
			my ($wavelet,$level);
			if ($f1->primary_tag =~ /^(db\d+)\:(\d+)$/){
				($wavelet,$level) = ($1,$2);
				push(@{$wavelet_types{in_range}->{$wavelet}->{$level}},$min_dist);
				if ($min_dist == 0){
					++$wavelet_types{overlap}->{$wavelet}->{$level};
				}
			}else{
				die "Error cannot parse out the wavelet and lavel data from ",$f1->primary_tag;
			}
			$gff1_matches{$i}->{min} = $min_dist;
			$gff1_matches{$i}->{feat} = $min_feat;
		}
	}
	return (\%gff1_matches,\%wavelet_types);
}

sub min_match {
	my $f1 = shift;
	die "Error lost first feature" unless defined $f1;
	my $f2 = shift;
	die "Error lost first feature" unless defined $f2;
	my $max_range = shift;
	die "Error no maximum range specified" unless defined $max_range;

	my $dist;

	if(
		# if f1 falls within f2
		(($f1->start >= $f2->start) and ($f1->start <= $f2->end))
			or 
		(($f1->end >= $f2->start) and ($f1->end <= $f2->end))
			or
		# f2 falls within f1
		(($f2->start >= $f1->start) and ($f2->start <= $f1->end))
			or 
		(($f2->end >= $f1->start) and ($f2->end <= $f1->end))
	){
		# f1 hits within f2 OR f2 hits within f1
		# doesn't matter how	
		$dist = 0;

#		warn "(",$f1->start,",",$f1->end,") <=> (",$f2->start,",",$f2->end,")";
	}elsif(
		(($f2->start - $f1->end) < $max_range)
			or
		(($f1->start - $f2->end) < $max_range)
	){
		$dist = min(($f2->start - $f1->end),($f1->start - $f2->end));
	}else{
		# f1 is entirely 5' of f2
		# or f1 is entirely 3' of f1
		# doesn't matter which these are both equally bad
		undef $dist;
	}

	if ($dist > 0){
		warn "Dist is $dist";
	}elsif(!(defined $dist)){
		warn "Dist is not defined";
	}

	return $dist;
}

sub min{
	my $min = $_[0];
	for (my $i = 1;$i < @_;++$i){
		if ($min > $_[$i]){
			$min = $_[$i];
		}
	}
	return $min;
}

sub sort_feats_by_start{
	# This orders the features on the basis of start followed by end
	# N.B. This will likely break for - strand features coming from sources OTHER than Genbank
	# As of 16Sept05 the complement() function in genbank flat files is interpreted to only change the strand designation using Bio::SeqIO
	# This means that ANY genbank derived feature has start and stop coordinates relative to the sense coordinates REGARDLESS of which 
	# strand they are on
	#
	# IF YOU USE THIS ROUTINE ON ANY FEATURES OTHER THAN GENBANK OR WAVELET MAKE SURE YOU ARE CONFIDENT THAT THE COORDINATES FOR ANTISENSE FEATURES
	# ARE BEING HANDLED APPROPRIATELY
	# 
	# END OF WARNING

	if ($a->start() == $b->start()){
		return ($a->end() <=> $b->end());
	}else{
		return ($a->start <=> $b->start());
	}
}

sub ensure_wavelet_dir{
	my $d = shift;
	my $dir = $d . '/' . $wavelet_dir;
	if (!(-d $dir)){
		mkdir($dir) or die "Error creating $dir: $!";
	}
	return $dir;
}

sub get_wave_gffs{
	my $dir = shift;
	my %files;
	opendir(WAVEDIR,$dir) or die "Error opening $dir: $!";
	while(defined(my $file = readdir(WAVEDIR))){
		next unless ($file =~ /\.gff$/);
		my ($base) = fileparse($file,$wave_gff_suffix);
		$files{$base} = "$dir/$file";
	}
	closedir(WAVEDIR) or die "Error closing $dir: $!";
	return \%files;
}
	
sub ensure_gb_gff_dir{
	my $d = shift;
	my $gb_gff_dir = $d . '/' . $genbank_dir;
	if (!(-d $gb_gff_dir)){
		mkdir($gb_gff_dir) or die "Error creating $gb_gff_dir: $!";
	}
	return $gb_gff_dir;
}

sub get_gb_gffs{
	my $dir = shift;
	my @files;
	opendir(GBDIR,$dir) or die "Error opening $dir: $!";
	while(defined(my $file = readdir(GBDIR))){
		next unless ($file =~ /\.gff$/);
		push(@files,"$dir/$file");
	}
	closedir(GBDIR) or die "Error closing $dir: $!";
	return \@files;
}

