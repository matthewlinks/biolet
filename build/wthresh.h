/*
 * MATLAB Compiler: 3.0
 * Date: Thu May  3 10:27:14 2007
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "./src/wavelet.m" "-d"
 * "./build" "-I" "/usr/local/matlab6p5/toolbox/wavelet/wavelet/" "-I"
 * "/usr/local/matlab6p5/toolbox/matlab/general/" "-W" "main" "-T" "link:exe"
 * "-v" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __wthresh_h
#define __wthresh_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_wthresh(void);
extern void TerminateModule_wthresh(void);
extern _mexLocalFunctionTable _local_function_table_wthresh;

extern mxArray * mlfNWthresh(int nargout,
                             mxArray * x,
                             mxArray * sorh,
                             mxArray * t);
extern mxArray * mlfWthresh(mxArray * x, mxArray * sorh, mxArray * t);
extern void mlfVWthresh(mxArray * x, mxArray * sorh, mxArray * t);
extern void mlxWthresh(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
