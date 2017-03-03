function [rval] = gff_matrix_fast(filename,seqname,source,feature_type,strand,len_sig,col_cfs)

%
%
% Open filename for writting 
%
%

[fid,error_msg] = fopen(filename,'w');
if fid == -1,error('Error opening %s for reading\n',filename),end

for level=1:length(col_cfs(:,1))
	cur = 1;
	non_ones = zeros(length(col_cfs(level,:)),1);
	for i=1:length(col_cfs(level,:))
		if ~(col_cfs(level,i) == 1)
			non_ones(cur,1) = i;
			cur = cur + 1;
		end
	end
	if cur > 1
		% print loop
		start = 1;
		stop = 1;
		for i = 2:(cur -1)
			if non_ones(i,1) == ( non_ones(stop,1) + 1 )
				% still continuous
				stop = i;
			else
				% no longer continuous
				if strand == 1
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
				else
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
				end
				start = i;
				stop = i;
			end
		end
		
		% This will be true if there is only feature
		if start == 1
				if strand == 1
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
				else
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
				end
		elseif stop == (cur - 1)
			% this last feature of a multi-feature case
			if strand == 1
				fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
			else
				fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
			end
		end
	end
	clear non_ones;
end

%
%
% Close the File
%
%

[status] = fclose(fid);
if status ~= 0,error('Problem closing %s,%i',filename,status),end

rval = 0;
