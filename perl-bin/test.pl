#!/usr/bin/perl
my $x = 1.000001;

print "X = ",sprintf("%f",$x),"\n";

my ($one,$two) = split(/\./,$x);
print "one $one\n";
print "two $two\n";


