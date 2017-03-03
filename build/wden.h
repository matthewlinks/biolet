/*
 * MATLAB Compiler: 3.0
 * Date: Thu May  3 10:27:13 2007
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

#ifndef __wden_h
#define __wden_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_wden(void);
extern void TerminateModule_wden(void);
extern _mexLocalFunctionTable _local_function_table_wden;

extern mxArray * mlfNWden(int nargout,
                          mxArray * * cxd,
                          mxArray * * lxd,
                          mxArray * in1,
                          mxArray * in2,
                          mxArray * in3,
                          mxArray * in4,
                          mxArray * in5,
                          mxArray * in6,
                          mxArray * in7);
extern mxArray * mlfWden(mxArray * * cxd,
                         mxArray * * lxd,
                         mxArray * in1,
                         mxArray * in2,
                         mxArray * in3,
                         mxArray * in4,
                         mxArray * in5,
                         mxArray * in6,
                         mxArray * in7);
extern void mlfVWden(mxArray * in1,
                     mxArray * in2,
                     mxArray * in3,
                     mxArray * in4,
                     mxArray * in5,
                     mxArray * in6,
                     mxArray * in7);
extern void mlxWden(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
