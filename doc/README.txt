
The generic distribution you are probably after is

biolet/distributions/tarballs/biolet_executable-v1.0.tar.gz 

In order to use wavelet you need to be able to read the libs from wavelet/libs
you will likely want to do something like

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:wavelet/libs/
