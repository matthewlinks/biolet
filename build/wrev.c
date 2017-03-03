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
#include "wrev.h"
#include "errargn.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static double _array2_[2] = { 0.0, 1.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

void InitializeModule_wrev(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 2, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeDouble(-1.0);
}

void TerminateModule_wrev(void) {
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwrev(int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_wrev
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWrev" contains the nargout interface for the "wrev"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wrev.m"
 * (lines 1-16). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNWrev(int nargout, mxArray * x) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 1, x);
    y = Mwrev(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(y);
}

/*
 * The function "mlfWrev" contains the normal interface for the "wrev"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wrev.m"
 * (lines 1-16). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfWrev(mxArray * x) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 1, x);
    y = Mwrev(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVWrev" contains the void interface for the "wrev"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wrev.m"
 * (lines 1-16). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWrev(mxArray * x) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 1, x);
    y = Mwrev(0, x);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(y);
}

/*
 * The function "mlxWrev" contains the feval interface for the "wrev"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wrev.m"
 * (lines 1-16). The feval function calls the implementation version of wrev
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWrev(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wrev Line: 1 Column: 1 The function \"wrev\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wrev Line: 1 Column: 1 The function \"wrev"
            "\" was called with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwrev(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwrev" is the implementation version of the "wrev" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wrev.m" (lines
 * 1-16). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = wrev(x)
 */
static mxArray * Mwrev(int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wrev);
    int nargin_ = mclNargin(1, x, NULL);
    mxArray * y = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    /*
     * %WREV Flip vector.
     * %   Y = WREV(X) reverses the vector X.
     * %
     * %   See also FLIPLR, FLIPUD.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 01-Jun-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wrev"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * y = x(end:-1:1);
     */
    mlfAssign(
      &y,
      mclArrayRef1(
        mclVa(x, "x"),
        mlfColon(
          mlfEnd(mclVa(x, "x"), _mxarray0_, _mxarray0_),
          _mxarray5_,
          _mxarray0_)));
    mclValidateOutput(y, 1, nargout_, "y", "wrev");
    mxDestroyArray(ans);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
