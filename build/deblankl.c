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
#include "deblankl.h"
#include "libmatlbm.h"

static mxChar _array1_[1] = { ' ' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;

void InitializeModule_deblankl(void) {
    _mxarray0_ = mclInitializeString(1, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_deblankl(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdeblankl(int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_deblankl
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfDeblankl" contains the normal interface for the "deblankl"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/deblankl.m" (lines 1-17). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfDeblankl(mxArray * x) {
    int nargout = 1;
    mxArray * s = NULL;
    mlfEnterNewContext(0, 1, x);
    s = Mdeblankl(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(s);
}

/*
 * The function "mlxDeblankl" contains the feval interface for the "deblankl"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/deblankl.m" (lines 1-17). The
 * feval function calls the implementation version of deblankl through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDeblankl(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: deblankl Line: 1 Column:"
            " 1 The function \"deblankl\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: deblankl Line: 1 Column:"
            " 1 The function \"deblankl\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mdeblankl(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdeblankl" is the implementation version of the "deblankl"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/deblankl.m" (lines 1-17). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function s = deblankl(x)
 */
static mxArray * Mdeblankl(int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_deblankl);
    mxArray * s = NULL;
    mclCopyArray(&x);
    /*
     * %DEBLANKL Convert string to lowercase without blanks.
     * %   S = DEBLANKL(X) is the string X converted to lowercase 
     * %   without blanks.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * if ~isempty(x)
     */
    if (mclNotBool(mlfIsempty(mclVa(x, "x")))) {
        /*
         * s = lower(x);
         */
        mlfAssign(&s, mlfLower(mclVa(x, "x")));
        /*
         * s = s(find(s~=' '));
         */
        mlfAssign(
          &s,
          mclArrayRef1(
            mclVv(s, "s"),
            mlfFind(NULL, NULL, mclNe(mclVv(s, "s"), _mxarray0_))));
    /*
     * else
     */
    } else {
        /*
         * s = [];
         */
        mlfAssign(&s, _mxarray2_);
    /*
     * end
     */
    }
    mclValidateOutput(s, 1, nargout_, "s", "deblankl");
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return s;
}
