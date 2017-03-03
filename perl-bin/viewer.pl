#!/usr/local/bin/perl -w
use strict;
use Tk;
use Bio::SeqIO;
use Bio::Tk::SeqCanvas;
use Bio::Tools::GFF;

my ($map,$MW) = Begin();
MainLoop;
sub Begin {
	my $sio = Bio::SeqIO->new(	-file => "gunzip -c $ARGV[0] |",
					-format => 'genbank') or die "Error opening $ARGV[0] for reading: $!";
	my $SeqObj = $sio->next_seq();

	# for each GFF file specified add these features to SeqObj
	# If you try and add them later the features do no display properly due to a bug in how features types get defined
	# at present it appears that the feature types are ONLY assigned when the Bio::SeqI object is first handled by SeqCanvas
	# I should probably hit Mark up about this issue at some point
	for(my $i = 1; $i < @ARGV;++$i){
		$SeqObj = add_gff_feats($ARGV[$i],$SeqObj,1);
	}
	my $display_id = $SeqObj->display_id();
	my $MW = MainWindow->new (-title => "Map Of $display_id");
	my $frame = $MW->Frame()->pack(-side => 'top', -fill => 'both');
	my $lbl = $MW->Label()->pack(-side => 'bottom', -fill => 'both');
	my $a_len = 1600;
	my $map = Bio::Tk::SeqCanvas->new(
		$a_len,
		$frame,
		$lbl,
		$SeqObj,
		-orientation => 'horizontal',
#		-orientation => 'vertical',
		label => 'primary_tag',
		width => 6000,
		height => 1000
	);
	return $map,$MW;
}


sub add_gff_feats{
	my $file = shift;
	die "Error no gff file specified" unless defined $file;
	my $SeqObj = shift;
	die "Error SeqObj not defined" unless defined $SeqObj;
	my $swap = shift;

	my $gffio = Bio::Tools::GFF->new(      -file => "<$file",
        	                                        -gff_version => 2) or die "Error opening GFFstream for $file: $!";
	while(defined (my $feat = $gffio->next_feature)){
		if ($swap) {
			my ($source,$primary) = ($feat->source_tag,$feat->primary_tag);
			# swap primary and source tags so that all of the different wavelets and levels come up as different tracks
			$feat->primary_tag($source);
			$feat->source_tag($primary);
		}
		$SeqObj->add_SeqFeature($feat);
	}
	return $SeqObj;
}
