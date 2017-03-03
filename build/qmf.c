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
#include "qmf.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "wrev.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[3] = { 'i', 'n', '0' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

void InitializeModule_qmf(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeString(3, _array8_);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeDouble(1.0);
}

void TerminateModule_qmf(void) {
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mqmf(int nargout_, mxArray * x, mxArray * p);

_mexLocalFunctionTable _local_function_table_qmf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNQmf" contains the nargout interface for the "qmf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/qmf.m"
 * (lines 1-23). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNQmf(int nargout, mxArray * x, mxArray * p) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 2, x, p);
    y = Mqmf(nargout, x, p);
    mlfRestorePreviousContext(0, 2, x, p);
    return mlfReturnValue(y);
}

/*
 * The function "mlfQmf" contains the normal interface for the "qmf" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/qmf.m" (lines 1-23).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfQmf(mxArray * x, mxArray * p) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 2, x, p);
    y = Mqmf(nargout, x, p);
    mlfRestorePreviousContext(0, 2, x, p);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVQmf" contains the void interface for the "qmf" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/qmf.m" (lines 1-23).
 * The void interface is only produced if the M-function uses the special
 * variable "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVQmf(mxArray * x, mxArray * p) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 2, x, p);
    y = Mqmf(0, x, p);
    mlfRestorePreviousContext(0, 2, x, p);
    mxDestroyArray(y);
}

/*
 * The function "mlxQmf" contains the feval interface for the "qmf" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/qmf.m" (lines 1-23).
 * The feval function calls the implementation version of qmf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxQmf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: qmf Line: 1 Column: 1 The function \"qmf\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: qmf Line: 1 Column: 1 The function \"qmf\""
            " was called with more than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mqmf(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mqmf" is the implementation version of the "qmf" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/qmf.m" (lines 1-23).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = qmf(x,p)
 */
static mxArray * Mqmf(int nargout_, mxArray * x, mxArray * p) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_qmf);
    int nargin_ = mclNargin(2, x, p, NULL);
    mxArray * y = NULL;
    mxArray * first = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&p);
    /*
     * %QMF    Quadrature mirror filter.
     * %   Y = QMF(X,P) changes the signs of the even index entries
     * %   of the reversed vector filter coefficients X if P is even.
     * %   If P is odd the same holds for odd index entries.
     * %
     * %   Y = QMF(X) is equivalent to Y = QMF(X,0).
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:2],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("qmf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin == 1 , p = 0; end
     */
    if (nargin_ == 1) {
        mlfAssign(&p, _mxarray6_);
    }
    /*
     * if errargt(mfilename,p,'in0'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(mxCreateString("qmf"), mclVa(p, "p"), _mxarray7_, NULL))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * % Compute quadrature mirror filter.
     * y = wrev(x);
     */
    mlfAssign(&y, mlfNWrev(1, mclVa(x, "x")));
    /*
     * first = 2-rem(p,2);
     */
    mlfAssign(&first, mclMinus(_mxarray9_, mlfRem(mclVa(p, "p"), _mxarray9_)));
    /*
     * y(first:2:end) = -y(first:2:end);
     */
    mclArrayAssign1(
      &y,
      mclUminus(
        mclArrayRef1(
          mclVv(y, "y"),
          mlfColon(
            mclVv(first, "first"),
            _mxarray9_,
            mlfEnd(mclVv(y, "y"), _mxarray10_, _mxarray10_)))),
      mlfColon(
        mclVv(first, "first"),
        _mxarray9_,
        mlfEnd(mclVv(y, "y"), _mxarray10_, _mxarray10_)));
    mclValidateOutput(y, 1, nargout_, "y", "qmf");
    mxDestroyArray(ans);
    mxDestroyArray(first);
    mxDestroyArray(p);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
