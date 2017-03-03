### Full includes ###
# make sure this points to your matlab installation
#MATLABDIR = /usr/local/matlab704
#MATLABDIR = /usr/local/matlab6p5
# on Plato
MATLABDIR = /cm/shared/apps/matlab/R2013a

INCLUDES	= -I $(MATLABDIR)/toolbox/wavelet/wavelet/ -I $(MATLABDIR)/toolbox/matlab/general/
MCC		= $(MATLABDIR)/bin/mcc
BUILDDIR	= ./build
SRCDIR		= ./src
LIBDIR		= ./lib_dir-FC2
DATADIR		= ./data

all: wavelet

wavelet:
#	circa FC2
#	$(MCC) -m $(SRCDIR)/wavelet.m -d $(BUILDDIR) $(INCLUDES) -w
	$(MCC) -m $(SRCDIR)/wavelet.m -d $(BUILDDIR) $(INCLUDES) -W main -T link:exe -v
	
clean: 
	- rm $(BUILDDIR)/*

veryclean:
	rm $(LIBDIR)/*
	clean

test:
	$(BUILDDIR)/wavelet $(DATADIR)/F2I9.nuc db2 12 1
