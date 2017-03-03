# This Makefile was generated automatically by $0
# date
# user
BASEDIR		= /bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera
CHOP		= /home/mlinks/CVSROOT/bio-wavelet/perl-bin/chop_chromosome.pl
CHOPPEDFILE	= $(FRAGDIR)/.chopped
FRAGSIZE	= 50000 
EXE		= wavelet
FRAGDIR		= $(BASEDIR)/fragments
FRAGMENTS	= $(wildcard $(FRAGDIR)/*.nuc)
DB2_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db2.gff)
DB3_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db3.gff)
DB4_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db4.gff)
DB5_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db5.gff)
DB6_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db6.gff)
DB7_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db7.gff)
DB8_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db8.gff)
DB9_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db9.gff)
DB10_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db10.gff)
DB11_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db11.gff)
DB12_TARGETS	= $(FRAGMENTS:.nuc=.nuc_out_db12.gff)
CHROMOSOMES	= /bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG10.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG11.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG12.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG13.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG14.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG15.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG16.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG1.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG2.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG3.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG4.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG5.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG6.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG7.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG8.fa \
	/bio_data/ftp.ncbi.nih.gov-genomes/Apis_mellifera/Assembled_chromosomes/ame_chrLG9.fa 

# defualt is to make everything
all:	build

# Wavelet analysis targets
DB2_TARGETS:	$(DB2_TARGETS)
DB3_TARGETS:	$(DB3_TARGETS)
DB4_TARGETS:	$(DB4_TARGETS)
DB5_TARGETS:	$(DB5_TARGETS)
DB6_TARGETS:	$(DB6_TARGETS)
DB7_TARGETS:	$(DB7_TARGETS)
DB8_TARGETS:	$(DB8_TARGETS)
DB9_TARGETS:	$(DB9_TARGETS)
DB10_TARGETS:	$(DB10_TARGETS)
DB11_TARGETS:	$(DB11_TARGETS)
DB12_TARGETS:	$(DB12_TARGETS)
# build rules for the gffs
%.nuc_out_db2.gff:	%.nuc
	$(EXE) $< db2 12 1
%.nuc_out_db3.gff:	%.nuc
	$(EXE) $< db3 12 1
%.nuc_out_db4.gff:	%.nuc
	$(EXE) $< db4 12 1
%.nuc_out_db5.gff:	%.nuc
	$(EXE) $< db5 12 1
%.nuc_out_db6.gff:	%.nuc
	$(EXE) $< db6 12 1
%.nuc_out_db7.gff:	%.nuc
	$(EXE) $< db7 12 1
%.nuc_out_db8.gff:	%.nuc
	$(EXE) $< db8 12 1
%.nuc_out_db9.gff:	%.nuc
	$(EXE) $< db9 12 1
%.nuc_out_db10.gff:	%.nuc
	$(EXE) $< db10 12 1
%.nuc_out_db11.gff:	%.nuc
	$(EXE) $< db11 12 1
%.nuc_out_db12.gff:	%.nuc
	$(EXE) $< db12 12 1

# rule for splitting up the chromosomes
chop:	$(CHOPPEDFILE) $(wildcard $(FRAGDIR)/*.nuc)

$(CHOPPEDFILE):
	$(CHOP) -i $(CHROMOSOMES) -o $(FRAGDIR) -f $(FRAGSIZE)
	touch $(CHOPPEDFILE)
	
build:	chop DB2_TARGETS DB3_TARGETS DB4_TARGETS DB5_TARGETS DB6_TARGETS DB7_TARGETS DB8_TARGETS DB9_TARGETS DB10_TARGETS DB11_TARGETS DB12_TARGETS

waveletclean:
	rm -f $(FRAGDIR)/*.nuc_out_db*.gff
chopclean:
	rm -f $(FRAGDIR)/*.nuc
	rm -f $(CHOPPEDFILE)

clean:	waveletclean chopclean

