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
#include "gauswavf.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wavemngr.h"
#include "wstr2num.h"

static double _array1_[3] = { 0.0, 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;

static mxChar _array7_[5] = { 'm', 'a', 'p', 'l', 'e' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static mxChar _array12_[7] = { 'f', 'a', 'm', '_', 'n', 'u', 'm' };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

static mxChar _array15_[3] = { 'i', 'n', 't' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;

static double _array18_[8] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 };
static mxArray * _mxarray17_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;
static mxArray * _mxarray25_;
static mxArray * _mxarray26_;
static mxArray * _mxarray27_;
static mxArray * _mxarray28_;
static mxArray * _mxarray29_;
static mxArray * _mxarray30_;
static mxArray * _mxarray31_;
static mxArray * _mxarray32_;
static mxArray * _mxarray33_;
static mxArray * _mxarray34_;
static mxArray * _mxarray35_;
static mxArray * _mxarray36_;
static mxArray * _mxarray37_;
static mxArray * _mxarray38_;
static mxArray * _mxarray39_;
static mxArray * _mxarray40_;
static mxArray * _mxarray41_;
static mxArray * _mxarray42_;
static mxArray * _mxarray43_;

static mxChar _array45_[49] = { '*', '*', '*', ' ', 'T', 'h', 'e', ' ', 'E',
                                'x', 't', 'e', 'n', 'd', 'e', 'd', ' ', 'S',
                                'y', 'm', 'b', 'o', 'l', 'i', 'c', ' ', 'T',
                                'o', 'o', 'l', 'b', 'o', 'x', ' ', 'i', 's',
                                ' ', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd',
                                ' ', '*', '*', '*' };
static mxArray * _mxarray44_;

static mxChar _array47_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray46_;

static mxChar _array49_[1] = { 't' };
static mxArray * _mxarray48_;
static double _ieee_minusinf_;
static mxArray * _mxarray50_;
static double _ieee_plusinf_;
static mxArray * _mxarray51_;
static mxArray * _mxarray52_;

static mxArray * _array54_[2] = { NULL /*_mxarray19_*/, NULL /*_mxarray16_*/ };
static mxArray * _mxarray53_;

void InitializeModule_gauswavf(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeString(5, _array7_);
    _mxarray8_ = mclInitializeDouble(8.0);
    _mxarray9_ = mclInitializeDouble(45.0);
    _mxarray10_ = mclInitializeDouble(4.0);
    _mxarray11_ = mclInitializeString(7, _array12_);
    _mxarray13_ = mclInitializeDouble(1.0);
    _mxarray14_ = mclInitializeString(3, _array15_);
    _mxarray16_ = mclInitializeDouble(3.0);
    _mxarray17_ = mclInitializeDoubleVector(1, 8, _array18_);
    _mxarray19_ = mclInitializeDouble(2.0);
    _mxarray20_ = mclInitializeDouble(.8932438417380023);
    _mxarray21_ = mclInitializeDouble(-2.0);
    _mxarray22_ = mclInitializeDouble(1.1547005383792517);
    _mxarray23_ = mclInitializeDouble(-1.0);
    _mxarray24_ = mclInitializeDouble(1.0327955589886444);
    _mxarray25_ = mclInitializeDouble(.3903600291794133);
    _mxarray26_ = mclInitializeDouble(12.0);
    _mxarray27_ = mclInitializeDouble(5.0);
    _mxarray28_ = mclInitializeDouble(.2602400194529422);
    _mxarray29_ = mclInitializeDouble(-15.0);
    _mxarray30_ = mclInitializeDouble(20.0);
    _mxarray31_ = mclInitializeDouble(6.0);
    _mxarray32_ = mclInitializeDouble(.07846531817819995);
    _mxarray33_ = mclInitializeDouble(90.0);
    _mxarray34_ = mclInitializeDouble(60.0);
    _mxarray35_ = mclInitializeDouble(7.0);
    _mxarray36_ = mclInitializeDouble(.04352472739032255);
    _mxarray37_ = mclInitializeDouble(105.0);
    _mxarray38_ = mclInitializeDouble(210.0);
    _mxarray39_ = mclInitializeDouble(84.0);
    _mxarray40_ = mclInitializeDouble(.011238036288729136);
    _mxarray41_ = mclInitializeDouble(840.0);
    _mxarray42_ = mclInitializeDouble(224.0);
    _mxarray43_ = mclInitializeDouble(16.0);
    _mxarray44_ = mclInitializeString(49, _array45_);
    _mxarray46_ = mclInitializeString(3, _array47_);
    _mxarray48_ = mclInitializeString(1, _array49_);
    _ieee_minusinf_ = mclGetMinusInf();
    _mxarray50_ = mclInitializeDouble(_ieee_minusinf_);
    _ieee_plusinf_ = mclGetInf();
    _mxarray51_ = mclInitializeDouble(_ieee_plusinf_);
    _mxarray52_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _array54_[0] = _mxarray19_;
    _array54_[1] = _mxarray16_;
    _mxarray53_ = mclInitializeCellVector(1, 2, _array54_);
}

void TerminateModule_gauswavf(void) {
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgauswavf(mxArray * * X, int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_gauswavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNGauswavf" contains the nargout interface for the
 * "gauswavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/gauswavf.m" (lines 1-100).
 * This interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNGauswavf(int nargout, mxArray * * X, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    psi = Mgauswavf(&X__, nargout, varargin);
    mlfRestorePreviousContext(1, 0, X);
    mxDestroyArray(varargin);
    if (X != NULL) {
        mclCopyOutputArg(X, X__);
    } else {
        mxDestroyArray(X__);
    }
    return mlfReturnValue(psi);
}

/*
 * The function "mlfGauswavf" contains the normal interface for the "gauswavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/gauswavf.m" (lines 1-100).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfGauswavf(mxArray * * X, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    if (X != NULL) {
        ++nargout;
    }
    psi = Mgauswavf(&X__, nargout, varargin);
    mlfRestorePreviousContext(1, 0, X);
    mxDestroyArray(varargin);
    if (X != NULL) {
        mclCopyOutputArg(X, X__);
    } else {
        mxDestroyArray(X__);
    }
    return mlfReturnValue(psi);
}

/*
 * The function "mlfVGauswavf" contains the void interface for the "gauswavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/gauswavf.m" (lines 1-100). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVGauswavf(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    psi = Mgauswavf(&X, 0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    mxDestroyArray(psi);
}

/*
 * The function "mlxGauswavf" contains the feval interface for the "gauswavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/gauswavf.m" (lines 1-100). The
 * feval function calls the implementation version of gauswavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGauswavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: gauswavf Line: 1 Column:"
            " 1 The function \"gauswavf\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mgauswavf(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mgauswavf" is the implementation version of the "gauswavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/gauswavf.m" (lines 1-100). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [psi,X] = gauswavf(varargin)
 */
static mxArray * Mgauswavf(mxArray * * X, int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_gauswavf);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * psi = NULL;
    mxArray * t = NULL;
    mxArray * j = NULL;
    mxArray * n = NULL;
    mxArray * int0 = NULL;
    mxArray * d = NULL;
    mxArray * f = NULL;
    mxArray * y = NULL;
    mxArray * sym = NULL;
    mxArray * msg = NULL;
    mxArray * F0 = NULL;
    mxArray * X2 = NULL;
    mxArray * num = NULL;
    mxArray * fam = NULL;
    mxArray * nmax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %GAUSWAVF Gaussian wavelet.
     * %   [PSI,X] = GAUSWAVF(LB,UB,N,P) returns values of the Pth 
     * %   derivative of the Gaussian function F = Cp*exp(-x^2) on 
     * %   an N point regular grid for the interval [LB,UB]. Cp is 
     * %   such that the 2-norm of the Pth derivative of F is equal 
     * %   to 1.  P can be integer values from 1 to 8.
     * %
     * %   Output arguments are the wavelet function PSI
     * %   computed on the grid X.
     * %   [PSI,X] = GAUSWAVF(LB,UB,N) is equivalent to
     * %   [PSI,X] = GAUSWAVF(LB,UB,N,1).
     * %
     * %   These wavelets have an effective support of [-5 5].
     * %
     * %   ----------------------------------------------------
     * %   If you have access to the Extended Symbolic Toolbox,
     * %   you may specify a value of P > 8. 
     * %   ----------------------------------------------------
     * %
     * %   See also CGAUSWAVF, WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 30-Nov-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[0,3 4],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("gauswavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin==0
     */
    if (nargin_ == 0) {
        /*
         * if ~exist('maple') , nmax = 8; else , nmax = 45; end
         */
        if (mclNotBool(mlfExist(_mxarray6_, NULL))) {
            mlfAssign(&nmax, _mxarray8_);
        } else {
            mlfAssign(&nmax, _mxarray9_);
        }
        /*
         * psi = nmax;
         */
        mlfAssign(&psi, mclVv(nmax, "nmax"));
        /*
         * % psi contains the number max for Gaussian wavelets.
         * % This number depends of Symbolic Toolbox
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * if nargin==4
     */
    if (nargin_ == 4) {
        /*
         * if ischar(varargin{4})
         */
        if (mlfTobool(
              mclFeval(
                mclValueVarargout(),
                mlxIschar,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray10_),
                NULL))) {
            /*
             * [fam,num] = wavemngr('fam_num',varargin{4});
             */
            mlfNWavemngr(
              0,
              mlfVarargout(&fam, &num, NULL),
              _mxarray11_,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray10_),
              NULL);
            /*
             * num = wstr2num(num);
             */
            mlfAssign(&num, mlfWstr2num(mclVv(num, "num")));
        /*
         * else
         */
        } else {
            /*
             * num = varargin{4};
             */
            mlfAssign(
              &num,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray10_));
        /*
         * end
         */
        }
    /*
     * else
     */
    } else {
        /*
         * num = 1;
         */
        mlfAssign(&num, _mxarray13_);
    /*
     * end
     */
    }
    /*
     * if errargt(mfilename,num,'int') , error('*'); end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("gauswavf"),
            mclVv(num, "num"),
            _mxarray14_,
            NULL))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * % Compute values of the Gauss wavelet.
     * X = linspace(varargin{1:3});  % wavelet support.
     */
    mlfAssign(
      X,
      mclFeval(
        mclValueVarargout(),
        mlxLinspace,
        mlfIndexRef(
          mclVa(varargin, "varargin"),
          "{?}",
          mlfColon(_mxarray13_, _mxarray16_, NULL)),
        NULL));
    /*
     * if find(num==[1:8])
     */
    if (mlfTobool(mlfFind(NULL, NULL, mclEq(mclVv(num, "num"), _mxarray17_)))) {
        /*
         * X2 = X.^2;
         */
        mlfAssign(&X2, mlfPower(mclVv(*X, "X"), _mxarray19_));
        /*
         * F0 = (2/pi)^(1/4)*exp(-X2);
         */
        mlfAssign(
          &F0, mclMtimes(_mxarray20_, mlfExp(mclUminus(mclVv(X2, "X2")))));
    /*
     * end
     */
    }
    /*
     * 
     * switch num
     */
    {
        mxArray * v_ = mclInitialize(mclVv(num, "num"));
        if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * case 1
             * psi = -2*X.*F0;
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclMtimes(_mxarray21_, mclVv(*X, "X")), mclVv(F0, "F0")));
        /*
         * 
         * case 2    
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * psi = 2/(3^(1/2)) * (-1+2*X2).*F0;
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclMtimes(
                  _mxarray22_,
                  mclPlus(
                    _mxarray23_, mclMtimes(_mxarray19_, mclVv(X2, "X2")))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * psi = 4/(15^(1/2)) * X.* (3-2*X2).*F0;
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclTimes(
                  mclMtimes(_mxarray24_, mclVv(*X, "X")),
                  mclMinus(
                    _mxarray16_, mclMtimes(_mxarray19_, mclVv(X2, "X2")))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * psi = 4/(105^(1/2)) * (3-12*X2+4*X2.^2).*F0;
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclMtimes(
                  _mxarray25_,
                  mclPlus(
                    mclMinus(
                      _mxarray16_, mclMtimes(_mxarray26_, mclVv(X2, "X2"))),
                    mclMtimes(
                      _mxarray10_, mlfPower(mclVv(X2, "X2"), _mxarray19_)))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray27_)) {
            /*
             * psi = 8/(3*(105^(1/2))) * X.* (-15+20*X2-4*X2.^2).*F0;  
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclTimes(
                  mclMtimes(_mxarray28_, mclVv(*X, "X")),
                  mclMinus(
                    mclPlus(
                      _mxarray29_, mclMtimes(_mxarray30_, mclVv(X2, "X2"))),
                    mclMtimes(
                      _mxarray10_, mlfPower(mclVv(X2, "X2"), _mxarray19_)))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray31_)) {
            /*
             * psi = 8/(3*(1155^(1/2))) * (-15+90*X2-60*X2.^2+8*X2.^3).*F0; 
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclMtimes(
                  _mxarray32_,
                  mclPlus(
                    mclMinus(
                      mclPlus(
                        _mxarray29_, mclMtimes(_mxarray33_, mclVv(X2, "X2"))),
                      mclMtimes(
                        _mxarray34_, mlfPower(mclVv(X2, "X2"), _mxarray19_))),
                    mclMtimes(
                      _mxarray8_, mlfPower(mclVv(X2, "X2"), _mxarray16_)))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 7
         */
        } else if (mclSwitchCompare(v_, _mxarray35_)) {
            /*
             * psi = 16/(3*(15015^(1/2))) *X.*(105-210*X2+84*X2.^2-8*X2.^3).*F0; 
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclTimes(
                  mclMtimes(_mxarray36_, mclVv(*X, "X")),
                  mclMinus(
                    mclPlus(
                      mclMinus(
                        _mxarray37_, mclMtimes(_mxarray38_, mclVv(X2, "X2"))),
                      mclMtimes(
                        _mxarray39_, mlfPower(mclVv(X2, "X2"), _mxarray19_))),
                    mclMtimes(
                      _mxarray8_, mlfPower(mclVv(X2, "X2"), _mxarray16_)))),
                mclVv(F0, "F0")));
        /*
         * 
         * case 8
         */
        } else if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * psi = 16/(45*(1001^(1/2))) * (105-840*X2+840*X2.^2-224*X2.^3+16*X2.^4).*F0;
             */
            mlfAssign(
              &psi,
              mclTimes(
                mclMtimes(
                  _mxarray40_,
                  mclPlus(
                    mclMinus(
                      mclPlus(
                        mclMinus(
                          _mxarray37_, mclMtimes(_mxarray41_, mclVv(X2, "X2"))),
                        mclMtimes(
                          _mxarray41_, mlfPower(mclVv(X2, "X2"), _mxarray19_))),
                      mclMtimes(
                        _mxarray42_, mlfPower(mclVv(X2, "X2"), _mxarray16_))),
                    mclMtimes(
                      _mxarray43_, mlfPower(mclVv(X2, "X2"), _mxarray10_)))),
                mclVv(F0, "F0")));
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * if ~exist('maple')
             */
            if (mclNotBool(mlfExist(_mxarray6_, NULL))) {
                /*
                 * msg = '*** The Extended Symbolic Toolbox is required ***';
                 */
                mlfAssign(&msg, _mxarray44_);
                /*
                 * errargt(mfilename,msg,'msg')
                 */
                mclPrintAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("gauswavf"),
                    mclVv(msg, "msg"),
                    _mxarray46_,
                    NULL));
                /*
                 * error(msg);
                 */
                mlfError(mclVv(msg, "msg"), NULL);
            /*
             * end
             */
            }
            /*
             * y = sym('t');
             */
            mlfAssign(&y, mclArrayRef1(mclVv(sym, "sym"), _mxarray48_));
            /*
             * f = exp(-y.*y);
             */
            mlfAssign(
              &f, mlfExp(mclTimes(mclUminus(mclVv(y, "y")), mclVv(y, "y"))));
            /*
             * d = diff(f,num);
             */
            mlfAssign(&d, mlfDiff(mclVv(f, "f"), mclVv(num, "num"), NULL));
            /*
             * n = sqrt(int(d*d,-Inf,Inf));
             */
            mlfAssign(
              &n,
              mlfSqrt(
                mlfIndexRef(
                  mclVv(int0, "int"),
                  "(?,?,?)",
                  mclMtimes(mclVv(d, "d"), mclVv(d, "d")),
                  _mxarray50_,
                  _mxarray51_)));
            /*
             * d = d/n;
             */
            mlfAssign(&d, mclMrdivide(mclVv(d, "d"), mclVv(n, "n")));
            /*
             * for j = 1:length(X)
             */
            {
                int v_0 = mclForIntStart(1);
                int e_ = mclLengthInt(mclVv(*X, "X"));
                if (v_0 > e_) {
                    mlfAssign(&j, _mxarray52_);
                } else {
                    /*
                     * t = X(j);
                     * psi(j) = eval(d);
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(&t, mclIntArrayRef1(mclVv(*X, "X"), v_0));
                        mclIntArrayAssign1(
                          &psi,
                          mlfEval(mclValueVarargout(), mclVv(d, "d"), NULL),
                          v_0);
                        if (v_0 == e_) {
                            break;
                        }
                        ++v_0;
                    }
                    mlfAssign(&j, mlfScalar(v_0));
                }
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * switch rem(num,4)
     */
    {
        mxArray * v_ = mclInitialize(mlfRem(mclVv(num, "num"), _mxarray10_));
        if (mclSwitchCompare(v_, _mxarray53_)) {
            /*
             * case {2,3} , psi = -psi;
             */
            mlfAssign(&psi, mclUminus(mclVv(psi, "psi")));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mclValidateOutput(psi, 1, nargout_, "psi", "gauswavf");
    mclValidateOutput(*X, 2, nargout_, "X", "gauswavf");
    mxDestroyArray(ans);
    mxDestroyArray(nmax);
    mxDestroyArray(fam);
    mxDestroyArray(num);
    mxDestroyArray(X2);
    mxDestroyArray(F0);
    mxDestroyArray(msg);
    mxDestroyArray(sym);
    mxDestroyArray(y);
    mxDestroyArray(f);
    mxDestroyArray(d);
    mxDestroyArray(int0);
    mxDestroyArray(n);
    mxDestroyArray(j);
    mxDestroyArray(t);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return psi;
}
