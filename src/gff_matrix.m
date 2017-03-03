function [rval] = gff_matrix(filename,seqname,source,feature_type,strand,len_sig,col_cfs)

%
%
% Open filename for writting 
%
%
[fid,error_msg] = fopen(filename,'w');
if fid == -1,error('Error opening %s for reading\n',filename),end

%
%
% Process the matrix looking for non-one continuous region
%
%
for i=1:length(col_cfs(:,1))
	start = -1;
	stop = 0;
	for j=1:length(col_cfs(1,:))
		if (col_cfs(i,j) == 1)
			if (stop < start)
				stop = (j - 1);
				if (strand == 1)
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,i,start,stop);
				else
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,i,(len_sig - stop) +1,(len_sig - start) +1);
				end
			end
		else
			if (start < stop) || (start == stop)
				start = j;
				if (j == length(col_cfs(i,:)))
					stop = j;
					if (strand == 1)
						fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,i,start,stop);
					else
						fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,i,(len_sig - stop) +1,(len_sig - start) +1);
					end
				end
			elseif (j == length(col_cfs(i,:)))
				stop = j;
				if (strand == 1)
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,i,start,stop);
				else
					fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,i,(len_sig - stop) +1,(len_sig - start) +1);
				end
			end
		end
	end
end

%
%
% Close the File
%
%
[status] = fclose(fid);
if status ~= 0,error('Problem closing %s,%i',filename,status),end

rval = 0
