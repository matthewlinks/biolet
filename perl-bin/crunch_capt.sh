#!/bin/sh
date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/Arabidopsis_thaliana
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Saccharomyces_cerevisiae
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Schizosaccharomyces_pombe
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Candida_glabrata_CBS138
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Cryptococcus_neoformans_var_JEC21
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Debaryomyces_hansenii_CBS767
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Yarrowia_lipolytica_CLIB99
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Kluyveromyces_lactis_NRRL_Y-1140
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Eremothecium_gossypii
make clean
make chop
make -j 3

date 
cd /bio_data/ftp.ncbi.nih.gov-genomes/21July05/FUNGI/Encephalitozoon_cuniculi
make clean
make chop
make -j 3

#real    1671m6.911s
#user    2857m53.231s
#sys     470m0.913s


#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Apis_mellifera/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Arabidopsis_thaliana/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Bos_taurus/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Caenorhabditis_elegans/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Canis_familiaris/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/D_rerio/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Drosophila_melanogaster/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Encephalitozoon_cuniculi/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Gallus_gallus/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/H_sapiens/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/M_musculus/Makefile
#/bio_data/ftp.ncbi.nih.gov-genomes/21July05/Pan_troglodytes/Makefile
##/bio_data/ftp.ncbi.nih.gov-genomes/21July05/R_norvegicus/Makefile
