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
#include "symwavf.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "symaux.h"
#include "wstr2num.h"

static double _array1_[2] = { 0.0, 1.0 };
static mxArray * _mxarray0_;

static mxChar _array3_[1] = { '*' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

static double _array9_[2] = { .5, .5 };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;

static double _array12_[4] = { .34150635094622, .59150635094587,
                               .15849364905378, -.09150635094587 };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

static double _array15_[6] = { .2352336038927, .57055845791731,
                               .32518250026371, -.09546720778426,
                               -.06041610415535, .02490874986589 };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;

static double _array18_[8] = { .022785172948, -.00891235072085, -.0701588120895,
                               .210617267102, .568329121705, .351869534328,
                               -.02095548256255, -.053574450709 };
static mxArray * _mxarray17_;
static mxArray * _mxarray19_;

static double _array21_[10] = { .01381607647893, -.01492124993438,
                                -.12397568130675, .01173946156807,
                                .44829082419092, .51152648344605,
                                .14099534842729, -.02767209305836,
                                .02087343221079, .01932739797744 };
static mxArray * _mxarray20_;
static mxArray * _mxarray22_;

static double _array24_[12] = { -.00551593375469, .00124996104639,
                                .03162528132994, -.01489187564922,
                                -.0513624849309, .23895218566605,
                                .55694639196396, .34722898647835,
                                -.03416156079324, -.08343160770584,
                                .00246830618592, .01089235016328 };
static mxArray * _mxarray23_;
static mxArray * _mxarray25_;

static double _array27_[14] = { .00726069738101, .00283567134288,
                                -.07623193594814, -.09902835340368,
                                .20409196986287, .54289135490599,
                                .37908130098269, .01233282974432,
                                -.03503914561106, .04800738396784,
                                .02157772629104, -.00893521582557,
                                -.0007406129573, .0018963292671 };
static mxArray * _mxarray26_;
static mxArray * _mxarray28_;

static double _array30_[16] = { .0013363966964, -.00021419715012,
                                -.01057284326418, .00269319437688,
                                .03474523295559, -.01924676063167,
                                -.03673125438038, .25769933518654,
                                .54955331526901, .34037267359439,
                                -.04332680770282, -.10132432764282,
                                .00537930587524, .02241181152181,
                                -.00038334544811, -.00239172925575 };
static mxArray * _mxarray29_;

static mxChar _array32_[32] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'S', 'y', 'm', 'l', 'e', 't', 's', ' ',
                                'w', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                'n', 'u', 'm', 'b', 'e', 'r', ' ', '!' };
static mxArray * _mxarray31_;

static mxChar _array34_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray33_;
static mxArray * _mxarray35_;

void InitializeModule_symwavf(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeString(1, _array3_);
    _mxarray4_ = mclInitializeDouble(45.0);
    _mxarray5_ = mclInitializeDouble(1.0);
    _mxarray6_ = mclInitializeDouble(47.0);
    _mxarray7_ = mclInitializeDouble(58.0);
    _mxarray8_ = mclInitializeDoubleVector(1, 2, _array9_);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeDoubleVector(1, 4, _array12_);
    _mxarray13_ = mclInitializeDouble(3.0);
    _mxarray14_ = mclInitializeDoubleVector(1, 6, _array15_);
    _mxarray16_ = mclInitializeDouble(4.0);
    _mxarray17_ = mclInitializeDoubleVector(1, 8, _array18_);
    _mxarray19_ = mclInitializeDouble(5.0);
    _mxarray20_ = mclInitializeDoubleVector(1, 10, _array21_);
    _mxarray22_ = mclInitializeDouble(6.0);
    _mxarray23_ = mclInitializeDoubleVector(1, 12, _array24_);
    _mxarray25_ = mclInitializeDouble(7.0);
    _mxarray26_ = mclInitializeDoubleVector(1, 14, _array27_);
    _mxarray28_ = mclInitializeDouble(8.0);
    _mxarray29_ = mclInitializeDoubleVector(1, 16, _array30_);
    _mxarray31_ = mclInitializeString(32, _array32_);
    _mxarray33_ = mclInitializeString(3, _array34_);
    _mxarray35_ = mclInitializeDouble(9.0);
}

void TerminateModule_symwavf(void) {
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Msymwavf(int nargout_, mxArray * wname);

_mexLocalFunctionTable _local_function_table_symwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNSymwavf" contains the nargout interface for the "symwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symwavf.m" (lines 1-89). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNSymwavf(int nargout, mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Msymwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfSymwavf" contains the normal interface for the "symwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symwavf.m" (lines 1-89). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfSymwavf(mxArray * wname) {
    int nargout = 1;
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Msymwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfVSymwavf" contains the void interface for the "symwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symwavf.m" (lines 1-89). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVSymwavf(mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Msymwavf(0, wname);
    mlfRestorePreviousContext(0, 1, wname);
    mxDestroyArray(F);
}

/*
 * The function "mlxSymwavf" contains the feval interface for the "symwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symwavf.m" (lines 1-89). The
 * feval function calls the implementation version of symwavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxSymwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symwavf Line: 1 Column: "
            "1 The function \"symwavf\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symwavf Line: 1 Column:"
            " 1 The function \"symwavf\" was called with m"
            "ore than the declared number of inputs (1)."),
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
    mplhs[0] = Msymwavf(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Msymwavf" is the implementation version of the "symwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symwavf.m" (lines 1-89). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function F = symwavf(wname)
 */
static mxArray * Msymwavf(int nargout_, mxArray * wname) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_symwavf);
    int nargin_ = mclNargin(1, wname, NULL);
    mxArray * F = NULL;
    mxArray * num = NULL;
    mxArray * ii = NULL;
    mxArray * ab = NULL;
    mxArray * lw = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    /*
     * %SYMWAVF Symlet wavelet filter.
     * %   F = SYMWAVF(W)  returns the scaling filter
     * %   associated with the symlet wavelet specified
     * %   by the string W, where W = 'symN'.
     * %   Possible values for N are:
     * %      N = 2, 3, 4 ... 45.
     * %
     * %   See also SYMAUX, WAVEINFO.
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
            mxCreateString("symwavf"),
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
                  _mxarray6_,
                  mclArrayRef1(
                    mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray5_)))));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclLt(
                     mclArrayRef1(
                       mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray5_)),
                     _mxarray7_)))) {
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
            mlfAssign(&F, _mxarray8_);
        /*
         * 0.50000000000000   0.50000000000000  ...
         * ];
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray11_);
        /*
         * 0.34150635094622   0.59150635094587   0.15849364905378  -0.09150635094587  ...
         * ];
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray14_);
        /*
         * 0.23523360389270   0.57055845791731   0.32518250026371  -0.09546720778426  ...
         * -0.06041610415535   0.02490874986589                                        ...
         * ];
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray17_);
        /*
         * 0.02278517294800  -0.00891235072085  -0.07015881208950   0.21061726710200  ...
         * 0.56832912170500   0.35186953432800  -0.02095548256255  -0.05357445070900  ...
         * ];
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray20_);
        /*
         * 0.01381607647893  -0.01492124993438  -0.12397568130675   0.01173946156807  ...
         * 0.44829082419092   0.51152648344605   0.14099534842729  -0.02767209305836  ...
         * 0.02087343221079   0.01932739797744                                        ...
         * ];
         * 
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray22_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray23_);
        /*
         * -0.00551593375469   0.00124996104639   0.03162528132994  -0.01489187564922  ...
         * -0.05136248493090   0.23895218566605   0.55694639196396   0.34722898647835  ...
         * -0.03416156079324  -0.08343160770584   0.00246830618592   0.01089235016328  ...
         * ];
         * 
         * case 7
         */
        } else if (mclSwitchCompare(v_, _mxarray25_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray26_);
        /*
         * 0.00726069738101   0.00283567134288  -0.07623193594814  -0.09902835340368  ...
         * 0.20409196986287   0.54289135490599   0.37908130098269   0.01233282974432  ...
         * -0.03503914561106   0.04800738396784   0.02157772629104  -0.00893521582557  ...
         * -0.00074061295730   0.00189632926710                                        ...
         * ];
         * 
         * case 8
         */
        } else if (mclSwitchCompare(v_, _mxarray28_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray29_);
        /*
         * 0.00133639669640  -0.00021419715012  -0.01057284326418   0.00269319437688  ...
         * 0.03474523295559  -0.01924676063167  -0.03673125438038   0.25769933518654  ...
         * 0.54955331526901   0.34037267359439  -0.04332680770282  -0.10132432764282  ...
         * 0.00537930587524   0.02241181152181  -0.00038334544811  -0.00239172925575  ...
         * ];
         * 
         * otherwise
         */
        } else {
            /*
             * if (9<=num) & (num<=45)
             */
            mxArray * a_ = mclInitialize(mclLe(_mxarray35_, mclVv(num, "num")));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(a_, mclLe(mclVv(num, "num"), _mxarray4_)))) {
                mxDestroyArray(a_);
                /*
                 * F = symaux(num);
                 */
                mlfAssign(&F, mlfNSymaux(1, mclVv(num, "num"), NULL));
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * errargt(mfilename,'Invalid Symlets wavelet number !','msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("symwavf"), _mxarray31_, _mxarray33_, NULL));
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
    mclValidateOutput(F, 1, nargout_, "F", "symwavf");
    mxDestroyArray(ans);
    mxDestroyArray(lw);
    mxDestroyArray(ab);
    mxDestroyArray(ii);
    mxDestroyArray(num);
    mxDestroyArray(wname);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return F;
}
