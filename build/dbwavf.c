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
#include "dbwavf.h"
#include "dbaux.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "wstr2num.h"

static double _array1_[2] = { 0.0, 1.0 };
static mxArray * _mxarray0_;

static mxChar _array3_[1] = { '*' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static mxChar _array8_[2] = { 'h', 'a' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static double _array12_[2] = { .5, .5 };
static mxArray * _mxarray11_;

static double _array14_[4] = { .34150635094622, .59150635094587,
                               .15849364905378, -.09150635094587 };
static mxArray * _mxarray13_;
static mxArray * _mxarray15_;

static double _array17_[6] = { .2352336038927, .57055845791731,
                               .32518250026371, -.09546720778426,
                               -.06041610415535, .02490874986589 };
static mxArray * _mxarray16_;
static mxArray * _mxarray18_;

static double _array20_[8] = { .16290171402562, .50547285754565,
                               .44610006912319, -.01978751311791,
                               -.13225358368437, .02180815023739,
                               .02325180053556, -.00749349466513 };
static mxArray * _mxarray19_;
static mxArray * _mxarray21_;

static double _array23_[10] = { .11320949129173, .42697177135271,
                                .51216347213016, .09788348067375,
                                -.17132835769133, -.02280056594205,
                                .05485132932108, -.00441340005433,
                                -.00889593505093, .0023587139692 };
static mxArray * _mxarray22_;
static mxArray * _mxarray24_;

static double _array26_[12] = { .07887121600143, .34975190703757,
                                .53113187994121, .22291566146505,
                                -.15999329944587, -.09175903203003,
                                .0689440464872, .01946160485396,
                                -.02233187416548, .00039162557603,
                                .00337803118151, -.00076176690258 };
static mxArray * _mxarray25_;
static mxArray * _mxarray27_;

static double _array29_[14] = { .05504971537285, .28039564181304,
                                .51557424581833, .33218624110566,
                                -.10175691123173, -.15841750564054,
                                .05042323250485, .05700172257986,
                                -.02689122629486, -.01171997078235,
                                .00887489618962, .00030375749776,
                                -.00127395235906, .00025011342658 };
static mxArray * _mxarray28_;
static mxArray * _mxarray30_;

static double _array32_[16] = { .03847781105406, .22123362357624,
                                .47774307521438, .41390826621166,
                                -.01119286766665, -.20082931639111,
                                .00033409704628, .09103817842345,
                                -.012281950523, -.03117510332533,
                                .00988607964808, .00618442240954,
                                -.00344385962813, -.00027700227421,
                                .00047761485533, -8.30686306e-05 };
static mxArray * _mxarray31_;
static mxArray * _mxarray33_;

static double _array35_[18] = { .02692517479416, .17241715192471,
                                .42767453217028, .46477285717278,
                                .09418477475112, -.20737588089628,
                                -.0684767745109, .10503417113714,
                                .0217263377299, -.04782363205882,
                                .00017744640673, .01581208292614,
                                -.00333981011324, -.00302748028715,
                                .00130648364018, .00016290733601,
                                -.00017816487955, 2.782275679e-05 };
static mxArray * _mxarray34_;
static mxArray * _mxarray36_;

static double _array38_[20] = { .0188585787964, .13306109139687,
                                .37278753574266, .4868140553661,
                                .1988188708844, -.17666810089647,
                                -.13855493935993, .09006372426666,
                                .0658014935507, -.05048328559801,
                                -.02082962404385, .02348490704841,
                                .00255021848393, -.00758950116768,
                                .00098666268244, .00140884329496,
                                -.00048497391996, -8.235450295e-05,
                                6.61771832e-05, -9.37920789e-06 };
static mxArray * _mxarray37_;

static mxChar _array40_[35] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'D',
                                'a', 'u', 'b', 'e', 'c', 'h', 'i', 'e', 's',
                                ' ', 'w', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                'n', 'u', 'm', 'b', 'e', 'r', ' ', '!' };
static mxArray * _mxarray39_;

static mxChar _array42_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray41_;
static mxArray * _mxarray43_;

void InitializeModule_dbwavf(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeString(1, _array3_);
    _mxarray4_ = mclInitializeDouble(45.0);
    _mxarray5_ = mclInitializeDouble(1.0);
    _mxarray6_ = mclInitializeDouble(2.0);
    _mxarray7_ = mclInitializeString(2, _array8_);
    _mxarray9_ = mclInitializeDouble(47.0);
    _mxarray10_ = mclInitializeDouble(58.0);
    _mxarray11_ = mclInitializeDoubleVector(1, 2, _array12_);
    _mxarray13_ = mclInitializeDoubleVector(1, 4, _array14_);
    _mxarray15_ = mclInitializeDouble(3.0);
    _mxarray16_ = mclInitializeDoubleVector(1, 6, _array17_);
    _mxarray18_ = mclInitializeDouble(4.0);
    _mxarray19_ = mclInitializeDoubleVector(1, 8, _array20_);
    _mxarray21_ = mclInitializeDouble(5.0);
    _mxarray22_ = mclInitializeDoubleVector(1, 10, _array23_);
    _mxarray24_ = mclInitializeDouble(6.0);
    _mxarray25_ = mclInitializeDoubleVector(1, 12, _array26_);
    _mxarray27_ = mclInitializeDouble(7.0);
    _mxarray28_ = mclInitializeDoubleVector(1, 14, _array29_);
    _mxarray30_ = mclInitializeDouble(8.0);
    _mxarray31_ = mclInitializeDoubleVector(1, 16, _array32_);
    _mxarray33_ = mclInitializeDouble(9.0);
    _mxarray34_ = mclInitializeDoubleVector(1, 18, _array35_);
    _mxarray36_ = mclInitializeDouble(10.0);
    _mxarray37_ = mclInitializeDoubleVector(1, 20, _array38_);
    _mxarray39_ = mclInitializeString(35, _array40_);
    _mxarray41_ = mclInitializeString(3, _array42_);
    _mxarray43_ = mclInitializeDouble(11.0);
}

void TerminateModule_dbwavf(void) {
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdbwavf(int nargout_, mxArray * wname);

_mexLocalFunctionTable _local_function_table_dbwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNDbwavf" contains the nargout interface for the "dbwavf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbwavf.m"
 * (lines 1-112). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNDbwavf(int nargout, mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mdbwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfDbwavf" contains the normal interface for the "dbwavf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbwavf.m"
 * (lines 1-112). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
mxArray * mlfDbwavf(mxArray * wname) {
    int nargout = 1;
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mdbwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfVDbwavf" contains the void interface for the "dbwavf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbwavf.m"
 * (lines 1-112). The void interface is only produced if the M-function uses
 * the special variable "nargout", and has at least one output. The void
 * interface function specifies zero output arguments to the implementation
 * version of the function, and in the event that the implementation version
 * still returns an output (which, in MATLAB, would be assigned to the "ans"
 * variable), it deallocates the output. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlfVDbwavf(mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mdbwavf(0, wname);
    mlfRestorePreviousContext(0, 1, wname);
    mxDestroyArray(F);
}

/*
 * The function "mlxDbwavf" contains the feval interface for the "dbwavf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbwavf.m"
 * (lines 1-112). The feval function calls the implementation version of dbwavf
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxDbwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dbwavf Line: 1 Column: "
            "1 The function \"dbwavf\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dbwavf Line: 1 Column: "
            "1 The function \"dbwavf\" was called with mor"
            "e than the declared number of inputs (1)."),
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
    mplhs[0] = Mdbwavf(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdbwavf" is the implementation version of the "dbwavf"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbwavf.m"
 * (lines 1-112). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function F = dbwavf(wname)
 */
static mxArray * Mdbwavf(int nargout_, mxArray * wname) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dbwavf);
    int nargin_ = mclNargin(1, wname, NULL);
    mxArray * F = NULL;
    mxArray * ii = NULL;
    mxArray * ab = NULL;
    mxArray * lw = NULL;
    mxArray * num = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    /*
     * %DBWAVF Daubechies wavelet filters.
     * %   F = DBWAVF(W) returns the scaling filter
     * %   associated with Daubechies wavelet specified
     * %   by the string W where W = 'dbN'.
     * %   Possible values for N are:
     * %      N = 1, 2, 3, ... , 45.
     * %
     * %   See also DBAUX, WAVEINFO, WFILTERS.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[0,1],nargout,[0:1]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("dbwavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray0_))) {
        mlfError(_mxarray2_, NULL);
    }
    /*
     * if nargin==0
     */
    if (nargin_ == 0) {
        /*
         * F = 45; 
         */
        mlfAssign(&F, _mxarray4_);
        /*
         * % F contains the number max for Daubechies wavelet.
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * if lower(wname(1:2))=='ha'
     */
    if (mclEqBool(
          mlfLower(
            mclArrayRef1(
              mclVa(wname, "wname"), mlfColon(_mxarray5_, _mxarray6_, NULL))),
          _mxarray7_)) {
        /*
         * num = 1;
         */
        mlfAssign(&num, _mxarray5_);
    /*
     * else
     */
    } else {
        /*
         * lw = length(wname); ab = abs(wname);
         */
        mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
        mlfAssign(&ab, mlfAbs(mclVa(wname, "wname")));
        /*
         * ii = lw+1; 
         */
        mlfAssign(&ii, mclPlus(mclVv(lw, "lw"), _mxarray5_));
        /*
         * while (ii>1) & (47<ab(ii-1)) & (ab(ii-1)<58) , ii = ii-1; end
         */
        for (;;) {
            mxArray * a_ = mclInitialize(mclGt(mclVv(ii, "ii"), _mxarray5_));
            if (mlfTobool(a_)) {
                mlfAssign(
                  &a_,
                  mclAnd(
                    a_,
                    mclLt(
                      _mxarray9_,
                      mclArrayRef1(
                        mclVv(ab, "ab"),
                        mclMinus(mclVv(ii, "ii"), _mxarray5_)))));
            } else {
                mlfAssign(&a_, mlfScalar(0));
            }
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(
                       a_,
                       mclLt(
                         mclArrayRef1(
                           mclVv(ab, "ab"),
                           mclMinus(mclVv(ii, "ii"), _mxarray5_)),
                         _mxarray10_)))) {
                mxDestroyArray(a_);
            } else {
                mxDestroyArray(a_);
                break;
            }
            mlfAssign(&ii, mclMinus(mclVv(ii, "ii"), _mxarray5_));
        }
        /*
         * num = wstr2num(wname(ii:lw));
         */
        mlfAssign(
          &num,
          mlfWstr2num(
            mclArrayRef1(
              mclVa(wname, "wname"),
              mlfColon(mclVv(ii, "ii"), mclVv(lw, "lw"), NULL))));
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
        if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * case 1
             * F = [...
             */
            mlfAssign(&F, _mxarray11_);
        /*
         * 0.50000000000000   0.50000000000000  ...
         * ];
         * 
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray13_);
        /*
         * 0.34150635094622   0.59150635094587   0.15849364905378  -0.09150635094587 ...
         * ];
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray15_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray16_);
        /*
         * 0.23523360389270   0.57055845791731   0.32518250026371  -0.09546720778426 ...
         * -0.06041610415535   0.02490874986589                                       ...
         * ];
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray18_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray19_);
        /*
         * 0.16290171402562   0.50547285754565   0.44610006912319  -0.01978751311791 ...
         * -0.13225358368437   0.02180815023739   0.02325180053556  -0.00749349466513 ...
         * ];
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray21_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray22_);
        /*
         * 0.11320949129173   0.42697177135271   0.51216347213016   0.09788348067375 ...
         * -0.17132835769133  -0.02280056594205   0.05485132932108  -0.00441340005433 ...
         * -0.00889593505093   0.00235871396920                                       ...
         * ];
         * 
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray24_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray25_);
        /*
         * 0.07887121600143   0.34975190703757   0.53113187994121   0.22291566146505 ...
         * -0.15999329944587  -0.09175903203003   0.06894404648720   0.01946160485396 ...
         * -0.02233187416548   0.00039162557603   0.00337803118151  -0.00076176690258 ...
         * ];
         * 
         * case 7
         */
        } else if (mclSwitchCompare(v_, _mxarray27_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray28_);
        /*
         * 0.05504971537285   0.28039564181304   0.51557424581833   0.33218624110566 ...
         * -0.10175691123173  -0.15841750564054   0.05042323250485   0.05700172257986 ...
         * -0.02689122629486  -0.01171997078235   0.00887489618962   0.00030375749776 ...
         * -0.00127395235906   0.00025011342658                                       ...
         * ];
         * 
         * case 8
         */
        } else if (mclSwitchCompare(v_, _mxarray30_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray31_);
        /*
         * 0.03847781105406   0.22123362357624   0.47774307521438   0.41390826621166 ...
         * -0.01119286766665  -0.20082931639111   0.00033409704628   0.09103817842345 ...
         * -0.01228195052300  -0.03117510332533   0.00988607964808   0.00618442240954 ...
         * -0.00344385962813  -0.00027700227421   0.00047761485533  -0.00008306863060 ...
         * ];
         * 
         * case 9
         */
        } else if (mclSwitchCompare(v_, _mxarray33_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray34_);
        /*
         * 0.02692517479416   0.17241715192471   0.42767453217028   0.46477285717278 ...
         * 0.09418477475112  -0.20737588089628  -0.06847677451090   0.10503417113714 ...
         * 0.02172633772990  -0.04782363205882   0.00017744640673   0.01581208292614 ...
         * -0.00333981011324  -0.00302748028715   0.00130648364018   0.00016290733601 ...
         * -0.00017816487955   0.00002782275679
         * ];
         * 
         * case 10
         */
        } else if (mclSwitchCompare(v_, _mxarray36_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray37_);
        /*
         * 0.01885857879640   0.13306109139687   0.37278753574266   0.48681405536610 ...
         * 0.19881887088440  -0.17666810089647  -0.13855493935993   0.09006372426666 ...
         * 0.06580149355070  -0.05048328559801  -0.02082962404385   0.02348490704841 ...
         * 0.00255021848393  -0.00758950116768   0.00098666268244   0.00140884329496 ...
         * -0.00048497391996  -0.00008235450295   0.00006617718320  -0.00000937920789 ...
         * ];
         * 
         * otherwise
         */
        } else {
            /*
             * if (11<=num) & (num<=45)
             */
            mxArray * a_ = mclInitialize(mclLe(_mxarray43_, mclVv(num, "num")));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(a_, mclLe(mclVv(num, "num"), _mxarray4_)))) {
                mxDestroyArray(a_);
                /*
                 * F = dbaux(num);
                 */
                mlfAssign(&F, mlfNDbaux(1, mclVv(num, "num"), NULL));
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * errargt(mfilename,'Invalid Daubechies wavelet number !','msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("dbwavf"), _mxarray39_, _mxarray41_, NULL));
                /*
                 * error('*');
                 */
                mlfError(_mxarray2_, NULL);
            }
        /*
         * end
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mclValidateOutput(F, 1, nargout_, "F", "dbwavf");
    mxDestroyArray(ans);
    mxDestroyArray(num);
    mxDestroyArray(lw);
    mxDestroyArray(ab);
    mxDestroyArray(ii);
    mxDestroyArray(wname);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return F;
}
