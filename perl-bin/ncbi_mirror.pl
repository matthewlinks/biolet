#!/usr/bin/perl
#  rsync -rva rsync://bio-mirror.net/biomirror/ncbigenomes/ ./
use strict;
use Net::FTP;
#real    133m52.328s
#user    0m15.727s
#sys     4m30.544s

my $user = 'anonymous';
my $pass = 'anonymous@uwindsor.ca';
#my $host = 'bio-mirror.net';
#my $remote_path = 'biomirror/ncbigenomes';
my $remote_path = 'genomes';
my $host = 'ftp.ncbi.nlm.nih.gov';
my $local_root = $ARGV[0];
die "Error you must specify the local directory to use as root" unless defined $local_root;
           
my $ftp = Net::FTP->new("ftp.ncbi.nlm.nih.gov", Debug => 0, Passive => 1) or die "Cannot connect to some.host.name: $@";
$ftp->login($user,$pass) or die "Cannot login: ", $ftp->message();
$ftp->cwd($remote_path) or die "Error cannot cwd to genomes: ", $ftp->message;
my @files = $ftp->ls() or die "Error cannot get a listing of genomes: ", $ftp->message;
$ftp->quit;

foreach my $file(@files){
	sync($file);
}

exit 1;

sub sync{
	my $dir = shift;
	die "Error lost directory" unless defined $dir;
	warn "Looking in $dir";
	my @targs = qw( Assembled_chromosomes CHR_* README* );

	my $local_dir = $local_root . '/' . $dir;
	if (!(-d $local_dir)){
		mkdir($local_dir) or die "Error creating $local_dir: $!";
	}

	foreach my $t (@targs){
		my $target = "genomes/$dir/$t";
		my $not_done = 1;
		while($not_done){
			warn "\tTrying to get $t";
			my $rc = system('ncftpget','-u',$user,'-p',$pass,'-F','-R',$host,"$local_root/$dir",$target);
			$rc = $rc / 256 ;
			if ($rc == 0){
				# no problem
				$not_done = 0;
			}elsif(($rc == 1)or($rc == 2)){
				warn "\tCould not connect - retrying";
			}elsif($rc == 3){
				warn "\tncftpget failed. This is likely because the file does not exits - Continue";
				$not_done = 0;
			}elsif($rc == 4){
				warn "\tncftpget failed due to timeout - retrying";
			}elsif($rc == 11){
				warn "\tcould not initialize properly - retrying";
			}else{
				die "Managed to get exit status $rc. Check manpage for ncftpget. This should not happen";
			}
		}
	}
}

