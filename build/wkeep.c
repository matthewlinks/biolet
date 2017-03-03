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
#include "wkeep.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"

static double _array1_[3] = { 2.0, 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static double _array8_[2] = { 1.0, 1.0 };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static mxChar _array12_[1] = { 'c' };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

static mxChar _array15_[1] = { 'l' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;

static mxChar _array20_[1] = { 'u' };
static mxArray * _mxarray19_;

static mxArray * _array18_[2] = { NULL /*_mxarray14_*/, NULL /*_mxarray19_*/ };
static mxArray * _mxarray17_;

static mxChar _array24_[1] = { 'r' };
static mxArray * _mxarray23_;

static mxChar _array26_[1] = { 'd' };
static mxArray * _mxarray25_;

static mxArray * _array22_[2] = { NULL /*_mxarray23_*/, NULL /*_mxarray25_*/ };
static mxArray * _mxarray21_;

static mxChar _array28_[16] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't' };
static mxArray * _mxarray27_;

static mxChar _array30_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray29_;

static mxChar _array34_[1] = { '0' };
static mxArray * _mxarray33_;

static mxArray * _array32_[4] = { NULL /*_mxarray19_*/, NULL /*_mxarray14_*/,
                                  NULL /*_mxarray33_*/, NULL /*_mxarray9_*/ };
static mxArray * _mxarray31_;

static mxChar _array38_[1] = { '1' };
static mxArray * _mxarray37_;

static mxArray * _array36_[4] = { NULL /*_mxarray25_*/, NULL /*_mxarray23_*/,
                                  NULL /*_mxarray37_*/, NULL /*_mxarray6_*/ };
static mxArray * _mxarray35_;

void InitializeModule_wkeep(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeDoubleVector(1, 2, _array8_);
    _mxarray9_ = mclInitializeDouble(0.0);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeString(1, _array12_);
    _mxarray13_ = mclInitializeDouble(3.0);
    _mxarray14_ = mclInitializeString(1, _array15_);
    _mxarray16_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _array18_[0] = _mxarray14_;
    _mxarray19_ = mclInitializeString(1, _array20_);
    _array18_[1] = _mxarray19_;
    _mxarray17_ = mclInitializeCellVector(1, 2, _array18_);
    _mxarray23_ = mclInitializeString(1, _array24_);
    _array22_[0] = _mxarray23_;
    _mxarray25_ = mclInitializeString(1, _array26_);
    _array22_[1] = _mxarray25_;
    _mxarray21_ = mclInitializeCellVector(1, 2, _array22_);
    _mxarray27_ = mclInitializeString(16, _array28_);
    _mxarray29_ = mclInitializeString(3, _array30_);
    _array32_[0] = _mxarray19_;
    _array32_[1] = _mxarray14_;
    _mxarray33_ = mclInitializeString(1, _array34_);
    _array32_[2] = _mxarray33_;
    _array32_[3] = _mxarray9_;
    _mxarray31_ = mclInitializeCellVector(1, 4, _array32_);
    _array36_[0] = _mxarray25_;
    _array36_[1] = _mxarray23_;
    _mxarray37_ = mclInitializeString(1, _array38_);
    _array36_[2] = _mxarray37_;
    _array36_[3] = _mxarray6_;
    _mxarray35_ = mclInitializeCellVector(1, 4, _array36_);
}

void TerminateModule_wkeep(void) {
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfWkeep_GetFirstLast(mxArray * * last,
                                       mxArray * * ok,
                                       mxArray * sx,
                                       mxArray * begInd,
                                       ...);
static void mlxWkeep_GetFirstLast(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]);
static mxArray * mlfWkeep_GetFirst1D(mxArray * * last,
                                     mxArray * side,
                                     mxArray * s,
                                     mxArray * d);
static void mlxWkeep_GetFirst1D(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);
static mxArray * Mwkeep(int nargout_, mxArray * x, mxArray * varargin);
static mxArray * Mwkeep_GetFirstLast(mxArray * * last,
                                     mxArray * * ok,
                                     int nargout_,
                                     mxArray * sx,
                                     mxArray * begInd,
                                     mxArray * varargin);
static mxArray * Mwkeep_GetFirst1D(mxArray * * last,
                                   int nargout_,
                                   mxArray * side,
                                   mxArray * s,
                                   mxArray * d);

static mexFunctionTableEntry local_function_table_[2]
  = { { "GetFirstLast", mlxWkeep_GetFirstLast, -3, 3, NULL },
      { "GetFirst1D", mlxWkeep_GetFirst1D, 3, 2, NULL } };

_mexLocalFunctionTable _local_function_table_wkeep
  = { 2, local_function_table_ };

/*
 * The function "mlfNWkeep" contains the nargout interface for the "wkeep"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m"
 * (lines 1-43). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNWkeep(int nargout, mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mwkeep(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfWkeep" contains the normal interface for the "wkeep"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m"
 * (lines 1-43). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfWkeep(mxArray * x, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mwkeep(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVWkeep" contains the void interface for the "wkeep"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m"
 * (lines 1-43). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWkeep(mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mwkeep(0, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWkeep" contains the feval interface for the "wkeep"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m"
 * (lines 1-43). The feval function calls the implementation version of wkeep
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWkeep(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wkeep Line: 1 Column: 1 The function \"wkeep"
            "\" was called with more than the declared number of outputs (1)."),
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
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mwkeep(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfWkeep_GetFirstLast" contains the normal interface for the
 * "wkeep/GetFirstLast" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 43-94). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWkeep_GetFirstLast(mxArray * * last,
                                       mxArray * * ok,
                                       mxArray * sx,
                                       mxArray * begInd,
                                       ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * first = NULL;
    mxArray * last__ = NULL;
    mxArray * ok__ = NULL;
    mlfVarargin(&varargin, begInd, 0);
    mlfEnterNewContext(2, -3, last, ok, sx, begInd, varargin);
    if (last != NULL) {
        ++nargout;
    }
    if (ok != NULL) {
        ++nargout;
    }
    first = Mwkeep_GetFirstLast(&last__, &ok__, nargout, sx, begInd, varargin);
    mlfRestorePreviousContext(2, 2, last, ok, sx, begInd);
    mxDestroyArray(varargin);
    if (last != NULL) {
        mclCopyOutputArg(last, last__);
    } else {
        mxDestroyArray(last__);
    }
    if (ok != NULL) {
        mclCopyOutputArg(ok, ok__);
    } else {
        mxDestroyArray(ok__);
    }
    return mlfReturnValue(first);
}

/*
 * The function "mlxWkeep_GetFirstLast" contains the feval interface for the
 * "wkeep/GetFirstLast" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 43-94). The
 * feval function calls the implementation version of wkeep/GetFirstLast
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWkeep_GetFirstLast(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wkeep/GetFirstLast Line: 43 Col"
            "umn: 1 The function \"wkeep/GetFirstLast\" was called"
            " with more than the declared number of outputs (3)."),
          NULL);
    }
    for (i = 0; i < 3; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mprhs[2] = NULL;
    mlfAssign(&mprhs[2], mclCreateVararginCell(nrhs - 2, prhs + 2));
    mplhs[0]
      = Mwkeep_GetFirstLast(
          &mplhs[1], &mplhs[2], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
    mxDestroyArray(mprhs[2]);
}

/*
 * The function "mlfWkeep_GetFirst1D" contains the normal interface for the
 * "wkeep/GetFirst1D" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 94-103). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWkeep_GetFirst1D(mxArray * * last,
                                     mxArray * side,
                                     mxArray * s,
                                     mxArray * d) {
    int nargout = 1;
    mxArray * first = NULL;
    mxArray * last__ = NULL;
    mlfEnterNewContext(1, 3, last, side, s, d);
    if (last != NULL) {
        ++nargout;
    }
    first = Mwkeep_GetFirst1D(&last__, nargout, side, s, d);
    mlfRestorePreviousContext(1, 3, last, side, s, d);
    if (last != NULL) {
        mclCopyOutputArg(last, last__);
    } else {
        mxDestroyArray(last__);
    }
    return mlfReturnValue(first);
}

/*
 * The function "mlxWkeep_GetFirst1D" contains the feval interface for the
 * "wkeep/GetFirst1D" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 94-103). The
 * feval function calls the implementation version of wkeep/GetFirst1D through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWkeep_GetFirst1D(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wkeep/GetFirst1D Line: 94 Colu"
            "mn: 1 The function \"wkeep/GetFirst1D\" was called w"
            "ith more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wkeep/GetFirst1D Line: 94 Colu"
            "mn: 1 The function \"wkeep/GetFirst1D\" was called w"
            "ith more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mwkeep_GetFirst1D(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mwkeep" is the implementation version of the "wkeep"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m"
 * (lines 1-43). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function y = wkeep(x,varargin)
 */
static mxArray * Mwkeep(int nargout_, mxArray * x, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wkeep);
    int nargin_ = mclNargin(-2, x, varargin, NULL);
    mxArray * y = NULL;
    mxArray * ok = NULL;
    mxArray * last = NULL;
    mxArray * first = NULL;
    mxArray * begInd = NULL;
    mxArray * sx = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&varargin);
    /*
     * %WKEEP  Keep part of a vector or a matrix.
     * %   For a vector:
     * %   Y = WKEEP(X,L,OPT) extracts the vector Y 
     * %   from the vector X. The length of Y is L.
     * %   If OPT = 'c' ('l' , 'r', respectively), Y is the central
     * %   (left, right, respectively) part of X.
     * %   Y = WKEEP(X,L,FIRST) returns the vector X(FIRST:FIRST+L-1).
     * %
     * %   Y = WKEEP(X,L) is equivalent to Y = WKEEP(X,L,'c').
     * %
     * %   For a matrix:
     * %   Y = WKEEP(X,S) extracts the central part of the matrix X. 
     * %   S is the size of Y.
     * %   Y = WKEEP(X,S,[FIRSTR,FIRSTC]) extracts the submatrix of 
     * %   matrix X, of size S and starting from X(FIRSTR,FIRSTC).
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[2:4],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wkeep"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * y = x;
     */
    mlfAssign(&y, mclVa(x, "x"));
    /*
     * sx = size(x);
     */
    mlfAssign(&sx, mlfSize(mclValueVarargout(), mclVa(x, "x"), NULL));
    /*
     * if min(sx)<=1
     */
    if (mclLeBool(mlfMin(NULL, mclVv(sx, "sx"), NULL, NULL), _mxarray6_)) {
        /*
         * sx = length(x);
         */
        mlfAssign(&sx, mlfScalar(mclLengthInt(mclVa(x, "x"))));
        /*
         * begInd = 1;
         */
        mlfAssign(&begInd, _mxarray6_);
        /*
         * [first,last,ok] = GetFirstLast(sx,begInd,varargin{:});
         */
        mlfAssign(
          &first,
          mlfWkeep_GetFirstLast(
            &last,
            &ok,
            mclVv(sx, "sx"),
            mclVv(begInd, "begInd"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
        /*
         * if ok , y = y(first(1):last(1)); end
         */
        if (mlfTobool(mclVv(ok, "ok"))) {
            mlfAssign(
              &y,
              mclArrayRef1(
                mclVv(y, "y"),
                mlfColon(
                  mclIntArrayRef1(mclVv(first, "first"), 1),
                  mclIntArrayRef1(mclVv(last, "last"), 1),
                  NULL)));
        }
    /*
     * else
     */
    } else {
        /*
         * begInd = [1 1];
         */
        mlfAssign(&begInd, _mxarray7_);
        /*
         * [first,last,ok] = GetFirstLast(sx,begInd,varargin{:});
         */
        mlfAssign(
          &first,
          mlfWkeep_GetFirstLast(
            &last,
            &ok,
            mclVv(sx, "sx"),
            mclVv(begInd, "begInd"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
        /*
         * if ok , y = y(first(1):last(1),first(2):last(2)); end
         */
        if (mlfTobool(mclVv(ok, "ok"))) {
            mlfAssign(
              &y,
              mclArrayRef2(
                mclVv(y, "y"),
                mlfColon(
                  mclIntArrayRef1(mclVv(first, "first"), 1),
                  mclIntArrayRef1(mclVv(last, "last"), 1),
                  NULL),
                mlfColon(
                  mclIntArrayRef1(mclVv(first, "first"), 2),
                  mclIntArrayRef1(mclVv(last, "last"), 2),
                  NULL)));
        }
    /*
     * end
     */
    }
    mclValidateOutput(y, 1, nargout_, "y", "wkeep");
    mxDestroyArray(ans);
    mxDestroyArray(sx);
    mxDestroyArray(begInd);
    mxDestroyArray(first);
    mxDestroyArray(last);
    mxDestroyArray(ok);
    mxDestroyArray(varargin);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * 
     * 
     * %----------------------------------------------------------------------------%
     * %Internal Function(s)
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwkeep_GetFirstLast" is the implementation version of the
 * "wkeep/GetFirstLast" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 43-94). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [first,last,ok] = GetFirstLast(sx,begInd,varargin)
 */
static mxArray * Mwkeep_GetFirstLast(mxArray * * last,
                                     mxArray * * ok,
                                     int nargout_,
                                     mxArray * sx,
                                     mxArray * begInd,
                                     mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wkeep);
    mxArray * first = NULL;
    mxArray * ans = NULL;
    mxArray * k = NULL;
    mxArray * side = NULL;
    mxArray * d = NULL;
    mxArray * err = NULL;
    mxArray * o = NULL;
    mxArray * nbarg = NULL;
    mxArray * m = NULL;
    mxArray * K = NULL;
    mxArray * s = NULL;
    mxArray * oneDIM = NULL;
    mclCopyArray(&sx);
    mclCopyArray(&begInd);
    mclCopyArray(&varargin);
    /*
     * 
     * oneDIM = isequal(begInd,1);
     */
    mlfAssign(&oneDIM, mlfIsequal(mclVa(begInd, "begInd"), _mxarray6_, NULL));
    /*
     * s = varargin{1}(:)';
     */
    mlfAssign(
      &s,
      mclFeval(
        mclValueVarargout(),
        mlxCtranspose,
        mlfIndexRef(
          mclVa(varargin, "varargin"),
          "{?}(?)",
          _mxarray6_,
          mlfCreateColonIndex()),
        NULL));
    /*
     * if ~oneDIM
     */
    if (mclNotBool(mclVv(oneDIM, "oneDIM"))) {
        /*
         * K  = find(s>sx);
         */
        mlfAssign(
          &K, mlfFind(NULL, NULL, mclGt(mclVv(s, "s"), mclVa(sx, "sx"))));
        /*
         * s(K) = sx(K);
         */
        mclArrayAssign1(
          &s, mclArrayRef1(mclVa(sx, "sx"), mclVv(K, "K")), mclVv(K, "K"));
        /*
         * m = find((s < 0) | (s ~= fix(s)));
         */
        mlfAssign(
          &m,
          mlfFind(
            NULL,
            NULL,
            mclOr(
              mclLt(mclVv(s, "s"), _mxarray9_),
              mclNe(mclVv(s, "s"), mlfFix(mclVv(s, "s"))))));
        /*
         * ok = isempty(m);
         */
        mlfAssign(ok, mlfIsempty(mclVv(m, "m")));
    /*
     * else
     */
    } else {
        /*
         * ok = (s>=0) & (s<sx) & (s == fix(s));
         */
        mlfAssign(
          ok,
          mclAnd(
            mclAnd(
              mclGe(mclVv(s, "s"), _mxarray9_),
              mclLt(mclVv(s, "s"), mclVa(sx, "sx"))),
            mclEq(mclVv(s, "s"), mlfFix(mclVv(s, "s")))));
    /*
     * end
     */
    }
    /*
     * if ok==0 , first = begInd; last = s; return; end
     */
    if (mclEqBool(mclVv(*ok, "ok"), _mxarray9_)) {
        mlfAssign(&first, mclVa(begInd, "begInd"));
        mlfAssign(last, mclVv(s, "s"));
        goto return_;
    }
    /*
     * 
     * nbarg = length(varargin);
     */
    mlfAssign(&nbarg, mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
    /*
     * if nbarg<2, o = 'c'; else , o = lower(varargin{2}); end
     */
    if (mclLtBool(mclVv(nbarg, "nbarg"), _mxarray10_)) {
        mlfAssign(&o, _mxarray11_);
    } else {
        mlfAssign(
          &o,
          mclFeval(
            mclValueVarargout(),
            mlxLower,
            mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray10_),
            NULL));
    }
    /*
     * 
     * err = 0;
     */
    mlfAssign(&err, _mxarray9_);
    /*
     * if ischar(o(1))
     */
    if (mlfTobool(mlfIschar(mclIntArrayRef1(mclVv(o, "o"), 1)))) {
        /*
         * switch o(1)
         */
        mxArray * v_ = mclInitialize(mclIntArrayRef1(mclVv(o, "o"), 1));
        if (mclSwitchCompare(v_, _mxarray11_)) {
            /*
             * case 'c'
             * d = (sx-s)/2;
             */
            mlfAssign(
              &d,
              mclMrdivide(
                mclMinus(mclVa(sx, "sx"), mclVv(s, "s")), _mxarray10_));
            /*
             * if nbarg<3
             */
            if (mclLtBool(mclVv(nbarg, "nbarg"), _mxarray13_)) {
                /*
                 * if length(o)>1 , side = o(2:end); else , side = 'l'; end
                 */
                if (mclLengthInt(mclVv(o, "o")) > 1) {
                    mlfAssign(
                      &side,
                      mclArrayRef1(
                        mclVv(o, "o"),
                        mlfColon(
                          _mxarray10_,
                          mlfEnd(mclVv(o, "o"), _mxarray6_, _mxarray6_),
                          NULL)));
                } else {
                    mlfAssign(&side, _mxarray14_);
                }
            /*
             * else
             */
            } else {
                /*
                 * side = varargin{3};
                 */
                mlfAssign(
                  &side,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray13_));
            /*
             * end
             */
            }
            /*
             * if oneDIM
             */
            if (mlfTobool(mclVv(oneDIM, "oneDIM"))) {
                /*
                 * [first,last] = GetFirst1D(side,sx,d);
                 */
                mlfAssign(
                  &first,
                  mlfWkeep_GetFirst1D(
                    last, mclVv(side, "side"), mclVa(sx, "sx"), mclVv(d, "d")));
            /*
             * else
             */
            } else {
                /*
                 * if length(side)<2 , side(2) = 0; end
                 */
                if (mclLengthInt(mclVv(side, "side")) < 2) {
                    mclIntArrayAssign1(&side, _mxarray9_, 2);
                }
                /*
                 * for k = 1:2
                 */
                {
                    int v_0 = mclForIntStart(1);
                    int e_ = 2;
                    if (v_0 > e_) {
                        mlfAssign(&k, _mxarray16_);
                    } else {
                        /*
                         * [first(k),last(k)] = GetFirst1D(side(k),sx(k),d(k));
                         * end
                         */
                        for (; ; ) {
                            mclFeval(
                              mlfIndexVarargout(
                                &first, "(?)", mlfScalar(v_0),
                                last, "(?)", mlfScalar(v_0),
                                NULL),
                              mlxWkeep_GetFirst1D,
                              mclIntArrayRef1(mclVv(side, "side"), v_0),
                              mclIntArrayRef1(mclVa(sx, "sx"), v_0),
                              mclIntArrayRef1(mclVv(d, "d"), v_0),
                              NULL);
                            if (v_0 == e_) {
                                break;
                            }
                            ++v_0;
                        }
                        mlfAssign(&k, mlfScalar(v_0));
                    }
                }
            /*
             * end
             */
            }
        /*
         * 
         * case {'l','u'} , first = begInd; last = s;
         */
        } else if (mclSwitchCompare(v_, _mxarray17_)) {
            mlfAssign(&first, mclVa(begInd, "begInd"));
            mlfAssign(last, mclVv(s, "s"));
        /*
         * case {'r','d'} , first = sx-s+1; last = sx;
         */
        } else if (mclSwitchCompare(v_, _mxarray21_)) {
            mlfAssign(
              &first,
              mclPlus(mclMinus(mclVa(sx, "sx"), mclVv(s, "s")), _mxarray6_));
            mlfAssign(last, mclVa(sx, "sx"));
        /*
         * otherwise      , err = 1;
         */
        } else {
            mlfAssign(&err, _mxarray6_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    /*
     * else
     */
    } else {
        /*
         * first = o; last = first+s-1;
         */
        mlfAssign(&first, mclVv(o, "o"));
        mlfAssign(
          last,
          mclMinus(mclPlus(mclVv(first, "first"), mclVv(s, "s")), _mxarray6_));
        /*
         * if ~isequal(first,fix(first)) | any(first<1) | any(last>sx)
         */
        {
            mxArray * a_
              = mclInitialize(
                  mclNot(
                    mlfIsequal(
                      mclVv(first, "first"),
                      mlfFix(mclVv(first, "first")), NULL)));
            if (mlfTobool(a_)) {
                mlfAssign(&a_, mlfScalar(1));
            } else {
                mlfAssign(
                  &a_,
                  mclOr(
                    a_,
                    mlfAny(mclLt(mclVv(first, "first"), _mxarray6_), NULL)));
            }
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(
                         mclGt(mclVv(*last, "last"), mclVa(sx, "sx")),
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1;
                 */
                mlfAssign(&err, _mxarray6_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * if err
     */
    if (mlfTobool(mclVv(err, "err"))) {
        /*
         * errargt(mfilename,'invalid argument','msg');
         */
        mclAssignAns(
          &ans,
          mlfErrargt(mxCreateString("wkeep"), _mxarray27_, _mxarray29_, NULL));
        /*
         * error('*');
         */
        mlfError(_mxarray4_, NULL);
    /*
     * end
     */
    }
    /*
     * %----------------------------------------------------------------------------%
     */
    return_:
    mclValidateOutput(first, 1, nargout_, "first", "wkeep/GetFirstLast");
    mclValidateOutput(*last, 2, nargout_, "last", "wkeep/GetFirstLast");
    mclValidateOutput(*ok, 3, nargout_, "ok", "wkeep/GetFirstLast");
    mxDestroyArray(oneDIM);
    mxDestroyArray(s);
    mxDestroyArray(K);
    mxDestroyArray(m);
    mxDestroyArray(nbarg);
    mxDestroyArray(o);
    mxDestroyArray(err);
    mxDestroyArray(d);
    mxDestroyArray(side);
    mxDestroyArray(k);
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mxDestroyArray(begInd);
    mxDestroyArray(sx);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return first;
}

/*
 * The function "Mwkeep_GetFirst1D" is the implementation version of the
 * "wkeep/GetFirst1D" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wkeep.m" (lines 94-103). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [first,last] = GetFirst1D(side,s,d)
 */
static mxArray * Mwkeep_GetFirst1D(mxArray * * last,
                                   int nargout_,
                                   mxArray * side,
                                   mxArray * s,
                                   mxArray * d) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wkeep);
    mxArray * first = NULL;
    mclCopyArray(&side);
    mclCopyArray(&s);
    mclCopyArray(&d);
    /*
     * 
     * switch side
     */
    {
        mxArray * v_ = mclInitialize(mclVa(side, "side"));
        if (mclSwitchCompare(v_, _mxarray31_)) {
            /*
             * case {'u','l','0',0} , first = 1+floor(d); last = s-ceil(d);
             */
            mlfAssign(&first, mclPlus(_mxarray6_, mlfFloor(mclVa(d, "d"))));
            mlfAssign(last, mclMinus(mclVa(s, "s"), mlfCeil(mclVa(d, "d"))));
        /*
         * case {'d','r','1',1} , first = 1+ceil(d);  last = s-floor(d);
         */
        } else if (mclSwitchCompare(v_, _mxarray35_)) {
            mlfAssign(&first, mclPlus(_mxarray6_, mlfCeil(mclVa(d, "d"))));
            mlfAssign(last, mclMinus(mclVa(s, "s"), mlfFloor(mclVa(d, "d"))));
        /*
         * otherwise    , first = 1+floor(d); last = s-ceil(d);  % Default is left side
         */
        } else {
            mlfAssign(&first, mclPlus(_mxarray6_, mlfFloor(mclVa(d, "d"))));
            mlfAssign(last, mclMinus(mclVa(s, "s"), mlfCeil(mclVa(d, "d"))));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(first, 1, nargout_, "first", "wkeep/GetFirst1D");
    mclValidateOutput(*last, 2, nargout_, "last", "wkeep/GetFirst1D");
    mxDestroyArray(d);
    mxDestroyArray(s);
    mxDestroyArray(side);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return first;
    /*
     * %----------------------------------------------------------------------------%
     * 
     */
}
