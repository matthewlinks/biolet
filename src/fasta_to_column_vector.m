function [signal,display_id] = fasta_to_column_vector(fasta_input)

max_seq_len = 1000000;	% to initially reserve memory
cur = 0;		% this is just the index to the last character of the signal/sequence

%
%
% Open the file for reading
%
%

[input_fid,error_msg] = fopen(fasta_input,'r');
if input_fid == -1,error('Error opening %s for reading\n',fasta_input),end

%
%
% Parse in the FASTA file and encode it into a signal
%
%

header = fgetl(input_fid);
% die if this is not a character string
if ~ischar(header),error('Read a non-character line from %s',fasta_input),end
if ~strncmp(header,'>',1),error('The first line of the file does not begin with >'),end

%
%
% Parse the display_id from the header
%
%
tmp = sscanf(header,'%s*');
for i=2:length(tmp)
	display_id(i-1) = tmp(i);
end
clear tmp

% reserve the space for the sequence to speed up the loading
tmp_signal = zeros(max_seq_len,1);

while 1
	line = fgetl(input_fid);
	% If we're at a non charecter string them we're done
	if ~ischar(line),break,end
	if strncmp(line,'>',1)
		fprintf(2,'Multiple sequence files are not yet supported. Processing only the first sequence\n');
		break;
	else
		% add this line to the signal
		for i = 1:length(line)
			cur = cur + 1;
			switch line(i)
				case {'A','a'}
					n = 1;
				case {'T','t'}
					n = -1;
				case {'C','c'}
					n = -2;
				case {'G','g'}
					n = 2;
%				case {'N','n'}
%					n = 0;
				otherwise
					n = 0;
%					error('Error handling character (%c)\n',line(i));
			end
			tmp_signal(cur,1) = n;
		end
	end
	if length(tmp_signal) > max_seq_len
		fprintf(2,'\tWarning the signal has grown beyond the max_seq_len (%i)\n\tThis is non-fatal but may cause the speed to deteriorate\n',max_seq_len);
	end
end

% make the svelt signal
signal = zeros(cur,1);
for i = 1:cur
	signal(i,1) = tmp_signal(i,1);
end

clear tmp_signal;

%
%
% Close the file
%
%
[status] = fclose(input_fid);
if status ~= 0,error('Problem closing %s,%i',fasta_input,status),end
