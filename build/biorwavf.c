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
#include "biorwavf.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wstr2num.h"
static mxArray * _mxarray0_;

static double _array2_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;

static mxChar _array6_[1] = { '.' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;

static double _array10_[6] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
static mxArray * _mxarray9_;

static double _array12_[3] = { 1.0, 3.0, 5.0 };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

static double _array15_[4] = { 2.0, 4.0, 6.0, 8.0 };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;

static double _array18_[5] = { 1.0, 3.0, 5.0, 7.0, 9.0 };
static mxArray * _mxarray17_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;

static double _array25_[3] = { -.0625, .0625, .5 };
static mxArray * _mxarray24_;

static double _array27_[5] = { .01171875, -.01171875, -.0859375, .0859375, .5 };
static mxArray * _mxarray26_;

static double _array29_[3] = { .25, .5, .25 };
static mxArray * _mxarray28_;

static double _array31_[2] = { -.125, .25 };
static mxArray * _mxarray30_;
static mxArray * _mxarray32_;

static double _array34_[4] = { .0234375, -.046875, -.125, .296875 };
static mxArray * _mxarray33_;
static mxArray * _mxarray35_;

static double _array37_[6] = { -.0048828125, .009765625, .033203125,
                               -.076171875, -.1201171875, .31640625 };
static mxArray * _mxarray36_;
static mxArray * _mxarray38_;

static double _array40_[8] = { 35.0, -70.0, -300.0, 670.0, 1228.0,
                               -3126.0, -3796.0, 10718.0 };
static mxArray * _mxarray39_;
static mxArray * _mxarray41_;
static mxArray * _mxarray42_;

static double _array44_[2] = { .125, .375 };
static mxArray * _mxarray43_;

static double _array46_[2] = { -.25, .75 };
static mxArray * _mxarray45_;

static double _array48_[4] = { .046875, -.140625, -.109375, .703125 };
static mxArray * _mxarray47_;

static double _array50_[6] = { -.009765625, .029296875, .037109375,
                               -.189453125, -.05078125, .68359375 };
static mxArray * _mxarray49_;
static mxArray * _mxarray51_;

static double _array53_[8] = { .00213623046875, -.00640869140625,
                               -.01190185546875, .05279541015625,
                               .02215576171875, -.21295166015625,
                               -.01873779296875, .67291259765625 };
static mxArray * _mxarray52_;
static mxArray * _mxarray54_;

static double _array56_[10] = { -.00048065185546875, .00144195556640625,
                                .00357818603515625, -.01457977294921875,
                                -.009979248046875, .070098876953125,
                                .008697509765625, -.226409912109375,
                                .0014495849609375, .6661834716796875 };
static mxArray * _mxarray55_;

static double _array58_[3] = { -.045635881557, -.028771763114, .295635881557 };
static mxArray * _mxarray57_;
static mxArray * _mxarray59_;

static double _array61_[4] = { .026748757411, -.016864118443,
                               -.078223266529, .266864118443 };
static mxArray * _mxarray60_;
static mxArray * _mxarray62_;

static double _array64_[5] = { .009515330511, -.001905629356, -.096666153049,
                               -.066117805605, .337150822538 };
static mxArray * _mxarray63_;
static mxArray * _mxarray65_;

static double _array67_[4] = { .028063009296, .005620161515,
                               -.038511714155, .244379838485 };
static mxArray * _mxarray66_;
static mxArray * _mxarray68_;

static double _array70_[5] = { -.01020092218704, -.01023007081937,
                               .05566486077996, .02854447171515,
                               -.29546393859292 };
static mxArray * _mxarray69_;
static mxArray * _mxarray71_;

static double _array73_[8] = { .00134974786501, -.00135360470301,
                               -.01201419666708, .00843901203981,
                               .03516647330654, -.05463331368252,
                               -.06650990062484, .29754790634571 };
static mxArray * _mxarray72_;
static mxArray * _mxarray74_;

void InitializeModule_biorwavf(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 3, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeString(1, _array6_);
    _mxarray7_ = mclInitializeDouble(47.0);
    _mxarray8_ = mclInitializeDouble(58.0);
    _mxarray9_ = mclInitializeDoubleVector(1, 6, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(1, 3, _array12_);
    _mxarray13_ = mclInitializeDouble(2.0);
    _mxarray14_ = mclInitializeDoubleVector(1, 4, _array15_);
    _mxarray16_ = mclInitializeDouble(3.0);
    _mxarray17_ = mclInitializeDoubleVector(1, 5, _array18_);
    _mxarray19_ = mclInitializeDouble(4.0);
    _mxarray20_ = mclInitializeDouble(5.0);
    _mxarray21_ = mclInitializeDouble(6.0);
    _mxarray22_ = mclInitializeDouble(8.0);
    _mxarray23_ = mclInitializeDouble(.5);
    _mxarray24_ = mclInitializeDoubleVector(1, 3, _array25_);
    _mxarray26_ = mclInitializeDoubleVector(1, 5, _array27_);
    _mxarray28_ = mclInitializeDoubleVector(1, 3, _array29_);
    _mxarray30_ = mclInitializeDoubleVector(1, 2, _array31_);
    _mxarray32_ = mclInitializeDouble(.75);
    _mxarray33_ = mclInitializeDoubleVector(1, 4, _array34_);
    _mxarray35_ = mclInitializeDouble(.703125);
    _mxarray36_ = mclInitializeDoubleVector(1, 6, _array37_);
    _mxarray38_ = mclInitializeDouble(.68359375);
    _mxarray39_ = mclInitializeDoubleVector(1, 8, _array40_);
    _mxarray41_ = mclInitializeDouble(22050.0);
    _mxarray42_ = mclInitializeDouble(32768.0);
    _mxarray43_ = mclInitializeDoubleVector(1, 2, _array44_);
    _mxarray45_ = mclInitializeDoubleVector(1, 2, _array46_);
    _mxarray47_ = mclInitializeDoubleVector(1, 4, _array48_);
    _mxarray49_ = mclInitializeDoubleVector(1, 6, _array50_);
    _mxarray51_ = mclInitializeDouble(7.0);
    _mxarray52_ = mclInitializeDoubleVector(1, 8, _array53_);
    _mxarray54_ = mclInitializeDouble(9.0);
    _mxarray55_ = mclInitializeDoubleVector(1, 10, _array56_);
    _mxarray57_ = mclInitializeDoubleVector(1, 3, _array58_);
    _mxarray59_ = mclInitializeDouble(.557543526229);
    _mxarray60_ = mclInitializeDoubleVector(1, 4, _array61_);
    _mxarray62_ = mclInitializeDouble(.602949018236);
    _mxarray63_ = mclInitializeDoubleVector(1, 5, _array64_);
    _mxarray65_ = mclInitializeDouble(.636046869922);
    _mxarray66_ = mclInitializeDoubleVector(1, 4, _array67_);
    _mxarray68_ = mclInitializeDouble(.520897409718);
    _mxarray69_ = mclInitializeDoubleVector(1, 5, _array70_);
    _mxarray71_ = mclInitializeDouble(-.53662880179157);
    _mxarray72_ = mclInitializeDoubleVector(1, 8, _array73_);
    _mxarray74_ = mclInitializeDouble(.58401575224075);
}

void TerminateModule_biorwavf(void) {
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray72_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
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
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mbiorwavf(mxArray * * Df, int nargout_, mxArray * wname);

_mexLocalFunctionTable _local_function_table_biorwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNBiorwavf" contains the nargout interface for the
 * "biorwavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorwavf.m" (lines 1-124).
 * This interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNBiorwavf(int nargout, mxArray * * Df, mxArray * wname) {
    mxArray * Rf = NULL;
    mxArray * Df__ = NULL;
    mlfEnterNewContext(1, 1, Df, wname);
    Rf = Mbiorwavf(&Df__, nargout, wname);
    mlfRestorePreviousContext(1, 1, Df, wname);
    if (Df != NULL) {
        mclCopyOutputArg(Df, Df__);
    } else {
        mxDestroyArray(Df__);
    }
    return mlfReturnValue(Rf);
}

/*
 * The function "mlfBiorwavf" contains the normal interface for the "biorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorwavf.m" (lines 1-124).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfBiorwavf(mxArray * * Df, mxArray * wname) {
    int nargout = 1;
    mxArray * Rf = NULL;
    mxArray * Df__ = NULL;
    mlfEnterNewContext(1, 1, Df, wname);
    if (Df != NULL) {
        ++nargout;
    }
    Rf = Mbiorwavf(&Df__, nargout, wname);
    mlfRestorePreviousContext(1, 1, Df, wname);
    if (Df != NULL) {
        mclCopyOutputArg(Df, Df__);
    } else {
        mxDestroyArray(Df__);
    }
    return mlfReturnValue(Rf);
}

/*
 * The function "mlfVBiorwavf" contains the void interface for the "biorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorwavf.m" (lines 1-124). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVBiorwavf(mxArray * wname) {
    mxArray * Rf = NULL;
    mxArray * Df = NULL;
    mlfEnterNewContext(0, 1, wname);
    Rf = Mbiorwavf(&Df, 0, wname);
    mlfRestorePreviousContext(0, 1, wname);
    mxDestroyArray(Rf);
    mxDestroyArray(Df);
}

/*
 * The function "mlxBiorwavf" contains the feval interface for the "biorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorwavf.m" (lines 1-124). The
 * feval function calls the implementation version of biorwavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxBiorwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: biorwavf Line: 1 Column:"
            " 1 The function \"biorwavf\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: biorwavf Line: 1 Column:"
            " 1 The function \"biorwavf\" was called with m"
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
    mplhs[0] = Mbiorwavf(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "Mbiorwavf" is the implementation version of the "biorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorwavf.m" (lines 1-124). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [Rf,Df] = biorwavf(wname)
 */
static mxArray * Mbiorwavf(mxArray * * Df, int nargout_, mxArray * wname) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_biorwavf);
    int nargin_ = mclNargin(1, wname, NULL);
    mxArray * Rf = NULL;
    mxArray * Nr = NULL;
    mxArray * ii = NULL;
    mxArray * ab = NULL;
    mxArray * Nd = NULL;
    mxArray * lw = NULL;
    mxArray * kdot = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    /*
     * %BIORWAVF Biorthogonal spline wavelet filters.
     * %   [RF,DF] = BIORWAVF(W) returns two scaling filters
     * %   associated with the biorthogonal wavelet specified
     * %   by the string W.
     * %   W = 'biorNr.Nd' where possible values for Nr and Nd are:
     * %       Nr = 1  Nd = 1 , 3 or 5
     * %       Nr = 2  Nd = 2 , 4 , 6 or 8
     * %       Nr = 3  Nd = 1 , 3 , 5 , 7 or 9
     * %       Nr = 4  Nd = 4
     * %       Nr = 5  Nd = 5
     * %       Nr = 6  Nd = 8
     * %   The output arguments are filters:
     * %   RF is the reconstruction filter
     * %   DF is the decomposition filter
     * %
     * %   See also BIORFILT, WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 17-May-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("biorwavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
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
     * lw = length(wname);
     */
    mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
    /*
     * Nd = wstr2num(wname(kdot+1:lw));
     */
    mlfAssign(
      &Nd,
      mlfWstr2num(
        mclArrayRef1(
          mclVa(wname, "wname"),
          mlfColon(
            mclPlus(mclVv(kdot, "kdot"), _mxarray0_), mclVv(lw, "lw"), NULL))));
    /*
     * wname = wname(1:kdot-1);
     */
    mlfAssign(
      &wname,
      mclArrayRef1(
        mclVa(wname, "wname"),
        mlfColon(_mxarray0_, mclMinus(mclVv(kdot, "kdot"), _mxarray0_), NULL)));
    /*
     * lw = length(wname);
     */
    mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
    /*
     * ab = abs(wname);
     */
    mlfAssign(&ab, mlfAbs(mclVa(wname, "wname")));
    /*
     * ii = lw+1;
     */
    mlfAssign(&ii, mclPlus(mclVv(lw, "lw"), _mxarray0_));
    /*
     * while (ii>1) & (47<ab(ii-1)) & (ab(ii-1)<58), ii = ii-1; end
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
     * Nr = wstr2num(wname(ii:lw));
     */
    mlfAssign(
      &Nr,
      mlfWstr2num(
        mclArrayRef1(
          mclVa(wname, "wname"),
          mlfColon(mclVv(ii, "ii"), mclVv(lw, "lw"), NULL))));
    /*
     * 
     * if isempty(find(Nr == [1:5 6])) , error('*'), end
     */
    if (mlfTobool(
          mlfIsempty(
            mlfFind(NULL, NULL, mclEq(mclVv(Nr, "Nr"), _mxarray9_))))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * switch Nr
     */
    {
        mxArray * v_ = mclInitialize(mclVv(Nr, "Nr"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 1 , if isempty(find(Nd == [1:2:5])) , error('*'), end
             */
            if (mlfTobool(
                  mlfIsempty(
                    mlfFind(
                      NULL, NULL, mclEq(mclVv(Nd, "Nd"), _mxarray11_))))) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * case 2 , if isempty(find(Nd == [2:2:8])) , error('*'), end
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            if (mlfTobool(
                  mlfIsempty(
                    mlfFind(
                      NULL, NULL, mclEq(mclVv(Nd, "Nd"), _mxarray14_))))) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * case 3 , if isempty(find(Nd == [1:2:9])) , error('*'), end
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            if (mlfTobool(
                  mlfIsempty(
                    mlfFind(
                      NULL, NULL, mclEq(mclVv(Nd, "Nd"), _mxarray17_))))) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * case 4 , if Nd ~= 4 , error('*'), end
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            if (mclNeBool(mclVv(Nd, "Nd"), _mxarray19_)) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * case 5 , if Nd ~= 5 , error('*'), end
         */
        } else if (mclSwitchCompare(v_, _mxarray20_)) {
            if (mclNeBool(mclVv(Nd, "Nd"), _mxarray20_)) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * case 6 , if Nd ~= 8 , error('*'), end
         */
        } else if (mclSwitchCompare(v_, _mxarray21_)) {
            if (mclNeBool(mclVv(Nd, "Nd"), _mxarray22_)) {
                mlfError(_mxarray3_, NULL);
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * switch Nr
     */
    {
        mxArray * v_ = mclInitialize(mclVv(Nr, "Nr"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 1
             * Rf = [1/2];
             */
            mlfAssign(&Rf, _mxarray23_);
            /*
             * if Nd == 1
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray0_)) {
                /*
                 * Df = [1/2];
                 */
                mlfAssign(Df, _mxarray23_);
            /*
             * elseif Nd == 3
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray16_)) {
                /*
                 * Df = [-1/16 1/16 1/2];
                 */
                mlfAssign(Df, _mxarray24_);
            /*
             * elseif Nd == 5
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray20_)) {
                /*
                 * Df = [3/256 -3/256 -11/128 11/128 1/2];
                 */
                mlfAssign(Df, _mxarray26_);
            /*
             * end
             */
            }
            /*
             * Rf = [Rf fliplr(Rf)];
             */
            mlfAssign(
              &Rf,
              mlfHorzcat(mclVv(Rf, "Rf"), mlfFliplr(mclVv(Rf, "Rf")), NULL));
            /*
             * Df = [Df fliplr(Df)];
             */
            mlfAssign(
              Df,
              mlfHorzcat(mclVv(*Df, "Df"), mlfFliplr(mclVv(*Df, "Df")), NULL));
        /*
         * 
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * Rf = [1/4 1/2 1/4];
             */
            mlfAssign(&Rf, _mxarray28_);
            /*
             * if Nd == 2
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray13_)) {
                /*
                 * Df = [-1/8 1/4];
                 */
                mlfAssign(Df, _mxarray30_);
                /*
                 * Df = [Df 3/4 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray32_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * elseif Nd == 4
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray19_)) {
                /*
                 * Df = [3/128 -3/64 -1/8 19/64];
                 */
                mlfAssign(Df, _mxarray33_);
                /*
                 * Df = [Df 45/64 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray35_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * elseif Nd == 6
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray21_)) {
                /*
                 * Df = [-5/1024 5/512 17/512 -39/512 -123/1024 81/256];
                 */
                mlfAssign(Df, _mxarray36_);
                /*
                 * Df = [Df 175/256 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray38_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * elseif Nd == 8
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray22_)) {
                /*
                 * Df = [35 -70 -300 670 1228 -3126 -3796 10718];
                 */
                mlfAssign(Df, _mxarray39_);
                /*
                 * Df = [Df 22050 fliplr(Df)]/(2^15);
                 */
                mlfAssign(
                  Df,
                  mclMrdivide(
                    mlfHorzcat(
                      mclVv(*Df, "Df"),
                      _mxarray41_,
                      mlfFliplr(mclVv(*Df, "Df")),
                      NULL),
                    _mxarray42_));
            /*
             * end
             */
            }
        /*
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * Rf = [1 3]/8;
             */
            mlfAssign(&Rf, _mxarray43_);
            /*
             * if Nd == 1
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray0_)) {
                /*
                 * Df = [-1 3]/4;
                 */
                mlfAssign(Df, _mxarray45_);
            /*
             * elseif Nd == 3
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray16_)) {
                /*
                 * Df = [3 -9 -7 45]/64;
                 */
                mlfAssign(Df, _mxarray47_);
            /*
             * elseif Nd == 5
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray20_)) {
                /*
                 * Df = [-5 15 19 -97 -26 350]/512;
                 */
                mlfAssign(Df, _mxarray49_);
            /*
             * elseif Nd == 7
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray51_)) {
                /*
                 * Df = [35 -105 -195 865 363 -3489 -307 11025]/(2^14);
                 */
                mlfAssign(Df, _mxarray52_);
            /*
             * elseif Nd == 9
             */
            } else if (mclEqBool(mclVv(Nd, "Nd"), _mxarray54_)) {
                /*
                 * Df = [-63 189 469 -1911 -1308 9188 1140 -29676 190 87318]/(2^17);
                 */
                mlfAssign(Df, _mxarray55_);
            /*
             * end
             */
            }
            /*
             * Rf = [Rf fliplr(Rf)];
             */
            mlfAssign(
              &Rf,
              mlfHorzcat(mclVv(Rf, "Rf"), mlfFliplr(mclVv(Rf, "Rf")), NULL));
            /*
             * Df = [Df fliplr(Df)];
             */
            mlfAssign(
              Df,
              mlfHorzcat(mclVv(*Df, "Df"), mlfFliplr(mclVv(*Df, "Df")), NULL));
        /*
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * if Nd == 4
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray19_)) {
                /*
                 * Rf = [-.045635881557,-.028771763114,.295635881557];
                 */
                mlfAssign(&Rf, _mxarray57_);
                /*
                 * Rf = [Rf .557543526229 fliplr(Rf)];
                 */
                mlfAssign(
                  &Rf,
                  mlfHorzcat(
                    mclVv(Rf, "Rf"),
                    _mxarray59_,
                    mlfFliplr(mclVv(Rf, "Rf")),
                    NULL));
                /*
                 * Df = [.026748757411,-.016864118443,-.078223266529,.266864118443];
                 */
                mlfAssign(Df, _mxarray60_);
                /*
                 * Df = [Df .602949018236 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray62_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray20_)) {
            /*
             * if Nd == 5
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray20_)) {
                /*
                 * Rf = [.009515330511,-.001905629356,-.096666153049,...
                 */
                mlfAssign(&Rf, _mxarray63_);
                /*
                 * -.066117805605,.337150822538];
                 * Rf = [Rf .636046869922 fliplr(Rf)];
                 */
                mlfAssign(
                  &Rf,
                  mlfHorzcat(
                    mclVv(Rf, "Rf"),
                    _mxarray65_,
                    mlfFliplr(mclVv(Rf, "Rf")),
                    NULL));
                /*
                 * Df = [.028063009296,.005620161515,-.038511714155,.244379838485];
                 */
                mlfAssign(Df, _mxarray66_);
                /*
                 * Df = [Df .520897409718 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray68_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray21_)) {
            /*
             * if Nd == 8
             */
            if (mclEqBool(mclVv(Nd, "Nd"), _mxarray22_)) {
                /*
                 * Rf = [...
                 */
                mlfAssign(&Rf, _mxarray69_);
                /*
                 * -0.01020092218704  ...
                 * -0.01023007081937  0.05566486077996  0.02854447171515  -0.29546393859292 ...
                 * ];
                 * Rf = [Rf -0.53662880179157 fliplr(Rf)];
                 */
                mlfAssign(
                  &Rf,
                  mlfHorzcat(
                    mclVv(Rf, "Rf"),
                    _mxarray71_,
                    mlfFliplr(mclVv(Rf, "Rf")),
                    NULL));
                /*
                 * Df = [...
                 */
                mlfAssign(Df, _mxarray72_);
                /*
                 * 0.00134974786501 -0.00135360470301 -0.01201419666708   0.00843901203981 ...
                 * 0.03516647330654 -0.05463331368252 -0.06650990062484   0.29754790634571 ...
                 * ];
                 * Df = [Df 0.58401575224075 fliplr(Df)];
                 */
                mlfAssign(
                  Df,
                  mlfHorzcat(
                    mclVv(*Df, "Df"),
                    _mxarray74_,
                    mlfFliplr(mclVv(*Df, "Df")),
                    NULL));
            /*
             * end
             */
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(Rf, 1, nargout_, "Rf", "biorwavf");
    mclValidateOutput(*Df, 2, nargout_, "Df", "biorwavf");
    mxDestroyArray(ans);
    mxDestroyArray(kdot);
    mxDestroyArray(lw);
    mxDestroyArray(Nd);
    mxDestroyArray(ab);
    mxDestroyArray(ii);
    mxDestroyArray(Nr);
    mxDestroyArray(wname);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return Rf;
}
