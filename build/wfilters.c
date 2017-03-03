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
#include "wfilters.h"
#include "biorfilt.h"
#include "biorwavf.h"
#include "cgauwavf.h"
#include "cmorwavf.h"
#include "coifwavf.h"
#include "dbwavf.h"
#include "deblankl.h"
#include "errargn.h"
#include "errargt.h"
#include "fbspwavf.h"
#include "gauswavf.h"
#include "libmatlbm.h"
#include "orthfilt.h"
#include "rbiowavf.h"
#include "shanwavf.h"
#include "symwavf.h"
#include "wavemngr.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[5] = { 0.0, 1.0, 2.0, 4.0, 8.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;

static mxChar _array7_[3] = { 's', 't', 'r' };
static mxArray * _mxarray6_;

static mxChar _array9_[6] = { 'f', 'i', 'e', 'l', 'd', 's' };
static mxArray * _mxarray8_;

static mxChar _array11_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray10_;

static mxChar _array13_[4] = { 'f', 'i', 'l', 'e' };
static mxArray * _mxarray12_;

static mxChar _array15_[4] = { '.', 'm', 'a', 't' };
static mxArray * _mxarray14_;

static mxChar _array17_[25] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'w',
                                'a', 'v', 'e', 'l', 'e', 't', ' ', 'f', 'i',
                                'l', 'e', ' ', ':', ' ', '%', 's' };
static mxArray * _mxarray16_;

static mxChar _array19_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;

static mxChar _array23_[2] = { 'D', 'f' };
static mxArray * _mxarray22_;

static mxChar _array25_[38] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'b', 'i', 'o', 'r', 't', 'h', 'o', 'g',
                                'o', 'n', 'a', 'l', ' ', 'w', 'a', 'v',
                                'e', 'l', 'e', 't', ' ', 'f', 'i', 'l',
                                'e', ' ', ':', ' ', '%', 's' };
static mxArray * _mxarray24_;

static mxChar _array27_[2] = { 'R', 'f' };
static mxArray * _mxarray26_;
static mxArray * _mxarray28_;
static mxArray * _mxarray29_;

static mxChar _array31_[28] = { 'T', 'h', 'e', ' ', 'w', 'a', 'v',
                                'e', 'l', 'e', 't', ' ', '%', 's',
                                ' ', 'i', 's', ' ', 'n', 'o', 't',
                                ' ', 'v', 'a', 'l', 'i', 'd', '!' };
static mxArray * _mxarray30_;
static mxArray * _mxarray32_;

static mxChar _array34_[1] = { 'd' };
static mxArray * _mxarray33_;

static mxChar _array36_[1] = { 'r' };
static mxArray * _mxarray35_;

static mxChar _array38_[1] = { 'l' };
static mxArray * _mxarray37_;

static mxChar _array40_[1] = { 'h' };
static mxArray * _mxarray39_;

static mxChar _array42_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray41_;

void InitializeModule_wfilters(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 5, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeString(3, _array7_);
    _mxarray8_ = mclInitializeString(6, _array9_);
    _mxarray10_ = mclInitializeString(4, _array11_);
    _mxarray12_ = mclInitializeString(4, _array13_);
    _mxarray14_ = mclInitializeString(4, _array15_);
    _mxarray16_ = mclInitializeString(25, _array17_);
    _mxarray18_ = mclInitializeString(3, _array19_);
    _mxarray20_ = mclInitializeDouble(1.0);
    _mxarray21_ = mclInitializeDouble(2.0);
    _mxarray22_ = mclInitializeString(2, _array23_);
    _mxarray24_ = mclInitializeString(38, _array25_);
    _mxarray26_ = mclInitializeString(2, _array27_);
    _mxarray28_ = mclInitializeDouble(5.0);
    _mxarray29_ = mclInitializeDouble(8.0);
    _mxarray30_ = mclInitializeString(28, _array31_);
    _mxarray32_ = mclInitializeDouble(4.0);
    _mxarray33_ = mclInitializeString(1, _array34_);
    _mxarray35_ = mclInitializeString(1, _array36_);
    _mxarray37_ = mclInitializeString(1, _array38_);
    _mxarray39_ = mclInitializeString(1, _array40_);
    _mxarray41_ = mclInitializeString(22, _array42_);
}

void TerminateModule_wfilters(void) {
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwfilters(int nargout_, mxArray * wname, mxArray * o);

_mexLocalFunctionTable _local_function_table_wfilters
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWfilters" contains the nargout interface for the
 * "wfilters" M-function from file "./src/wfilters.m" (lines 1-117). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWfilters(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * wname,
                       mxArray * o) {
    mlfEnterNewContext(0, 2, wname, o);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwfilters(nargout, wname, o);
    mlfRestorePreviousContext(0, 2, wname, o);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfWfilters" contains the normal interface for the "wfilters"
 * M-function from file "./src/wfilters.m" (lines 1-117). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfWfilters(mlfVarargoutList * varargout,
                      mxArray * wname,
                      mxArray * o) {
    int nargout = 0;
    mlfEnterNewContext(0, 2, wname, o);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwfilters(nargout, wname, o);
    mlfRestorePreviousContext(0, 2, wname, o);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVWfilters" contains the void interface for the "wfilters"
 * M-function from file "./src/wfilters.m" (lines 1-117). The void interface is
 * only produced if the M-function uses the special variable "nargout", and has
 * at least one output. The void interface function specifies zero output
 * arguments to the implementation version of the function, and in the event
 * that the implementation version still returns an output (which, in MATLAB,
 * would be assigned to the "ans" variable), it deallocates the output. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlfVWfilters(mxArray * wname, mxArray * o) {
    mxArray * varargout = NULL;
    mlfEnterNewContext(0, 2, wname, o);
    varargout = Mwfilters(0, wname, o);
    mlfRestorePreviousContext(0, 2, wname, o);
    mxDestroyArray(varargout);
}

/*
 * The function "mlxWfilters" contains the feval interface for the "wfilters"
 * M-function from file "./src/wfilters.m" (lines 1-117). The feval function
 * calls the implementation version of wfilters through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxWfilters(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wfilters Line: 1 Column:"
            " 1 The function \"wfilters\" was called with m"
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
    mplhs[0] = Mwfilters(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
}

/*
 * The function "Mwfilters" is the implementation version of the "wfilters"
 * M-function from file "./src/wfilters.m" (lines 1-117). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = wfilters(wname,o)
 */
static mxArray * Mwfilters(int nargout_, mxArray * wname, mxArray * o) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wfilters);
    int nargin_ = mclNargin(2, wname, o, NULL);
    mxArray * _mat = NULL;
    mxArray * varargout = NULL;
    mxArray * Hi_R2 = NULL;
    mxArray * Lo_D2 = NULL;
    mxArray * Lo_R1 = NULL;
    mxArray * Hi_D1 = NULL;
    mxArray * Df = NULL;
    mxArray * Rf = NULL;
    mxArray * Hi_R = NULL;
    mxArray * Lo_R = NULL;
    mxArray * Hi_D = NULL;
    mxArray * Lo_D = NULL;
    mxArray * F = NULL;
    mxArray * msg = NULL;
    mxArray * mat_f = NULL;
    mxArray * fname = NULL;
    mxArray * wtype = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    mclCopyArray(&o);
    /*
     * %WFILTERS Wavelet filters.
     * %   [LO_D,HI_D,LO_R,HI_R] = WFILTERS('wname') computes four
     * %   filters associated with the orthogonal or biorthogonal
     * %   wavelet named in the string 'wname'. 
     * %   The four output filters are:
     * %       LO_D, the decomposition low-pass filter
     * %       HI_D, the decomposition high-pass filter
     * %       LO_R, the reconstruction low-pass filter
     * %       HI_R, the reconstruction high-pass filter
     * %   Available wavelet names 'wname' are:
     * %   Daubechies: 'db1' or 'haar', 'db2', ... ,'db45'
     * %   Coiflets  : 'coif1', ... ,  'coif5'
     * %   Symlets   : 'sym2' , ... ,  'sym8', ... ,'sym45'
     * %   Discrete Meyer wavelet: 'dmey'
     * %   Biorthogonal:
     * %       'bior1.1', 'bior1.3' , 'bior1.5'
     * %       'bior2.2', 'bior2.4' , 'bior2.6', 'bior2.8'
     * %       'bior3.1', 'bior3.3' , 'bior3.5', 'bior3.7'
     * %       'bior3.9', 'bior4.4' , 'bior5.5', 'bior6.8'.
     * %   Reverse Biorthogonal: 
     * %       'rbio1.1', 'rbio1.3' , 'rbio1.5'
     * %       'rbio2.2', 'rbio2.4' , 'rbio2.6', 'rbio2.8'
     * %       'rbio3.1', 'rbio3.3' , 'rbio3.5', 'rbio3.7'
     * %       'rbio3.9', 'rbio4.4' , 'rbio5.5', 'rbio6.8'.
     * %
     * %   [F1,F2] = WFILTERS('wname','type') returns the following
     * %   filters: 
     * %   LO_D and HI_D if 'type' = 'd' (Decomposition filters)
     * %   LO_R and HI_R if 'type' = 'r' (Reconstruction filters)
     * %   LO_D and LO_R if 'type' = 'l' (Low-pass filters)
     * %   HI_D and HI_R if 'type' = 'h' (High-pass filters)
     * %
     * %   See also BIORFILT, ORTHFILT, WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 05-Jul-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * %fprintf(2,'Using modified wfilters.m\n');
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1 2],nargout,[0 1 2 4 8]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wfilters"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if errargt(mfilename,wname,'str') , error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wfilters"),
            mclVa(wname, "wname"),
            _mxarray6_,
            NULL))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * wname         = deblankl(wname);
     */
    mlfAssign(&wname, mlfDeblankl(mclVa(wname, "wname")));
    /*
     * [wtype,fname] = wavemngr('fields',wname,'type','file');
     */
    mlfNWavemngr(
      0,
      mlfVarargout(&wtype, &fname, NULL),
      _mxarray8_,
      mclVa(wname, "wname"),
      _mxarray10_,
      _mxarray12_,
      NULL);
    /*
     * 
     * mat_f         = findstr('.mat',fname);
     */
    mlfAssign(&mat_f, mlfFindstr(_mxarray14_, mclVv(fname, "fname")));
    /*
     * if mat_f
     */
    if (mlfTobool(mclVv(mat_f, "mat_f"))) {
        /*
         * try
         */
        mlfTry {
            /*
             * load(fname,'-mat');
             */
            mlfLoad(mclVv(fname, "fname"), "-mat", &_mat, NULL);
        /*
         * catch
         */
        } mlfCatch {
            /*
             * msg = sprintf('invalid wavelet file : %s', fname);
             */
            mlfAssign(
              &msg, mlfSprintf(NULL, _mxarray16_, mclVv(fname, "fname"), NULL));
            /*
             * errargt(mfilename,msg,'msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("wfilters"),
                mclVv(msg, "msg"),
                _mxarray18_,
                NULL));
            /*
             * error('*');
             */
            mlfError(_mxarray4_, NULL);
        /*
         * end
         */
        } mlfEndCatch
    /*
     * end
     */
    }
    /*
     * 
     * % tell the compiler we're going to need these wavelet functions
     * %#function biorwavf
     * %#function fbspwavf
     * %#function cgauwavf
     * %#function gauswavf
     * %#function cmorwavf
     * %#function rbiowavf
     * %#function coifwavf
     * %#function shanwavf
     * %#function dbwavf
     * %#function symwavf
     * 
     * if wtype==1                % orth. wavelet
     */
    if (mclEqBool(mclVv(wtype, "wtype"), _mxarray20_)) {
        /*
         * if ~isempty(mat_f)
         */
        if (mclNotBool(mlfIsempty(mclVv(mat_f, "mat_f")))) {
            /*
             * F = eval(wname);
             */
            mlfAssign(
              &F, mlfEval(mclValueVarargout(), mclVa(wname, "wname"), NULL));
        /*
         * else
         */
        } else {
            /*
             * F = feval(fname,wname);
             */
            mlfAssign(
              &F,
              mlfFeval(
                mclValueVarargout(),
                mclVv(fname, "fname"),
                mclVa(wname, "wname"),
                NULL));
        /*
         * end
         */
        }
        /*
         * [Lo_D,Hi_D,Lo_R,Hi_R] = orthfilt(F);
         */
        mlfAssign(
          &Lo_D, mlfNOrthfilt(4, &Hi_D, &Lo_R, &Hi_R, mclVv(F, "F"), NULL));
    /*
     * 
     * elseif wtype==2            % biorth. wavelet
     */
    } else if (mclEqBool(mclVv(wtype, "wtype"), _mxarray21_)) {
        /*
         * if isempty(mat_f)
         */
        if (mlfTobool(mlfIsempty(mclVv(mat_f, "mat_f")))) {
            /*
             * [Rf,Df] = feval(fname,wname);
             */
            mlfFeval(
              mlfVarargout(&Rf, &Df, NULL),
              mclVv(fname, "fname"),
              mclVa(wname, "wname"),
              NULL);
        /*
         * else
         */
        } else {
            /*
             * if exist('Rf')~=1 | exist('Df')~=1
             */
            mxArray * a_
              = mclInitialize(mclNe(mlfExist(_mxarray26_, NULL), _mxarray20_));
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_, mclNe(mlfExist(_mxarray22_, NULL), _mxarray20_)))) {
                mxDestroyArray(a_);
                /*
                 * msg = sprintf('invalid biorthogonal wavelet file : %s', fname);
                 */
                mlfAssign(
                  &msg,
                  mlfSprintf(NULL, _mxarray24_, mclVv(fname, "fname"), NULL));
                /*
                 * errargt(mfilename,msg,'msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("wfilters"),
                    mclVv(msg, "msg"),
                    _mxarray18_,
                    NULL));
                /*
                 * error('*');
                 */
                mlfError(_mxarray4_, NULL);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         * end
         */
        }
        /*
         * [Lo_D,Hi_D1,Lo_R1,Hi_R,Lo_D2,Hi_D,Lo_R,Hi_R2] = biorfilt(Df,Rf,1);
         */
        mlfNBiorfilt(
          0,
          mlfVarargout(
            &Lo_D, &Hi_D1, &Lo_R1, &Hi_R, &Lo_D2, &Hi_D, &Lo_R, &Hi_R2, NULL),
          mclVv(Df, "Df"),
          mclVv(Rf, "Rf"),
          _mxarray20_);
        /*
         * if (nargout>4) & (nargin<2)
         */
        if (nargout_ > 4 && nargin_ < 2) {
            /*
             * varargout(5:8) = {Lo_D2,Hi_D1,Lo_R1,Hi_R2};
             */
            mclArrayAssign1(
              &varargout,
              mlfCellhcat(
                mclVv(Lo_D2, "Lo_D2"),
                mclVv(Hi_D1, "Hi_D1"),
                mclVv(Lo_R1, "Lo_R1"),
                mclVv(Hi_R2, "Hi_R2"),
                NULL),
              mlfColon(_mxarray28_, _mxarray29_, NULL));
        /*
         * end
         */
        }
    /*
     * 
     * else
     */
    } else {
        /*
         * msg = sprintf('The wavelet %s is not valid!',wname);
         */
        mlfAssign(
          &msg, mlfSprintf(NULL, _mxarray30_, mclVa(wname, "wname"), NULL));
        /*
         * errargt(mfilename,msg,'msg');
         */
        mclAssignAns(
          &ans,
          mlfErrargt(
            mxCreateString("wfilters"), mclVv(msg, "msg"), _mxarray18_, NULL));
        /*
         * error('*');
         */
        mlfError(_mxarray4_, NULL);
        /*
         * return;
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * if nargin==1
     */
    if (nargin_ == 1) {
        /*
         * varargout(1:4) = {Lo_D,Hi_D,Lo_R,Hi_R};
         */
        mclArrayAssign1(
          &varargout,
          mlfCellhcat(
            mclVv(Lo_D, "Lo_D"),
            mclVv(Hi_D, "Hi_D"),
            mclVv(Lo_R, "Lo_R"),
            mclVv(Hi_R, "Hi_R"),
            NULL),
          mlfColon(_mxarray20_, _mxarray32_, NULL));
    /*
     * else
     */
    } else {
        /*
         * o = lower(o(1));
         */
        mlfAssign(&o, mlfLower(mclIntArrayRef1(mclVa(o, "o"), 1)));
        /*
         * switch o
         */
        {
            mxArray * v_ = mclInitialize(mclVa(o, "o"));
            if (mclSwitchCompare(v_, _mxarray33_)) {
                /*
                 * case 'd' , varargout = {Lo_D,Hi_D};
                 */
                mlfAssign(
                  &varargout,
                  mlfCellhcat(mclVv(Lo_D, "Lo_D"), mclVv(Hi_D, "Hi_D"), NULL));
            /*
             * case 'r' , varargout = {Lo_R,Hi_R};
             */
            } else if (mclSwitchCompare(v_, _mxarray35_)) {
                mlfAssign(
                  &varargout,
                  mlfCellhcat(mclVv(Lo_R, "Lo_R"), mclVv(Hi_R, "Hi_R"), NULL));
            /*
             * case 'l' , varargout = {Lo_D,Lo_R};
             */
            } else if (mclSwitchCompare(v_, _mxarray37_)) {
                mlfAssign(
                  &varargout,
                  mlfCellhcat(mclVv(Lo_D, "Lo_D"), mclVv(Lo_R, "Lo_R"), NULL));
            /*
             * case 'h' , varargout = {Hi_D,Hi_R};
             */
            } else if (mclSwitchCompare(v_, _mxarray39_)) {
                mlfAssign(
                  &varargout,
                  mlfCellhcat(mclVv(Hi_D, "Hi_D"), mclVv(Hi_R, "Hi_R"), NULL));
            /*
             * otherwise  
             */
            } else {
                /*
                 * errargt(mfilename,'invalid argument value','msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("wfilters"),
                    _mxarray41_,
                    _mxarray18_,
                    NULL));
                /*
                 * error('*');
                 */
                mlfError(_mxarray4_, NULL);
            /*
             * end
             */
            }
            mxDestroyArray(v_);
        }
    /*
     * end
     */
    }
    return_:
    mxDestroyArray(ans);
    mxDestroyArray(wtype);
    mxDestroyArray(fname);
    mxDestroyArray(mat_f);
    mxDestroyArray(msg);
    mxDestroyArray(F);
    mxDestroyArray(Lo_D);
    mxDestroyArray(Hi_D);
    mxDestroyArray(Lo_R);
    mxDestroyArray(Hi_R);
    mxDestroyArray(Rf);
    mxDestroyArray(Df);
    mxDestroyArray(Hi_D1);
    mxDestroyArray(Lo_R1);
    mxDestroyArray(Lo_D2);
    mxDestroyArray(Hi_R2);
    mxDestroyArray(o);
    mxDestroyArray(wname);
    mxDestroyArray(_mat);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
