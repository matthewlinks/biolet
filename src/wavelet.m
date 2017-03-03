function [rval] = wavelet(filename,wavelet_type,level_analysis,strand)

%
%
% Matlab function that will take a FASTA formated sequence file and performa wavelet analysis on it
%
%

level_analysis = str2num(level_analysis);
strand = str2num(strand);

%
%
% Encode DNA to [2,1,0,-1,-2]
%
%

[signal,display_id] = fasta_to_column_vector(filename);

%
%
% Setup the output file extension based on which strand we're working on
%
%

if strand == 1
	suffix = sprintf('_out_');
else
	suffix = sprintf('_rev_out');
end

%
%
% If the request was for a specific wavelet then do that one otherwise do all wavelets
%
%

if strncmp('db',wavelet_type,2)
	if strncmp('db_all',wavelet_type,6)
		% do all of the db family of wavelets
		for wavelet=1:1:10
			wavelet_type = sprintf('db%i',wavelet);
			fprintf('Performaing analysis with %s\n',wavelet_type);
	
			%single wavelet case
%			fprintf('Calling wavelet_analysis\n');
			[col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis);
			
			%generate the gff
%			fprintf('Generating Gff output\n');
		
			gff_filename = sprintf('%s%s%s.gff',filename,suffix,wavelet_type);
%			gff_matrix(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
			gff_matrix_fast(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
			clear col_cfs;
		end
	else
		%single wavelet case
%		fprintf('Calling wavelet_analysis\n');
		[col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis);
		
		%generate the gff
%		fprintf('Generating Gff output\n');
	
		gff_filename = sprintf('%s%s%s.gff',filename,suffix,wavelet_type);
%		gff_matrix(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
		gff_matrix_fast(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
		clear col_cfs;
	end
else
	fprintf('Error wavelet type %s not supported\n',wavelet_type);
	exit;
end

clear;

exit;
