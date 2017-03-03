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
#include "thselect.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static double _array2_[2] = { 0.0, 1.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;

static mxChar _array6_[8] = { 'r', 'i', 'g', 'r', 's', 'u', 'r', 'e' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;

static mxChar _array11_[8] = { 'h', 'e', 'u', 'r', 's', 'u', 'r', 'e' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;

static mxChar _array14_[8] = { 's', 'q', 't', 'w', 'o', 'l', 'o', 'g' };
static mxArray * _mxarray13_;

static mxChar _array16_[8] = { 'm', 'i', 'n', 'i', 'm', 'a', 'x', 'i' };
static mxArray * _mxarray15_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;

static mxChar _array21_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray20_;

static mxChar _array23_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray22_;

void InitializeModule_thselect(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 2, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeString(8, _array6_);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDouble(-1.0);
    _mxarray9_ = mclInitializeDouble(0.0);
    _mxarray10_ = mclInitializeString(8, _array11_);
    _mxarray12_ = mclInitializeDouble(1.5);
    _mxarray13_ = mclInitializeString(8, _array14_);
    _mxarray15_ = mclInitializeString(8, _array16_);
    _mxarray17_ = mclInitializeDouble(32.0);
    _mxarray18_ = mclInitializeDouble(.3936);
    _mxarray19_ = mclInitializeDouble(.1829);
    _mxarray20_ = mclInitializeString(22, _array21_);
    _mxarray22_ = mclInitializeString(3, _array23_);
}

void TerminateModule_thselect(void) {
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mthselect(int nargout_, mxArray * x, mxArray * tptr);

_mexLocalFunctionTable _local_function_table_thselect
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNThselect" contains the nargout interface for the
 * "thselect" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/thselect.m" (lines 1-61). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNThselect(int nargout, mxArray * x, mxArray * tptr) {
    mxArray * thr = NULL;
    mlfEnterNewContext(0, 2, x, tptr);
    thr = Mthselect(nargout, x, tptr);
    mlfRestorePreviousContext(0, 2, x, tptr);
    return mlfReturnValue(thr);
}

/*
 * The function "mlfThselect" contains the normal interface for the "thselect"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/thselect.m" (lines 1-61). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfThselect(mxArray * x, mxArray * tptr) {
    int nargout = 1;
    mxArray * thr = NULL;
    mlfEnterNewContext(0, 2, x, tptr);
    thr = Mthselect(nargout, x, tptr);
    mlfRestorePreviousContext(0, 2, x, tptr);
    return mlfReturnValue(thr);
}

/*
 * The function "mlfVThselect" contains the void interface for the "thselect"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/thselect.m" (lines 1-61). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVThselect(mxArray * x, mxArray * tptr) {
    mxArray * thr = NULL;
    mlfEnterNewContext(0, 2, x, tptr);
    thr = Mthselect(0, x, tptr);
    mlfRestorePreviousContext(0, 2, x, tptr);
    mxDestroyArray(thr);
}

/*
 * The function "mlxThselect" contains the feval interface for the "thselect"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/thselect.m" (lines 1-61). The
 * feval function calls the implementation version of thselect through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxThselect(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: thselect Line: 1 Column:"
            " 1 The function \"thselect\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: thselect Line: 1 Column:"
            " 1 The function \"thselect\" was called with m"
            "ore than the declared number of inputs (2)."),
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
    mplhs[0] = Mthselect(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mthselect" is the implementation version of the "thselect"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/thselect.m" (lines 1-61). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function thr = thselect(x,tptr)
 */
static mxArray * Mthselect(int nargout_, mxArray * x, mxArray * tptr) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_thselect);
    int nargin_ = mclNargin(2, x, tptr, NULL);
    mxArray * thr = NULL;
    mxArray * crit = NULL;
    mxArray * eta = NULL;
    mxArray * hthr = NULL;
    mxArray * best = NULL;
    mxArray * risk = NULL;
    mxArray * risks = NULL;
    mxArray * sx2 = NULL;
    mxArray * n = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&tptr);
    /*
     * %THSELECT Threshold selection for de-noising.
     * %   THR = THSELECT(X,TPTR) returns threshold X-adapted value 
     * %   using selection rule defined by string TPTR.
     * %   
     * %   Available selection rules are:
     * %   TPTR = 'rigrsure', adaptive threshold selection using 
     * %       principle of Stein's Unbiased Risk Estimate.
     * %   TPTR = 'heursure', heuristic variant of the first option.
     * %   TPTR = 'sqtwolog', threshold is sqrt(2*log(length(X))).
     * %   TPTR = 'minimaxi', minimax thresholding.
     * %
     * %   Threshold selection rules are based on the underlying 
     * %   model y = f(t) + e where e is a white noise N(0,1).
     * %   Dealing with unscaled or nonwhite noise can be handled
     * %   using rescaling output threshold THR (see SCAL parameter
     * %   in WDEN).
     * %
     * %   See also WDEN.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * if errargn(mfilename,nargin,[2],nargout,[0 1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("thselect"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * x = x(:)';
     */
    mlfAssign(
      &x, mlfCtranspose(mclArrayRef1(mclVa(x, "x"), mlfCreateColonIndex())));
    /*
     * n = length(x);
     */
    mlfAssign(&n, mlfScalar(mclLengthInt(mclVa(x, "x"))));
    /*
     * switch tptr
     */
    {
        mxArray * v_ = mclInitialize(mclVa(tptr, "tptr"));
        if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * case 'rigrsure'
             * sx2 = sort(abs(x)).^2;
             */
            mlfAssign(
              &sx2,
              mlfPower(mlfSort(NULL, mlfAbs(mclVa(x, "x")), NULL), _mxarray0_));
            /*
             * risks = (n-(2*(1:n))+(cumsum(sx2)+(n-1:-1:0).*sx2))/n;
             */
            mlfAssign(
              &risks,
              mclMrdivide(
                mclPlus(
                  mclMinus(
                    mclVv(n, "n"),
                    mclMtimes(
                      _mxarray0_, mlfColon(_mxarray7_, mclVv(n, "n"), NULL))),
                  mclPlus(
                    mlfCumsum(mclVv(sx2, "sx2"), NULL),
                    mclTimes(
                      mlfColon(
                        mclMinus(mclVv(n, "n"), _mxarray7_),
                        _mxarray8_,
                        _mxarray9_),
                      mclVv(sx2, "sx2")))),
                mclVv(n, "n")));
            /*
             * [risk,best] = min(risks);
             */
            mlfAssign(&risk, mlfMin(&best, mclVv(risks, "risks"), NULL, NULL));
            /*
             * thr = sqrt(sx2(best));
             */
            mlfAssign(
              &thr,
              mlfSqrt(mclArrayRef1(mclVv(sx2, "sx2"), mclVv(best, "best"))));
        /*
         * 
         * case 'heursure'
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * hthr = sqrt(2*log(n));
             */
            mlfAssign(
              &hthr, mlfSqrt(mclMtimes(_mxarray0_, mlfLog(mclVv(n, "n")))));
            /*
             * eta = (norm(x).^2-n)/n;
             */
            mlfAssign(
              &eta,
              mclMrdivide(
                mclMinus(
                  mlfPower(mlfNorm(mclVa(x, "x"), NULL), _mxarray0_),
                  mclVv(n, "n")),
                mclVv(n, "n")));
            /*
             * crit = (log(n)/log(2))^(1.5)/sqrt(n);
             */
            mlfAssign(
              &crit,
              mclMrdivide(
                mclMpower(
                  mclMrdivide(mlfLog(mclVv(n, "n")), mlfLog(_mxarray0_)),
                  _mxarray12_),
                mlfSqrt(mclVv(n, "n"))));
            /*
             * if eta < crit
             */
            if (mclLtBool(mclVv(eta, "eta"), mclVv(crit, "crit"))) {
                /*
                 * thr = hthr;
                 */
                mlfAssign(&thr, mclVv(hthr, "hthr"));
            /*
             * else
             */
            } else {
                /*
                 * thr = min(thselect(x,'rigrsure'),hthr);
                 */
                mlfAssign(
                  &thr,
                  mlfMin(
                    NULL,
                    mlfNThselect(1, mclVa(x, "x"), _mxarray5_),
                    mclVv(hthr, "hthr"),
                    NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 'sqtwolog'
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * thr = sqrt(2*log(n));
             */
            mlfAssign(
              &thr, mlfSqrt(mclMtimes(_mxarray0_, mlfLog(mclVv(n, "n")))));
        /*
         * 
         * case 'minimaxi'
         */
        } else if (mclSwitchCompare(v_, _mxarray15_)) {
            /*
             * if n <= 32
             */
            if (mclLeBool(mclVv(n, "n"), _mxarray17_)) {
                /*
                 * thr = 0;
                 */
                mlfAssign(&thr, _mxarray9_);
            /*
             * else
             */
            } else {
                /*
                 * thr = 0.3936 + 0.1829*(log(n)/log(2));
                 */
                mlfAssign(
                  &thr,
                  mclPlus(
                    _mxarray18_,
                    mclMtimes(
                      _mxarray19_,
                      mclMrdivide(mlfLog(mclVv(n, "n")), mlfLog(_mxarray0_)))));
            /*
             * end
             */
            }
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'invalid argument value','msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("thselect"), _mxarray20_, _mxarray22_, NULL));
            /*
             * error('*')
             */
            mlfError(_mxarray3_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(thr, 1, nargout_, "thr", "thselect");
    mxDestroyArray(ans);
    mxDestroyArray(n);
    mxDestroyArray(sx2);
    mxDestroyArray(risks);
    mxDestroyArray(risk);
    mxDestroyArray(best);
    mxDestroyArray(hthr);
    mxDestroyArray(eta);
    mxDestroyArray(crit);
    mxDestroyArray(tptr);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return thr;
}
