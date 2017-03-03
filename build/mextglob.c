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
#include "mextglob.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "wmachdep.h"

extern mxArray * Def_WGlob_Struct;

static mxChar _array3_[3] = { 'i', 'n', 'i' };
static mxArray * _mxarray2_;

static mxChar _array5_[4] = { 'p', 'r', 'e', 'f' };
static mxArray * _mxarray4_;

static mxArray * _array1_[2] = { NULL /*_mxarray2_*/, NULL /*_mxarray4_*/ };
static mxArray * _mxarray0_;

static mxChar _array7_[16] = { 'r', 'e', 'a', 'd', '_', 'd', 'e', 'f',
                               'a', 'u', 'l', 't', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array12_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray11_;

static mxChar _array14_[3] = { 's', 'e', 't' };
static mxArray * _mxarray13_;

static mxChar _array16_[5] = { 'c', 'l', 'e', 'a', 'r' };
static mxArray * _mxarray15_;

static mxChar _array18_[5] = { 'i', 's', '_', 'o', 'n' };
static mxArray * _mxarray17_;

static mxArray * _array10_[4] = { NULL /*_mxarray11_*/, NULL /*_mxarray13_*/,
                                  NULL /*_mxarray15_*/, NULL /*_mxarray17_*/ };
static mxArray * _mxarray9_;

static mxChar _array20_[14] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n',
                                ' ', 'O', 'p', 't', 'i', 'o', 'n' };
static mxArray * _mxarray19_;

static mxChar _array22_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray21_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;

static mxChar _array26_[7] = { 'g', 'l', 'o', 'b', 'a', 'l', 's' };
static mxArray * _mxarray25_;

static double _array28_[9] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 666.0 };
static mxArray * _mxarray27_;

static mxChar _array30_[1] = { 'm' };
static mxArray * _mxarray29_;

static mxChar _array32_[13] = { 't', 'e', 's', 't', '_', 'p', 'r',
                                'e', 'f', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray31_;

static mxChar _array34_[6] = { 'c', 'o', 'l', 'o', 'r', 's' };
static mxArray * _mxarray33_;

static mxChar _array36_[8] = { 'I', 'n', 'i', 't', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray35_;

static mxChar _array38_[13] = { 'T', 'e', 'r', 'm', 'i', 'n', 'a',
                                'l', '_', 'P', 'r', 'o', 'p' };
static mxArray * _mxarray37_;

static mxChar _array40_[12] = { 'S', 'h', 'i', 'f', 't', 'T',
                                'o', 'p', '_', 'F', 'i', 'g' };
static mxArray * _mxarray39_;

static mxChar _array42_[14] = { 'D', 'e', 'f', '_', 'B', 't', 'n',
                                '_', 'H', 'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray41_;

static mxChar _array44_[13] = { 'D', 'e', 'f', '_', 'B', 't', 'n',
                                '_', 'W', 'i', 'd', 't', 'h' };
static mxArray * _mxarray43_;

static mxChar _array46_[14] = { 'D', 'e', 'f', '_', 'T', 'x', 't',
                                '_', 'H', 'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray45_;

static mxChar _array48_[13] = { 'P', 'o', 'p', '_', 'M', 'i', 'n',
                                '_', 'W', 'i', 'd', 't', 'h' };
static mxArray * _mxarray47_;

static mxChar _array50_[9] = { 'S', 'l', 'i', '_', 'Y', 'P', 'r', 'o', 'p' };
static mxArray * _mxarray49_;

static mxChar _array52_[9] = { 'X', '_', 'S', 'p', 'a', 'c', 'i', 'n', 'g' };
static mxArray * _mxarray51_;

static mxChar _array54_[9] = { 'Y', '_', 'S', 'p', 'a', 'c', 'i', 'n', 'g' };
static mxArray * _mxarray53_;

static mxChar _array56_[13] = { 'X', '_', 'G', 'r', 'a', 'p', 'h',
                                '_', 'R', 'a', 't', 'i', 'o' };
static mxArray * _mxarray55_;

static mxChar _array58_[15] = { 'D', 'e', 'f', '_', 'A', 'x', 'e', 'F',
                                'o', 'n', 't', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray57_;

static mxChar _array60_[15] = { 'D', 'e', 'f', '_', 'T', 'x', 't', 'F',
                                'o', 'n', 't', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray59_;

static mxChar _array62_[15] = { 'D', 'e', 'f', '_', 'U', 'i', 'c', 'F',
                                't', 'W', 'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray61_;

static mxChar _array64_[15] = { 'D', 'e', 'f', '_', 'A', 'x', 'e', 'F',
                                't', 'W', 'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray63_;

static mxChar _array66_[15] = { 'D', 'e', 'f', '_', 'T', 'x', 't', 'F',
                                't', 'W', 'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray65_;

static mxChar _array68_[12] = { 'L', 's', 't', '_', 'C', 'o',
                                'l', 'o', 'r', 'M', 'a', 'p' };
static mxArray * _mxarray67_;

static mxChar _array70_[14] = { 'D', 'e', 'f', '_', 'U', 'I', 'C',
                                'B', 'k', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray69_;

static mxChar _array72_[14] = { 'D', 'e', 'f', '_', 'T', 'x', 't',
                                'B', 'k', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray71_;

static mxChar _array74_[14] = { 'D', 'e', 'f', '_', 'E', 'd', 'i',
                                'B', 'k', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray73_;

static mxChar _array76_[14] = { 'D', 'e', 'f', '_', 'F', 'r', 'a',
                                'B', 'k', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray75_;

static mxChar _array78_[12] = { 'D', 'e', 'f', '_', 'F', 'i',
                                'g', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray77_;

static mxChar _array80_[12] = { 'D', 'e', 'f', '_', 'D', 'e',
                                'f', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray79_;

static mxChar _array82_[13] = { 'D', 'e', 'f', '_', 'A', 'x', 'e',
                                'X', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray81_;

static mxChar _array84_[13] = { 'D', 'e', 'f', '_', 'A', 'x', 'e',
                                'Y', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray83_;

static mxChar _array86_[13] = { 'D', 'e', 'f', '_', 'A', 'x', 'e',
                                'Z', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray85_;

static mxChar _array88_[12] = { 'D', 'e', 'f', '_', 'T', 'x',
                                't', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray87_;

static mxChar _array90_[1] = { '*' };
static mxArray * _mxarray89_;

void InitializeModule_mextglob(void) {
    _mxarray2_ = mclInitializeString(3, _array3_);
    _array1_[0] = _mxarray2_;
    _mxarray4_ = mclInitializeString(4, _array5_);
    _array1_[1] = _mxarray4_;
    _mxarray0_ = mclInitializeCellVector(1, 2, _array1_);
    _mxarray6_ = mclInitializeString(16, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray11_ = mclInitializeString(3, _array12_);
    _array10_[0] = _mxarray11_;
    _mxarray13_ = mclInitializeString(3, _array14_);
    _array10_[1] = _mxarray13_;
    _mxarray15_ = mclInitializeString(5, _array16_);
    _array10_[2] = _mxarray15_;
    _mxarray17_ = mclInitializeString(5, _array18_);
    _array10_[3] = _mxarray17_;
    _mxarray9_ = mclInitializeCellVector(1, 4, _array10_);
    _mxarray19_ = mclInitializeString(14, _array20_);
    _mxarray21_ = mclInitializeString(3, _array22_);
    _mxarray23_ = mclInitializeDouble(0.0);
    _mxarray24_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray25_ = mclInitializeString(7, _array26_);
    _mxarray27_ = mclInitializeDoubleVector(1, 9, _array28_);
    _mxarray29_ = mclInitializeString(1, _array30_);
    _mxarray31_ = mclInitializeString(13, _array32_);
    _mxarray33_ = mclInitializeString(6, _array34_);
    _mxarray35_ = mclInitializeString(8, _array36_);
    _mxarray37_ = mclInitializeString(13, _array38_);
    _mxarray39_ = mclInitializeString(12, _array40_);
    _mxarray41_ = mclInitializeString(14, _array42_);
    _mxarray43_ = mclInitializeString(13, _array44_);
    _mxarray45_ = mclInitializeString(14, _array46_);
    _mxarray47_ = mclInitializeString(13, _array48_);
    _mxarray49_ = mclInitializeString(9, _array50_);
    _mxarray51_ = mclInitializeString(9, _array52_);
    _mxarray53_ = mclInitializeString(9, _array54_);
    _mxarray55_ = mclInitializeString(13, _array56_);
    _mxarray57_ = mclInitializeString(15, _array58_);
    _mxarray59_ = mclInitializeString(15, _array60_);
    _mxarray61_ = mclInitializeString(15, _array62_);
    _mxarray63_ = mclInitializeString(15, _array64_);
    _mxarray65_ = mclInitializeString(15, _array66_);
    _mxarray67_ = mclInitializeString(12, _array68_);
    _mxarray69_ = mclInitializeString(14, _array70_);
    _mxarray71_ = mclInitializeString(14, _array72_);
    _mxarray73_ = mclInitializeString(14, _array74_);
    _mxarray75_ = mclInitializeString(14, _array76_);
    _mxarray77_ = mclInitializeString(12, _array78_);
    _mxarray79_ = mclInitializeString(12, _array80_);
    _mxarray81_ = mclInitializeString(13, _array82_);
    _mxarray83_ = mclInitializeString(13, _array84_);
    _mxarray85_ = mclInitializeString(13, _array86_);
    _mxarray87_ = mclInitializeString(12, _array88_);
    _mxarray89_ = mclInitializeString(1, _array90_);
}

void TerminateModule_mextglob(void) {
    mxDestroyArray(_mxarray89_);
    mxDestroyArray(_mxarray87_);
    mxDestroyArray(_mxarray85_);
    mxDestroyArray(_mxarray83_);
    mxDestroyArray(_mxarray81_);
    mxDestroyArray(_mxarray79_);
    mxDestroyArray(_mxarray77_);
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray0_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
}

static mxArray * Mmextglob(int nargout_, mxArray * option, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_mextglob
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNMextglob" contains the nargout interface for the
 * "mextglob" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/mextglob.m" (lines 1-118).
 * This interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNMextglob(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * option,
                       ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mmextglob(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfMextglob" contains the normal interface for the "mextglob"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/mextglob.m" (lines 1-118).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMextglob(mlfVarargoutList * varargout, mxArray * option, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mmextglob(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVMextglob" contains the void interface for the "mextglob"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/mextglob.m" (lines 1-118). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVMextglob(mxArray * option, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    varargout = Mmextglob(0, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxMextglob" contains the feval interface for the "mextglob"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/mextglob.m" (lines 1-118). The
 * feval function calls the implementation version of mextglob through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMextglob(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
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
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mmextglob(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mmextglob" is the implementation version of the "mextglob"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/mextglob.m" (lines 1-118). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = mextglob(option,varargin)
 */
static mxArray * Mmextglob(int nargout_, mxArray * option, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_mextglob);
    int nargin_ = mclNargin(-2, option, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * k = NULL;
    mxArray * nbin = NULL;
    mxArray * nbout = NULL;
    mxArray * prefMode = NULL;
    mxArray * allPrefMode = NULL;
    mxArray * colors = NULL;
    mxArray * sizes = NULL;
    mxArray * pref = NULL;
    mxArray * defaultMode = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&option);
    mclCopyArray(&varargin);
    /*
     * %MEXTGLOB Module of extended objects globals.
     * %   VARARGOUT = MEXTGLOB(OPTION,VARARGIN)
     * %
     * %   OPTION : 'ini' , 'pref' , 'clear' 
     * %            'get' , 'set'  , 'is_on'
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * global Def_WGlob_Struct
     * 
     * switch option
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case {'ini','pref'}
             * defaultMode = wmachdep('read_defaultMode');
             */
            mlfAssign(
              &defaultMode, mlfWmachdep(mclValueVarargout(), _mxarray6_, NULL));
            /*
             * if isempty(Def_WGlob_Struct)
             */
            if (mlfTobool(
                  mlfIsempty(mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct")))) {
                /*
                 * option = 'ini';
                 */
                mlfAssign(&option, _mxarray2_);
                /*
                 * if nargin==1 , pref = defaultMode; else , pref = varargin{1}; end
                 */
                if (nargin_ == 1) {
                    mlfAssign(&pref, mclVv(defaultMode, "defaultMode"));
                } else {
                    mlfAssign(
                      &pref,
                      mlfIndexRef(
                        mclVa(varargin, "varargin"), "{?}", _mxarray8_));
                }
            /*
             * elseif nargin==1
             */
            } else if (nargin_ == 1) {
                /*
                 * return
                 */
                mxDestroyArray(v_);
                goto return_;
            /*
             * else
             */
            } else {
                /*
                 * option = 'pref';
                 */
                mlfAssign(&option, _mxarray4_);
                /*
                 * pref   = varargin{1};
                 */
                mlfAssign(
                  &pref,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_));
                /*
                 * if isequal(Def_WGlob_Struct.initMode,pref) , return; end
                 */
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIsequal,
                        mlfIndexRef(
                          mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"),
                          ".initMode"),
                        mclVv(pref, "pref"),
                        NULL))) {
                    mxDestroyArray(v_);
                    goto return_;
                }
            /*
             * end
             */
            }
        /*
         * 
         * case {'get','set','clear','is_on'}
         */
        } else if (mclSwitchCompare(v_, _mxarray9_)) {
        /*
         * 
         * otherwise , errargt(mfilename,'Unknown Option','msg');
         */
        } else {
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("mextglob"), _mxarray19_, _mxarray21_, NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * switch option
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray2_)) {
            /*
             * case 'ini'
             * % Initialization.
             * Def_WGlob_Struct.initMode = 0;
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct), ".initMode", _mxarray23_);
            /*
             * Def_WGlob_Struct.sizes  = [];
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct), ".sizes", _mxarray24_);
            /*
             * Def_WGlob_Struct.colors = [];
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct), ".colors", _mxarray24_);
            /*
             * [sizes,colors] = wmachdep('globals');
             */
            mlfWmachdep(mlfVarargout(&sizes, &colors, NULL), _mxarray25_, NULL);
            /*
             * Def_WGlob_Struct.sizes  = sizes;
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct),
              ".sizes",
              mclVv(sizes, "sizes"));
            /*
             * Def_WGlob_Struct.colors = colors;
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct),
              ".colors",
              mclVv(colors, "colors"));
            /*
             * if isempty(pref) , pref = defaultMode; end
             */
            if (mlfTobool(mlfIsempty(mclVv(pref, "pref")))) {
                mlfAssign(&pref, mclVv(defaultMode, "defaultMode"));
            }
            /*
             * mextglob('pref',pref);
             */
            mclAssignAns(
              &ans,
              mlfNMextglob(
                0, mclAnsVarargout(), _mxarray4_, mclVv(pref, "pref"), NULL));
        /*
         * 
         * case 'pref'
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            /*
             * allPrefMode = [1:8 , 666];
             */
            mlfAssign(&allPrefMode, _mxarray27_);
            /*
             * prefMode = varargin{1};
             */
            mlfAssign(
              &prefMode,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_));
            /*
             * if     isempty(prefMode) , prefMode = defaultMode;
             */
            if (mlfTobool(mlfIsempty(mclVv(prefMode, "prefMode")))) {
                mlfAssign(&prefMode, mclVv(defaultMode, "defaultMode"));
            /*
             * elseif ischar(prefMode)   , prefMode = 'm';  % monochrome
             */
            } else if (mlfTobool(mlfIschar(mclVv(prefMode, "prefMode")))) {
                mlfAssign(&prefMode, _mxarray29_);
            /*
             * elseif isempty(find(prefMode==allPrefMode))
             */
            } else if (mlfTobool(
                         mlfIsempty(
                           mlfFind(
                             NULL,
                             NULL,
                             mclEq(
                               mclVv(prefMode, "prefMode"),
                               mclVv(allPrefMode, "allPrefMode")))))) {
                /*
                 * prefMode = wmachdep('test_prefMode',prefMode);
                 */
                mlfAssign(
                  &prefMode,
                  mlfWmachdep(
                    mclValueVarargout(),
                    _mxarray31_,
                    mclVv(prefMode, "prefMode"),
                    NULL));
                /*
                 * prefMode = defaultMode;
                 */
                mlfAssign(&prefMode, mclVv(defaultMode, "defaultMode"));
            /*
             * end
             */
            }
            /*
             * Def_WGlob_Struct.initMode = prefMode;
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct),
              ".initMode",
              mclVv(prefMode, "prefMode"));
            /*
             * colors = Def_WGlob_Struct.colors;
             */
            mlfAssign(
              &colors,
              mlfIndexRef(
                mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"), ".colors"));
            /*
             * colors = wmachdep('colors',prefMode,colors);
             */
            mlfAssign(
              &colors,
              mlfWmachdep(
                mclValueVarargout(),
                _mxarray33_,
                mclVv(prefMode, "prefMode"),
                mclVv(colors, "colors"),
                NULL));
            /*
             * Def_WGlob_Struct.colors = colors;
             */
            mlfIndexAssign(
              mclPrepareGlobal(&Def_WGlob_Struct),
              ".colors",
              mclVv(colors, "colors"));
        /*
         * 
         * case 'get'
         */
        } else if (mclSwitchCompare(v_, _mxarray11_)) {
            /*
             * if isempty(Def_WGlob_Struct) , mextglob('ini'); end
             */
            if (mlfTobool(
                  mlfIsempty(mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct")))) {
                mclAssignAns(
                  &ans, mlfNMextglob(0, mclAnsVarargout(), _mxarray2_, NULL));
            }
            /*
             * sizes  = Def_WGlob_Struct.sizes;
             */
            mlfAssign(
              &sizes,
              mlfIndexRef(
                mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"), ".sizes"));
            /*
             * colors = Def_WGlob_Struct.colors;
             */
            mlfAssign(
              &colors,
              mlfIndexRef(
                mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"), ".colors"));
            /*
             * nbout  = nargout;
             */
            mlfAssign(&nbout, mlfScalar(nargout_));
            /*
             * nbin   = nargin-1;
             */
            mlfAssign(&nbin, mlfScalar(nargin_ - 1));
            /*
             * for k=1:min([nbin,nbout])
             */
            {
                int v_0 = mclForIntStart(1);
                int e_
                  = mclForIntEnd(
                      mlfMin(
                        NULL,
                        mlfHorzcat(
                          mclVv(nbin, "nbin"), mclVv(nbout, "nbout"), NULL),
                        NULL,
                        NULL));
                if (v_0 > e_) {
                    mlfAssign(&k, _mxarray24_);
                } else {
                    /*
                     * switch varargin{k}
                     * case 'InitMode'        , varargout{k} = Def_WGlob_Struct.initMode;
                     * case 'Terminal_Prop'   , varargout{k} = sizes.termProp;
                     * case 'ShiftTop_Fig'    , varargout{k} = sizes.figShiftTop;
                     * case 'Def_Btn_Height'  , varargout{k} = sizes.btnHeight;
                     * case 'Def_Btn_Width'   , varargout{k} = sizes.btnWidth;
                     * case 'Def_Txt_Height'  , varargout{k} = sizes.txtHeight;
                     * case 'Pop_Min_Width'   , varargout{k} = sizes.popWidth;
                     * case 'Sli_YProp'       , varargout{k} = sizes.sliYProp;
                     * case 'X_Spacing'       , varargout{k} = sizes.xSpacing;
                     * case 'Y_Spacing'       , varargout{k} = sizes.ySpacing;
                     * case 'X_Graph_Ratio'   , varargout{k} = sizes.xGraRatio;
                     * case 'Def_AxeFontSize' , varargout{k} = sizes.axeFontSize;
                     * case 'Def_TxtFontSize' , varargout{k} = sizes.txtFontSize;
                     * case 'Def_UicFtWeight' , varargout{k} = sizes.uicFontWeight;
                     * case 'Def_AxeFtWeight' , varargout{k} = sizes.axeFontWeight;
                     * case 'Def_TxtFtWeight' , varargout{k} = sizes.txtFontWeight;
                     * case 'Lst_ColorMap'    , varargout{k} = colors.lstColorMap;
                     * case 'Def_UICBkColor'  , varargout{k} = colors.uicBkColor;
                     * case 'Def_TxtBkColor'  , varargout{k} = colors.txtBkColor;
                     * case 'Def_EdiBkColor'  , varargout{k} = colors.ediBkColor;
                     * case 'Def_FraBkColor'  , varargout{k} = colors.fraBkColor;
                     * case 'Def_FigColor'    , varargout{k} = colors.figColor;
                     * case 'Def_DefColor'    , varargout{k} = colors.defColor;
                     * case 'Def_AxeXColor'   , varargout{k} = colors.axeXColor;
                     * case 'Def_AxeYColor'   , varargout{k} = colors.axeYColor;
                     * case 'Def_AxeZColor'   , varargout{k} = colors.axeZColor;
                     * case 'Def_TxtColor'    , varargout{k} = colors.txtColor;
                     * end
                     * end
                     */
                    for (; ; ) {
                        mxArray * v_1
                          = mclInitialize(
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                mlfScalar(v_0)));
                        if (mclSwitchCompare(v_1, _mxarray35_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"),
                                ".initMode"));
                        } else if (mclSwitchCompare(v_1, _mxarray37_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".termProp"));
                        } else if (mclSwitchCompare(v_1, _mxarray39_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".figShiftTop"));
                        } else if (mclSwitchCompare(v_1, _mxarray41_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".btnHeight"));
                        } else if (mclSwitchCompare(v_1, _mxarray43_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".btnWidth"));
                        } else if (mclSwitchCompare(v_1, _mxarray45_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".txtHeight"));
                        } else if (mclSwitchCompare(v_1, _mxarray47_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".popWidth"));
                        } else if (mclSwitchCompare(v_1, _mxarray49_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".sliYProp"));
                        } else if (mclSwitchCompare(v_1, _mxarray51_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".xSpacing"));
                        } else if (mclSwitchCompare(v_1, _mxarray53_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".ySpacing"));
                        } else if (mclSwitchCompare(v_1, _mxarray55_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(mclVv(sizes, "sizes"), ".xGraRatio"));
                        } else if (mclSwitchCompare(v_1, _mxarray57_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".axeFontSize"));
                        } else if (mclSwitchCompare(v_1, _mxarray59_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".txtFontSize"));
                        } else if (mclSwitchCompare(v_1, _mxarray61_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".uicFontWeight"));
                        } else if (mclSwitchCompare(v_1, _mxarray63_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".axeFontWeight"));
                        } else if (mclSwitchCompare(v_1, _mxarray65_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(sizes, "sizes"), ".txtFontWeight"));
                        } else if (mclSwitchCompare(v_1, _mxarray67_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".lstColorMap"));
                        } else if (mclSwitchCompare(v_1, _mxarray69_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".uicBkColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray71_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".txtBkColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray73_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".ediBkColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray75_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".fraBkColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray77_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".figColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray79_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".defColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray81_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".axeXColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray83_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".axeYColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray85_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".axeZColor"));
                        } else if (mclSwitchCompare(v_1, _mxarray87_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_0),
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".txtColor"));
                        }
                        mxDestroyArray(v_1);
                        if (v_0 == e_) {
                            break;
                        }
                        ++v_0;
                    }
                    mlfAssign(&k, mlfScalar(v_0));
                }
            }
        /*
         * 
         * case 'set'
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * if isempty(Def_WGlob_Struct) , mextglob('ini'); end
             */
            if (mlfTobool(
                  mlfIsempty(mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct")))) {
                mclAssignAns(
                  &ans, mlfNMextglob(0, mclAnsVarargout(), _mxarray2_, NULL));
            }
            /*
             * nbin = nargin-1;
             */
            mlfAssign(&nbin, mlfScalar(nargin_ - 1));
            /*
             * for k=1:2:nbin
             */
            {
                int v_2 = mclForIntStart(1);
                int i_ = 2;
                int e_ = mclForIntIntEnd(v_2, i_, mclVv(nbin, "nbin"));
                if (e_ == mclIntMin()) {
                    mlfAssign(&k, _mxarray24_);
                } else {
                    /*
                     * switch varargin{k}
                     * case 'ShiftTop_Fig'
                     * Def_WGlob_Struct.sizes.figShiftTop = varargin{k+1};
                     * end
                     * end
                     */
                    for (; ; ) {
                        mxArray * v_3
                          = mclInitialize(
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                mlfScalar(v_2)));
                        if (mclSwitchCompare(v_3, _mxarray39_)) {
                            mlfIndexAssign(
                              mclPrepareGlobal(&Def_WGlob_Struct),
                              ".sizes.figShiftTop",
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                mlfScalar(v_2 + 1)));
                        }
                        mxDestroyArray(v_3);
                        if (v_2 == e_) {
                            break;
                        }
                        v_2 += i_;
                    }
                    mlfAssign(&k, mlfScalar(v_2));
                }
            }
        /*
         * 
         * case 'is_on'
         */
        } else if (mclSwitchCompare(v_, _mxarray17_)) {
            /*
             * varargout{1} = ~isempty(Def_WGlob_Struct);
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray8_,
              mclNot(mlfIsempty(mclVg(&Def_WGlob_Struct, "Def_WGlob_Struct"))));
        /*
         * 
         * case 'clear'
         */
        } else if (mclSwitchCompare(v_, _mxarray15_)) {
            /*
             * clear global Def_WGlob_Struct
             */
            mlfClear(mclPrepareGlobal(&Def_WGlob_Struct), NULL);
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'Unknown Option','msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("mextglob"), _mxarray19_, _mxarray21_, NULL));
            /*
             * error('*');
             */
            mlfError(_mxarray89_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mxDestroyArray(ans);
    mxDestroyArray(defaultMode);
    mxDestroyArray(pref);
    mxDestroyArray(sizes);
    mxDestroyArray(colors);
    mxDestroyArray(allPrefMode);
    mxDestroyArray(prefMode);
    mxDestroyArray(nbout);
    mxDestroyArray(nbin);
    mxDestroyArray(k);
    mxDestroyArray(varargin);
    mxDestroyArray(option);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
