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
#include "rbiowavf.h"
#include "biorwavf.h"
#include "errargn.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static double _array2_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;

static mxChar _array6_[1] = { '.' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;

static mxChar _array10_[4] = { 'b', 'i', 'o', 'r' };
static mxArray * _mxarray9_;

void InitializeModule_rbiowavf(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 3, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeString(1, _array6_);
    _mxarray7_ = mclInitializeDouble(47.0);
    _mxarray8_ = mclInitializeDouble(58.0);
    _mxarray9_ = mclInitializeString(4, _array10_);
}

void TerminateModule_rbiowavf(void) {
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mrbiowavf(mxArray * * Df, int nargout_, mxArray * wname);

_mexLocalFunctionTable _local_function_table_rbiowavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNRbiowavf" contains the nargout interface for the
 * "rbiowavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/rbiowavf.m" (lines 1-44). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNRbiowavf(int nargout, mxArray * * Df, mxArray * wname) {
    mxArray * Rf = NULL;
    mxArray * Df__ = NULL;
    mlfEnterNewContext(1, 1, Df, wname);
    Rf = Mrbiowavf(&Df__, nargout, wname);
    mlfRestorePreviousContext(1, 1, Df, wname);
    if (Df != NULL) {
        mclCopyOutputArg(Df, Df__);
    } else {
        mxDestroyArray(Df__);
    }
    return mlfReturnValue(Rf);
}

/*
 * The function "mlfRbiowavf" contains the normal interface for the "rbiowavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/rbiowavf.m" (lines 1-44). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfRbiowavf(mxArray * * Df, mxArray * wname) {
    int nargout = 1;
    mxArray * Rf = NULL;
    mxArray * Df__ = NULL;
    mlfEnterNewContext(1, 1, Df, wname);
    if (Df != NULL) {
        ++nargout;
    }
    Rf = Mrbiowavf(&Df__, nargout, wname);
    mlfRestorePreviousContext(1, 1, Df, wname);
    if (Df != NULL) {
        mclCopyOutputArg(Df, Df__);
    } else {
        mxDestroyArray(Df__);
    }
    return mlfReturnValue(Rf);
}

/*
 * The function "mlfVRbiowavf" contains the void interface for the "rbiowavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/rbiowavf.m" (lines 1-44). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVRbiowavf(mxArray * wname) {
    mxArray * Rf = NULL;
    mxArray * Df = NULL;
    mlfEnterNewContext(0, 1, wname);
    Rf = Mrbiowavf(&Df, 0, wname);
    mlfRestorePreviousContext(0, 1, wname);
    mxDestroyArray(Rf);
    mxDestroyArray(Df);
}

/*
 * The function "mlxRbiowavf" contains the feval interface for the "rbiowavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/rbiowavf.m" (lines 1-44). The
 * feval function calls the implementation version of rbiowavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxRbiowavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: rbiowavf Line: 1 Column:"
            " 1 The function \"rbiowavf\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: rbiowavf Line: 1 Column:"
            " 1 The function \"rbiowavf\" was called with m"
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
    mplhs[0] = Mrbiowavf(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "Mrbiowavf" is the implementation version of the "rbiowavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/rbiowavf.m" (lines 1-44). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [Rf,Df] = rbiowavf(wname)
 */
static mxArray * Mrbiowavf(mxArray * * Df, int nargout_, mxArray * wname) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_rbiowavf);
    int nargin_ = mclNargin(1, wname, NULL);
    mxArray * Rf = NULL;
    mxArray * Nd = NULL;
    mxArray * ii = NULL;
    mxArray * ab = NULL;
    mxArray * Nr = NULL;
    mxArray * lw = NULL;
    mxArray * kdot = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    /*
     * %RBIOWAVF Reverse Biorthogonal spline wavelet filters.
     * %   [RF,DF] = RBIOWAVF(W) returns two scaling filters
     * %   associated with the biorthogonal wavelet specified
     * %   by the string W.
     * %   W = 'rbioNd.Nr' where possible values for Nd and Nr are:
     * %       Nd = 1  Nr = 1 , 3 or 5
     * %       Nd = 2  Nr = 2 , 4 , 6 or 8
     * %       Nd = 3  Nr = 1 , 3 , 5 , 7 or 9
     * %       Nd = 4  Nr = 4
     * %       Nd = 5  Nr = 5
     * %       Nd = 6  Nr = 8
     * %   The output arguments are filters:
     * %   RF is the reconstruction filter
     * %   DF is the decomposition filter
     * %
     * %   See also WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-1998
     * %   Last Revision: 26-Jul-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("rbiowavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * % Find Number.
     * %-------------
     * kdot = find(wname=='.');
     */
    mlfAssign(
      &kdot, mlfFind(NULL, NULL, mclEq(mclVa(wname, "wname"), _mxarray5_)));
    /*
     * if length(kdot)~=1 , error('*'); end
     */
    if (mclLengthInt(mclVv(kdot, "kdot")) != 1) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * lw    = length(wname);
     */
    mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
    /*
     * Nr    = wname(kdot+1:lw);
     */
    mlfAssign(
      &Nr,
      mclArrayRef1(
        mclVa(wname, "wname"),
        mlfColon(
          mclPlus(mclVv(kdot, "kdot"), _mxarray0_), mclVv(lw, "lw"), NULL)));
    /*
     * wname = wname(1:kdot-1);
     */
    mlfAssign(
      &wname,
      mclArrayRef1(
        mclVa(wname, "wname"),
        mlfColon(_mxarray0_, mclMinus(mclVv(kdot, "kdot"), _mxarray0_), NULL)));
    /*
     * lw    = length(wname);
     */
    mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
    /*
     * ab    = abs(wname);
     */
    mlfAssign(&ab, mlfAbs(mclVa(wname, "wname")));
    /*
     * ii    = lw+1;
     */
    mlfAssign(&ii, mclPlus(mclVv(lw, "lw"), _mxarray0_));
    /*
     * while (ii>1) & (47<ab(ii-1)) & (ab(ii-1)<58) , ii = ii-1; end
     */
    for (;;) {
        mxArray * a_ = mclInitialize(mclGt(mclVv(ii, "ii"), _mxarray0_));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclLt(
                  _mxarray7_,
                  mclArrayRef1(
                    mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray0_)))));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclLt(
                     mclArrayRef1(
                       mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray0_)),
                     _mxarray8_)))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        mlfAssign(&ii, mclMinus(mclVv(ii, "ii"), _mxarray0_));
    }
    /*
     * Nd    = wname(ii:lw);
     */
    mlfAssign(
      &Nd,
      mclArrayRef1(
        mclVa(wname, "wname"),
        mlfColon(mclVv(ii, "ii"), mclVv(lw, "lw"), NULL)));
    /*
     * 
     * % Use direct Biorthogonal spline wavelet filters.
     * %------------------------------------------------
     * wname = ['bior' Nd '.' Nr];
     */
    mlfAssign(
      &wname,
      mlfHorzcat(
        _mxarray9_, mclVv(Nd, "Nd"), _mxarray5_, mclVv(Nr, "Nr"), NULL));
    /*
     * [Df,Rf] = biorwavf(wname);
     */
    mlfAssign(Df, mlfNBiorwavf(2, &Rf, mclVa(wname, "wname")));
    mclValidateOutput(Rf, 1, nargout_, "Rf", "rbiowavf");
    mclValidateOutput(*Df, 2, nargout_, "Df", "rbiowavf");
    mxDestroyArray(ans);
    mxDestroyArray(kdot);
    mxDestroyArray(lw);
    mxDestroyArray(Nr);
    mxDestroyArray(ab);
    mxDestroyArray(ii);
    mxDestroyArray(Nd);
    mxDestroyArray(wname);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return Rf;
}
