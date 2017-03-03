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
#include "wthresh.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static double _array2_[2] = { 0.0, 1.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;

static mxChar _array6_[1] = { 's' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;

static mxChar _array9_[1] = { 'h' };
static mxArray * _mxarray8_;

static mxChar _array11_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray10_;

static mxChar _array13_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray12_;

void InitializeModule_wthresh(void) {
    _mxarray0_ = mclInitializeDouble(3.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 2, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeString(1, _array6_);
    _mxarray7_ = mclInitializeDouble(2.0);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeString(22, _array11_);
    _mxarray12_ = mclInitializeString(3, _array13_);
}

void TerminateModule_wthresh(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwthresh(int nargout_,
                          mxArray * x,
                          mxArray * sorh,
                          mxArray * t);

_mexLocalFunctionTable _local_function_table_wthresh
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWthresh" contains the nargout interface for the "wthresh"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wthresh.m" (lines 1-35). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWthresh(int nargout, mxArray * x, mxArray * sorh, mxArray * t) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, x, sorh, t);
    y = Mwthresh(nargout, x, sorh, t);
    mlfRestorePreviousContext(0, 3, x, sorh, t);
    return mlfReturnValue(y);
}

/*
 * The function "mlfWthresh" contains the normal interface for the "wthresh"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wthresh.m" (lines 1-35). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWthresh(mxArray * x, mxArray * sorh, mxArray * t) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, x, sorh, t);
    y = Mwthresh(nargout, x, sorh, t);
    mlfRestorePreviousContext(0, 3, x, sorh, t);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVWthresh" contains the void interface for the "wthresh"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wthresh.m" (lines 1-35). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWthresh(mxArray * x, mxArray * sorh, mxArray * t) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, x, sorh, t);
    y = Mwthresh(0, x, sorh, t);
    mlfRestorePreviousContext(0, 3, x, sorh, t);
    mxDestroyArray(y);
}

/*
 * The function "mlxWthresh" contains the feval interface for the "wthresh"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wthresh.m" (lines 1-35). The
 * feval function calls the implementation version of wthresh through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWthresh(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wthresh Line: 1 Column: "
            "1 The function \"wthresh\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wthresh Line: 1 Column:"
            " 1 The function \"wthresh\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mwthresh(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwthresh" is the implementation version of the "wthresh"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wthresh.m" (lines 1-35). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = wthresh(x,sorh,t)
 */
static mxArray * Mwthresh(int nargout_,
                          mxArray * x,
                          mxArray * sorh,
                          mxArray * t) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wthresh);
    int nargin_ = mclNargin(3, x, sorh, t, NULL);
    mxArray * y = NULL;
    mxArray * tmp = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&sorh);
    mclCopyArray(&t);
    /*
     * %WTHRESH Perform soft or hard thresholding. 
     * %   Y = WTHRESH(X,SORH,T) returns soft (if SORH = 's')
     * %   or hard (if SORH = 'h') T-thresholding  of the input 
     * %   vector or matrix X. T is the threshold value.
     * %
     * %   Y = WTHRESH(X,'s',T) returns Y = SIGN(X).(|X|-T)+, soft 
     * %   thresholding is shrinkage.
     * %
     * %   Y = WTHRESH(X,'h',T) returns Y = X.1_(|X|>T), hard
     * %   thresholding is cruder.
     * %
     * %   See also WDEN, WDENCMP, WPDENCMP.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wthresh"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * switch sorh
     */
    {
        mxArray * v_ = mclInitialize(mclVa(sorh, "sorh"));
        if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * case 's'
             * tmp = (abs(x)-t);
             */
            mlfAssign(&tmp, mclMinus(mlfAbs(mclVa(x, "x")), mclVa(t, "t")));
            /*
             * tmp = (tmp+abs(tmp))/2;
             */
            mlfAssign(
              &tmp,
              mclMrdivide(
                mclPlus(mclVv(tmp, "tmp"), mlfAbs(mclVv(tmp, "tmp"))),
                _mxarray7_));
            /*
             * y   = sign(x).*tmp;
             */
            mlfAssign(&y, mclTimes(mlfSign(mclVa(x, "x")), mclVv(tmp, "tmp")));
        /*
         * 
         * case 'h'
         */
        } else if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * y   = x.*(abs(x)>t);
             */
            mlfAssign(
              &y,
              mclTimes(
                mclVa(x, "x"), mclGt(mlfAbs(mclVa(x, "x")), mclVa(t, "t"))));
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'invalid argument value','msg'), error('*')
             */
            mclPrintAns(
              &ans,
              mlfErrargt(
                mxCreateString("wthresh"), _mxarray10_, _mxarray12_, NULL));
            mlfError(_mxarray3_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(y, 1, nargout_, "y", "wthresh");
    mxDestroyArray(ans);
    mxDestroyArray(tmp);
    mxDestroyArray(t);
    mxDestroyArray(sorh);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
