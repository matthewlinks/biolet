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
#include "cgauwavf.h"
#include "mwservices.h"
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
static mxArray * _mxarray44_;
static mxArray * _mxarray45_;
static mxArray * _mxarray46_;
static mxArray * _mxarray47_;
static mxArray * _mxarray48_;
static mxArray * _mxarray49_;
static mxArray * _mxarray50_;
static mxArray * _mxarray51_;
static mxArray * _mxarray52_;
static mxArray * _mxarray53_;
static mxArray * _mxarray54_;
static mxArray * _mxarray55_;
static mxArray * _mxarray56_;
static mxArray * _mxarray57_;
static mxArray * _mxarray58_;
static mxArray * _mxarray59_;
static mxArray * _mxarray60_;
static mxArray * _mxarray61_;
static mxArray * _mxarray62_;
static mxArray * _mxarray63_;
static mxArray * _mxarray64_;
static mxArray * _mxarray65_;
static mxArray * _mxarray66_;
static mxArray * _mxarray67_;
static mxArray * _mxarray68_;
static mxArray * _mxarray69_;
static mxArray * _mxarray70_;
static mxArray * _mxarray71_;
static mxArray * _mxarray72_;
static mxArray * _mxarray73_;
static mxArray * _mxarray74_;
static mxArray * _mxarray75_;
static mxArray * _mxarray76_;
static mxArray * _mxarray77_;

static mxChar _array79_[49] = { '*', '*', '*', ' ', 'T', 'h', 'e', ' ', 'E',
                                'x', 't', 'e', 'n', 'd', 'e', 'd', ' ', 'S',
                                'y', 'm', 'b', 'o', 'l', 'i', 'c', ' ', 'T',
                                'o', 'o', 'l', 'b', 'o', 'x', ' ', 'i', 's',
                                ' ', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd',
                                ' ', '*', '*', '*' };
static mxArray * _mxarray78_;

static mxChar _array81_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray80_;

static mxChar _array83_[1] = { 't' };
static mxArray * _mxarray82_;
static mxArray * _mxarray84_;

void InitializeModule_cgauwavf(void) {
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
    _mxarray20_ = mclInitializeComplex(-0.0, -1.0);
    _mxarray21_ = mclInitializeDouble(.5);
    _mxarray22_ = mclInitializeDouble(1.4142135623730951);
    _mxarray23_ = mclInitializeDouble(.3333333333333333);
    _mxarray24_ = mclInitializeDouble(-3.0);
    _mxarray25_ = mclInitializeComplex(0.0, 4.0);
    _mxarray26_ = mclInitializeDouble(2.449489742783178);
    _mxarray27_ = mclInitializeDouble(.06666666666666667);
    _mxarray28_ = mclInitializeComplex(0.0, 7.0);
    _mxarray29_ = mclInitializeDouble(18.0);
    _mxarray30_ = mclInitializeComplex(0.0, 12.0);
    _mxarray31_ = mclInitializeDouble(5.477225575051661);
    _mxarray32_ = mclInitializeDouble(.009523809523809525);
    _mxarray33_ = mclInitializeDouble(25.0);
    _mxarray34_ = mclInitializeComplex(0.0, 56.0);
    _mxarray35_ = mclInitializeDouble(72.0);
    _mxarray36_ = mclInitializeComplex(0.0, 32.0);
    _mxarray37_ = mclInitializeDouble(16.0);
    _mxarray38_ = mclInitializeDouble(14.491376746189438);
    _mxarray39_ = mclInitializeDouble(5.0);
    _mxarray40_ = mclInitializeDouble(.0031746031746031746);
    _mxarray41_ = mclInitializeComplex(-0.0, -81.0);
    _mxarray42_ = mclInitializeDouble(250.0);
    _mxarray43_ = mclInitializeComplex(0.0, 280.0);
    _mxarray44_ = mclInitializeDouble(240.0);
    _mxarray45_ = mclInitializeComplex(0.0, 80.0);
    _mxarray46_ = mclInitializeDouble(32.0);
    _mxarray47_ = mclInitializeDouble(6.0);
    _mxarray48_ = mclInitializeDouble(.0002886002886002886);
    _mxarray49_ = mclInitializeDouble(-331.0);
    _mxarray50_ = mclInitializeComplex(0.0, 972.0);
    _mxarray51_ = mclInitializeDouble(1500.0);
    _mxarray52_ = mclInitializeComplex(0.0, 1120.0);
    _mxarray53_ = mclInitializeDouble(720.0);
    _mxarray54_ = mclInitializeComplex(0.0, 192.0);
    _mxarray55_ = mclInitializeDouble(64.0);
    _mxarray56_ = mclInitializeDouble(48.062459362791664);
    _mxarray57_ = mclInitializeDouble(7.0);
    _mxarray58_ = mclInitializeDouble(2.22000222000222e-05);
    _mxarray59_ = mclInitializeComplex(0.0, 1303.0);
    _mxarray60_ = mclInitializeDouble(4634.0);
    _mxarray61_ = mclInitializeComplex(0.0, 6804.0);
    _mxarray62_ = mclInitializeDouble(7000.0);
    _mxarray63_ = mclInitializeComplex(0.0, 3920.0);
    _mxarray64_ = mclInitializeDouble(2016.0);
    _mxarray65_ = mclInitializeComplex(0.0, 448.0);
    _mxarray66_ = mclInitializeDouble(128.0);
    _mxarray67_ = mclInitializeDouble(173.29166165744962);
    _mxarray68_ = mclInitializeDouble(5937.0);
    _mxarray69_ = mclInitializeComplex(0.0, 20848.0);
    _mxarray70_ = mclInitializeDouble(37072.0);
    _mxarray71_ = mclInitializeComplex(0.0, 36288.0);
    _mxarray72_ = mclInitializeDouble(28000.0);
    _mxarray73_ = mclInitializeComplex(0.0, 12544.0);
    _mxarray74_ = mclInitializeDouble(5376.0);
    _mxarray75_ = mclInitializeComplex(0.0, 1024.0);
    _mxarray76_ = mclInitializeDouble(256.0);
    _mxarray77_ = mclInitializeDouble(44.74371464239419);
    _mxarray78_ = mclInitializeString(49, _array79_);
    _mxarray80_ = mclInitializeString(3, _array81_);
    _mxarray82_ = mclInitializeString(1, _array83_);
    _mxarray84_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_cgauwavf(void) {
    mxDestroyArray(_mxarray84_);
    mxDestroyArray(_mxarray82_);
    mxDestroyArray(_mxarray80_);
    mxDestroyArray(_mxarray78_);
    mxDestroyArray(_mxarray77_);
    mxDestroyArray(_mxarray76_);
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray72_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray70_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray45_);
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

static mxArray * Mcgauwavf(mxArray * * X, int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_cgauwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNCgauwavf" contains the nargout interface for the
 * "cgauwavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cgauwavf.m" (lines 1-101).
 * This interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNCgauwavf(int nargout, mxArray * * X, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    psi = Mcgauwavf(&X__, nargout, varargin);
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
 * The function "mlfCgauwavf" contains the normal interface for the "cgauwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cgauwavf.m" (lines 1-101).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfCgauwavf(mxArray * * X, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    if (X != NULL) {
        ++nargout;
    }
    psi = Mcgauwavf(&X__, nargout, varargin);
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
 * The function "mlfVCgauwavf" contains the void interface for the "cgauwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cgauwavf.m" (lines 1-101). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCgauwavf(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    psi = Mcgauwavf(&X, 0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    mxDestroyArray(psi);
}

/*
 * The function "mlxCgauwavf" contains the feval interface for the "cgauwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cgauwavf.m" (lines 1-101). The
 * feval function calls the implementation version of cgauwavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxCgauwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cgauwavf Line: 1 Column:"
            " 1 The function \"cgauwavf\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mcgauwavf(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "Mcgauwavf" is the implementation version of the "cgauwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cgauwavf.m" (lines 1-101). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [psi,X] = cgauwavf(varargin)
 */
static mxArray * Mcgauwavf(mxArray * * X, int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cgauwavf);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * psi = NULL;
    mxArray * norL2 = NULL;
    mxArray * intL2 = NULL;
    mxArray * t = NULL;
    mxArray * j = NULL;
    mxArray * d = NULL;
    mxArray * f = NULL;
    mxArray * y = NULL;
    mxArray * sym = NULL;
    mxArray * msg = NULL;
    mxArray * F2 = NULL;
    mxArray * F1 = NULL;
    mxArray * F0 = NULL;
    mxArray * X2 = NULL;
    mxArray * num = NULL;
    mxArray * fam = NULL;
    mxArray * nmax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %CGAUWAVF Complex Gaussian wavelet.
     * %   [PSI,X] = CGAUWAVF(LB,UB,N,P) returns values of the Pth 
     * %   derivative of the complex Gaussian function 
     * %   F = Cp*exp(-i*x)*exp(-x^2) on an N point regular grid for the 
     * %   interval [LB,UB]. Cp is such that the 2-norm of the Pth 
     * %   derivative of F is equal to 1. P can be integer values 
     * %   from 1 to 8.
     * %
     * %   Output arguments are the wavelet function PSI
     * %   computed on the grid X.
     * %   [PSI,X] = CGAUWAVF(LB,UB,N) is equivalent to
     * %   [PSI,X] = CGAUWAVF(LB,UB,N,1).
     * %
     * %   These wavelets have an effective support of [-5 5].
     * %
     * %   ----------------------------------------------------
     * %   If you have access to the Extended Symbolic Toolbox,
     * %   you may specify a value of P > 8. 
     * %   ----------------------------------------------------
     * %
     * %   See also GAUSWAVF, WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-Jun-99.
     * %   Last Revision: 26-Oct-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:44 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[0,3 4],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("cgauwavf"),
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
            mxCreateString("cgauwavf"),
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
         * F0 = exp(-X2);
         */
        mlfAssign(&F0, mlfExp(mclUminus(mclVv(X2, "X2"))));
        /*
         * F1 = exp(-i*X);
         */
        mlfAssign(&F1, mlfExp(mclMtimes(_mxarray20_, mclVv(*X, "X"))));
        /*
         * F2 = (F1.*F0)/(exp(-1/2)*2^(1/2)*pi^(1/2))^(1/2);
         */
        mlfAssign(
          &F2,
          mclMrdivide(
            mclTimes(mclVv(F1, "F1"), mclVv(F0, "F0")),
            mclMpower(
              mlfScalar(
                svDoubleScalarTimes(
                  svDoubleScalarTimes(
                    svDoubleScalarExp(-.5), 1.4142135623730951),
                  1.7724538509055159)),
              _mxarray21_)));
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
             * psi = F2.*(-i-2*X)*2^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclVv(F2, "F2"),
                  mclMinus(
                    _mxarray20_, mclMtimes(_mxarray19_, mclVv(*X, "X")))),
                _mxarray22_));
        /*
         * 
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * psi = 1/3*F2.*(-3+4*i*X+4*X2)*6^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray23_, mclVv(F2, "F2")),
                  mclPlus(
                    mclPlus(
                      _mxarray24_, mclMtimes(_mxarray25_, mclVv(*X, "X"))),
                    mclMtimes(_mxarray10_, mclVv(X2, "X2")))),
                _mxarray26_));
        /*
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * psi = 1/15*F2.*(7*i+18*X-12*i*X.^2-8*X.^3)*30^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray27_, mclVv(F2, "F2")),
                  mclMinus(
                    mclMinus(
                      mclPlus(
                        _mxarray28_, mclMtimes(_mxarray29_, mclVv(*X, "X"))),
                      mclMtimes(
                        _mxarray30_, mlfPower(mclVv(*X, "X"), _mxarray19_))),
                    mclMtimes(
                      _mxarray8_, mlfPower(mclVv(*X, "X"), _mxarray16_)))),
                _mxarray31_));
        /*
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * psi = 1/105*F2.*(25-56*i*X-72*X.^2+32*i*X.^3+16*X.^4)*210^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray32_, mclVv(F2, "F2")),
                  mclPlus(
                    mclPlus(
                      mclMinus(
                        mclMinus(
                          _mxarray33_, mclMtimes(_mxarray34_, mclVv(*X, "X"))),
                        mclMtimes(
                          _mxarray35_, mlfPower(mclVv(*X, "X"), _mxarray19_))),
                      mclMtimes(
                        _mxarray36_, mlfPower(mclVv(*X, "X"), _mxarray16_))),
                    mclMtimes(
                      _mxarray37_, mlfPower(mclVv(*X, "X"), _mxarray10_)))),
                _mxarray38_));
        /*
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray39_)) {
            /*
             * psi = 1/315*F2.*(-81*i-250*X+280*i*X.^2+240*X.^3-80*i*X.^4-32*X.^5)*210^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray40_, mclVv(F2, "F2")),
                  mclMinus(
                    mclMinus(
                      mclPlus(
                        mclPlus(
                          mclMinus(
                            _mxarray41_,
                            mclMtimes(_mxarray42_, mclVv(*X, "X"))),
                          mclMtimes(
                            _mxarray43_,
                            mlfPower(mclVv(*X, "X"), _mxarray19_))),
                        mclMtimes(
                          _mxarray44_, mlfPower(mclVv(*X, "X"), _mxarray16_))),
                      mclMtimes(
                        _mxarray45_, mlfPower(mclVv(*X, "X"), _mxarray10_))),
                    mclMtimes(
                      _mxarray46_, mlfPower(mclVv(*X, "X"), _mxarray39_)))),
                _mxarray38_));
        /*
         * 
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray47_)) {
            /*
             * psi = 1/3465*F2.*(-331+972*i*X+1500*X.^2-1120*i*X.^3-720*X.^4+192*i*X.^5+64*X.^6)*2310^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray48_, mclVv(F2, "F2")),
                  mclPlus(
                    mclPlus(
                      mclMinus(
                        mclMinus(
                          mclPlus(
                            mclPlus(
                              _mxarray49_,
                              mclMtimes(_mxarray50_, mclVv(*X, "X"))),
                            mclMtimes(
                              _mxarray51_,
                              mlfPower(mclVv(*X, "X"), _mxarray19_))),
                          mclMtimes(
                            _mxarray52_,
                            mlfPower(mclVv(*X, "X"), _mxarray16_))),
                        mclMtimes(
                          _mxarray53_, mlfPower(mclVv(*X, "X"), _mxarray10_))),
                      mclMtimes(
                        _mxarray54_, mlfPower(mclVv(*X, "X"), _mxarray39_))),
                    mclMtimes(
                      _mxarray55_, mlfPower(mclVv(*X, "X"), _mxarray47_)))),
                _mxarray56_));
        /*
         * 
         * case 7
         */
        } else if (mclSwitchCompare(v_, _mxarray57_)) {
            /*
             * psi = 1/45045*F2.*(1303*i+4634*X-6804*i*X.^2-7000*X.^3+3920*i*X.^4+2016*X.^5-448*i*X.^6-128*X.^7)*30030^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray58_, mclVv(F2, "F2")),
                  mclMinus(
                    mclMinus(
                      mclPlus(
                        mclPlus(
                          mclMinus(
                            mclMinus(
                              mclPlus(
                                _mxarray59_,
                                mclMtimes(_mxarray60_, mclVv(*X, "X"))),
                              mclMtimes(
                                _mxarray61_,
                                mlfPower(mclVv(*X, "X"), _mxarray19_))),
                            mclMtimes(
                              _mxarray62_,
                              mlfPower(mclVv(*X, "X"), _mxarray16_))),
                          mclMtimes(
                            _mxarray63_,
                            mlfPower(mclVv(*X, "X"), _mxarray10_))),
                        mclMtimes(
                          _mxarray64_, mlfPower(mclVv(*X, "X"), _mxarray39_))),
                      mclMtimes(
                        _mxarray65_, mlfPower(mclVv(*X, "X"), _mxarray47_))),
                    mclMtimes(
                      _mxarray66_, mlfPower(mclVv(*X, "X"), _mxarray57_)))),
                _mxarray67_));
        /*
         * 
         * case 8
         */
        } else if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * psi = 1/45045*F2.*(5937-20848*i*X-37072*X.^2+36288*i*X.^3+28000*X.^4-12544*i*X.^5-5376*X.^6+1024*i*X.^7+256*X.^8)*2002^(1/2);
             */
            mlfAssign(
              &psi,
              mclMtimes(
                mclTimes(
                  mclMtimes(_mxarray58_, mclVv(F2, "F2")),
                  mclPlus(
                    mclPlus(
                      mclMinus(
                        mclMinus(
                          mclPlus(
                            mclPlus(
                              mclMinus(
                                mclMinus(
                                  _mxarray68_,
                                  mclMtimes(_mxarray69_, mclVv(*X, "X"))),
                                mclMtimes(
                                  _mxarray70_,
                                  mlfPower(mclVv(*X, "X"), _mxarray19_))),
                              mclMtimes(
                                _mxarray71_,
                                mlfPower(mclVv(*X, "X"), _mxarray16_))),
                            mclMtimes(
                              _mxarray72_,
                              mlfPower(mclVv(*X, "X"), _mxarray10_))),
                          mclMtimes(
                            _mxarray73_,
                            mlfPower(mclVv(*X, "X"), _mxarray39_))),
                        mclMtimes(
                          _mxarray74_, mlfPower(mclVv(*X, "X"), _mxarray47_))),
                      mclMtimes(
                        _mxarray75_, mlfPower(mclVv(*X, "X"), _mxarray57_))),
                    mclMtimes(
                      _mxarray76_, mlfPower(mclVv(*X, "X"), _mxarray8_)))),
                _mxarray77_));
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
                mlfAssign(&msg, _mxarray78_);
                /*
                 * errargt(mfilename,msg,'msg')
                 */
                mclPrintAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("cgauwavf"),
                    mclVv(msg, "msg"),
                    _mxarray80_,
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
            mlfAssign(&y, mclArrayRef1(mclVv(sym, "sym"), _mxarray82_));
            /*
             * f = exp(-i*y).*exp(-(y.*y));
             */
            mlfAssign(
              &f,
              mclTimes(
                mlfExp(mclMtimes(_mxarray20_, mclVv(y, "y"))),
                mlfExp(mclUminus(mclTimes(mclVv(y, "y"), mclVv(y, "y"))))));
            /*
             * d = diff(f,num);
             */
            mlfAssign(&d, mlfDiff(mclVv(f, "f"), mclVv(num, "num"), NULL));
            /*
             * for j = 1:length(X)
             */
            {
                int v_0 = mclForIntStart(1);
                int e_ = mclLengthInt(mclVv(*X, "X"));
                if (v_0 > e_) {
                    mlfAssign(&j, _mxarray84_);
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
     * intL2 = sum(psi.*conj(psi));
     */
    mlfAssign(
      &intL2,
      mlfSum(mclTimes(mclVv(psi, "psi"), mlfConj(mclVv(psi, "psi"))), NULL));
    /*
     * norL2 = intL2(end)*(X(2)-X(1));
     */
    mlfAssign(
      &norL2,
      mclMtimes(
        mclArrayRef1(
          mclVv(intL2, "intL2"),
          mlfEnd(mclVv(intL2, "intL2"), _mxarray13_, _mxarray13_)),
        mclMinus(
          mclIntArrayRef1(mclVv(*X, "X"), 2),
          mclIntArrayRef1(mclVv(*X, "X"), 1))));
    /*
     * psi   = psi/sqrt(norL2);
     */
    mlfAssign(
      &psi, mclMrdivide(mclVv(psi, "psi"), mlfSqrt(mclVv(norL2, "norL2"))));
    return_:
    mclValidateOutput(psi, 1, nargout_, "psi", "cgauwavf");
    mclValidateOutput(*X, 2, nargout_, "X", "cgauwavf");
    mxDestroyArray(ans);
    mxDestroyArray(nmax);
    mxDestroyArray(fam);
    mxDestroyArray(num);
    mxDestroyArray(X2);
    mxDestroyArray(F0);
    mxDestroyArray(F1);
    mxDestroyArray(F2);
    mxDestroyArray(msg);
    mxDestroyArray(sym);
    mxDestroyArray(y);
    mxDestroyArray(f);
    mxDestroyArray(d);
    mxDestroyArray(j);
    mxDestroyArray(t);
    mxDestroyArray(intL2);
    mxDestroyArray(norL2);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return psi;
}
