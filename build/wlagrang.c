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
#include "wlagrang.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wrev.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;

void InitializeModule_wlagrang(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(2.0);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray9_ = mclInitializeDouble(.5);
}

void TerminateModule_wlagrang(void) {
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwlagrang(mxArray * * R, int nargout_, mxArray * N);

_mexLocalFunctionTable _local_function_table_wlagrang
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWlagrang" contains the nargout interface for the
 * "wlagrang" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wlagrang.m" (lines 1-36). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWlagrang(int nargout, mxArray * * R, mxArray * N) {
    mxArray * P = NULL;
    mxArray * R__ = NULL;
    mlfEnterNewContext(1, 1, R, N);
    P = Mwlagrang(&R__, nargout, N);
    mlfRestorePreviousContext(1, 1, R, N);
    if (R != NULL) {
        mclCopyOutputArg(R, R__);
    } else {
        mxDestroyArray(R__);
    }
    return mlfReturnValue(P);
}

/*
 * The function "mlfWlagrang" contains the normal interface for the "wlagrang"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wlagrang.m" (lines 1-36). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWlagrang(mxArray * * R, mxArray * N) {
    int nargout = 1;
    mxArray * P = NULL;
    mxArray * R__ = NULL;
    mlfEnterNewContext(1, 1, R, N);
    if (R != NULL) {
        ++nargout;
    }
    P = Mwlagrang(&R__, nargout, N);
    mlfRestorePreviousContext(1, 1, R, N);
    if (R != NULL) {
        mclCopyOutputArg(R, R__);
    } else {
        mxDestroyArray(R__);
    }
    return mlfReturnValue(P);
}

/*
 * The function "mlfVWlagrang" contains the void interface for the "wlagrang"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wlagrang.m" (lines 1-36). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWlagrang(mxArray * N) {
    mxArray * P = NULL;
    mxArray * R = NULL;
    mlfEnterNewContext(0, 1, N);
    P = Mwlagrang(&R, 0, N);
    mlfRestorePreviousContext(0, 1, N);
    mxDestroyArray(P);
    mxDestroyArray(R);
}

/*
 * The function "mlxWlagrang" contains the feval interface for the "wlagrang"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wlagrang.m" (lines 1-36). The
 * feval function calls the implementation version of wlagrang through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWlagrang(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wlagrang Line: 1 Column:"
            " 1 The function \"wlagrang\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wlagrang Line: 1 Column:"
            " 1 The function \"wlagrang\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mwlagrang(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mwlagrang" is the implementation version of the "wlagrang"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wlagrang.m" (lines 1-36). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function  [P,R] = wlagrang(N)
 */
static mxArray * Mwlagrang(mxArray * * R, int nargout_, mxArray * N) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wlagrang);
    int nargin_ = mclNargin(1, N, NULL);
    mxArray * P = NULL;
    mxArray * K = NULL;
    mxArray * s = NULL;
    mxArray * nok = NULL;
    mxArray * k = NULL;
    mxArray * a = NULL;
    mxArray * sup = NULL;
    mxArray * lon = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&N);
    /*
     * %WLAGRANG "Lagrange a trous" filters computation.
     * %   [P,R] = WLAGRANG(N) returns the order N Lagrange filter P.
     * %   P has (2N-1) roots located in 1. R contains the other roots
     * %   sorted in complex modulus ascending order.
     * %   
     * %   Possible values for N are:
     * %      N = 1, 2, 3, ...
     * %   Caution: Instability may occur when N is too large (N > 45).
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 06-Feb-98.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1 2],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wlagrang"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * lon = 2*N-1;
     */
    mlfAssign(&lon, mclMinus(mclMtimes(_mxarray6_, mclVa(N, "N")), _mxarray7_));
    /*
     * sup = [-N+1:N];
     */
    mlfAssign(
      &sup,
      mlfColon(
        mclPlus(mclUminus(mclVa(N, "N")), _mxarray7_), mclVa(N, "N"), NULL));
    /*
     * a = zeros(1,N);
     */
    mlfAssign(&a, mlfZeros(_mxarray7_, mclVa(N, "N"), NULL));
    /*
     * for k = 1:N
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(N, "N"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray8_);
        } else {
            /*
             * nok  = sup(sup ~= k);
             * a(k) = prod(0.5-nok)/prod(k-nok);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &nok,
                  mclArrayRef1(
                    mclVv(sup, "sup"),
                    mclNe(mclVv(sup, "sup"), mlfScalar(v_))));
                mclIntArrayAssign1(
                  &a,
                  mclMrdivide(
                    mlfProd(mclMinus(_mxarray9_, mclVv(nok, "nok")), NULL),
                    mlfProd(mclMinus(mlfScalar(v_), mclVv(nok, "nok")), NULL)),
                  v_);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    /*
     * P = zeros(1,lon);
     */
    mlfAssign(&P, mlfZeros(_mxarray7_, mclVv(lon, "lon"), NULL));
    /*
     * P(1:2:lon) = a;
     */
    mclArrayAssign1(
      &P, mclVv(a, "a"), mlfColon(_mxarray7_, _mxarray6_, mclVv(lon, "lon")));
    /*
     * P = [wrev(P),1,P]; 
     */
    mlfAssign(
      &P,
      mlfHorzcat(mlfNWrev(1, mclVv(P, "P")), _mxarray7_, mclVv(P, "P"), NULL));
    /*
     * if nargout>1
     */
    if (nargout_ > 1) {
        /*
         * R = roots(P);
         */
        mlfAssign(R, mlfRoots(mclVv(P, "P")));
        /*
         * [s,K] = sort(abs(R+1));
         */
        mlfAssign(
          &s, mlfSort(&K, mlfAbs(mclPlus(mclVv(*R, "R"), _mxarray7_)), NULL));
        /*
         * R = R(K(lon+2:2*lon));
         */
        mlfAssign(
          R,
          mclArrayRef1(
            mclVv(*R, "R"),
            mclArrayRef1(
              mclVv(K, "K"),
              mlfColon(
                mclPlus(mclVv(lon, "lon"), _mxarray6_),
                mclMtimes(_mxarray6_, mclVv(lon, "lon")),
                NULL))));
        /*
         * [s,K] = sort(abs(R));
         */
        mlfAssign(&s, mlfSort(&K, mlfAbs(mclVv(*R, "R")), NULL));
        /*
         * R = R(K);
         */
        mlfAssign(R, mclArrayRef1(mclVv(*R, "R"), mclVv(K, "K")));
    /*
     * end
     */
    }
    mclValidateOutput(P, 1, nargout_, "P", "wlagrang");
    mclValidateOutput(*R, 2, nargout_, "R", "wlagrang");
    mxDestroyArray(ans);
    mxDestroyArray(lon);
    mxDestroyArray(sup);
    mxDestroyArray(a);
    mxDestroyArray(k);
    mxDestroyArray(nok);
    mxDestroyArray(s);
    mxDestroyArray(K);
    mxDestroyArray(N);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return P;
}
