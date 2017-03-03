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
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "mextglob.h"
static mxArray * _mxarray0_;

static mxChar _array2_[3] = { 'i', 'n', 't' };
static mxArray * _mxarray1_;
static mxArray * _mxarray3_;

static mxChar _array5_[25] = { 'i', 'n', 't', 'e', 'g', 'e', 'r', '(', 's',
                               ')', ' ', '>', ' ', '0', ' ', ',', ' ', 'e',
                               'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray4_;

static mxChar _array7_[3] = { 'i', 'n', '0' };
static mxArray * _mxarray6_;

static mxChar _array9_[26] = { 'i', 'n', 't', 'e', 'g', 'e', 'r', '(', 's',
                               ')', ' ', '=', '>', ' ', '0', ' ', ',', ' ',
                               'e', 'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray8_;

static mxChar _array11_[3] = { 'r', 'e', 'l' };
static mxArray * _mxarray10_;

static mxChar _array13_[19] = { 'i', 'n', 't', 'e', 'g', 'e', 'r',
                                '(', 's', ')', ' ', 'e', 'x', 'p',
                                'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray12_;

static mxChar _array15_[3] = { 'r', 'e', 'p' };
static mxArray * _mxarray14_;

static mxChar _array17_[22] = { 'r', 'e', 'a', 'l', '(', 's', ')', ' ',
                                '>', ' ', '0', ' ', ',', ' ', 'e', 'x',
                                'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray16_;

static mxChar _array19_[3] = { 'r', 'e', '0' };
static mxArray * _mxarray18_;

static mxChar _array21_[23] = { 'r', 'e', 'a', 'l', '(', 's', ')', ' ',
                                '=', '>', ' ', '0', ' ', ',', ' ', 'e',
                                'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray20_;

static mxChar _array23_[3] = { 's', 't', 'r' };
static mxArray * _mxarray22_;

static mxChar _array25_[15] = { 's', 't', 'r', 'i', 'n', 'g', ' ', 'e',
                                'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray24_;

static mxChar _array27_[3] = { 'v', 'e', 'c' };
static mxArray * _mxarray26_;

static mxChar _array29_[15] = { 'v', 'e', 'c', 't', 'o', 'r', ' ', 'e',
                                'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray28_;

static mxChar _array31_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray30_;

static mxChar _array33_[19] = { 'r', 'o', 'w', ' ', 'v', 'e', 'c',
                                't', 'o', 'r', ' ', 'e', 'x', 'p',
                                'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray32_;

static mxChar _array35_[3] = { 'c', 'o', 'l' };
static mxArray * _mxarray34_;

static mxChar _array37_[22] = { 'c', 'o', 'l', 'u', 'm', 'n', ' ', 'v',
                                'e', 'c', 't', 'o', 'r', ' ', 'e', 'x',
                                'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray36_;

static mxChar _array39_[3] = { 'd', 'a', 't' };
static mxArray * _mxarray38_;

static mxChar _array41_[13] = { 'd', 'a', 't', 'e', ' ', 'e', 'x',
                                'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray40_;
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

static mxChar _array53_[3] = { 'm', 'o', 'n' };
static mxArray * _mxarray52_;

static mxChar _array55_[14] = { 'm', 'o', 'n', 't', 'h', ' ', 'e',
                                'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray54_;

static mxChar _array57_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray56_;

static mxChar _array59_[26] = { 'u', 'n', 'd', 'e', 'f', 'i', 'n', 'e', 'd',
                                ' ', 't', 'y', 'p', 'e', ' ', 'o', 'f', ' ',
                                'v', 'a', 'r', 'i', 'a', 'b', 'l', 'e' };
static mxArray * _mxarray58_;

static mxChar _array61_[1] = { ' ' };
static mxArray * _mxarray60_;

static mxChar _array63_[6] = { ' ', '-', '-', '-', '>', ' ' };
static mxArray * _mxarray62_;

static mxChar _array65_[10] = { 'E', 'R', 'R', 'O', 'R',
                                ' ', '.', '.', '.', ' ' };
static mxArray * _mxarray64_;

static mxChar _array67_[15] = { 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T',
                                'S', ' ', 'E', 'R', 'R', 'O', 'R' };
static mxArray * _mxarray66_;
static mxArray * _mxarray68_;

static mxChar _array70_[1] = { '*' };
static mxArray * _mxarray69_;

static mxChar _array72_[1] = { '-' };
static mxArray * _mxarray71_;

static mxChar _array74_[5] = { 'm', 'o', 'd', 'a', 'l' };
static mxArray * _mxarray73_;

static mxChar _array76_[5] = { 'i', 's', '_', 'o', 'n' };
static mxArray * _mxarray75_;

void InitializeModule_errargt(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeString(3, _array2_);
    _mxarray3_ = mclInitializeDouble(1.0);
    _mxarray4_ = mclInitializeString(25, _array5_);
    _mxarray6_ = mclInitializeString(3, _array7_);
    _mxarray8_ = mclInitializeString(26, _array9_);
    _mxarray10_ = mclInitializeString(3, _array11_);
    _mxarray12_ = mclInitializeString(19, _array13_);
    _mxarray14_ = mclInitializeString(3, _array15_);
    _mxarray16_ = mclInitializeString(22, _array17_);
    _mxarray18_ = mclInitializeString(3, _array19_);
    _mxarray20_ = mclInitializeString(23, _array21_);
    _mxarray22_ = mclInitializeString(3, _array23_);
    _mxarray24_ = mclInitializeString(15, _array25_);
    _mxarray26_ = mclInitializeString(3, _array27_);
    _mxarray28_ = mclInitializeString(15, _array29_);
    _mxarray30_ = mclInitializeString(3, _array31_);
    _mxarray32_ = mclInitializeString(19, _array33_);
    _mxarray34_ = mclInitializeString(3, _array35_);
    _mxarray36_ = mclInitializeString(22, _array37_);
    _mxarray38_ = mclInitializeString(3, _array39_);
    _mxarray40_ = mclInitializeString(13, _array41_);
    _mxarray42_ = mclInitializeDouble(100.0);
    _mxarray43_ = mclInitializeDouble(10000.0);
    _mxarray44_ = mclInitializeDouble(1e+06);
    _mxarray45_ = mclInitializeDouble(1e+08);
    _mxarray46_ = mclInitializeDouble(1e+10);
    _mxarray47_ = mclInitializeDouble(59.0);
    _mxarray48_ = mclInitializeDouble(24.0);
    _mxarray49_ = mclInitializeDouble(31.0);
    _mxarray50_ = mclInitializeDouble(12.0);
    _mxarray51_ = mclInitializeDouble(9999.0);
    _mxarray52_ = mclInitializeString(3, _array53_);
    _mxarray54_ = mclInitializeString(14, _array55_);
    _mxarray56_ = mclInitializeString(3, _array57_);
    _mxarray58_ = mclInitializeString(26, _array59_);
    _mxarray60_ = mclInitializeString(1, _array61_);
    _mxarray62_ = mclInitializeString(6, _array63_);
    _mxarray64_ = mclInitializeString(10, _array65_);
    _mxarray66_ = mclInitializeString(15, _array67_);
    _mxarray68_ = mclInitializeDouble(2.0);
    _mxarray69_ = mclInitializeString(1, _array70_);
    _mxarray71_ = mclInitializeString(1, _array72_);
    _mxarray73_ = mclInitializeString(5, _array74_);
    _mxarray75_ = mclInitializeString(5, _array76_);
}

void TerminateModule_errargt(void) {
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
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
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Merrargt(int nargout_,
                          mxArray * ndfct,
                          mxArray * var,
                          mxArray * type,
                          mxArray * flagWin);

_mexLocalFunctionTable _local_function_table_errargt
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfErrargt" contains the normal interface for the "errargt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargt.m" (lines 1-162). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfErrargt(mxArray * ndfct,
                     mxArray * var,
                     mxArray * type,
                     mxArray * flagWin) {
    int nargout = 1;
    mxArray * err = NULL;
    mlfEnterNewContext(0, 4, ndfct, var, type, flagWin);
    err = Merrargt(nargout, ndfct, var, type, flagWin);
    mlfRestorePreviousContext(0, 4, ndfct, var, type, flagWin);
    return mlfReturnValue(err);
}

/*
 * The function "mlxErrargt" contains the feval interface for the "errargt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargt.m" (lines 1-162). The
 * feval function calls the implementation version of errargt through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxErrargt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: errargt Line: 1 Column: "
            "1 The function \"errargt\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: errargt Line: 1 Column:"
            " 1 The function \"errargt\" was called with m"
            "ore than the declared number of inputs (4)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mplhs[0] = Merrargt(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Merrargt" is the implementation version of the "errargt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargt.m" (lines 1-162). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function err = errargt(ndfct,var,type,flagWin)
 */
static mxArray * Merrargt(int nargout_,
                          mxArray * ndfct,
                          mxArray * var,
                          mxArray * type,
                          mxArray * flagWin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_errargt);
    int nargin_ = mclNargin(4, ndfct, var, type, flagWin, NULL);
    mxArray * err = NULL;
    mxArray * errordlg = NULL;
    mxArray * ans = NULL;
    mxArray * minus = NULL;
    mxArray * star = NULL;
    mxArray * len = NULL;
    mxArray * lenmsg = NULL;
    mxArray * txttitle = NULL;
    mxArray * msg = NULL;
    mxArray * aa = NULL;
    mxArray * mm = NULL;
    mxArray * jj = NULL;
    mxArray * hh = NULL;
    mxArray * mn = NULL;
    mxArray * ss = NULL;
    mxArray * txt = NULL;
    mxArray * c = NULL;
    mxArray * r = NULL;
    mclCopyArray(&ndfct);
    mclCopyArray(&var);
    mclCopyArray(&type);
    mclCopyArray(&flagWin);
    /*
     * %ERRARGT Check function arguments type.
     * %   ERR = ERRARGT(NDFCT,VAR,TYPE)
     * %   is equal to 1 if any element of input vector or 
     * %   matrix VAR (depending on TYPE choice listed below) 
     * %   is not of type prescribed by input string TYPE.
     * %   Otherwise ERR = 0.
     * %
     * %   If ERR = 1, an error message is displayed in the command
     * %   window. In the header message, the string NDFCT is
     * %   displayed. This string contains the name of a function.
     * %
     * %   Available options for TYPE are :
     * %   'int' : strictly positive integers
     * %   'in0' : positive integers
     * %   'rel' : integers
     * %
     * %   'rep' : strictly positive reals
     * %   're0' : positive reals
     * %
     * %   'str' : string
     * %
     * %   'vec' : vector
     * %   'row' : row vector
     * %   'col' : column vector
     * %
     * %   'dat' : dates   AAAAMMJJHHMNSS
     * %           with    0 <= AAAA <=9999
     * %                   1 <= MM <= 12
     * %                   1 <= JJ <= 31
     * %                   0 <= HH <= 23
     * %                   0 <= MN <= 59
     * %                   0 <= SS <= 59
     * %
     * %   'mon' : months  MM
     * %           with    1 <= MM <= 12
     * %
     * %   A special use of ERRARGT is ERR = ERRARGT(NDFCT,VAR,'msg')
     * %   for which ERR = 1 and the string VAR is the error message.
     * %
     * %   See also ERRARGN.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 16-Jan-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $ $Date: 2007/05/03 16:15:45 $
     * 
     * [r,c] = size(var);
     */
    mlfSize(mlfVarargout(&r, &c, NULL), mclVa(var, "var"), NULL);
    /*
     * err = 0;
     */
    mlfAssign(&err, _mxarray0_);
    /*
     * 
     * switch type
     */
    {
        mxArray * v_ = mclInitialize(mclVa(type, "type"));
        if (mclSwitchCompare(v_, _mxarray1_)) {
            /*
             * case 'int'
             * if (ischar(var) | any(var < 1) | any(var ~= fix(var)))
             */
            mxArray * a_ = mclInitialize(mlfIschar(mclVa(var, "var")));
            if (mlfTobool(a_)) {
                mlfAssign(&a_, mlfScalar(1));
            } else {
                mlfAssign(
                  &a_,
                  mclOr(
                    a_, mlfAny(mclLt(mclVa(var, "var"), _mxarray3_), NULL)));
            }
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(
                         mclNe(mclVa(var, "var"), mlfFix(mclVa(var, "var"))),
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'integer(s) > 0 , expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray4_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 'in0'
         */
        } else if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * if (ischar(var) | any(var < 0) | any(var ~= fix(var)))
             */
            mxArray * a_ = mclInitialize(mlfIschar(mclVa(var, "var")));
            if (mlfTobool(a_)) {
                mlfAssign(&a_, mlfScalar(1));
            } else {
                mlfAssign(
                  &a_,
                  mclOr(
                    a_, mlfAny(mclLt(mclVa(var, "var"), _mxarray0_), NULL)));
            }
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(
                         mclNe(mclVa(var, "var"), mlfFix(mclVa(var, "var"))),
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'integer(s) => 0 , expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray8_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 'rel'
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * if (ischar(var) | any(var ~= fix(var)))
             */
            mxArray * a_ = mclInitialize(mlfIschar(mclVa(var, "var")));
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(
                         mclNe(mclVa(var, "var"), mlfFix(mclVa(var, "var"))),
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'integer(s) expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray12_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 'rep'
         */
        } else if (mclSwitchCompare(v_, _mxarray14_)) {
            /*
             * if (ischar(var) | any(var <= 0)) 
             */
            mxArray * a_ = mclInitialize(mlfIschar(mclVa(var, "var")));
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(mclLe(mclVa(var, "var"), _mxarray0_), NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'real(s) > 0 , expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray16_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 're0'
         */
        } else if (mclSwitchCompare(v_, _mxarray18_)) {
            /*
             * if (ischar(var) | any(var < 0))
             */
            mxArray * a_ = mclInitialize(mlfIschar(mclVa(var, "var")));
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(mclLt(mclVa(var, "var"), _mxarray0_), NULL)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'real(s) => 0 , expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray20_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 'str'
         */
        } else if (mclSwitchCompare(v_, _mxarray22_)) {
            /*
             * if any(~ischar(var))
             */
            if (mlfTobool(mlfAny(mclNot(mlfIschar(mclVa(var, "var"))), NULL))) {
                /*
                 * err = 1; txt = 'string expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray24_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'vec'
         */
        } else if (mclSwitchCompare(v_, _mxarray26_)) {
            /*
             * if r ~= 1 & c ~= 1
             */
            mxArray * a_ = mclInitialize(mclNe(mclVv(r, "r"), _mxarray3_));
            if (mlfTobool(a_)
                && mlfTobool(mclAnd(a_, mclNe(mclVv(c, "c"), _mxarray3_)))) {
                mxDestroyArray(a_);
                /*
                 * err = 1; txt = 'vector expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray28_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * 
         * case 'row'
         */
        } else if (mclSwitchCompare(v_, _mxarray30_)) {
            /*
             * if r ~= 1
             */
            if (mclNeBool(mclVv(r, "r"), _mxarray3_)) {
                /*
                 * err = 1; txt = 'row vector expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray32_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'col'
         */
        } else if (mclSwitchCompare(v_, _mxarray34_)) {
            /*
             * if c ~= 1
             */
            if (mclNeBool(mclVv(c, "c"), _mxarray3_)) {
                /*
                 * err = 1; txt = 'column vector expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray36_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'dat'
         */
        } else if (mclSwitchCompare(v_, _mxarray38_)) {
            /*
             * if isempty(var)
             */
            if (mlfTobool(mlfIsempty(mclVa(var, "var")))) {
                /*
                 * err = 1; txt = 'date expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray40_);
            /*
             * else
             */
            } else {
                /*
                 * ss = rem(var,100);
                 */
                mlfAssign(&ss, mlfRem(mclVa(var, "var"), _mxarray42_));
                /*
                 * mn = rem(fix(var/100),100);
                 */
                mlfAssign(
                  &mn,
                  mlfRem(
                    mlfFix(mclMrdivide(mclVa(var, "var"), _mxarray42_)),
                    _mxarray42_));
                /*
                 * hh = rem(fix(var/10000),100);
                 */
                mlfAssign(
                  &hh,
                  mlfRem(
                    mlfFix(mclMrdivide(mclVa(var, "var"), _mxarray43_)),
                    _mxarray42_));
                /*
                 * jj = rem(fix(var/1000000),100);
                 */
                mlfAssign(
                  &jj,
                  mlfRem(
                    mlfFix(mclMrdivide(mclVa(var, "var"), _mxarray44_)),
                    _mxarray42_));
                /*
                 * mm = rem(fix(var/100000000),100);
                 */
                mlfAssign(
                  &mm,
                  mlfRem(
                    mlfFix(mclMrdivide(mclVa(var, "var"), _mxarray45_)),
                    _mxarray42_));
                /*
                 * aa = fix(var/10000000000);
                 */
                mlfAssign(
                  &aa, mlfFix(mclMrdivide(mclVa(var, "var"), _mxarray46_)));
                /*
                 * if any(...
                 */
                if (mlfTobool(
                      mlfAny(
                        mclOr(
                          mclOr(
                            mclOr(
                              mclOr(
                                mclOr(
                                  mclOr(
                                    mclOr(
                                      mclOr(
                                        mclOr(
                                          mclOr(
                                            mclOr(
                                              mclOr(
                                                mclLt(
                                                  mclVv(ss, "ss"), _mxarray0_),
                                                mclGt(
                                                  mclVv(ss, "ss"),
                                                  _mxarray47_)),
                                              mclLt(
                                                mclVv(mn, "mn"), _mxarray0_)),
                                            mclGt(
                                              mclVv(mn, "mn"), _mxarray47_)),
                                          mclLt(mclVv(hh, "hh"), _mxarray0_)),
                                        mclGt(mclVv(hh, "hh"), _mxarray48_)),
                                      mclAnd(
                                        mclEq(mclVv(hh, "hh"), _mxarray48_),
                                        mclOr(
                                          mclNe(mclVv(ss, "ss"), _mxarray0_),
                                          mclNe(mclVv(mn, "mn"), _mxarray0_)))),
                                    mclLt(mclVv(jj, "jj"), _mxarray3_)),
                                  mclGt(mclVv(jj, "jj"), _mxarray49_)),
                                mclLt(mclVv(mm, "mm"), _mxarray3_)),
                              mclGt(mclVv(mm, "mm"), _mxarray50_)),
                            mclLt(mclVv(aa, "aa"), _mxarray0_)),
                          mclGt(mclVv(aa, "aa"), _mxarray51_)),
                        NULL))) {
                    /*
                     * ss < 0 | ss > 59 |...
                     * mn < 0 | mn > 59 |...
                     * hh < 0 | hh > 24 | (hh == 24 & (ss ~= 0 | mn ~= 0)) |...
                     * jj < 1 | jj > 31 | ...
                     * mm < 1 | mm > 12 | ...
                     * aa < 0 | aa > 9999 ...
                     * ) 
                     * err = 1; txt = 'date expected';
                     */
                    mlfAssign(&err, _mxarray3_);
                    mlfAssign(&txt, _mxarray40_);
                /*
                 * end
                 */
                }
            /*
             * end
             */
            }
        /*
         * 
         * case 'mon'
         */
        } else if (mclSwitchCompare(v_, _mxarray52_)) {
            /*
             * if (any(var < 1 | var > 12 | var ~= fix(var)))
             */
            if (mlfTobool(
                  mlfAny(
                    mclOr(
                      mclOr(
                        mclLt(mclVa(var, "var"), _mxarray3_),
                        mclGt(mclVa(var, "var"), _mxarray50_)),
                      mclNe(mclVa(var, "var"), mlfFix(mclVa(var, "var")))),
                    NULL))) {
                /*
                 * err = 1; txt = 'month expected';
                 */
                mlfAssign(&err, _mxarray3_);
                mlfAssign(&txt, _mxarray54_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'msg'
         */
        } else if (mclSwitchCompare(v_, _mxarray56_)) {
            /*
             * err = 1; txt = var;
             */
            mlfAssign(&err, _mxarray3_);
            mlfAssign(&txt, mclVa(var, "var"));
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * err = 1; txt = 'undefined type of variable';
             */
            mlfAssign(&err, _mxarray3_);
            mlfAssign(&txt, _mxarray58_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * if err == 1
     */
    if (mclEqBool(mclVv(err, "err"), _mxarray3_)) {
        /*
         * if size(txt,1) == 1
         */
        if (mclEqBool(
              mlfSize(mclValueVarargout(), mclVv(txt, "txt"), _mxarray3_),
              _mxarray3_)) {
            /*
             * msg   = [' ' ndfct ' ---> ' xlate(txt)];
             */
            mlfAssign(
              &msg,
              mlfHorzcat(
                _mxarray60_,
                mclVa(ndfct, "ndfct"),
                _mxarray62_,
                mlfXlate(mclValueVarargout(), mclVv(txt, "txt"), NULL),
                NULL));
        /*
         * else
         */
        } else {
            /*
             * msg = str2mat([' ' ndfct ' ---> '],xlate(txt));
             */
            mlfAssign(
              &msg,
              mlfStr2mat(
                mlfHorzcat(
                  _mxarray60_, mclVa(ndfct, "ndfct"), _mxarray62_, NULL),
                mlfXlate(mclValueVarargout(), mclVv(txt, "txt"), NULL),
                NULL));
        /*
         * end
         */
        }
        /*
         * if type=='msg'
         */
        if (mclEqBool(mclVa(type, "type"), _mxarray56_)) {
            /*
             * txttitle = 'ERROR ... ';
             */
            mlfAssign(&txttitle, _mxarray64_);
        /*
         * else
         */
        } else {
            /*
             * txttitle = 'ARGUMENTS ERROR';
             */
            mlfAssign(&txttitle, _mxarray66_);
        /*
         * end
         */
        }
        /*
         * 
         * % if GUI is used messages are displayed in a window
         * % else the Matlab command window is used.
         * %--------------------------------------------------
         * if nargin<4 , flagWin = 1; end
         */
        if (nargin_ < 4) {
            mlfAssign(&flagWin, _mxarray3_);
        }
        /*
         * if ~mextglob('is_on') | ~flagWin
         */
        {
            mxArray * a_
              = mclInitialize(
                  mclNot(
                    mlfNMextglob(0, mclValueVarargout(), _mxarray75_, NULL)));
            if (mlfTobool(a_)
                || mlfTobool(mclOr(a_, mclNot(mclVa(flagWin, "flagWin"))))) {
                mxDestroyArray(a_);
                /*
                 * lenmsg = length(msg); len = lenmsg+2;
                 */
                mlfAssign(&lenmsg, mlfScalar(mclLengthInt(mclVv(msg, "msg"))));
                mlfAssign(&len, mclPlus(mclVv(lenmsg, "lenmsg"), _mxarray68_));
                /*
                 * star   = '*'; star  = star(:,ones(1,len));
                 */
                mlfAssign(&star, _mxarray69_);
                mlfAssign(
                  &star,
                  mclArrayRef2(
                    mclVv(star, "star"),
                    mlfCreateColonIndex(),
                    mlfOnes(_mxarray3_, mclVv(len, "len"), NULL)));
                /*
                 * minus  = '-'; minus = minus(:,ones(1,len));
                 */
                mlfAssign(&minus, _mxarray71_);
                mlfAssign(
                  &minus,
                  mclArrayRef2(
                    mclVv(minus, "minus"),
                    mlfCreateColonIndex(),
                    mlfOnes(_mxarray3_, mclVv(len, "len"), NULL)));
                /*
                 * disp(' ')
                 */
                mlfDisp(_mxarray60_);
                /*
                 * disp(star);
                 */
                mlfDisp(mclVv(star, "star"));
                /*
                 * disp(txttitle);
                 */
                mlfDisp(mclVv(txttitle, "txttitle"));
                /*
                 * disp(minus);
                 */
                mlfDisp(mclVv(minus, "minus"));
                /*
                 * disp(msg);
                 */
                mlfDisp(mclVv(msg, "msg"));
                /*
                 * disp(star);
                 */
                mlfDisp(mclVv(star, "star"));
                /*
                 * disp(' ')
                 */
                mlfDisp(_mxarray60_);
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * errordlg(msg,txttitle,'modal');
                 */
                mclAssignAns(
                  &ans,
                  mlfIndexRef(
                    mclVv(errordlg, "errordlg"),
                    "(?,?,?)",
                    mclVv(msg, "msg"),
                    mclVv(txttitle, "txttitle"),
                    _mxarray73_));
            }
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    mclValidateOutput(err, 1, nargout_, "err", "errargt");
    mxDestroyArray(r);
    mxDestroyArray(c);
    mxDestroyArray(txt);
    mxDestroyArray(ss);
    mxDestroyArray(mn);
    mxDestroyArray(hh);
    mxDestroyArray(jj);
    mxDestroyArray(mm);
    mxDestroyArray(aa);
    mxDestroyArray(msg);
    mxDestroyArray(txttitle);
    mxDestroyArray(lenmsg);
    mxDestroyArray(len);
    mxDestroyArray(star);
    mxDestroyArray(minus);
    mxDestroyArray(ans);
    mxDestroyArray(errordlg);
    mxDestroyArray(flagWin);
    mxDestroyArray(type);
    mxDestroyArray(var);
    mxDestroyArray(ndfct);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return err;
}
