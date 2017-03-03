#!/usr/bin/perl
use strict;
use Bio::SeqIO;
use Bio::Tools::GFF;
use File::Basename;

# find the mean intergenic distance 

$| = 1;
my $root = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05';
my $fungi_dir = '/bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI';
#my $suffix = '.gbk.gz';
my $gb_gff_suffix = '.gbk.gz.gff';
my $wave_gff_suffix = '.gff';
my $genbank_dir = 'genbank_gffs';
my $wavelet_dir = 'wavelet_gffs';
my $binsize = 100;

my %ignored_feats = (
	'gap'			=> 1,
	'misc_difference'	=> 1,
	'misc_feature'		=> 1,
	'source'		=> 1
	
);

my $DEBUG = 1;

my @org_list = qw(
	Arabidopsis_thaliana
	Drosophila_melanogaster
	M_musculus
);
#	D_rerio
#	Apis_mellifera
#	Canis_familiaris
#	H_sapiens
#	Pan_troglodytes
#	R_norvegicus

#	Bos_taurus
#	Caenorhabditis_elegans
#	Gallus_gallus
#	Plasmodium_falciparum

my @fungi_list = qw(
	Saccharomyces_cerevisiae
	Schizosaccharomyces_pombe
);

#	Candida_glabrata_CBS138
#	Cryptococcus_neoformans_var_JEC21
#	Debaryomyces_hansenii_CBS767
#	Encephalitozoon_cuniculi
#	Eremothecium_gossypii
#	Kluyveromyces_lactis_NRRL_Y-1140
#	Saccharomyces_cerevisiae
#	Schizosaccharomyces_pombe
#	Yarrowia_lipolytica_CLIB99



my %accs_2_skip = (
		'rna'		=> 1,
		'protein'	=> 1
);

# handle all of the fungal genomes
foreach my $f (@fungi_list){
	my $dir = $fungi_dir . '/' . $f;
	handle_dir($dir);
}

# handle all of the higher order genomes
foreach my $org (@org_list){
	my $dir = $root . '/' . $org;
	handle_dir($dir);
}

sub handle_dir {
	my $dir = shift;
	print "Looking at $dir\n";

	# get all of the genbank gff files
	# gb_gffs is an arrayref of the filenames
	my $gb_dir = ensure_gb_gff_dir($dir);
	my $gb_gffs = get_gb_gffs($gb_dir);

	my %feat_types;
	foreach my $gb_file (@{$gb_gffs}){
		my ($acc,$path,$suffix) = fileparse($gb_file,$gb_gff_suffix);
		warn "\tLooking at $gb_file" if $DEBUG;
		if ($accs_2_skip{$acc}){
			print "Skipping $gb_file becasuse it is on the do not touch list ($acc)";
			next;
		}
                if ($acc =~ /\_alt\_chr/){
                        print "Skipping $gb_file becasue it is an alternate chromosome\n";
                        next;
                }
		comparative_genomics($gb_file,\%feat_types);
	}

	# simple means
	foreach my $type (sort {$a cmp $b} keys %feat_types){
		if ($feat_types{$type}->{max_bin} >= 1){
			print "$type\n";
			print "\tcount\t",$feat_types{$type}->{count},"\n";
			my $min = 0;
			for(my $i = 0; $i <= $feat_types{$type}->{max_bin};++$i){
				my $max = ($i*$binsize) + $binsize;
				print "\t$min\t$max\t",$feat_types{$type}->{bins}->[$i],"\n";
				$min = $max + 1;
			}
		}
	}

	print "Ignored feature types\n";
	foreach my $type (sort{$a cmp $b} keys %ignored_feats){
		print "\t$type\n";
	}
}

sub comparative_genomics{
	my $gff_file2 = shift;
	my $feat_types = shift;
	my $gff2io = Bio::Tools::GFF->new(	-file => $gff_file2,
						-gff_version => 2) or die "Error opening GFFstream for $gff_file2: $!";

	while(my $f2 = $gff2io->next_feature()){
		if (!($ignored_feats{$f2->primary_tag()})){
			my $len = ($f2->end() - $f2->start()) +1;
			my $bin = int($len / $binsize);
			++$feat_types->{$f2->primary_tag}->{bins}->[$bin];
			$feat_types->{$f2->primary_tag}->{max_bin} = $bin if ($bin > $feat_types->{$f2->primary_tag}->{max_bin});
			++$feat_types->{$f2->primary_tag}->{count};
		}
	}
	$gff2io->close();
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
			($file =~ /\-$acc\.\d+\-.*\.nuc$/)

#			($file =~ /\-$acc\.\d+\-\.nuc$/) or			# lone file
#			($file =~ /\-$acc\.\d+\-[\w\d\_]+.nuc$/) or		# NCBI can add some sort of xref into the file name
#			($file =~ /\-$acc\.\d+\-[\w\d\_]+\-\d+\-\.nuc$/) or	# NCBI can add some sort of xref into the file name
#			($file =~ /\-$acc\.\d+\-\-\d+\-\d+\.nuc$/) or		# multiple fragments
#			($file =~ /\-$acc\.\d+\-[\w\d\_]+\-\d+\-\d\.nuc$/)	# NCBI can add some sort of xref into the file name
		){
			push(@files,"$frag_dir/$file");
		}
	}
	closedir(DIR) or die "Error closing $frag_dir: $!";

	my $length = 0;
	my $nseqs = 0;
	my $nfiles = 0;

	if (!(@files)){
		warn "\tFor some reason there were no files found for $acc in $dir $frag_dir\n" if ($DEBUG);
	}

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

	warn "LENGTH $acc ==> $length" if ($DEBUG);


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
	warn "There are $n feats from the first gff" if ($DEBUG);
	my $n = @{$gff2s};
	warn "There are $n feats from the second gff" if ($DEBUG);

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
		warn "Dist is $dist" if ($DEBUG);
	}elsif(!(defined $dist)){
		warn "Dist is not defined" if ($DEBUG);
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

