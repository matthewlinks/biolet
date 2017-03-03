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
		mkdir($target) or warn "Error creating directory $target: $!";
	}
	return $target;
}

sub handle_dir{
	my $dir = shift;
	warn "Making Makefile for $dir";
	# make sure the sub directories are configured
	my $fragment_dir	= ensure_fragments_dir($dir);

	# look for assembled chromosome files
	my $chromosomes = get_assembled_chromosomes($dir);

	if (!(defined $chromosomes > 0)){

		# get all of the chromosomes 
		$chromosomes = get_CHRs($dir);
		
		if (@{$chromosomes} < 1){
			# there was a problem getting the chromosomes from CHR_ directories so let them come from assembled_chromosomes
			if ((-e "$dir/Assembled_chromosomes")and(-d "$dir/Assembled_chromosomes" )){
				# check for an Assembled_chromosomes directory
				# files are .fa and may be compressed
				$chromosomes = get_files_from_dir("$dir/Assembled_chromosomes",'fa');
			}
		}
		if (@{$chromosomes} < 1){
			#check for fna & fa files in current dir
			$chromosomes = get_files_from_dir($dir,'fna');
		}
		if (@{$chromosomes} < 1){
			$chromosomes = get_files_from_dir($dir,'fa');
		}

		if (@{$chromosomes} < 1){
			warn "No chromosomes found for $dir";
			return;
		}
	}
	generate_makefile($dir,$fragment_dir,$chromosomes);
}

sub generate_makefile{
	my $dir = shift;
	die "Error lost directory" unless defined $dir;
	open(MAKE,">$dir/Makefile") or die "Error opening $dir/Makefile for writting: $!";

	my $fragments = shift;
	die "Lost fragment dir" unless defined $fragments;
	my $chrs = shift;
	die "Lost chromosome files" unless (@{$chrs} > 0);

	print MAKE <<EOF;
# This Makefile was generated automatically for $ENV{USER}\@$ENV{HOSTNAME} by $0
# N.B. if you are going to try and parallelize the analysis then you MUST
#	seperate the chop and build makes. Otherwise there will be no targets
# 	to build in parallel. 
#
# So first do the chopping
#	make chop
#
# Then build in parallel (j = num cpus + 1)
#	make build -j 3
BASEDIR		= $dir
CHOP		= $ENV{BIO_WAVELET}/perl-bin/chop_chromosome.pl
FRAGSIZE	= 500000 
EXE		= wavelet
FRAGDIR		= \$(BASEDIR)/fragments
CHOPPEDFILE	= \$(FRAGDIR)/.chopped
EOF
	print MAKE "CHROMOSOMES	= ",$chrs->[0];
	if (@{$chrs} > 1){
		print MAKE "\\\n";
		my $i = 0;
		for($i = 1; $i < (@{$chrs} -1);++$i){
			print MAKE "\t",$chrs->[$i],"\\\n";
		}
		print MAKE "\t",$chrs->[$i],"\n";
	}else{
		print MAKE "\n";
	}
	print MAKE <<EOF;

# defualt is to make everything
all:	build

# build rules for the gffs
%.nuc_out_db2.gff:	%.nuc
	\$(EXE) \$< db2 12 1
%.nuc_out_db3.gff:	%.nuc
	\$(EXE) \$< db3 12 1
%.nuc_out_db4.gff:	%.nuc
	\$(EXE) \$< db4 12 1
%.nuc_out_db5.gff:	%.nuc
	\$(EXE) \$< db5 12 1
%.nuc_out_db6.gff:	%.nuc
	\$(EXE) \$< db6 12 1
%.nuc_out_db7.gff:	%.nuc
	\$(EXE) \$< db7 12 1
%.nuc_out_db8.gff:	%.nuc
	\$(EXE) \$< db8 12 1
%.nuc_out_db9.gff:	%.nuc
	\$(EXE) \$< db9 12 1
%.nuc_out_db10.gff:	%.nuc
	\$(EXE) \$< db10 12 1
%.nuc_out_db11.gff:	%.nuc
	\$(EXE) \$< db11 12 1
%.nuc_out_db12.gff:	%.nuc
	\$(EXE) \$< db12 12 1

# rule for splitting up the chromosomes
chop:	\$(CHOPPEDFILE) \$(wildcard \$(FRAGDIR)/*.nuc)

\$(CHOPPEDFILE):
	- mkdir \$(FRAGDIR)
	\$(CHOP) -i "\$(CHROMOSOMES)" -o \$(FRAGDIR) -f \$(FRAGSIZE)
	sync
	touch \$(CHOPPEDFILE)

build:	chop \$(wildcard \$(FRAGDIR)/*.nuc) \\
	\$(patsubst %.nuc,%.nuc_out_db2.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db3.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db4.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db5.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db6.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db7.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db8.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db9.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db10.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db11.gff,\$(wildcard \$(FRAGDIR)/*.nuc)) \\
	\$(patsubst %.nuc,%.nuc_out_db12.gff,\$(wildcard \$(FRAGDIR)/*.nuc))

chopclean:
#	rm -rf \$(FRAGDIR)
	rm -f \$(CHOPPEDFILE)

clean:	chopclean
EOF
	close MAKE;
	my $mode = 0600;
	chmod $mode, "$dir/Makefile" or die "Error setting permissions of $dir/Makefile to 0600: $!";
}

sub get_assembled_chromosomes{
	my $dir = shift;
	my $ass_dir = $dir . '/Assembled_chromosomes';
	
	my $suffix = 'fa';
	my @files;
	my $num_CHRs = 0;
	if (-d $ass_dir){
		return get_files_from_dir($ass_dir,$suffix);
	}else{
		warn "Cannot open $dir, its not a dir - skipping";
		return;
	}
}

sub get_CHRs{
	my $dir = shift;
	
	my $suffix = '.fna';
	my @files;
	my $num_CHRs = 0;
	if (!(-d $dir)){
		warn "Cannot open $dir, its not a dir - skipping";
		next;
	}

	opendir(DIR, $dir) or die "can't opendir $dir: $!";
	while (defined(my $file = readdir(DIR))) {
		next if ($file =~ /^\./);
		if ($file =~ /^CHR\_(.*)/){
			my $chr = $1;
			warn "Looking in $dir/$file for fna files";
			++$num_CHRs;
			if (-d "$dir/$file"){
				# MUST get both .fa and .fna files
				my $subfiles = get_files_from_dir("$dir/$file",'fa');
				push(@files,@{$subfiles});
				$subfiles = get_files_from_dir("$dir/$file",'fna');
				push(@files,@{$subfiles});
			}else{
				die "Error $dir/$file is not a directory";
			}
		}
	}
	closedir(DIR);
	# handle the case where there are NO CHR_ dirs but there are .fna files in the top level directory
	# this happens for rabbit
	if ($num_CHRs == 0){
		# there were no CHR sub directories so then use .fna files in the top level directory
		my $topfiles = get_files_from_dir($dir,'fna');
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
	opendir(SDIR, $dir) or die "can't opendir $dir: $!";
	while (defined(my $file = readdir(SDIR))) {
		next if ($file =~ /^\./);
		if ($file =~ /\.$suffix$/){
			push(@files,"$dir/$file");
		}elsif($file =~ /.*\.$suffix\.gz$/){
			# don't worry about uncompressing the file chop chromosome should be able to do that on its own
			push(@files,"$dir/$file");
		}
	}
	closedir(SDIR);
	return \@files;
}

