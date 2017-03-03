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
#include "wtbxmngr.h"
#include "dwtmode.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "path.h"
#include "rmpath.h"
#include "wavemngr.h"

extern mxArray * DWT_Attribute;
extern mxArray * WTBX_Glob_Info;
extern mxArray * Wavelets_Info;

static mxChar _array1_[7] = { 'v', 'e', 'r', 's', 'i', 'o', 'n' };
static mxArray * _mxarray0_;

static mxChar _array3_[4] = { 'l', 'o', 'a', 'd' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;

static mxChar _array6_[10] = { 'w', 't', 'b', '_', 'g',
                               'b', 'l', '.', 'v', '1' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;

static mxChar _array11_[2] = { 'v', '1' };
static mxArray * _mxarray10_;

static mxChar _array13_[2] = { 'V', '1' };
static mxArray * _mxarray12_;

static mxArray * _array9_[2] = { NULL /*_mxarray10_*/, NULL /*_mxarray12_*/ };
static mxArray * _mxarray8_;

static mxChar _array15_[11] = { 'w', 't', 'b', 'x', '_', 'g',
                                'b', 'l', '.', 'v', '1' };
static mxArray * _mxarray14_;

static mxChar _array17_[11] = { 'w', 't', 'b', 'x', '_', 'g',
                                'b', 'l', '.', 'v', '2' };
static mxArray * _mxarray16_;

static mxChar _array19_[4] = { 'W', 'T', 'B', 'X' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;

static mxChar _array22_[1] = { 'V' };
static mxArray * _mxarray21_;

static mxChar _array24_[3] = { 'i', 'n', 'i' };
static mxArray * _mxarray23_;

static mxChar _array26_[5] = { 'i', 's', '_', 'o', 'n' };
static mxArray * _mxarray25_;

static mxChar _array28_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray27_;
static mxArray * _mxarray29_;

static mxChar _array31_[7] = { 'A', 'p', 'p', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray30_;

static mxChar _array33_[2] = { '_', 'V' };
static mxArray * _mxarray32_;

static mxChar _array35_[5] = { '%', '2', '.', '1', 'f' };
static mxArray * _mxarray34_;

static mxChar _array37_[4] = { 'n', 'a', 'm', 'e' };
static mxArray * _mxarray36_;

static mxChar _array39_[10] = { 'o', 'b', 'j', 'V', 'e',
                                'r', 's', 'i', 'o', 'n' };
static mxArray * _mxarray38_;

static mxChar _array41_[7] = { '@', 'w', 'p', 't', 'r', 'e', 'e' };
static mxArray * _mxarray40_;

static mxChar _array43_[8] = { 'w', 'a', 'v', 'e', 'l', 'e', 't', 's' };
static mxArray * _mxarray42_;

static mxChar _array45_[8] = { 'd', 'w', 't', 'A', 't', 't', 'r', 'b' };
static mxArray * _mxarray44_;

static mxChar _array47_[8] = { 'w', 'a', 'v', 'e', 'd', 'e', 'm', 'o' };
static mxArray * _mxarray46_;

static mxChar _array49_[12] = { 'w', 'a', 'v', 'e', 'o', 'b',
                                's', 'o', 'l', 'e', 't', 'e' };
static mxArray * _mxarray48_;

static mxChar _array51_[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };
static mxArray * _mxarray50_;

static mxChar _array53_[2] = { 'v', '2' };
static mxArray * _mxarray52_;

static mxChar _array55_[4] = { '-', 'a', 'l', 'l' };
static mxArray * _mxarray54_;

static mxChar _array57_[2] = { 'V', '2' };
static mxArray * _mxarray56_;

static mxChar _array61_[10] = { 'l', 'a', 'r', 'g', 'e',
                                'f', 'o', 'n', 't', 's' };
static mxArray * _mxarray60_;

static mxChar _array63_[11] = { 'd', 'e', 'f', 'a', 'u', 'l',
                                't', 's', 'i', 'z', 'e' };
static mxArray * _mxarray62_;

static mxArray * _array59_[2] = { NULL /*_mxarray60_*/, NULL /*_mxarray62_*/ };
static mxArray * _mxarray58_;
static mxArray * _mxarray64_;

static mxChar _array66_[19] = { 'S', 'c', 'r', 'e', 'e', 'n', 'P',
                                'i', 'x', 'e', 'l', 's', 'P', 'e',
                                'r', 'I', 'n', 'c', 'h' };
static mxArray * _mxarray65_;
static mxArray * _mxarray67_;

static mxChar _array69_[8] = { 'f', 'i', 'g', 'r', 'a', 't', 'i', 'o' };
static mxArray * _mxarray68_;
static mxArray * _mxarray70_;

static mxChar _array72_[19] = { 'R', 'e', 's', 'i', 'z', 'e', 'R',
                                'a', 't', 'i', 'o', 'W', 'T', 'B',
                                'X', '_', 'F', 'i', 'g' };
static mxArray * _mxarray71_;
static mxArray * _mxarray73_;
static mxArray * _mxarray74_;
static mxArray * _mxarray75_;

static mxChar _array77_[27] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'v',
                                'a', 'l', 'u', 'e', ' ', 'f', 'o', 'r', ' ',
                                'f', 'i', 'g', '_', 'R', 'A', 'T', 'I', 'O' };
static mxArray * _mxarray76_;

static mxChar _array79_[36] = { 'c', 'h', 'o', 'o', 's', 'e', ' ', 'a', ' ',
                                'v', 'a', 'l', 'u', 'e', ' ', 'b', 'e', 't',
                                'w', 'e', 'e', 'n', ' ', '0', '.', '7', '5',
                                ' ', 'a', 'n', 'd', ' ', '1', '.', '2', '5' };
static mxArray * _mxarray78_;

static mxChar _array81_[18] = { 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'v',
                                'a', 'l', 'u', 'e', ' ', 'i', 's', ':', ' ' };
static mxArray * _mxarray80_;

static mxChar _array83_[37] = { 'T', 'h', 'e', ' ', 'c', 'u', 'r', 'r',
                                'e', 'n', 't', ' ', 'v', 'a', 'l', 'u',
                                'e', ' ', 'f', 'o', 'r', ' ', 'W', 'a',
                                'v', 'e', 'l', 'e', 't', ' ', 'T', 'o',
                                'o', 'l', 'b', 'o', 'x' };
static mxArray * _mxarray82_;

static mxChar _array85_[17] = { 'F', 'i', 'g', 'u', 'r', 'e', ' ', 'R', 'a',
                                't', 'i', 'o', ' ', 'i', 's', ' ', ':' };
static mxArray * _mxarray84_;

static mxChar _array87_[5] = { 'c', 'l', 'e', 'a', 'r' };
static mxArray * _mxarray86_;

static mxChar _array89_[27] = { 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ', 'T',
                                'o', 'o', 'l', 'b', 'o', 'x', ' ', 'V', 'e',
                                'r', 's', 'i', 'o', 'n', ':', ' ', 'V', '2' };
static mxArray * _mxarray88_;

static mxChar _array91_[55] = { 'T', 'h', 'e', ' ', 'W', 'a', 'v', 'e',
                                'l', 'e', 't', ' ', 'T', 'o', 'o', 'l',
                                'b', 'o', 'x', ' ', 'i', 's', ' ', 'n',
                                'o', 'w', ' ', 'c', 'o', 'm', 'p', 'a',
                                't', 'i', 'b', 'l', 'e', ' ', 'w', 'i',
                                't', 'h', ' ', 'v', 'e', 'r', 's', 'i',
                                'o', 'n', 's', ' ', '1', '.', 'x' };
static mxArray * _mxarray90_;

static mxChar _array93_[37] = { 'O', 'b', 's', 'o', 'l', 'e', 't', 'e',
                                ' ', 'f', 'u', 'n', 'c', 't', 'i', 'o',
                                'n', 's', ' ', 'a', 'r', 'e', ' ', 'n',
                                'o', 'w', ' ', 'a', 'v', 'a', 'i', 'l',
                                'a', 'b', 'l', 'e', '.' };
static mxArray * _mxarray92_;

static mxArray * _array95_[2] = { NULL /*_mxarray52_*/, NULL /*_mxarray56_*/ };
static mxArray * _mxarray94_;
static mxArray * _mxarray96_;

static mxChar _array98_[2] = { ' ', ' ' };
static mxArray * _mxarray97_;

static mxChar _array100_[1] = { '*' };
static mxArray * _mxarray99_;

static mxChar _array102_[1] = { ' ' };
static mxArray * _mxarray101_;

static mxChar _array104_[46] = { '!', ' ', ' ', 'W', 'A', 'R', 'N', 'I',
                                 'N', 'G', ':', ' ', 'C', 'h', 'a', 'n',
                                 'g', 'e', 'd', ' ', 'W', 'a', 'v', 'e',
                                 'l', 'e', 't', ' ', 'T', 'o', 'o', 'l',
                                 'b', 'o', 'x', ' ', 'V', 'e', 'r', 's',
                                 'i', 'o', 'n', ' ', ' ', '!' };
static mxArray * _mxarray103_;

static mxChar _array106_[46] = { '!', '!', '!', '!', '!', '!', '!', '!',
                                 '!', '!', '!', '!', '!', '!', '!', '!',
                                 '!', '!', '!', '!', '!', '!', '!', '!',
                                 '!', '!', '!', '!', '!', '!', '!', '!',
                                 '!', '!', '!', '!', '!', '!', '!', '!',
                                 '!', '!', '!', '!', '!', '!' };
static mxArray * _mxarray105_;

void InitializeModule_wtbxmngr(void) {
    _mxarray0_ = mclInitializeString(7, _array1_);
    _mxarray2_ = mclInitializeString(4, _array3_);
    _mxarray4_ = mclInitializeDouble(1.0);
    _mxarray5_ = mclInitializeString(10, _array6_);
    _mxarray7_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeString(2, _array11_);
    _array9_[0] = _mxarray10_;
    _mxarray12_ = mclInitializeString(2, _array13_);
    _array9_[1] = _mxarray12_;
    _mxarray8_ = mclInitializeCellVector(1, 2, _array9_);
    _mxarray14_ = mclInitializeString(11, _array15_);
    _mxarray16_ = mclInitializeString(11, _array17_);
    _mxarray18_ = mclInitializeString(4, _array19_);
    _mxarray20_ = mclInitializeDouble(2.2);
    _mxarray21_ = mclInitializeString(1, _array22_);
    _mxarray23_ = mclInitializeString(3, _array24_);
    _mxarray25_ = mclInitializeString(5, _array26_);
    _mxarray27_ = mclInitializeString(3, _array28_);
    _mxarray29_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray30_ = mclInitializeString(7, _array31_);
    _mxarray32_ = mclInitializeString(2, _array33_);
    _mxarray34_ = mclInitializeString(5, _array35_);
    _mxarray36_ = mclInitializeString(4, _array37_);
    _mxarray38_ = mclInitializeString(10, _array39_);
    _mxarray40_ = mclInitializeString(7, _array41_);
    _mxarray42_ = mclInitializeString(8, _array43_);
    _mxarray44_ = mclInitializeString(8, _array45_);
    _mxarray46_ = mclInitializeString(8, _array47_);
    _mxarray48_ = mclInitializeString(12, _array49_);
    _mxarray50_ = mclInitializeString(7, _array51_);
    _mxarray52_ = mclInitializeString(2, _array53_);
    _mxarray54_ = mclInitializeString(4, _array55_);
    _mxarray56_ = mclInitializeString(2, _array57_);
    _mxarray60_ = mclInitializeString(10, _array61_);
    _array59_[0] = _mxarray60_;
    _mxarray62_ = mclInitializeString(11, _array63_);
    _array59_[1] = _mxarray62_;
    _mxarray58_ = mclInitializeCellVector(1, 2, _array59_);
    _mxarray64_ = mclInitializeDouble(0.0);
    _mxarray65_ = mclInitializeString(19, _array66_);
    _mxarray67_ = mclInitializeDouble(96.0);
    _mxarray68_ = mclInitializeString(8, _array69_);
    _mxarray70_ = mclInitializeDouble(-1.0);
    _mxarray71_ = mclInitializeString(19, _array72_);
    _mxarray73_ = mclInitializeDouble(.75);
    _mxarray74_ = mclInitializeDouble(1.25);
    _mxarray75_ = mclInitializeDouble(3.0);
    _mxarray76_ = mclInitializeString(27, _array77_);
    _mxarray78_ = mclInitializeString(36, _array79_);
    _mxarray80_ = mclInitializeString(18, _array81_);
    _mxarray82_ = mclInitializeString(37, _array83_);
    _mxarray84_ = mclInitializeString(17, _array85_);
    _mxarray86_ = mclInitializeString(5, _array87_);
    _mxarray88_ = mclInitializeString(27, _array89_);
    _mxarray90_ = mclInitializeString(55, _array91_);
    _mxarray92_ = mclInitializeString(37, _array93_);
    _array95_[0] = _mxarray52_;
    _array95_[1] = _mxarray56_;
    _mxarray94_ = mclInitializeCellVector(1, 2, _array95_);
    _mxarray96_ = mclInitializeDouble(8.0);
    _mxarray97_ = mclInitializeString(2, _array98_);
    _mxarray99_ = mclInitializeString(1, _array100_);
    _mxarray101_ = mclInitializeString(1, _array102_);
    _mxarray103_ = mclInitializeString(46, _array104_);
    _mxarray105_ = mclInitializeString(46, _array106_);
}

void TerminateModule_wtbxmngr(void) {
    mxDestroyArray(_mxarray105_);
    mxDestroyArray(_mxarray103_);
    mxDestroyArray(_mxarray101_);
    mxDestroyArray(_mxarray99_);
    mxDestroyArray(_mxarray97_);
    mxDestroyArray(_mxarray96_);
    mxDestroyArray(_mxarray94_);
    mxDestroyArray(_mxarray92_);
    mxDestroyArray(_mxarray90_);
    mxDestroyArray(_mxarray88_);
    mxDestroyArray(_mxarray86_);
    mxDestroyArray(_mxarray84_);
    mxDestroyArray(_mxarray82_);
    mxDestroyArray(_mxarray80_);
    mxDestroyArray(_mxarray78_);
    mxDestroyArray(_mxarray76_);
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray70_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static void mlfWtbxmngr_dispMessage(mxArray * wtbxVers, mxArray * dummy);
static void mlxWtbxmngr_dispMessage(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]);
static mxArray * Mwtbxmngr(int nargout_, mxArray * option, mxArray * varargin);
static void Mwtbxmngr_dispMessage(mxArray * wtbxVers, mxArray * dummy);

static mexFunctionTableEntry local_function_table_[1]
  = { { "dispMessage", mlxWtbxmngr_dispMessage, 2, 0, NULL } };

_mexLocalFunctionTable _local_function_table_wtbxmngr
  = { 1, local_function_table_ };

/*
 * The function "mlfNWtbxmngr" contains the nargout interface for the
 * "wtbxmngr" M-function from file "./src/wtbxmngr.m" (lines 1-236). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWtbxmngr(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * option,
                       ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwtbxmngr(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfWtbxmngr" contains the normal interface for the "wtbxmngr"
 * M-function from file "./src/wtbxmngr.m" (lines 1-236). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfWtbxmngr(mlfVarargoutList * varargout, mxArray * option, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwtbxmngr(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVWtbxmngr" contains the void interface for the "wtbxmngr"
 * M-function from file "./src/wtbxmngr.m" (lines 1-236). The void interface is
 * only produced if the M-function uses the special variable "nargout", and has
 * at least one output. The void interface function specifies zero output
 * arguments to the implementation version of the function, and in the event
 * that the implementation version still returns an output (which, in MATLAB,
 * would be assigned to the "ans" variable), it deallocates the output. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlfVWtbxmngr(mxArray * option, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    varargout = Mwtbxmngr(0, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWtbxmngr" contains the feval interface for the "wtbxmngr"
 * M-function from file "./src/wtbxmngr.m" (lines 1-236). The feval function
 * calls the implementation version of wtbxmngr through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxWtbxmngr(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
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
    mplhs[0] = Mwtbxmngr(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfWtbxmngr_dispMessage" contains the normal interface for the
 * "wtbxmngr/dispMessage" M-function from file "./src/wtbxmngr.m" (lines
 * 236-272). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlfWtbxmngr_dispMessage(mxArray * wtbxVers, mxArray * dummy) {
    mlfEnterNewContext(0, 2, wtbxVers, dummy);
    Mwtbxmngr_dispMessage(wtbxVers, dummy);
    mlfRestorePreviousContext(0, 2, wtbxVers, dummy);
}

/*
 * The function "mlxWtbxmngr_dispMessage" contains the feval interface for the
 * "wtbxmngr/dispMessage" M-function from file "./src/wtbxmngr.m" (lines
 * 236-272). The feval function calls the implementation version of
 * wtbxmngr/dispMessage through this function. This function processes any
 * input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
static void mlxWtbxmngr_dispMessage(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]) {
    mxArray * mprhs[2];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wtbxmngr/dispMessage Line: 236 Co"
            "lumn: 1 The function \"wtbxmngr/dispMessage\" was calle"
            "d with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wtbxmngr/dispMessage Line: 236 Co"
            "lumn: 1 The function \"wtbxmngr/dispMessage\" was calle"
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
    Mwtbxmngr_dispMessage(mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
}

/*
 * The function "Mwtbxmngr" is the implementation version of the "wtbxmngr"
 * M-function from file "./src/wtbxmngr.m" (lines 1-236). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = wtbxmngr(option,varargin)
 */
static mxArray * Mwtbxmngr(int nargout_, mxArray * option, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wtbxmngr);
    int nargin_ = mclNargin(-2, option, varargin, NULL);
    mxArray * _mat = NULL;
    mxArray * varargout = NULL;
    mxArray * msgbox = NULL;
    mxArray * warndlg = NULL;
    mxArray * msg = NULL;
    mxArray * oldFigRatio = NULL;
    mxArray * OK = NULL;
    mxArray * dispMSG = NULL;
    mxArray * ResizeRatioWTBX_Fig = NULL;
    mxArray * RatScrPixPerInch = NULL;
    mxArray * StdScrPixPerInch = NULL;
    mxArray * CurScrPixPerInch = NULL;
    mxArray * d = NULL;
    mxArray * addV1_path = NULL;
    mxArray * n = NULL;
    mxArray * s = NULL;
    mxArray * fileName = NULL;
    mxArray * wtbxVers = NULL;
    mxArray * objVers = NULL;
    mxArray * okObj = NULL;
    mxArray * k = NULL;
    mxArray * nbin = NULL;
    mxArray * nbout = NULL;
    mxArray * wtbxVER = NULL;
    mxArray * VersfileName = NULL;
    mxArray * okInit = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&option);
    mclCopyArray(&varargin);
    /*
     * %WTBXMNGR Wavelet Toolbox manager.
     * %   WTBXMNGR or WTBXMNGR('version') displays the current
     * %   version of the Toolbox mode (Version 1.x vs. 2.x).
     * % 
     * %   WTBXMNGR('V1') or WTBXMNGR('v1') sets the
     * %   wavelet packets management mode to Version 1.x
     * %   (This is the obsolete mode).
     * % 
     * %   WTBXMNGR('V2') or WTBXMNGR('v2') sets the
     * %   wavelet packets management mode to Version 2.x
     * %   The wavelet packets objects are used (see WPTREE).
     * %
     * %   WTBXMNGR('LargeFonts') sets the size of the next created
     * %   figures in such a way that they can accept Large Fonts. 
     * %
     * %   WTBXMNGR('DefaultSize') restores the default figure size 
     * %   for the next created figures.
     * %
     * %   WTBXMNGR('FigRatio',ratio) changes the size of the next 
     * %   created figures multiplying the default size by "ratio", 
     * %   with 0.75 <= ratio <= 1.25.
     * %
     * %   WTBXMNGR('FigRatio') returns the current ratio value.
     * 
     * % INTERNAL OPTIONS:
     * %-----------------
     * %   OPTION = 'load' , 'ini' , 'is_on' , 'get' , 'clear'
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 22-Feb-98.
     * %   Last Revision: 22-Nov-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:44 $
     * 
     * %fprintf(2,'Using modified wtbxmngr.m\n');
     * 
     * global WTBX_Glob_Info Wavelets_Info DWT_Attribute
     * 
     * %----------------------%
     * % Wavelets Structures. %
     * %------------------------------------------%
     * % WTBX_Glob_Info is a structure.
     * % WTBX_Glob_Info = ...
     * %   struct(...
     * %     'name'        char = 'WTBX'
     * %     'version'     integer
     * %     'objVersion'  integer
     * %     );
     * %------------------------------------------%
     * % Wavelets_Info is a  structure array 
     * % with size = [nb_fam 1]
     * %
     * % Wavelet_Struct =
     * %   struct(...
     * %     'index'           integer
     * %     'familyName'      string
     * %     'familyShortName' string
     * %     'type'            integer
     * %     'tabNums'         matrix of string
     * %     'typNums'         string
     * %     'file'            string
     * %     'bounds'          string
     * %     );
     * %------------------------------------------%
     * % DWT_Attribute is a structure.
     * %   struct(...
     * %     'extMode'   'sym' , 'zpd' , 'spd' ...
     * %     'shift1D'   integer
     * %     'shift2D'   [integer integer]
     * %     );
     * %------------------------------------------%
     * 
     * okInit = ...
     */
    mlfAssign(
      &okInit,
      mclAnd(
        mclAnd(
          mclNot(mlfIsempty(mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"))),
          mclNot(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))),
        mclNot(mlfIsempty(mclVg(&DWT_Attribute, "DWT_Attribute")))));
    /*
     * ~isempty(WTBX_Glob_Info) & ...
     * ~isempty(Wavelets_Info)  & ...
     * ~isempty(DWT_Attribute);
     * 
     * if nargin==0 , option = 'version'; end 
     */
    if (nargin_ == 0) {
        mlfAssign(&option, _mxarray0_);
    }
    /*
     * 
     * switch lower(option)
     */
    {
        mxArray * v_ = mclInitialize(mlfLower(mclVa(option, "option")));
        if (mclSwitchCompare(v_, _mxarray2_)) {
            /*
             * case 'load'
             * switch nargin
             */
            mxArray * v_0 = mclInitialize(mlfScalar(nargin_));
            if (mclSwitchCompare(v_0, _mxarray4_)) {
                /*
                 * case 1
                 * 
                 * %
                 * %
                 * % Hack to get this to work
                 * %
                 * %
                 * 
                 * VersfileName = 'wtb_gbl.v1'; % override for simple
                 */
                mlfAssign(&VersfileName, _mxarray5_);
            /*
             * %          fileName = 'wtbx_gbl.v1';
             * %
             * %          s = which(fileName,'-all');
             * %
             * %          if ~isempty(s) ,
             * %               VersfileName = 'wtbx_gbl.v1';
             * %          else
             * %               VersfileName = 'wtbx_gbl.v2';
             * %          end
             * 
             * case 2
             */
            } else if (mclSwitchCompare(v_0, _mxarray7_)) {
                /*
                 * wtbxVER = varargin{1};
                 */
                mlfAssign(
                  &wtbxVER,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray4_));
                /*
                 * switch wtbxVER
                 */
                {
                    mxArray * v_1 = mclInitialize(mclVv(wtbxVER, "wtbxVER"));
                    if (mclSwitchCompare(v_1, _mxarray8_)) {
                        /*
                         * case {'v1','V1'} , VersfileName = 'wtbx_gbl.v1';
                         */
                        mlfAssign(&VersfileName, _mxarray14_);
                    /*
                     * otherwise        , VersfileName = 'wtbx_gbl.v2';
                     */
                    } else {
                        mlfAssign(&VersfileName, _mxarray16_);
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_1);
                }
            /*
             * end
             */
            }
            mxDestroyArray(v_0);
            /*
             * try
             */
            mlfTry {
                /*
                 * load(VersfileName,'-mat');
                 */
                mlfLoad(
                  mclVv(VersfileName, "VersfileName"), "-mat", &_mat, NULL);
            /*
             * catch
             */
            } mlfCatch {
                /*
                 * WTBX_Glob_Info.name       = 'WTBX';
                 */
                mlfIndexAssign(
                  mclPrepareGlobal(&WTBX_Glob_Info), ".name", _mxarray18_);
                /*
                 * WTBX_Glob_Info.version    = 2.2;
                 */
                mlfIndexAssign(
                  mclPrepareGlobal(&WTBX_Glob_Info), ".version", _mxarray20_);
                /*
                 * WTBX_Glob_Info.objVersion =   1;
                 */
                mlfIndexAssign(
                  mclPrepareGlobal(&WTBX_Glob_Info), ".objVersion", _mxarray4_);
            /*
             * end
             */
            } mlfEndCatch
            /*
             * if nargout>0
             */
            if (nargout_ > 0) {
                /*
                 * varargout{1} = ['V' int2str(WTBX_Glob_Info.objVersion+1)];
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray4_,
                  mlfHorzcat(
                    _mxarray21_,
                    mlfInt2str(
                      mclFeval(
                        mclValueVarargout(),
                        mlxPlus,
                        mlfIndexRef(
                          mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                          ".objVersion"),
                        _mxarray4_,
                        NULL)),
                    NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 'ini'
         */
        } else if (mclSwitchCompare(v_, _mxarray23_)) {
            /*
             * if okInit , return; end
             */
            if (mlfTobool(mclVv(okInit, "okInit"))) {
                mxDestroyArray(v_);
                goto return_;
            }
            /*
             * wtbxmngr('load');
             */
            mclAssignAns(
              &ans, mlfNWtbxmngr(0, mclAnsVarargout(), _mxarray2_, NULL));
            /*
             * wavemngr('load');
             */
            mclAssignAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray2_, NULL));
            /*
             * dwtmode('load');
             */
            mclAssignAns(
              &ans, mlfNDwtmode(0, mclAnsVarargout(), _mxarray2_, NULL));
        /*
         * 
         * case 'is_on'
         */
        } else if (mclSwitchCompare(v_, _mxarray25_)) {
            /*
             * varargout{1} = okInit;
             */
            mlfIndexAssign(
              &varargout, "{?}", _mxarray4_, mclVv(okInit, "okInit"));
        /*
         * 
         * case 'get'
         */
        } else if (mclSwitchCompare(v_, _mxarray27_)) {
            /*
             * if ~okInit , wtbxmngr('ini'); end
             */
            if (mclNotBool(mclVv(okInit, "okInit"))) {
                mclAssignAns(
                  &ans, mlfNWtbxmngr(0, mclAnsVarargout(), _mxarray23_, NULL));
            }
            /*
             * nbout   = nargout;
             */
            mlfAssign(&nbout, mlfScalar(nargout_));
            /*
             * nbin    = nargin-1;
             */
            mlfAssign(&nbin, mlfScalar(nargin_ - 1));
            /*
             * for k=1:min([nbin,nbout])
             */
            {
                int v_2 = mclForIntStart(1);
                int e_
                  = mclForIntEnd(
                      mlfMin(
                        NULL,
                        mlfHorzcat(
                          mclVv(nbin, "nbin"), mclVv(nbout, "nbout"), NULL),
                        NULL,
                        NULL));
                if (v_2 > e_) {
                    mlfAssign(&k, _mxarray29_);
                } else {
                    /*
                     * switch varargin{k}
                     * case 'AppName'
                     * varargout{k} = [WTBX_Glob_Info.name '_V' ...
                     * sprintf('%2.1f',WTBX_Glob_Info.version)];            
                     * case 'name'       , varargout{k} = WTBX_Glob_Info.name;            
                     * case 'version'    , varargout{k} = WTBX_Glob_Info.version;
                     * case 'objVersion' ,
                     * okObj = ~isempty(what('@wptree'));
                     * varargout{k} = WTBX_Glob_Info.objVersion & okObj;
                     * case 'wavelets'   , varargout{k} = Wavelets_Info;
                     * case 'dwtAttrb'   , varargout{k} = DWT_Attribute;
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
                        if (mclSwitchCompare(v_3, _mxarray30_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mlfHorzcat(
                                mlfIndexRef(
                                  mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                                  ".name"),
                                _mxarray32_,
                                mlfSprintf(
                                  NULL,
                                  _mxarray34_,
                                  mlfIndexRef(
                                    mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                                    ".version"),
                                  NULL),
                                NULL));
                        } else if (mclSwitchCompare(v_3, _mxarray36_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mlfIndexRef(
                                mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                                ".name"));
                        } else if (mclSwitchCompare(v_3, _mxarray0_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mlfIndexRef(
                                mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                                ".version"));
                        } else if (mclSwitchCompare(v_3, _mxarray38_)) {
                            mlfAssign(
                              &okObj, mclNot(mlfIsempty(mlfWhat(_mxarray40_))));
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mclFeval(
                                mclValueVarargout(),
                                mlxAnd,
                                mlfIndexRef(
                                  mclVg(&WTBX_Glob_Info, "WTBX_Glob_Info"),
                                  ".objVersion"),
                                mclVv(okObj, "okObj"),
                                NULL));
                        } else if (mclSwitchCompare(v_3, _mxarray42_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mclVg(&Wavelets_Info, "Wavelets_Info"));
                        } else if (mclSwitchCompare(v_3, _mxarray44_)) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_2),
                              mclVg(&DWT_Attribute, "DWT_Attribute"));
                        }
                        mxDestroyArray(v_3);
                        if (v_2 == e_) {
                            break;
                        }
                        ++v_2;
                    }
                    mlfAssign(&k, mlfScalar(v_2));
                }
            }
        /*
         * 
         * case 'version'
         */
        } else if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * objVers  = wtbxmngr('get','objVersion');
             */
            mlfAssign(
              &objVers,
              mlfNWtbxmngr(
                0, mclValueVarargout(), _mxarray27_, _mxarray38_, NULL));
            /*
             * wtbxVers = ['V' int2str(objVers+1)];
             */
            mlfAssign(
              &wtbxVers,
              mlfHorzcat(
                _mxarray21_,
                mlfInt2str(mclPlus(mclVv(objVers, "objVers"), _mxarray4_)),
                NULL));
            /*
             * if nargin<2 , dispMessage(wtbxVers); end
             */
            if (nargin_ < 2) {
                mlfWtbxmngr_dispMessage(mclVv(wtbxVers, "wtbxVers"), NULL);
            }
            /*
             * if nargout>0 , varargout{1} = wtbxVers; end
             */
            if (nargout_ > 0) {
                mlfIndexAssign(
                  &varargout, "{?}", _mxarray4_, mclVv(wtbxVers, "wtbxVers"));
            }
        /*
         * 
         * case 'v1'
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * clear global WTBX_Glob_Info
             */
            mlfClear(mclPrepareGlobal(&WTBX_Glob_Info), NULL);
            /*
             * fileName = 'wtbx_gbl.v2';
             */
            mlfAssign(&fileName, _mxarray16_);
            /*
             * s = which(fileName);
             */
            mlfAssign(&s, mlfWhich(mclVv(fileName, "fileName"), NULL));
            /*
             * n = findstr(s,'wavedemo');
             */
            mlfAssign(&n, mlfFindstr(mclVv(s, "s"), _mxarray46_));
            /*
             * addV1_path = [s(1:n-1) 'waveobsolete'];
             */
            mlfAssign(
              &addV1_path,
              mlfHorzcat(
                mclArrayRef1(
                  mclVv(s, "s"),
                  mlfColon(
                    _mxarray4_, mclMinus(mclVv(n, "n"), _mxarray4_), NULL)),
                _mxarray48_,
                NULL));
            /*
             * path(addV1_path,path);
             */
            mclAssignAns(
              &ans,
              mlfNPath(
                0, mclVv(addV1_path, "addV1_path"), mlfNPath(1, NULL, NULL)));
            /*
             * wtbxVers = wtbxmngr('load','V1');
             */
            mlfAssign(
              &wtbxVers,
              mlfNWtbxmngr(
                0, mclValueVarargout(), _mxarray2_, _mxarray12_, NULL));
            /*
             * if nargin==1 , dispMessage(wtbxVers,'warning'); end
             */
            if (nargin_ == 1) {
                mlfWtbxmngr_dispMessage(
                  mclVv(wtbxVers, "wtbxVers"), _mxarray50_);
            }
            /*
             * if nargout>0 , varargout{1} = wtbxVers; end
             */
            if (nargout_ > 0) {
                mlfIndexAssign(
                  &varargout, "{?}", _mxarray4_, mclVv(wtbxVers, "wtbxVers"));
            }
        /*
         * 
         * case 'v2'
         */
        } else if (mclSwitchCompare(v_, _mxarray52_)) {
            /*
             * clear global WTBX_Glob_Info
             */
            mlfClear(mclPrepareGlobal(&WTBX_Glob_Info), NULL);
            /*
             * fileName = 'wtbx_gbl.v1';
             */
            mlfAssign(&fileName, _mxarray14_);
            /*
             * s = which(fileName,'-all');
             */
            mlfAssign(
              &s, mlfWhich(mclVv(fileName, "fileName"), _mxarray54_, NULL));
            /*
             * if ~isempty(s)
             */
            if (mclNotBool(mlfIsempty(mclVv(s, "s")))) {
                /*
                 * for k = 1:size(s,1)
                 */
                int v_4 = mclForIntStart(1);
                int e_
                  = mclForIntEnd(
                      mlfSize(mclValueVarargout(), mclVv(s, "s"), _mxarray4_));
                if (v_4 > e_) {
                    mlfAssign(&k, _mxarray29_);
                } else {
                    /*
                     * d = s{k};
                     * n = findstr(d,fileName);
                     * rmpath(d(1:n-1));
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(
                          &d,
                          mlfIndexRef(mclVv(s, "s"), "{?}", mlfScalar(v_4)));
                        mlfAssign(
                          &n,
                          mlfFindstr(
                            mclVv(d, "d"), mclVv(fileName, "fileName")));
                        mlfRmpath(
                          mclArrayRef1(
                            mclVv(d, "d"),
                            mlfColon(
                              _mxarray4_,
                              mclMinus(mclVv(n, "n"), _mxarray4_),
                              NULL)),
                          NULL);
                        if (v_4 == e_) {
                            break;
                        }
                        ++v_4;
                    }
                    mlfAssign(&k, mlfScalar(v_4));
                }
            /*
             * end
             */
            }
            /*
             * wtbxVers = wtbxmngr('load','V2');
             */
            mlfAssign(
              &wtbxVers,
              mlfNWtbxmngr(
                0, mclValueVarargout(), _mxarray2_, _mxarray56_, NULL));
            /*
             * if nargin==1 , dispMessage(wtbxVers,'warning'); end
             */
            if (nargin_ == 1) {
                mlfWtbxmngr_dispMessage(
                  mclVv(wtbxVers, "wtbxVers"), _mxarray50_);
            }
            /*
             * if nargout>0 , varargout{1} = wtbxVers; end
             */
            if (nargout_ > 0) {
                mlfIndexAssign(
                  &varargout, "{?}", _mxarray4_, mclVv(wtbxVers, "wtbxVers"));
            }
        /*
         * 
         * case {'largefonts','defaultsize'}
         */
        } else if (mclSwitchCompare(v_, _mxarray58_)) {
            /*
             * if isequal(lower(option),'largefonts')
             */
            if (mlfTobool(
                  mlfIsequal(
                    mlfLower(mclVa(option, "option")), _mxarray60_, NULL))) {
                /*
                 * CurScrPixPerInch = get(0,'ScreenPixelsPerInch');
                 */
                mlfAssign(
                  &CurScrPixPerInch,
                  mlfNGet(1, _mxarray64_, _mxarray65_, NULL));
                /*
                 * StdScrPixPerInch = 96;
                 */
                mlfAssign(&StdScrPixPerInch, _mxarray67_);
                /*
                 * RatScrPixPerInch = CurScrPixPerInch / StdScrPixPerInch;
                 */
                mlfAssign(
                  &RatScrPixPerInch,
                  mclMrdivide(
                    mclVv(CurScrPixPerInch, "CurScrPixPerInch"),
                    mclVv(StdScrPixPerInch, "StdScrPixPerInch")));
            /*
             * else
             */
            } else {
                /*
                 * RatScrPixPerInch = 1;
                 */
                mlfAssign(&RatScrPixPerInch, _mxarray4_);
            /*
             * end
             */
            }
            /*
             * wtbxmngr('figratio',RatScrPixPerInch);
             */
            mclAssignAns(
              &ans,
              mlfNWtbxmngr(
                0,
                mclAnsVarargout(),
                _mxarray68_,
                mclVv(RatScrPixPerInch, "RatScrPixPerInch"),
                NULL));
        /*
         * 
         * case 'figratio'
         */
        } else if (mclSwitchCompare(v_, _mxarray68_)) {
            /*
             * if length(varargin)>0  
             */
            if (mclLengthInt(mclVa(varargin, "varargin")) > 0) {
                /*
                 * ResizeRatioWTBX_Fig = varargin{1};
                 */
                mlfAssign(
                  &ResizeRatioWTBX_Fig,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray4_));
                /*
                 * dispMSG = -1;  % No display for correct value
                 */
                mlfAssign(&dispMSG, _mxarray70_);
            /*
             * else
             */
            } else {
                /*
                 * ResizeRatioWTBX_Fig = getappdata(0,'ResizeRatioWTBX_Fig');
                 */
                mlfAssign(
                  &ResizeRatioWTBX_Fig,
                  mlfGetappdata(_mxarray64_, _mxarray71_));
                /*
                 * if isempty(ResizeRatioWTBX_Fig) , ResizeRatioWTBX_Fig = 1; end
                 */
                if (mlfTobool(
                      mlfIsempty(
                        mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig")))) {
                    mlfAssign(&ResizeRatioWTBX_Fig, _mxarray4_);
                }
                /*
                 * dispMSG = 0;  % No display for correct value
                 */
                mlfAssign(&dispMSG, _mxarray64_);
            /*
             * end
             */
            }
            /*
             * OK = length(ResizeRatioWTBX_Fig)==1 & isnumeric(ResizeRatioWTBX_Fig) & ...
             */
            mlfAssign(
              &OK,
              mclAnd(
                mclAnd(
                  mclBoolToArray(
                    mclLengthInt(
                      mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"))
                    == 1),
                  mlfIsnumeric(
                    mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"))),
                mlfIsreal(mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"))));
            /*
             * isreal(ResizeRatioWTBX_Fig);
             * if OK
             */
            if (mlfTobool(mclVv(OK, "OK"))) {
                /*
                 * if     ResizeRatioWTBX_Fig<0.75 , ResizeRatioWTBX_Fig = 0.75; dispMSG = 1; 
                 */
                if (mclLtBool(
                      mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"),
                      _mxarray73_)) {
                    mlfAssign(&ResizeRatioWTBX_Fig, _mxarray73_);
                    mlfAssign(&dispMSG, _mxarray4_);
                /*
                 * elseif ResizeRatioWTBX_Fig>1.25 , ResizeRatioWTBX_Fig = 1.25; dispMSG = 2;             
                 */
                } else if (mclGtBool(
                             mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"),
                             _mxarray74_)) {
                    mlfAssign(&ResizeRatioWTBX_Fig, _mxarray74_);
                    mlfAssign(&dispMSG, _mxarray7_);
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
                 * dispMSG = 3; 
                 */
                mlfAssign(&dispMSG, _mxarray75_);
                /*
                 * oldFigRatio = getappdata(0,'ResizeRatioWTBX_Fig');
                 */
                mlfAssign(
                  &oldFigRatio, mlfGetappdata(_mxarray64_, _mxarray71_));
                /*
                 * if isempty(oldFigRatio) , oldFigRatio = 1; end
                 */
                if (mlfTobool(mlfIsempty(mclVv(oldFigRatio, "oldFigRatio")))) {
                    mlfAssign(&oldFigRatio, _mxarray4_);
                }
                /*
                 * ResizeRatioWTBX_Fig = oldFigRatio; 
                 */
                mlfAssign(
                  &ResizeRatioWTBX_Fig, mclVv(oldFigRatio, "oldFigRatio"));
            /*
             * end
             */
            }
            /*
             * setappdata(0,'ResizeRatioWTBX_Fig',ResizeRatioWTBX_Fig);
             */
            mlfSetappdata(
              _mxarray64_,
              _mxarray71_,
              mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"),
              NULL);
            /*
             * if dispMSG>0
             */
            if (mclGtBool(mclVv(dispMSG, "dispMSG"), _mxarray64_)) {
                /*
                 * msg = strvcat(...
                 */
                mlfAssign(
                  &msg,
                  mlfStrvcat(
                    _mxarray76_,
                    _mxarray78_,
                    mlfHorzcat(
                      _mxarray80_,
                      mlfNum2str(
                        mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"),
                        NULL),
                      NULL),
                    NULL));
                /*
                 * 'Invalid value for fig_RATIO',...
                 * 'choose a value between 0.75 and 1.25', ...
                 * ['current value is: ' num2str(ResizeRatioWTBX_Fig) ]);
                 * warndlg(msg)                   
                 */
                mclPrintAns(
                  &ans,
                  mclArrayRef1(mclVv(warndlg, "warndlg"), mclVv(msg, "msg")));
            /*
             * elseif dispMSG==0
             */
            } else if (mclEqBool(mclVv(dispMSG, "dispMSG"), _mxarray64_)) {
                /*
                 * msg = strvcat(...
                 */
                mlfAssign(
                  &msg,
                  mlfStrvcat(
                    _mxarray82_,
                    mlfHorzcat(
                      _mxarray84_,
                      mlfNum2str(
                        mclVv(ResizeRatioWTBX_Fig, "ResizeRatioWTBX_Fig"),
                        NULL),
                      NULL),
                    NULL));
                /*
                 * 'The current value for Wavelet Toolbox', ...
                 * ['Figure Ratio is :' num2str(ResizeRatioWTBX_Fig)]);
                 * msgbox(msg)                   
                 */
                mclPrintAns(
                  &ans,
                  mclArrayRef1(mclVv(msgbox, "msgbox"), mclVv(msg, "msg")));
            /*
             * end
             */
            }
        /*
         * 
         * case 'clear'
         */
        } else if (mclSwitchCompare(v_, _mxarray86_)) {
            /*
             * clear global WTBX_Glob_Info
             */
            mlfClear(mclPrepareGlobal(&WTBX_Glob_Info), NULL);
            /*
             * wavemngr('clear');
             */
            mclAssignAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray86_, NULL));
            /*
             * dwtmode('clear');
             */
            mclAssignAns(
              &ans, mlfNDwtmode(0, mclAnsVarargout(), _mxarray86_, NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * 
     * %----------------------------------------------------------------------------%
     * % Internal Function(s)
     * %----------------------------------------------------------------------------%
     */
    return_:
    mxDestroyArray(ans);
    mxDestroyArray(okInit);
    mxDestroyArray(VersfileName);
    mxDestroyArray(wtbxVER);
    mxDestroyArray(nbout);
    mxDestroyArray(nbin);
    mxDestroyArray(k);
    mxDestroyArray(okObj);
    mxDestroyArray(objVers);
    mxDestroyArray(wtbxVers);
    mxDestroyArray(fileName);
    mxDestroyArray(s);
    mxDestroyArray(n);
    mxDestroyArray(addV1_path);
    mxDestroyArray(d);
    mxDestroyArray(CurScrPixPerInch);
    mxDestroyArray(StdScrPixPerInch);
    mxDestroyArray(RatScrPixPerInch);
    mxDestroyArray(ResizeRatioWTBX_Fig);
    mxDestroyArray(dispMSG);
    mxDestroyArray(OK);
    mxDestroyArray(oldFigRatio);
    mxDestroyArray(msg);
    mxDestroyArray(warndlg);
    mxDestroyArray(msgbox);
    mxDestroyArray(varargin);
    mxDestroyArray(option);
    mxDestroyArray(_mat);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}

/*
 * The function "Mwtbxmngr_dispMessage" is the implementation version of the
 * "wtbxmngr/dispMessage" M-function from file "./src/wtbxmngr.m" (lines
 * 236-272). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function dispMessage(wtbxVers,dummy)
 */
static void Mwtbxmngr_dispMessage(mxArray * wtbxVers, mxArray * dummy) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wtbxmngr);
    int nargin_ = mclNargin(2, wtbxVers, dummy, NULL);
    mxArray * addLEN = NULL;
    mxArray * lenDUM = NULL;
    mxArray * ans = NULL;
    mxArray * msg1 = NULL;
    mxArray * s = NULL;
    mxArray * c = NULL;
    mxArray * b = NULL;
    mxArray * n = NULL;
    mxArray * lenMSG = NULL;
    mxArray * nbLINES = NULL;
    mxArray * sizeMSG = NULL;
    mxArray * msg = NULL;
    mclCopyArray(&wtbxVers);
    mclCopyArray(&dummy);
    /*
     * 
     * % Display Extension Mode.
     * msg = ['Wavelet Toolbox Version: V2'];
     */
    mlfAssign(&msg, _mxarray88_);
    /*
     * switch wtbxVers
     */
    {
        mxArray * v_ = mclInitialize(mclVa(wtbxVers, "wtbxVers"));
        if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * case {'v1','V1'}
             * msg = strvcat(msg,...
             */
            mlfAssign(
              &msg,
              mlfStrvcat(mclVv(msg, "msg"), _mxarray90_, _mxarray92_, NULL));
        /*
         * 'The Wavelet Toolbox is now compatible with versions 1.x',...
         * 'Obsolete functions are now available.');
         * 
         * case {'v2','V2'}
         */
        } else if (mclSwitchCompare(v_, _mxarray94_)) {
        /*
         * 
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * sizeMSG = size(msg);
     */
    mlfAssign(&sizeMSG, mlfSize(mclValueVarargout(), mclVv(msg, "msg"), NULL));
    /*
     * nbLINES = sizeMSG(1);
     */
    mlfAssign(&nbLINES, mclIntArrayRef1(mclVv(sizeMSG, "sizeMSG"), 1));
    /*
     * lenMSG  = sizeMSG(2);
     */
    mlfAssign(&lenMSG, mclIntArrayRef1(mclVv(sizeMSG, "sizeMSG"), 2));
    /*
     * n = lenMSG+8;
     */
    mlfAssign(&n, mclPlus(mclVv(lenMSG, "lenMSG"), _mxarray96_));
    /*
     * b = '  ';
     */
    mlfAssign(&b, _mxarray97_);
    /*
     * c = '*';
     */
    mlfAssign(&c, _mxarray99_);
    /*
     * s = c(ones(1,n));
     */
    mlfAssign(
      &s,
      mclArrayRef1(mclVv(c, "c"), mlfOnes(_mxarray4_, mclVv(n, "n"), NULL)));
    /*
     * c  = c(ones(1,nbLINES),:); b  = b(ones(1,nbLINES),:);
     */
    mlfAssign(
      &c,
      mclArrayRef2(
        mclVv(c, "c"),
        mlfOnes(_mxarray4_, mclVv(nbLINES, "nbLINES"), NULL),
        mlfCreateColonIndex()));
    mlfAssign(
      &b,
      mclArrayRef2(
        mclVv(b, "b"),
        mlfOnes(_mxarray4_, mclVv(nbLINES, "nbLINES"), NULL),
        mlfCreateColonIndex()));
    /*
     * msg1 = strvcat(' ',s,[c c b msg b c c],s,' ');
     */
    mlfAssign(
      &msg1,
      mlfStrvcat(
        _mxarray101_,
        mclVv(s, "s"),
        mlfHorzcat(
          mclVv(c, "c"),
          mclVv(c, "c"),
          mclVv(b, "b"),
          mclVv(msg, "msg"),
          mclVv(b, "b"),
          mclVv(c, "c"),
          mclVv(c, "c"),
          NULL),
        mclVv(s, "s"),
        _mxarray101_,
        NULL));
    /*
     * 
     * clc;
     */
    mlfClc();
    /*
     * if nargin>1
     */
    if (nargin_ > 1) {
        /*
         * dummy  = '!  WARNING: Changed Wavelet Toolbox Version  !';
         */
        mlfAssign(&dummy, _mxarray103_);
        /*
         * lenDUM = length(dummy);
         */
        mlfAssign(&lenDUM, mlfScalar(mclLengthInt(mclVa(dummy, "dummy"))));
        /*
         * addLEN = floor((lenMSG-lenDUM)/2);
         */
        mlfAssign(
          &addLEN,
          mlfFloor(
            mclMrdivide(
              mclMinus(mclVv(lenMSG, "lenMSG"), mclVv(lenDUM, "lenDUM")),
              _mxarray7_)));
        /*
         * disp(' ');
         */
        mlfDisp(_mxarray101_);
        /*
         * disp([blanks(addLEN), '!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!']);
         */
        mlfDisp(
          mlfHorzcat(mlfBlanks(mclVv(addLEN, "addLEN")), _mxarray105_, NULL));
        /*
         * disp([blanks(addLEN), '!  WARNING: Changed Wavelet Toolbox Version  !']);
         */
        mlfDisp(
          mlfHorzcat(mlfBlanks(mclVv(addLEN, "addLEN")), _mxarray103_, NULL));
        /*
         * disp([blanks(addLEN), '!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!']);
         */
        mlfDisp(
          mlfHorzcat(mlfBlanks(mclVv(addLEN, "addLEN")), _mxarray105_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * disp(msg1);
     */
    mlfDisp(mclVv(msg1, "msg1"));
    mxDestroyArray(msg);
    mxDestroyArray(sizeMSG);
    mxDestroyArray(nbLINES);
    mxDestroyArray(lenMSG);
    mxDestroyArray(n);
    mxDestroyArray(b);
    mxDestroyArray(c);
    mxDestroyArray(s);
    mxDestroyArray(msg1);
    mxDestroyArray(ans);
    mxDestroyArray(lenDUM);
    mxDestroyArray(addLEN);
    mxDestroyArray(dummy);
    mxDestroyArray(wtbxVers);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * %----------------------------------------------------------------------------%
     */
}
