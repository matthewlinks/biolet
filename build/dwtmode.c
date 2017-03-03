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
#include "dwtmode.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wtbxmngr.h"
#include "wwarndlg.h"

extern mxArray * DWT_Attribute;

static mxChar _array1_[6] = { 's', 't', 'a', 't', 'u', 's' };
static mxArray * _mxarray0_;

static mxChar _array3_[4] = { 'l', 'o', 'a', 'd' };
static mxArray * _mxarray2_;

static mxChar _array5_[11] = { 'd', 'w', 't', 'm', 'o', 'd',
                               'e', '.', 'd', 'e', 'f' };
static mxArray * _mxarray4_;

static mxChar _array7_[11] = { 'd', 'w', 't', 'm', 'o', 'd',
                               'e', '.', 'c', 'f', 'g' };
static mxArray * _mxarray6_;

static mxChar _array9_[7] = { 'e', 'x', 't', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray8_;

static mxChar _array11_[3] = { 's', 'y', 'm' };
static mxArray * _mxarray10_;

static mxChar _array13_[7] = { 's', 'h', 'i', 'f', 't', '1', 'D' };
static mxArray * _mxarray12_;
static mxArray * _mxarray14_;

static mxChar _array16_[7] = { 's', 'h', 'i', 'f', 't', '2', 'D' };
static mxArray * _mxarray15_;

static double _array18_[2] = { 0.0, 0.0 };
static mxArray * _mxarray17_;

static mxChar _array20_[4] = { 's', 'a', 'v', 'e' };
static mxArray * _mxarray19_;
static mxArray * _mxarray21_;

static mxChar _array23_[3] = { 's', 'p', '0' };
static mxArray * _mxarray22_;

static mxChar _array25_[3] = { 's', 'p', 'd' };
static mxArray * _mxarray24_;

static mxChar _array27_[3] = { 's', 'p', '1' };
static mxArray * _mxarray26_;

static mxChar _array29_[3] = { 'p', 'p', 'd' };
static mxArray * _mxarray28_;

static mxChar _array31_[3] = { 'p', 'e', 'r' };
static mxArray * _mxarray30_;

static mxChar _array33_[4] = { '-', 'a', 'l', 'l' };
static mxArray * _mxarray32_;

static mxChar _array35_[28] = { 'S', 'a', 'v', 'i', 'n', 'g', ' ',
                                'D', 'W', 'T', ' ', 'E', 'x', 't',
                                'e', 'n', 's', 'i', 'o', 'n', ' ',
                                'i', 'n', ' ', '%', 's', ' ', '!' };
static mxArray * _mxarray34_;

static mxChar _array37_[24] = { 'D', 'e', 'f', 'a', 'u', 'l', 't', ' ',
                                'D', 'W', 'T', ' ', 'M', 'o', 'd', 'e',
                                ' ', 'i', 's', ' ', ':', ' ', '%', 's' };
static mxArray * _mxarray36_;

static mxChar _array39_[32] = { 'S', 'a', 'v', 'e', ' ', 'D', 'W', 'T',
                                ' ', 'E', 'x', 't', 'e', 'n', 's', 'i',
                                'o', 'n', ' ', 'M', 'o', 'd', 'e', ' ',
                                'f', 'a', 'i', 'l', 'e', 'd', ' ', '!' };
static mxArray * _mxarray38_;
static mxArray * _mxarray40_;

static mxChar _array42_[28] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd',
                                ' ', 'D', 'W', 'T', ' ', 'E', 'x',
                                't', 'e', 'n', 's', 'i', 'o', 'n',
                                ' ', 'M', 'o', 'd', 'e', ' ', '!' };
static mxArray * _mxarray41_;

static mxChar _array44_[3] = { 'z', 'p', 'd' };
static mxArray * _mxarray43_;

static mxChar _array46_[8] = { 'U', 's', 'e', 'r', 'd', 'a', 't', 'a' };
static mxArray * _mxarray45_;

static mxChar _array48_[8] = { 't', 'e', 's', 't', 'W', 'T', 'B', 'X' };
static mxArray * _mxarray47_;
static mxArray * _mxarray49_;

static mxChar _array51_[23] = { 'S', 'a', 'v', 'e', ' ', 'D', 'W', 'T',
                                ' ', 'E', 'x', 't', 'e', 'n', 's', 'i',
                                'o', 'n', ' ', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray50_;

static mxChar _array53_[5] = { 'm', 'o', 'd', 'a', 'l' };
static mxArray * _mxarray52_;

static mxChar _array55_[1] = { '-' };
static mxArray * _mxarray54_;

static mxChar _array57_[3] = { 's', 'e', 't' };
static mxArray * _mxarray56_;
static mxArray * _mxarray58_;

static mxChar _array62_[4] = { 'm', 'o', 'd', 'e' };
static mxArray * _mxarray61_;

static mxArray * _array60_[2] = { NULL /*_mxarray8_*/, NULL /*_mxarray61_*/ };
static mxArray * _mxarray59_;

static mxChar _array64_[18] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'f',
                                'i', 'e', 'l', 'd', ' ', 'n', 'a', 'm', 'e' };
static mxArray * _mxarray63_;

static mxChar _array66_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray65_;

static mxChar _array68_[1] = { '*' };
static mxArray * _mxarray67_;

static mxChar _array70_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray69_;

static mxChar _array72_[3] = { 'i', 'n', 'i' };
static mxArray * _mxarray71_;

static mxChar _array74_[5] = { 'c', 'l', 'e', 'a', 'r' };
static mxArray * _mxarray73_;

static mxArray * _array76_[8] = { NULL /*_mxarray43_*/, NULL /*_mxarray10_*/,
                                  NULL /*_mxarray22_*/, NULL /*_mxarray24_*/,
                                  NULL /*_mxarray26_*/, NULL /*_mxarray28_*/,
                                  NULL /*_mxarray30_*/, NULL /*_mxarray0_*/ };
static mxArray * _mxarray75_;

static double _array78_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray77_;

static double _array80_[2] = { 0.0, 1.0 };
static mxArray * _mxarray79_;

static mxChar _array82_[22] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n', ' ',
                                'E', 'x', 't', 'e', 'n', 's', 'i', 'o',
                                'n', ' ', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray81_;

static mxChar _array84_[1] = { ' ' };
static mxArray * _mxarray83_;

static mxChar _array86_[40] = { '!', '!', '!', '!', '!', '!', '!', '!',
                                '!', '!', '!', '!', '!', '!', '!', '!',
                                '!', '!', '!', '!', '!', '!', '!', '!',
                                '!', '!', '!', '!', '!', '!', '!', '!',
                                '!', '!', '!', '!', '!', '!', '!', '!' };
static mxArray * _mxarray85_;

static mxChar _array88_[40] = { '!', ' ', ' ', 'W', 'A', 'R', 'N', 'I',
                                'N', 'G', ':', ' ', 'C', 'h', 'a', 'n',
                                'g', 'e', ' ', 'D', 'W', 'T', ' ', 'E',
                                'x', 't', 'e', 'n', 's', 'i', 'o', 'n',
                                ' ', 'M', 'o', 'd', 'e', ' ', ' ', '!' };
static mxArray * _mxarray87_;

static mxChar _array90_[20] = { 'D', 'W', 'T', ' ', 'E', 'x', 't',
                                'e', 'n', 's', 'i', 'o', 'n', ' ',
                                'M', 'o', 'd', 'e', ':', ' ' };
static mxArray * _mxarray89_;

static mxChar _array92_[12] = { 'Z', 'e', 'r', 'o', ' ', 'P',
                                'a', 'd', 'd', 'i', 'n', 'g' };
static mxArray * _mxarray91_;

static mxChar _array94_[14] = { 'S', 'y', 'm', 'm', 'e', 't', 'r',
                                'i', 'z', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray93_;

static mxChar _array96_[25] = { 'S', 'm', 'o', 'o', 't', 'h', ' ', 'P', 'a',
                                'd', 'd', 'i', 'n', 'g', ' ', 'o', 'f', ' ',
                                'o', 'r', 'd', 'e', 'r', ' ', '0' };
static mxArray * _mxarray95_;

static mxArray * _array98_[2] = { NULL /*_mxarray24_*/, NULL /*_mxarray26_*/ };
static mxArray * _mxarray97_;

static mxChar _array100_[25] = { 'S', 'm', 'o', 'o', 't', 'h', ' ', 'P', 'a',
                                 'd', 'd', 'i', 'n', 'g', ' ', 'o', 'f', ' ',
                                 'o', 'r', 'd', 'e', 'r', ' ', '1' };
static mxArray * _mxarray99_;

static mxChar _array102_[18] = { 'P', 'e', 'r', 'i', 'o', 'd', 'i', 'z', 'e',
                                 'd', ' ', 'P', 'a', 'd', 'd', 'i', 'n', 'g' };
static mxArray * _mxarray101_;

static mxChar _array104_[13] = { 'P', 'e', 'r', 'i', 'o', 'd', 'i',
                                 'z', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray103_;

static mxChar _array106_[2] = { ' ', ' ' };
static mxArray * _mxarray105_;

void InitializeModule_dwtmode(void) {
    _mxarray0_ = mclInitializeString(6, _array1_);
    _mxarray2_ = mclInitializeString(4, _array3_);
    _mxarray4_ = mclInitializeString(11, _array5_);
    _mxarray6_ = mclInitializeString(11, _array7_);
    _mxarray8_ = mclInitializeString(7, _array9_);
    _mxarray10_ = mclInitializeString(3, _array11_);
    _mxarray12_ = mclInitializeString(7, _array13_);
    _mxarray14_ = mclInitializeDouble(0.0);
    _mxarray15_ = mclInitializeString(7, _array16_);
    _mxarray17_ = mclInitializeDoubleVector(1, 2, _array18_);
    _mxarray19_ = mclInitializeString(4, _array20_);
    _mxarray21_ = mclInitializeDouble(1.0);
    _mxarray22_ = mclInitializeString(3, _array23_);
    _mxarray24_ = mclInitializeString(3, _array25_);
    _mxarray26_ = mclInitializeString(3, _array27_);
    _mxarray28_ = mclInitializeString(3, _array29_);
    _mxarray30_ = mclInitializeString(3, _array31_);
    _mxarray32_ = mclInitializeString(4, _array33_);
    _mxarray34_ = mclInitializeString(28, _array35_);
    _mxarray36_ = mclInitializeString(24, _array37_);
    _mxarray38_ = mclInitializeString(32, _array39_);
    _mxarray40_ = mclInitializeDouble(2.0);
    _mxarray41_ = mclInitializeString(28, _array42_);
    _mxarray43_ = mclInitializeString(3, _array44_);
    _mxarray45_ = mclInitializeString(8, _array46_);
    _mxarray47_ = mclInitializeString(8, _array48_);
    _mxarray49_ = mclInitializeDouble(3.0);
    _mxarray50_ = mclInitializeString(23, _array51_);
    _mxarray52_ = mclInitializeString(5, _array53_);
    _mxarray54_ = mclInitializeString(1, _array55_);
    _mxarray56_ = mclInitializeString(3, _array57_);
    _mxarray58_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _array60_[0] = _mxarray8_;
    _mxarray61_ = mclInitializeString(4, _array62_);
    _array60_[1] = _mxarray61_;
    _mxarray59_ = mclInitializeCellVector(1, 2, _array60_);
    _mxarray63_ = mclInitializeString(18, _array64_);
    _mxarray65_ = mclInitializeString(3, _array66_);
    _mxarray67_ = mclInitializeString(1, _array68_);
    _mxarray69_ = mclInitializeString(3, _array70_);
    _mxarray71_ = mclInitializeString(3, _array72_);
    _mxarray73_ = mclInitializeString(5, _array74_);
    _array76_[0] = _mxarray43_;
    _array76_[1] = _mxarray10_;
    _array76_[2] = _mxarray22_;
    _array76_[3] = _mxarray24_;
    _array76_[4] = _mxarray26_;
    _array76_[5] = _mxarray28_;
    _array76_[6] = _mxarray30_;
    _array76_[7] = _mxarray0_;
    _mxarray75_ = mclInitializeCellVector(1, 8, _array76_);
    _mxarray77_ = mclInitializeDoubleVector(1, 3, _array78_);
    _mxarray79_ = mclInitializeDoubleVector(1, 2, _array80_);
    _mxarray81_ = mclInitializeString(22, _array82_);
    _mxarray83_ = mclInitializeString(1, _array84_);
    _mxarray85_ = mclInitializeString(40, _array86_);
    _mxarray87_ = mclInitializeString(40, _array88_);
    _mxarray89_ = mclInitializeString(20, _array90_);
    _mxarray91_ = mclInitializeString(12, _array92_);
    _mxarray93_ = mclInitializeString(14, _array94_);
    _mxarray95_ = mclInitializeString(25, _array96_);
    _array98_[0] = _mxarray24_;
    _array98_[1] = _mxarray26_;
    _mxarray97_ = mclInitializeCellVector(1, 2, _array98_);
    _mxarray99_ = mclInitializeString(25, _array100_);
    _mxarray101_ = mclInitializeString(18, _array102_);
    _mxarray103_ = mclInitializeString(13, _array104_);
    _mxarray105_ = mclInitializeString(2, _array106_);
}

void TerminateModule_dwtmode(void) {
    mxDestroyArray(_mxarray105_);
    mxDestroyArray(_mxarray103_);
    mxDestroyArray(_mxarray101_);
    mxDestroyArray(_mxarray99_);
    mxDestroyArray(_mxarray97_);
    mxDestroyArray(_mxarray95_);
    mxDestroyArray(_mxarray93_);
    mxDestroyArray(_mxarray91_);
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
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
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
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static void mlfDwtmode_dispMessage(mxArray * num, mxArray * mode);
static void mlxDwtmode_dispMessage(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * Mdwtmode(int nargout_, mxArray * option, mxArray * varargin);
static void Mdwtmode_dispMessage(mxArray * num, mxArray * mode);

static mexFunctionTableEntry local_function_table_[1]
  = { { "dispMessage", mlxDwtmode_dispMessage, 2, 0, NULL } };

_mexLocalFunctionTable _local_function_table_dwtmode
  = { 1, local_function_table_ };

/*
 * The function "mlfNDwtmode" contains the nargout interface for the "dwtmode"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 1-169). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNDwtmode(int nargout,
                      mlfVarargoutList * varargout,
                      mxArray * option,
                      ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mdwtmode(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfDwtmode" contains the normal interface for the "dwtmode"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 1-169). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfDwtmode(mlfVarargoutList * varargout, mxArray * option, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mdwtmode(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVDwtmode" contains the void interface for the "dwtmode"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 1-169). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVDwtmode(mxArray * option, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    varargout = Mdwtmode(0, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxDwtmode" contains the feval interface for the "dwtmode"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 1-169). The
 * feval function calls the implementation version of dwtmode through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDwtmode(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
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
    mplhs[0] = Mdwtmode(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfDwtmode_dispMessage" contains the normal interface for the
 * "dwtmode/dispMessage" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 169-192).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfDwtmode_dispMessage(mxArray * num, mxArray * mode) {
    mlfEnterNewContext(0, 2, num, mode);
    Mdwtmode_dispMessage(num, mode);
    mlfRestorePreviousContext(0, 2, num, mode);
}

/*
 * The function "mlxDwtmode_dispMessage" contains the feval interface for the
 * "dwtmode/dispMessage" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 169-192).
 * The feval function calls the implementation version of dwtmode/dispMessage
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxDwtmode_dispMessage(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[2];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dwtmode/dispMessage Line: 169 Co"
            "lumn: 1 The function \"dwtmode/dispMessage\" was calle"
            "d with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dwtmode/dispMessage Line: 169 Co"
            "lumn: 1 The function \"dwtmode/dispMessage\" was calle"
            "d with more than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    Mdwtmode_dispMessage(mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
}

/*
 * The function "Mdwtmode" is the implementation version of the "dwtmode"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 1-169). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = dwtmode(option,varargin)
 */
static mxArray * Mdwtmode(int nargout_, mxArray * option, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dwtmode);
    int nargin_ = mclNargin(-2, option, varargin, NULL);
    mxArray * _mat = NULL;
    mxArray * varargout = NULL;
    mxArray * numMsg = NULL;
    mxArray * k = NULL;
    mxArray * sep = NULL;
    mxArray * errordlg = NULL;
    mxArray * msgval = NULL;
    mxArray * msg = NULL;
    mxArray * s = NULL;
    mxArray * namefileSave = NULL;
    mxArray * extM = NULL;
    mxArray * dwt_default_Attrb = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&option);
    mclCopyArray(&varargin);
    /*
     * %DWTMODE Discrete wavelet transform extension mode.
     * %   DWTMODE sets the signal or image extension mode for
     * %   discrete wavelet and wavelet packet transforms.
     * %   The extension modes represent different ways of handling
     * %   the problem of border distortion in the analysis.
     * %
     * %   DWTMODE or DWTMODE('status') display the current mode.
     * %   ST = DWTMODE or ST = DWTMODE('status') display and
     * %   return the current mode.
     * %   ST = DWTMODE('status','nodisp') returns the current mode
     * %   and does not display the text.
     * %
     * %   DWTMODE('sym') sets the DWT mode to symmetric-padding
     * %      (boundary value symmetric replication - default mode).
     * %
     * %   DWTMODE('zpd') sets the DWT mode to zero-padding
     * %
     * %   DWTMODE('spd') or DWTMODE('sp1') sets the DWT mode 
     * %      to smooth-padding of order 1 (first derivative
     * %      interpolation at the edges).
     * %
     * %   DWTMODE('sp0') sets the DWT mode to smooth-padding
     * %      of order 0 (constant extension at the edges). 
     * %
     * %   DWTMODE('ppd') sets the DWT mode to periodic-padding
     * %      (periodic extension at the edges).
     * %
     * %   The DWT associated with these five modes is slightly  
     * %   redundant. But IDWT ensures a perfect reconstruction for any
     * %   of the five previous modes whatever is the extension mode 
     * %   used for DWT.
     * %
     * %   DWTMODE('per') sets the DWT mode to periodization.
     * %        
     * %   This mode produces the smallest length wavelet decomposition.
     * %   But, the extension mode used for IDWT must be the same to
     * %   ensure a perfect reconstruction.
     * %   Using this mode, DWT and DWT2 produce the same results as 
     * %   the obsolete functions DWTPER and DWTPER2, respectively.
     * %
     * %   All functions and GUI tools that use the DWT (1-D & 2-D) or
     * %   Wavelet Packet (1-D & 2-D) use the specified DWT extension mode.
     * %
     * %   DWTMODE updates a global variable allowing the use of these
     * %   six signal extensions. The extension mode should only 
     * %   be changed using this function. Avoid changing the global 
     * %   variable directly.
     * %
     * %   --------------------------------------------------------------
     * %   The default mode is loaded from the file DWTMODE.DEF
     * %   if it exists. If not, the file DWTMODE.CFG 
     * %   (in the "toolbox/wavelet/wavelet" directory) is used.
     * %   DWTMODE('save',mode) saves "mode" as new default mode
     * %   in the file DWTMODE.DEF (all the files named DWTMODE.DEF 
     * %   are deleted before saving).
     * %   DWTMODE('save') is equivalent to DWTMODE('save',currentMode).
     * %   --------------------------------------------------------------
     * %
     * %   See also DWT, DWT2 ,IDWT, IDWT2, WEXTEND.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Internal options: 'load', 'save', 'get', 'set', 'clear'
     * 
     * global DWT_Attribute
     * if nargin==0 , option = 'status'; else , option = lower(option); end
     */
    if (nargin_ == 0) {
        mlfAssign(&option, _mxarray0_);
    } else {
        mlfAssign(&option, mlfLower(mclVa(option, "option")));
    }
    /*
     * 
     * switch option
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray2_)) {
            /*
             * case 'load'       
             * try
             */
            mlfTry {
                /*
                 * load('dwtmode.def','-mat');
                 */
                mlfLoad(_mxarray4_, "-mat", &_mat, NULL);
                /*
                 * DWT_Attribute = dwt_default_Attrb;
                 */
                mlfAssign(
                  mclPrepareGlobal(&DWT_Attribute),
                  mclVv(dwt_default_Attrb, "dwt_default_Attrb"));
            /*
             * catch
             */
            } mlfCatch {
                /*
                 * try
                 */
                mlfTry {
                    /*
                     * load('dwtmode.cfg','-mat');
                     */
                    mlfLoad(_mxarray6_, "-mat", &_mat, NULL);
                    /*
                     * DWT_Attribute = dwt_default_Attrb;
                     */
                    mlfAssign(
                      mclPrepareGlobal(&DWT_Attribute),
                      mclVv(dwt_default_Attrb, "dwt_default_Attrb"));
                /*
                 * catch
                 */
                } mlfCatch {
                    /*
                     * DWT_Attribute = ...
                     */
                    mlfAssign(
                      mclPrepareGlobal(&DWT_Attribute),
                      mlfStruct(
                        _mxarray8_,
                        _mxarray10_,
                        _mxarray12_,
                        _mxarray14_,
                        _mxarray15_,
                        _mxarray17_,
                        NULL));
                /*
                 * struct('extMode','sym', 'shift1D',0,'shift2D',[0,0]);
                 * end
                 */
                } mlfEndCatch
            /*
             * end
             */
            } mlfEndCatch
        /*
         * 
         * case 'save'
         */
        } else if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * if nargin<2
             */
            if (nargin_ < 2) {
                /*
                 * if ~isempty(DWT_Attribute)
                 */
                if (mclNotBool(
                      mlfIsempty(mclVg(&DWT_Attribute, "DWT_Attribute")))) {
                    /*
                     * extM = DWT_Attribute.extMode;
                     */
                    mlfAssign(
                      &extM,
                      mlfIndexRef(
                        mclVg(&DWT_Attribute, "DWT_Attribute"), ".extMode"));
                /*
                 * else
                 */
                } else {
                    /*
                     * dwtmode('load');
                     */
                    mclAssignAns(
                      &ans,
                      mlfNDwtmode(0, mclAnsVarargout(), _mxarray2_, NULL));
                    /*
                     * extM = DWT_Attribute.extMode;
                     */
                    mlfAssign(
                      &extM,
                      mlfIndexRef(
                        mclVg(&DWT_Attribute, "DWT_Attribute"), ".extMode"));
                /*
                 * end
                 */
                }
            /*
             * else
             */
            } else {
                /*
                 * extM = varargin{1};
                 */
                mlfAssign(
                  &extM,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray21_));
            /*
             * end
             */
            }
            /*
             * if isequal(extM,'zpd') | isequal(extM,'sym') | ...
             */
            {
                mxArray * a_
                  = mclInitialize(
                      mlfIsequal(mclVv(extM, "extM"), _mxarray43_, NULL));
                if (mlfTobool(a_)) {
                    mlfAssign(&a_, mlfScalar(1));
                } else {
                    mlfAssign(
                      &a_,
                      mclOr(
                        a_,
                        mlfIsequal(mclVv(extM, "extM"), _mxarray10_, NULL)));
                }
                if (mlfTobool(a_)) {
                    /*
                     * isequal(extM,'sp0') | isequal(extM,'spd') | ...
                     */
                    mlfAssign(&a_, mlfScalar(1));
                } else {
                    mlfAssign(
                      &a_,
                      mclOr(
                        a_,
                        mlfIsequal(mclVv(extM, "extM"), _mxarray22_, NULL)));
                }
                if (mlfTobool(a_)) {
                    mlfAssign(&a_, mlfScalar(1));
                } else {
                    mlfAssign(
                      &a_,
                      mclOr(
                        a_,
                        mlfIsequal(mclVv(extM, "extM"), _mxarray24_, NULL)));
                }
                if (mlfTobool(a_)) {
                    /*
                     * isequal(extM,'sp1') | isequal(extM,'ppd') | isequal(extM,'per')
                     */
                    mlfAssign(&a_, mlfScalar(1));
                } else {
                    mlfAssign(
                      &a_,
                      mclOr(
                        a_,
                        mlfIsequal(mclVv(extM, "extM"), _mxarray26_, NULL)));
                }
                if (mlfTobool(a_)) {
                    mlfAssign(&a_, mlfScalar(1));
                } else {
                    mlfAssign(
                      &a_,
                      mclOr(
                        a_,
                        mlfIsequal(mclVv(extM, "extM"), _mxarray28_, NULL)));
                }
                if (mlfTobool(a_)
                    || mlfTobool(
                         mclOr(
                           a_,
                           mlfIsequal(
                             mclVv(extM, "extM"), _mxarray30_, NULL)))) {
                    mxDestroyArray(a_);
                    /*
                     * 
                     * try
                     */
                    mlfTry {
                        /*
                         * dwt_default_Attrb = ...
                         */
                        mlfAssign(
                          &dwt_default_Attrb,
                          mlfStruct(
                            _mxarray8_,
                            mclVv(extM, "extM"),
                            _mxarray12_,
                            _mxarray14_,
                            _mxarray15_,
                            _mxarray17_,
                            NULL));
                        /*
                         * struct('extMode',extM, 'shift1D',0,'shift2D',[0,0]);
                         * namefileSave = 'dwtmode.def';
                         */
                        mlfAssign(&namefileSave, _mxarray4_);
                        /*
                         * s = which(namefileSave,'-all');
                         */
                        mlfAssign(
                          &s,
                          mlfWhich(
                            mclVv(namefileSave, "namefileSave"),
                            _mxarray32_,
                            NULL));
                        /*
                         * try , delete(s{:}); end
                         */
                        mlfTry {
                            mlfDelete(
                              mlfIndexRef(
                                mclVv(s, "s"), "{?}", mlfCreateColonIndex()),
                              NULL);
                        } mlfCatch {
                        } mlfEndCatch
                        /*
                         * save(namefileSave,'dwt_default_Attrb');
                         */
                        mlfSave(
                          mclVv(namefileSave, "namefileSave"),
                          "w",
                          "dwt_default_Attrb",
                          dwt_default_Attrb,
                          NULL);
                        /*
                         * msg = strvcat(sprintf('Saving DWT Extension in %s !', namefileSave),...
                         */
                        mlfAssign(
                          &msg,
                          mlfStrvcat(
                            mlfSprintf(
                              NULL,
                              _mxarray34_,
                              mclVv(namefileSave, "namefileSave"),
                              NULL),
                            mlfSprintf(
                              NULL, _mxarray36_, mclVv(extM, "extM"), NULL),
                            NULL));
                        /*
                         * sprintf('Default DWT Mode is : %s', extM));
                         * msgval = 1;
                         */
                        mlfAssign(&msgval, _mxarray21_);
                    /*
                     * catch
                     */
                    } mlfCatch {
                        /*
                         * msg = ['Save DWT Extension Mode failed !'];
                         */
                        mlfAssign(&msg, _mxarray38_);
                        /*
                         * msgval = 2;
                         */
                        mlfAssign(&msgval, _mxarray40_);
                    /*
                     * end
                     */
                    } mlfEndCatch
                /*
                 * else
                 */
                } else {
                    mxDestroyArray(a_);
                    /*
                     * msg = ['Invalid DWT Extension Mode !'];
                     */
                    mlfAssign(&msg, _mxarray41_);
                    /*
                     * msgval = 2;
                     */
                    mlfAssign(&msgval, _mxarray40_);
                }
            /*
             * end
             */
            }
            /*
             * if isequal(get(0,'Userdata'),'testWTBX') , msgval = 3; end
             */
            if (mlfTobool(
                  mlfIsequal(
                    mlfNGet(1, _mxarray14_, _mxarray45_, NULL),
                    _mxarray47_, NULL))) {
                mlfAssign(&msgval, _mxarray49_);
            }
            /*
             * switch msgval
             */
            {
                mxArray * v_0 = mclInitialize(mclVv(msgval, "msgval"));
                if (mclSwitchCompare(v_0, _mxarray21_)) {
                    /*
                     * case 1 , wwarndlg(msg,'Save DWT Extension Mode','modal');
                     */
                    mclAssignAns(
                      &ans,
                      mlfNWwarndlg(
                        0,
                        mclAnsVarargout(),
                        mclVv(msg, "msg"),
                        _mxarray50_,
                        _mxarray52_));
                /*
                 * case 2 , errordlg(msg,'Save DWT Extension Mode','modal');
                 */
                } else if (mclSwitchCompare(v_0, _mxarray40_)) {
                    mclAssignAns(
                      &ans,
                      mlfIndexRef(
                        mclVv(errordlg, "errordlg"),
                        "(?,?,?)",
                        mclVv(msg, "msg"),
                        _mxarray50_,
                        _mxarray52_));
                /*
                 * case 3 , sep = repmat('-',1,size(msg,2)+2);
                 */
                } else if (mclSwitchCompare(v_0, _mxarray49_)) {
                    mlfAssign(
                      &sep,
                      mlfRepmat(
                        _mxarray54_,
                        _mxarray21_,
                        mclPlus(
                          mlfSize(
                            mclValueVarargout(),
                            mclVv(msg, "msg"),
                            _mxarray40_),
                          _mxarray40_)));
                    /*
                     * disp(strvcat(sep,msg,sep));
                     */
                    mlfDisp(
                      mlfStrvcat(
                        mclVv(sep, "sep"),
                        mclVv(msg, "msg"),
                        mclVv(sep, "sep"),
                        NULL));
                /*
                 * end
                 */
                }
                mxDestroyArray(v_0);
            }
        /*
         * 
         * case 'set'
         */
        } else if (mclSwitchCompare(v_, _mxarray56_)) {
            /*
             * for k = 1:2:nargin-1
             */
            int v_1 = mclForIntStart(1);
            int i_ = 2;
            int e_ = mclForIntIntEnd(v_1, i_, mlfScalar(nargin_ - 1));
            if (e_ == mclIntMin()) {
                mlfAssign(&k, _mxarray58_);
            } else {
                /*
                 * switch varargin{k}
                 * case {'extMode','mode'} , DWT_Attribute.extMode = varargin{k+1};
                 * case 'shift1D' , DWT_Attribute.shift1D = mod(varargin{k+1},2);
                 * case 'shift2D' , DWT_Attribute.shift2D = mod(varargin{k+1},2);
                 * otherwise ,
                 * errargt(mfilename,'Invalid field name','msg');
                 * error('*');
                 * end
                 * end
                 */
                for (; ; ) {
                    mxArray * v_2
                      = mclInitialize(
                          mlfIndexRef(
                            mclVa(varargin, "varargin"),
                            "{?}",
                            mlfScalar(v_1)));
                    if (mclSwitchCompare(v_2, _mxarray59_)) {
                        mlfIndexAssign(
                          mclPrepareGlobal(&DWT_Attribute),
                          ".extMode",
                          mlfIndexRef(
                            mclVa(varargin, "varargin"),
                            "{?}",
                            mlfScalar(v_1 + 1)));
                    } else if (mclSwitchCompare(v_2, _mxarray12_)) {
                        mlfIndexAssign(
                          mclPrepareGlobal(&DWT_Attribute),
                          ".shift1D",
                          mclFeval(
                            mclValueVarargout(),
                            mlxMod,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_1 + 1)),
                            _mxarray40_,
                            NULL));
                    } else if (mclSwitchCompare(v_2, _mxarray15_)) {
                        mlfIndexAssign(
                          mclPrepareGlobal(&DWT_Attribute),
                          ".shift2D",
                          mclFeval(
                            mclValueVarargout(),
                            mlxMod,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_1 + 1)),
                            _mxarray40_,
                            NULL));
                    } else {
                        mclAssignAns(
                          &ans,
                          mlfErrargt(
                            mxCreateString("dwtmode"),
                            _mxarray63_,
                            _mxarray65_,
                            NULL));
                        mlfError(_mxarray67_, NULL);
                    }
                    mxDestroyArray(v_2);
                    if (v_1 == e_) {
                        break;
                    }
                    v_1 += i_;
                }
                mlfAssign(&k, mlfScalar(v_1));
            }
        /*
         * 
         * case 'get'
         */
        } else if (mclSwitchCompare(v_, _mxarray69_)) {
            /*
             * if isempty(DWT_Attribute) , wtbxmngr('ini'); end 
             */
            if (mlfTobool(mlfIsempty(mclVg(&DWT_Attribute, "DWT_Attribute")))) {
                mclAssignAns(
                  &ans, mlfNWtbxmngr(0, mclAnsVarargout(), _mxarray71_, NULL));
            }
            /*
             * varargout{1} = DWT_Attribute;
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray21_,
              mclVg(&DWT_Attribute, "DWT_Attribute"));
        /*
         * 
         * case 'clear'
         */
        } else if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * clear global DWT_Attribute
             */
            mlfClear(mclPrepareGlobal(&DWT_Attribute), NULL);
        /*
         * 
         * case {'zpd','sym','sp0','spd','sp1','ppd','per','status'}
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            /*
             * % Check arguments.
             * if errargn(mfilename,nargin,[0:2],nargout,[0 1]), error('*'), end
             */
            if (mlfTobool(
                  mlfNErrargn(
                    1,
                    NULL,
                    mxCreateString("dwtmode"),
                    mlfScalar(nargin_),
                    _mxarray77_,
                    mlfScalar(nargout_),
                    _mxarray79_))) {
                mlfError(_mxarray67_, NULL);
            }
            /*
             * if isempty(DWT_Attribute) , wtbxmngr('ini'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&DWT_Attribute, "DWT_Attribute")))) {
                mclAssignAns(
                  &ans, mlfNWtbxmngr(0, mclAnsVarargout(), _mxarray71_, NULL));
            }
            /*
             * if ~isequal(option,'status') & ~isequal(DWT_Attribute.extMode,option)
             */
            {
                mxArray * a_
                  = mclInitialize(
                      mclNot(
                        mlfIsequal(
                          mclVa(option, "option"), _mxarray0_, NULL)));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(
                           a_,
                           mclNot(
                             mclFeval(
                               mclValueVarargout(),
                               mlxIsequal,
                               mlfIndexRef(
                                 mclVg(&DWT_Attribute, "DWT_Attribute"),
                                 ".extMode"),
                               mclVa(option, "option"),
                               NULL))))) {
                    mxDestroyArray(a_);
                    /*
                     * DWT_Attribute.extMode = option;
                     */
                    mlfIndexAssign(
                      mclPrepareGlobal(&DWT_Attribute),
                      ".extMode",
                      mclVa(option, "option"));
                    /*
                     * numMsg = 1;
                     */
                    mlfAssign(&numMsg, _mxarray21_);
                /*
                 * else
                 */
                } else {
                    mxDestroyArray(a_);
                    /*
                     * numMsg = 2;
                     */
                    mlfAssign(&numMsg, _mxarray40_);
                }
            /*
             * end
             */
            }
            /*
             * if nargin<2 , dispMessage(numMsg,DWT_Attribute.extMode); end
             */
            if (nargin_ < 2) {
                mclFeval(
                  mclAnsVarargout(),
                  mlxDwtmode_dispMessage,
                  mclVv(numMsg, "numMsg"),
                  mlfIndexRef(
                    mclVg(&DWT_Attribute, "DWT_Attribute"), ".extMode"),
                  NULL);
            }
            /*
             * if nargout==1 , varargout{1} = DWT_Attribute.extMode; end
             */
            if (nargout_ == 1) {
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray21_,
                  mlfIndexRef(
                    mclVg(&DWT_Attribute, "DWT_Attribute"), ".extMode"));
            }
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'Unknown Extension Mode','msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("dwtmode"), _mxarray81_, _mxarray65_, NULL));
            /*
             * error('*');
             */
            mlfError(_mxarray67_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mxDestroyArray(ans);
    mxDestroyArray(dwt_default_Attrb);
    mxDestroyArray(extM);
    mxDestroyArray(namefileSave);
    mxDestroyArray(s);
    mxDestroyArray(msg);
    mxDestroyArray(msgval);
    mxDestroyArray(errordlg);
    mxDestroyArray(sep);
    mxDestroyArray(k);
    mxDestroyArray(numMsg);
    mxDestroyArray(varargin);
    mxDestroyArray(option);
    mxDestroyArray(_mat);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     * 
     * %----------------------------------------------------------------------------%
     * % Internal Function(s)
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mdwtmode_dispMessage" is the implementation version of the
 * "dwtmode/dispMessage" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwtmode.m" (lines 169-192). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function dispMessage(num,mode)
 */
static void Mdwtmode_dispMessage(mxArray * num, mxArray * mode) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dwtmode);
    mxArray * s = NULL;
    mxArray * c = NULL;
    mxArray * n = NULL;
    mxArray * msg = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&num);
    mclCopyArray(&mode);
    /*
     * if num<2
     */
    if (mclLtBool(mclVa(num, "num"), _mxarray40_)) {
        /*
         * disp(' ');
         */
        mlfDisp(_mxarray83_);
        /*
         * disp('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!');
         */
        mlfDisp(_mxarray85_);
        /*
         * disp('!  WARNING: Change DWT Extension Mode  !');
         */
        mlfDisp(_mxarray87_);
        /*
         * disp('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!');
         */
        mlfDisp(_mxarray85_);
    /*
     * end
     */
    }
    /*
     * % Display Extension Mode.
     * msg = ['DWT Extension Mode: '];
     */
    mlfAssign(&msg, _mxarray89_);
    /*
     * switch mode
     */
    {
        mxArray * v_ = mclInitialize(mclVa(mode, "mode"));
        if (mclSwitchCompare(v_, _mxarray43_)) {
            /*
             * case 'zpd' ,         msg = [msg 'Zero Padding'];
             */
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray91_, NULL));
        /*
         * case 'sym' ,         msg = [msg 'Symmetrization'];
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray93_, NULL));
        /*
         * case 'sp0' ,         msg = [msg 'Smooth Padding of order 0'];
         */
        } else if (mclSwitchCompare(v_, _mxarray22_)) {
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray95_, NULL));
        /*
         * case {'spd','sp1'} , msg = [msg 'Smooth Padding of order 1'];
         */
        } else if (mclSwitchCompare(v_, _mxarray97_)) {
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray99_, NULL));
        /*
         * case 'ppd' ,         msg = [msg 'Periodized Padding'];    
         */
        } else if (mclSwitchCompare(v_, _mxarray28_)) {
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray101_, NULL));
        /*
         * case 'per' ,         msg = [msg 'Periodization'];
         */
        } else if (mclSwitchCompare(v_, _mxarray30_)) {
            mlfAssign(&msg, mlfHorzcat(mclVv(msg, "msg"), _mxarray103_, NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * n = length(msg)+8;
     */
    mlfAssign(&n, mlfScalar(mclLengthInt(mclVv(msg, "msg")) + 8));
    /*
     * c = '*';
     */
    mlfAssign(&c, _mxarray67_);
    /*
     * s = c(ones(1,n));
     */
    mlfAssign(
      &s,
      mclArrayRef1(mclVv(c, "c"), mlfOnes(_mxarray21_, mclVv(n, "n"), NULL)));
    /*
     * msg = strvcat(' ',s,[c c '  ' msg '  ' c c],s,' ');
     */
    mlfAssign(
      &msg,
      mlfStrvcat(
        _mxarray83_,
        mclVv(s, "s"),
        mlfHorzcat(
          mclVv(c, "c"),
          mclVv(c, "c"),
          _mxarray105_,
          mclVv(msg, "msg"),
          _mxarray105_,
          mclVv(c, "c"),
          mclVv(c, "c"),
          NULL),
        mclVv(s, "s"),
        _mxarray83_,
        NULL));
    /*
     * disp(msg);
     */
    mlfDisp(mclVv(msg, "msg"));
    mxDestroyArray(ans);
    mxDestroyArray(msg);
    mxDestroyArray(n);
    mxDestroyArray(c);
    mxDestroyArray(s);
    mxDestroyArray(mode);
    mxDestroyArray(num);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * %----------------------------------------------------------------------------%
     */
}
