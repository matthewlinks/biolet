#!/usr/bin/perl -w
use strict;
foreach my $dir (@ARGV){
	handle_dir($dir);
}
exit 0;


###############
# Subroutines #
###############

sub ensure_fragments_dir{
	my $dir = shift;
	return _ensure_dir($dir,'fragments');
}

sub ensure_wavelet_dir{
	my $dir = shift;
	return _ensure_dir($dir,'bio-wavelet');
}

sub _ensure_dir{
	my $dir = shift;
	die "Error lost directory" unless defined $dir;
	my $sub = shift;
	die "Error lost sub-directory" unless defined $dir;
	my $target = $dir . '/' . $sub;
	if (-e $target){
		die "Error $target exists and its not a directory" if (!(-d $target));
	}else{
		mkdir($target) or die "Error creating directory $target: $!";
	}
	return $target;
}


sub handle_dir{
	my $dir = shift;
	warn "Making script for $dir";
	# make sure the sub directories are configured
	my $fragment_dir	= ensure_fragments_dir($dir);
	my $wavelet_dir		= ensure_wavelet_dir($dir);

	# get all of the chromosomes 
	my $chromosomes;

	if ((-e "$dir/Assembled_chromosomes")and(-d "$dir/Assembled_chromosomes" )){
		# check for an Assembled_chromosomes directory
		# files are .fa and may be compressed
		$chromosomes = get_files_from_dir("$dir/Assembled_chromosomes",'.fa');
	}else{
		# there should be /^CHR_.*/ .. whatever directories
		# files are .fna and could be compressed
		$chromosomes = get_CHRs($dir);
	}

	generate_script($dir,$fragment_dir,$wavelet_dir,$chromosomes);
}

sub generate_script{
	my $dir = shift;
	die "Error lost directory" unless defined $dir;
	open(SCRIPT,">$dir/.bio-wavelet.pl") or die "Error opening $dir/.bio-wavelet.pl for writting: $!";

	my $fragments = shift;
	die "Lost fragment dir" unless defined $fragments;
	my $wavelet = shift;
	die "Lost wavelet dir" unless defined $wavelet;
	my $chrs = shift;
	die "Lost chromosome files" unless (@{$chrs} > 0);

	print SCRIPT <<EOF;
#!/usr/bin/perl -w
use strict;
my \$fragments = '$fragments';
my \@chromosomes = qw (
EOF
	foreach my $c (sort @{$chrs}){
		print SCRIPT "\t$c\n";
	}
	print SCRIPT <<EOF;
);
my \$fragment_size	= 500000;
my \$chop		= "\$ENV{BIO_WAVELET}/perl-bin/chop_chromosome.pl";
my \$wavelet 		= "\$ENV{BIO_WAVELET}/perl-bin/wavelet_dir";

# only run if there is NOT a file already in place
my \$lock_file = '$dir/.bio-wavelet-lock';
if (-e "\$lock_file"){
	die "There is already a file \$lock_file which indicates that another process is running or has already finished --- ABORT\\n";
}else{
	open(LOCKFILE,">\$lock_file") or die "Error opening \$lock_file for writting: \$!";
	print LOCKFILE "\$\$\\n";
	close LOCKFILE or die "Error closing \$lock_file for writting: \$!";
}

foreach my \$chr (sort \@chromosomes){
	print "Chopping Chromosome \$chr\\n";
	system(\$chop,\$chr,\$fragment_size,\$fragments);
}

print "Wavelet analysis of \$fragments\\n";

system(\$wavelet,\$fragments);

exit 0;

EOF
	close SCRIPT;
	my $mode = 0700;
	chmod $mode, "$dir/.bio-wavelet.pl" or die "Error setting permissions of $dir/.bio-wavelet to 0700: $!";

}
sub get_CHRs{
	my $dir = shift;
	
	my $suffix = '.fna';
	my @files;
	my $num_CHRs = 0;
	opendir(DIR, $dir) or die "can't opendir $dir: $!";
	while (defined(my $file = readdir(DIR))) {
		next if ($file =~ /^\./);
		if ($file =~ /^CHR\_(.*)/){
			my $chr = $1;
			++$num_CHRs;
			if (-d "$dir/$file"){
				my $subfiles = get_files_from_dir("$dir/$file",'.fna');
				push(@files,@{$subfiles});
			}else{
				die "Error $dir/$file is not a directory";
			}
		}
	}
	
	# handle the case where there are NO CHR_ dirs but there are .fna files in the top level directory
	# this happens for rabbit
	if ($num_CHRs == 0){
		# there were no CHR sub directories so then use .fna files in the top level directory
		my $topfiles = get_files_from_dir($dir,'.fna');
		push(@files,@{$topfiles});
	}

	return \@files;
}

sub get_files_from_dir{
	my $dir = shift;
	die "Error no directory specified" unless defined $dir;
	my $suffix = shift;
	die "Error no suffix specified" unless defined $suffix;
	
	my @files;
	opendir(DIR, $dir) or die "can't opendir $dir: $!";
	while (defined(my $file = readdir(DIR))) {
		next if ($file =~ /^\./);
		if ($file =~ /$suffix$/){
			push(@files,"$dir/$file");
		}elsif($file =~ /(.*)$suffix\.gz/){
			my $base = $1;
			system('gunzip',"$dir/$file");
			my $target = $dir . '/' . $base . $suffix;
			push(@files,$target);
		}
	}
	closedir(DIR);
	return \@files;
}


