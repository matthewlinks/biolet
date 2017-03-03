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
#include "wden.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "thselect.h"
#include "wavedec.h"
#include "waverec.h"
#include "wnoisest.h"
#include "wthresh.h"
static mxArray * _mxarray0_;

static double _array2_[4] = { 0.0, 1.0, 2.0, 3.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

static mxChar _array7_[3] = { 's', 't', 'r' };
static mxArray * _mxarray6_;

static mxChar _array9_[3] = { 'i', 'n', 't' };
static mxArray * _mxarray8_;

static mxChar _array11_[3] = { 'o', 'n', 'e' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;

static mxChar _array14_[3] = { 's', 'l', 'n' };
static mxArray * _mxarray13_;

static mxChar _array16_[3] = { 'm', 'l', 'n' };
static mxArray * _mxarray15_;

static mxChar _array18_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray17_;

static mxChar _array20_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray19_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;

static mxChar _array25_[8] = { 'm', 'i', 'n', 'i', 'm', 'a', 'x', 'i' };
static mxArray * _mxarray24_;
static mxArray * _mxarray26_;
static mxArray * _mxarray27_;

static mxChar _array29_[8] = { 's', 'q', 't', 'w', 'o', 'l', 'o', 'g' };
static mxArray * _mxarray28_;

void InitializeModule_wden(void) {
    _mxarray0_ = mclInitializeDouble(7.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 4, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeDouble(6.0);
    _mxarray6_ = mclInitializeString(3, _array7_);
    _mxarray8_ = mclInitializeString(3, _array9_);
    _mxarray10_ = mclInitializeString(3, _array11_);
    _mxarray12_ = mclInitializeDouble(1.0);
    _mxarray13_ = mclInitializeString(3, _array14_);
    _mxarray15_ = mclInitializeString(3, _array16_);
    _mxarray17_ = mclInitializeString(22, _array18_);
    _mxarray19_ = mclInitializeString(3, _array20_);
    _mxarray21_ = mclInitializeDouble(2.0);
    _mxarray22_ = mclInitializeDouble(-1.0);
    _mxarray23_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray24_ = mclInitializeString(8, _array25_);
    _mxarray26_ = mclInitializeDouble(2.220446049250313e-16);
    _mxarray27_ = mclInitializeDouble(0.0);
    _mxarray28_ = mclInitializeString(8, _array29_);
}

void TerminateModule_wden(void) {
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwden(mxArray * * cxd,
                       mxArray * * lxd,
                       int nargout_,
                       mxArray * in1,
                       mxArray * in2,
                       mxArray * in3,
                       mxArray * in4,
                       mxArray * in5,
                       mxArray * in6,
                       mxArray * in7);

_mexLocalFunctionTable _local_function_table_wden
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWden" contains the nargout interface for the "wden"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wden.m"
 * (lines 1-94). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNWden(int nargout,
                   mxArray * * cxd,
                   mxArray * * lxd,
                   mxArray * in1,
                   mxArray * in2,
                   mxArray * in3,
                   mxArray * in4,
                   mxArray * in5,
                   mxArray * in6,
                   mxArray * in7) {
    mxArray * xd = NULL;
    mxArray * cxd__ = NULL;
    mxArray * lxd__ = NULL;
    mlfEnterNewContext(2, 7, cxd, lxd, in1, in2, in3, in4, in5, in6, in7);
    xd = Mwden(&cxd__, &lxd__, nargout, in1, in2, in3, in4, in5, in6, in7);
    mlfRestorePreviousContext(
      2, 7, cxd, lxd, in1, in2, in3, in4, in5, in6, in7);
    if (cxd != NULL) {
        mclCopyOutputArg(cxd, cxd__);
    } else {
        mxDestroyArray(cxd__);
    }
    if (lxd != NULL) {
        mclCopyOutputArg(lxd, lxd__);
    } else {
        mxDestroyArray(lxd__);
    }
    return mlfReturnValue(xd);
}

/*
 * The function "mlfWden" contains the normal interface for the "wden"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wden.m"
 * (lines 1-94). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfWden(mxArray * * cxd,
                  mxArray * * lxd,
                  mxArray * in1,
                  mxArray * in2,
                  mxArray * in3,
                  mxArray * in4,
                  mxArray * in5,
                  mxArray * in6,
                  mxArray * in7) {
    int nargout = 1;
    mxArray * xd = NULL;
    mxArray * cxd__ = NULL;
    mxArray * lxd__ = NULL;
    mlfEnterNewContext(2, 7, cxd, lxd, in1, in2, in3, in4, in5, in6, in7);
    if (cxd != NULL) {
        ++nargout;
    }
    if (lxd != NULL) {
        ++nargout;
    }
    xd = Mwden(&cxd__, &lxd__, nargout, in1, in2, in3, in4, in5, in6, in7);
    mlfRestorePreviousContext(
      2, 7, cxd, lxd, in1, in2, in3, in4, in5, in6, in7);
    if (cxd != NULL) {
        mclCopyOutputArg(cxd, cxd__);
    } else {
        mxDestroyArray(cxd__);
    }
    if (lxd != NULL) {
        mclCopyOutputArg(lxd, lxd__);
    } else {
        mxDestroyArray(lxd__);
    }
    return mlfReturnValue(xd);
}

/*
 * The function "mlfVWden" contains the void interface for the "wden"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wden.m"
 * (lines 1-94). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWden(mxArray * in1,
              mxArray * in2,
              mxArray * in3,
              mxArray * in4,
              mxArray * in5,
              mxArray * in6,
              mxArray * in7) {
    mxArray * xd = NULL;
    mxArray * cxd = NULL;
    mxArray * lxd = NULL;
    mlfEnterNewContext(0, 7, in1, in2, in3, in4, in5, in6, in7);
    xd = Mwden(&cxd, &lxd, 0, in1, in2, in3, in4, in5, in6, in7);
    mlfRestorePreviousContext(0, 7, in1, in2, in3, in4, in5, in6, in7);
    mxDestroyArray(xd);
    mxDestroyArray(cxd);
    mxDestroyArray(lxd);
}

/*
 * The function "mlxWden" contains the feval interface for the "wden"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wden.m"
 * (lines 1-94). The feval function calls the implementation version of wden
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWden(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wden Line: 1 Column: 1 The function \"wden\""
            " was called with more than the declared number of outputs (3)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wden Line: 1 Column: 1 The function \"wden"
            "\" was called with more than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 3; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mwden(
          &mplhs[1],
          &mplhs[2],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mwden" is the implementation version of the "wden" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wden.m" (lines
 * 1-94). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [xd,cxd,lxd] = wden(in1,in2,in3,in4,in5,in6,in7)
 */
static mxArray * Mwden(mxArray * * cxd,
                       mxArray * * lxd,
                       int nargout_,
                       mxArray * in1,
                       mxArray * in2,
                       mxArray * in3,
                       mxArray * in4,
                       mxArray * in5,
                       mxArray * in6,
                       mxArray * in7) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wden);
    int nargin_ = mclNargin(7, in1, in2, in3, in4, in5, in6, in7, NULL);
    mxArray * xd = NULL;
    mxArray * thr = NULL;
    mxArray * flk = NULL;
    mxArray * k = NULL;
    mxArray * last = NULL;
    mxArray * ld = NULL;
    mxArray * first = NULL;
    mxArray * s = NULL;
    mxArray * x = NULL;
    mxArray * w = NULL;
    mxArray * n = NULL;
    mxArray * scal = NULL;
    mxArray * sorh = NULL;
    mxArray * tptr = NULL;
    mxArray * l = NULL;
    mxArray * c = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&in1);
    mclCopyArray(&in2);
    mclCopyArray(&in3);
    mclCopyArray(&in4);
    mclCopyArray(&in5);
    mclCopyArray(&in6);
    mclCopyArray(&in7);
    /*
     * %WDEN Automatic 1-D de-noising using wavelets.
     * %   WDEN performs an automatic de-noising process of a 1-D
     * %   signal using wavelets.
     * %
     * %   [XD,CXD,LXD] = WDEN(X,TPTR,SORH,SCAL,N,'wname') returns 
     * %   a de-noised version XD of input signal X obtained by 
     * %   thresholding the wavelet coefficients. 
     * %   Additional output arguments [CXD,LXD] are the wavelet 
     * %   decomposition structure of de-noised signal XD.
     * %
     * %   TPTR string contains threshold selection rule:
     * %   'rigrsure' use principle of Stein's Unbiased Risk.
     * %   'heursure' is an heuristic variant of the first option.
     * %   'sqtwolog' for universal threshold sqrt(2*log(.)).
     * %   'minimaxi' for minimax thresholding.
     * %       (see THSELECT for more details).
     * %   SORH ('s' or 'h') is for soft or hard thresholding
     * %       (see WTHRESH for more details).
     * %   SCAL defines multiplicative threshold rescaling:
     * %     'one' for no rescaling.
     * %     'sln' for rescaling using a single estimation 
     * %       of level noise based on first level coefficients.
     * %     'mln' for rescaling done using level dependent
     * %       estimation of level noise.
     * %   Wavelet decomposition is performed at level N and 'wname'
     * %   is a string containing the name of desired orthogonal
     * %   wavelet.
     * %
     * %   [XD,CXD,LXD] = WDEN(C,L,TPTR,SORH,SCAL,N,'wname') returns 
     * %   same output arguments, using the same options as above, but 
     * %   obtained directly from the input wavelet decomposition 
     * %   structure [C,L] of the signal to be de-noised, at level N
     * %   and using 'wname' orthogonal wavelet.
     * %
     * %   See also THSELECT, WAVEDEC, WDENCMP, WFILTERS, WTHRESH.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 01-Jun-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if nargin==7
     */
    if (nargin_ == 7) {
        /*
         * if errargn(mfilename,nargin,[7],nargout,[0:3]) , error('*'); end
         */
        if (mlfTobool(
              mlfNErrargn(
                1,
                NULL,
                mxCreateString("wden"),
                mlfScalar(nargin_),
                _mxarray0_,
                mlfScalar(nargout_),
                _mxarray1_))) {
            mlfError(_mxarray3_, NULL);
        }
        /*
         * c=in1; l=in2; tptr=in3; sorh=in4; scal=in5; n=in6; w=in7;
         */
        mlfAssign(&c, mclVa(in1, "in1"));
        mlfAssign(&l, mclVa(in2, "in2"));
        mlfAssign(&tptr, mclVa(in3, "in3"));
        mlfAssign(&sorh, mclVa(in4, "in4"));
        mlfAssign(&scal, mclVa(in5, "in5"));
        mlfAssign(&n, mclVa(in6, "in6"));
        mlfAssign(&w, mclVa(in7, "in7"));
    /*
     * else
     */
    } else {
        /*
         * if errargn(mfilename,nargin,[6],nargout,[0:3]), error('*'), end
         */
        if (mlfTobool(
              mlfNErrargn(
                1,
                NULL,
                mxCreateString("wden"),
                mlfScalar(nargin_),
                _mxarray5_,
                mlfScalar(nargout_),
                _mxarray1_))) {
            mlfError(_mxarray3_, NULL);
        }
        /*
         * x=in1; tptr=in2; sorh=in3; scal=in4; n=in5; w=in6;
         */
        mlfAssign(&x, mclVa(in1, "in1"));
        mlfAssign(&tptr, mclVa(in2, "in2"));
        mlfAssign(&sorh, mclVa(in3, "in3"));
        mlfAssign(&scal, mclVa(in4, "in4"));
        mlfAssign(&n, mclVa(in5, "in5"));
        mlfAssign(&w, mclVa(in6, "in6"));
    /*
     * end
     */
    }
    /*
     * if errargt(mfilename,tptr,'str'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wden"), mclVv(tptr, "tptr"), _mxarray6_, NULL))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * if errargt(mfilename,sorh,'str'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wden"), mclVv(sorh, "sorh"), _mxarray6_, NULL))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * if errargt(mfilename,scal,'str'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wden"), mclVv(scal, "scal"), _mxarray6_, NULL))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * if errargt(mfilename,n,'int'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wden"), mclVv(n, "n"), _mxarray8_, NULL))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * if errargt(mfilename,w,'str'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wden"), mclVv(w, "w"), _mxarray6_, NULL))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * if nargin==6
     */
    if (nargin_ == 6) {
        /*
         * % Wavelet decomposition of x.
         * [c,l] = wavedec(x,n,w);
         */
        mlfAssign(
          &c,
          mlfNWavedec(
            2, &l, mclVv(x, "x"), mclVv(n, "n"), mclVv(w, "w"), NULL));
    /*
     * end
     */
    }
    /*
     * 
     * % Threshold rescaling coefficients.
     * switch scal
     */
    {
        mxArray * v_ = mclInitialize(mclVv(scal, "scal"));
        if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * case 'one' , s = ones(1,n);
             */
            mlfAssign(&s, mlfOnes(_mxarray12_, mclVv(n, "n"), NULL));
        /*
         * case 'sln' , s = ones(1,n)*wnoisest(c,l,1);
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            mlfAssign(
              &s,
              mclMtimes(
                mlfOnes(_mxarray12_, mclVv(n, "n"), NULL),
                mlfNWnoisest(
                  1, mclVv(c, "c"), mclVv(l, "l"), _mxarray12_, NULL)));
        /*
         * case 'mln' , s = wnoisest(c,l,1:n);
         */
        } else if (mclSwitchCompare(v_, _mxarray15_)) {
            mlfAssign(
              &s,
              mlfNWnoisest(
                1,
                mclVv(c, "c"),
                mclVv(l, "l"),
                mlfColon(_mxarray12_, mclVv(n, "n"), NULL),
                NULL));
        /*
         * otherwise  , errargt(mfilename,'invalid argument value','msg'); error('*')
         */
        } else {
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("wden"), _mxarray17_, _mxarray19_, NULL));
            mlfError(_mxarray3_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % Wavelet coefficients thresholding.
     * first = cumsum(l)+1;
     */
    mlfAssign(&first, mclPlus(mlfCumsum(mclVv(l, "l"), NULL), _mxarray12_));
    /*
     * first = first(end-2:-1:1);
     */
    mlfAssign(
      &first,
      mclArrayRef1(
        mclVv(first, "first"),
        mlfColon(
          mclMinus(
            mlfEnd(mclVv(first, "first"), _mxarray12_, _mxarray12_),
            _mxarray21_),
          _mxarray22_,
          _mxarray12_)));
    /*
     * ld   = l(end-1:-1:2);
     */
    mlfAssign(
      &ld,
      mclArrayRef1(
        mclVv(l, "l"),
        mlfColon(
          mclMinus(
            mlfEnd(mclVv(l, "l"), _mxarray12_, _mxarray12_), _mxarray12_),
          _mxarray22_,
          _mxarray21_)));
    /*
     * last = first+ld-1;
     */
    mlfAssign(
      &last,
      mclMinus(mclPlus(mclVv(first, "first"), mclVv(ld, "ld")), _mxarray12_));
    /*
     * cxd = c;
     */
    mlfAssign(cxd, mclVv(c, "c"));
    /*
     * lxd = l;
     */
    mlfAssign(lxd, mclVv(l, "l"));
    /*
     * for k = 1:n
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(n, "n"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray23_);
        } else {
            /*
             * flk = first(k):last(k);
             * if tptr=='sqtwolog' | tptr=='minimaxi'
             * thr = thselect(c,tptr);
             * else
             * if s(k) < sqrt(eps) * max(c(flk))
             * thr = 0;
             * else
             * thr = thselect(c(flk)/s(k),tptr);
             * end
             * end                                     % threshold.
             * thr      = thr * s(k);                  % rescaled threshold.
             * cxd(flk) = wthresh(c(flk),sorh,thr);    % thresholding or shrinking.
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &flk,
                  mlfColon(
                    mclIntArrayRef1(mclVv(first, "first"), v_),
                    mclIntArrayRef1(mclVv(last, "last"), v_),
                    NULL));
                {
                    mxArray * a_
                      = mclInitialize(mclEq(mclVv(tptr, "tptr"), _mxarray28_));
                    if (mlfTobool(a_)
                        || mlfTobool(
                             mclOr(
                               a_, mclEq(mclVv(tptr, "tptr"), _mxarray24_)))) {
                        mxDestroyArray(a_);
                        mlfAssign(
                          &thr,
                          mlfNThselect(1, mclVv(c, "c"), mclVv(tptr, "tptr")));
                    } else {
                        mxDestroyArray(a_);
                        if (mclLtBool(
                              mclIntArrayRef1(mclVv(s, "s"), v_),
                              mclMtimes(
                                mlfSqrt(_mxarray26_),
                                mlfMax(
                                  NULL,
                                  mclArrayRef1(
                                    mclVv(c, "c"), mclVv(flk, "flk")),
                                  NULL,
                                  NULL)))) {
                            mlfAssign(&thr, _mxarray27_);
                        } else {
                            mlfAssign(
                              &thr,
                              mlfNThselect(
                                1,
                                mclMrdivide(
                                  mclArrayRef1(
                                    mclVv(c, "c"), mclVv(flk, "flk")),
                                  mclIntArrayRef1(mclVv(s, "s"), v_)),
                                mclVv(tptr, "tptr")));
                        }
                    }
                }
                mlfAssign(
                  &thr,
                  mclMtimes(
                    mclVv(thr, "thr"), mclIntArrayRef1(mclVv(s, "s"), v_)));
                mclArrayAssign1(
                  cxd,
                  mlfNWthresh(
                    1,
                    mclArrayRef1(mclVv(c, "c"), mclVv(flk, "flk")),
                    mclVv(sorh, "sorh"),
                    mclVv(thr, "thr")),
                  mclVv(flk, "flk"));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    /*
     * 
     * % Wavelet reconstruction of xd.
     * xd = waverec(cxd,lxd,w); 
     */
    mlfAssign(
      &xd,
      mlfNWaverec(
        1, mclVv(*cxd, "cxd"), mclVv(*lxd, "lxd"), mclVv(w, "w"), NULL));
    mclValidateOutput(xd, 1, nargout_, "xd", "wden");
    mclValidateOutput(*cxd, 2, nargout_, "cxd", "wden");
    mclValidateOutput(*lxd, 3, nargout_, "lxd", "wden");
    mxDestroyArray(ans);
    mxDestroyArray(c);
    mxDestroyArray(l);
    mxDestroyArray(tptr);
    mxDestroyArray(sorh);
    mxDestroyArray(scal);
    mxDestroyArray(n);
    mxDestroyArray(w);
    mxDestroyArray(x);
    mxDestroyArray(s);
    mxDestroyArray(first);
    mxDestroyArray(ld);
    mxDestroyArray(last);
    mxDestroyArray(k);
    mxDestroyArray(flk);
    mxDestroyArray(thr);
    mxDestroyArray(in7);
    mxDestroyArray(in6);
    mxDestroyArray(in5);
    mxDestroyArray(in4);
    mxDestroyArray(in3);
    mxDestroyArray(in2);
    mxDestroyArray(in1);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return xd;
}
