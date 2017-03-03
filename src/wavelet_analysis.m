function [col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis)

%
%
% Performs a single wavelet analysis of a signal
%
%

%
%
% Wavelet Decomposition
%
%

%fprintf('Performing Wavelet decomposition with %s\n',wavelet_type);
[c,l] = wavedec(signal,level_analysis,wavelet_type);

% rotate 90 degrees
c = rot90(c,+1);
l = rot90(l,+1);
sig_size = size(signal);
sig_size = sig_size(1);

% generate the coefficients into a matrix
orig_cfs = zeros(level_analysis,sig_size);

% get the details
for k = 1:level_analysis
	x = detcoef(c,l,k);
	x = x(ones(1,2^k),:);
	x = x(:)';
	% orig_cfs(k,:) is equal to the center elements of x at a length of Sig_Siz
	orig_cfs(k,:) = wkeep(x,sig_size); 
end
clear x;

orig_cfs = wcodemat(orig_cfs,128,'row',1); % encoding of the matrix

%
%
% Denoising
%
%

%fprintf('Performing Wavelet denoising with %s\n',wavelet_type);
[xd,cxd,lxd] = wden(c,l,'sqtwolog','s','sln',level_analysis,wavelet_type); % square root without logs
	
%generate coefficients into a matrix
col_cfs = zeros(level_analysis,sig_size);
for k = 1:level_analysis
	x = detcoef(cxd,lxd,k);		
	x = x(ones(1,2^k),:);
	x = x(:)';
	% colcfs(k,:) is equal to the center elements of x at a length of Sig_Siz
	col_cfs(k,:) = wkeep(x,sig_size);
end
clear x;

%
%
% Find the nonzero coefficients
%
%

% find nonzero coefficients, denoising zeros weak coefficients
nz_cfs = find(col_cfs~=0);
[nbrow,nbcol] = size(col_cfs);
col_min = 1;
col_cfs = col_min*ones(nbrow,nbcol);
col_cfs(nz_cfs) = orig_cfs(nz_cfs);

