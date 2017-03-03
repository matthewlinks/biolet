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
#include "wextend.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray2_;

static mxChar _array4_[1] = { '1' };
static mxArray * _mxarray3_;

static mxChar _array6_[2] = { '1', 'd' };
static mxArray * _mxarray5_;

static mxArray * _array1_[3] = { NULL /*_mxarray2_*/, NULL /*_mxarray3_*/,
                                 NULL /*_mxarray5_*/ };
static mxArray * _mxarray0_;

static mxChar _array8_[1] = { 'b' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;

static mxChar _array11_[3] = { 'z', 'p', 'd' };
static mxArray * _mxarray10_;

static mxChar _array13_[3] = { 's', 'y', 'm' };
static mxArray * _mxarray12_;

static mxChar _array15_[3] = { 's', 'p', '0' };
static mxArray * _mxarray14_;

static mxChar _array17_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray16_;

static mxChar _array21_[3] = { 's', 'p', 'd' };
static mxArray * _mxarray20_;

static mxChar _array23_[3] = { 's', 'p', '1' };
static mxArray * _mxarray22_;

static mxArray * _array19_[2] = { NULL /*_mxarray20_*/, NULL /*_mxarray22_*/ };
static mxArray * _mxarray18_;
static mxArray * _mxarray24_;

static mxChar _array27_[3] = { 'p', 'p', 'd' };
static mxArray * _mxarray26_;
static mxArray * _mxarray25_;

static mxChar _array30_[3] = { 'p', 'e', 'r' };
static mxArray * _mxarray29_;
static mxArray * _mxarray28_;

static mxChar _array32_[31] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'E', 'x', 't', 'e', 'n', 's', 'i', 'o',
                                'n', ' ', 'M', 'o', 'd', 'e', ' ', 'f',
                                'o', 'r', ' ', 'D', 'W', 'T', '!' };
static mxArray * _mxarray31_;

static mxChar _array34_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray33_;

static mxChar _array36_[1] = { '*' };
static mxArray * _mxarray35_;

static mxChar _array40_[1] = { '2' };
static mxArray * _mxarray39_;

static mxChar _array42_[2] = { '2', 'd' };
static mxArray * _mxarray41_;

static mxArray * _array38_[3] = { NULL /*_mxarray9_*/, NULL /*_mxarray39_*/,
                                  NULL /*_mxarray41_*/ };
static mxArray * _mxarray37_;

static mxChar _array44_[3] = { 'c', 'o', 'l' };
static mxArray * _mxarray43_;

static mxChar _array46_[23] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'E', 'x', 't', 'e', 'n', 's', 'i', 'o',
                                'n', ' ', 'M', 'o', 'd', 'e', '!' };
static mxArray * _mxarray45_;

static mxChar _array50_[2] = { 'a', 'r' };
static mxArray * _mxarray49_;

static mxChar _array52_[6] = { 'a', 'd', 'd', 'r', 'o', 'w' };
static mxArray * _mxarray51_;

static mxArray * _array48_[2] = { NULL /*_mxarray49_*/, NULL /*_mxarray51_*/ };
static mxArray * _mxarray47_;

static mxChar _array54_[1] = { 'n' };
static mxArray * _mxarray53_;

static mxChar _array56_[2] = { '2', 'D' };
static mxArray * _mxarray55_;

static mxChar _array60_[2] = { 'a', 'c' };
static mxArray * _mxarray59_;

static mxChar _array62_[6] = { 'a', 'd', 'd', 'c', 'o', 'l' };
static mxArray * _mxarray61_;

static mxArray * _array58_[2] = { NULL /*_mxarray59_*/, NULL /*_mxarray61_*/ };
static mxArray * _mxarray57_;

static mxChar _array66_[1] = { 'l' };
static mxArray * _mxarray65_;

static mxChar _array68_[1] = { 'u' };
static mxArray * _mxarray67_;

static mxChar _array70_[1] = { 'r' };
static mxArray * _mxarray69_;

static mxChar _array72_[1] = { 'd' };
static mxArray * _mxarray71_;

static mxArray * _array64_[6] = { NULL /*_mxarray53_*/, NULL /*_mxarray65_*/,
                                  NULL /*_mxarray67_*/, NULL /*_mxarray7_*/,
                                  NULL /*_mxarray69_*/, NULL /*_mxarray71_*/ };
static mxArray * _mxarray63_;
static mxArray * _mxarray73_;
static mxArray * _mxarray74_;

static mxArray * _array76_[2] = { NULL /*_mxarray65_*/, NULL /*_mxarray67_*/ };
static mxArray * _mxarray75_;
static mxArray * _mxarray77_;

static mxArray * _array79_[2] = { NULL /*_mxarray69_*/, NULL /*_mxarray71_*/ };
static mxArray * _mxarray78_;

static mxChar _array81_[1] = { 'c' };
static mxArray * _mxarray80_;
static mxArray * _mxarray82_;

void InitializeModule_wextend(void) {
    _mxarray2_ = mclInitializeDouble(1.0);
    _array1_[0] = _mxarray2_;
    _mxarray3_ = mclInitializeString(1, _array4_);
    _array1_[1] = _mxarray3_;
    _mxarray5_ = mclInitializeString(2, _array6_);
    _array1_[2] = _mxarray5_;
    _mxarray0_ = mclInitializeCellVector(1, 3, _array1_);
    _mxarray7_ = mclInitializeString(1, _array8_);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeString(3, _array11_);
    _mxarray12_ = mclInitializeString(3, _array13_);
    _mxarray14_ = mclInitializeString(3, _array15_);
    _mxarray16_ = mclInitializeString(3, _array17_);
    _mxarray20_ = mclInitializeString(3, _array21_);
    _array19_[0] = _mxarray20_;
    _mxarray22_ = mclInitializeString(3, _array23_);
    _array19_[1] = _mxarray22_;
    _mxarray18_ = mclInitializeCellVector(1, 2, _array19_);
    _mxarray24_ = mclInitializeDouble(0.0);
    _mxarray26_ = mclInitializeString(3, _array27_);
    _mxarray25_ = mclInitializeCell(_mxarray26_);
    _mxarray29_ = mclInitializeString(3, _array30_);
    _mxarray28_ = mclInitializeCell(_mxarray29_);
    _mxarray31_ = mclInitializeString(31, _array32_);
    _mxarray33_ = mclInitializeString(3, _array34_);
    _mxarray35_ = mclInitializeString(1, _array36_);
    _array38_[0] = _mxarray9_;
    _mxarray39_ = mclInitializeString(1, _array40_);
    _array38_[1] = _mxarray39_;
    _mxarray41_ = mclInitializeString(2, _array42_);
    _array38_[2] = _mxarray41_;
    _mxarray37_ = mclInitializeCellVector(1, 3, _array38_);
    _mxarray43_ = mclInitializeString(3, _array44_);
    _mxarray45_ = mclInitializeString(23, _array46_);
    _mxarray49_ = mclInitializeString(2, _array50_);
    _array48_[0] = _mxarray49_;
    _mxarray51_ = mclInitializeString(6, _array52_);
    _array48_[1] = _mxarray51_;
    _mxarray47_ = mclInitializeCellVector(1, 2, _array48_);
    _mxarray53_ = mclInitializeString(1, _array54_);
    _mxarray55_ = mclInitializeString(2, _array56_);
    _mxarray59_ = mclInitializeString(2, _array60_);
    _array58_[0] = _mxarray59_;
    _mxarray61_ = mclInitializeString(6, _array62_);
    _array58_[1] = _mxarray61_;
    _mxarray57_ = mclInitializeCellVector(1, 2, _array58_);
    _array64_[0] = _mxarray53_;
    _mxarray65_ = mclInitializeString(1, _array66_);
    _array64_[1] = _mxarray65_;
    _mxarray67_ = mclInitializeString(1, _array68_);
    _array64_[2] = _mxarray67_;
    _array64_[3] = _mxarray7_;
    _mxarray69_ = mclInitializeString(1, _array70_);
    _array64_[4] = _mxarray69_;
    _mxarray71_ = mclInitializeString(1, _array72_);
    _array64_[5] = _mxarray71_;
    _mxarray63_ = mclInitializeCellVector(1, 6, _array64_);
    _mxarray73_ = mclInitializeCell(_mxarray53_);
    _mxarray74_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _array76_[0] = _mxarray65_;
    _array76_[1] = _mxarray67_;
    _mxarray75_ = mclInitializeCellVector(1, 2, _array76_);
    _mxarray77_ = mclInitializeCell(_mxarray7_);
    _array79_[0] = _mxarray69_;
    _array79_[1] = _mxarray71_;
    _mxarray78_ = mclInitializeCellVector(1, 2, _array79_);
    _mxarray80_ = mclInitializeString(1, _array81_);
    _mxarray82_ = mclInitializeDouble(-1.0);
}

void TerminateModule_wextend(void) {
    mxDestroyArray(_mxarray82_);
    mxDestroyArray(_mxarray80_);
    mxDestroyArray(_mxarray78_);
    mxDestroyArray(_mxarray77_);
    mxDestroyArray(_mxarray75_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray0_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
}

static mxArray * mlfWextend_testLoc1(mxArray * location_in);
static void mlxWextend_testLoc1(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);
static mxArray * mlfWextend_testLoc2(mxArray * * locCol, mxArray * location);
static void mlxWextend_testLoc2(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);
static mxArray * mlfWextend_getZPD_ext(mxArray * * ext_R,
                                       mxArray * nbr,
                                       mxArray * nbc,
                                       mxArray * location);
static void mlxWextend_getZPD_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]);
static mxArray * mlfWextend_getSP0_ext(mxArray * * ext_R,
                                       mxArray * type,
                                       mxArray * x_L,
                                       mxArray * x_R,
                                       mxArray * lf,
                                       mxArray * location);
static void mlxWextend_getSP0_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]);
static mxArray * mlfWextend_getSP1_ext(mxArray * * ext_R,
                                       mxArray * type,
                                       mxArray * x_L,
                                       mxArray * x_R,
                                       mxArray * d_L,
                                       mxArray * d_R,
                                       mxArray * lf,
                                       mxArray * location);
static void mlxWextend_getSP1_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]);
static mxArray * mlfWextend_getPerIndices(mxArray * lx,
                                          mxArray * lf,
                                          mxArray * location);
static void mlxWextend_getPerIndices(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]);
static mxArray * mlfWextend_getSymIndices(mxArray * lx,
                                          mxArray * lf,
                                          mxArray * location);
static void mlxWextend_getSymIndices(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]);
static mxArray * Mwextend(int nargout_,
                          mxArray * type,
                          mxArray * mode,
                          mxArray * x_in,
                          mxArray * lf,
                          mxArray * location);
static mxArray * Mwextend_testLoc1(int nargout_, mxArray * location_in);
static mxArray * Mwextend_testLoc2(mxArray * * locCol,
                                   int nargout_,
                                   mxArray * location);
static mxArray * Mwextend_getZPD_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * nbr,
                                     mxArray * nbc,
                                     mxArray * location);
static mxArray * Mwextend_getSP0_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * type,
                                     mxArray * x_L,
                                     mxArray * x_R,
                                     mxArray * lf,
                                     mxArray * location);
static mxArray * Mwextend_getSP1_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * type,
                                     mxArray * x_L,
                                     mxArray * x_R,
                                     mxArray * d_L,
                                     mxArray * d_R,
                                     mxArray * lf,
                                     mxArray * location);
static mxArray * Mwextend_getPerIndices(int nargout_,
                                        mxArray * lx,
                                        mxArray * lf,
                                        mxArray * location);
static mxArray * Mwextend_getSymIndices(int nargout_,
                                        mxArray * lx,
                                        mxArray * lf,
                                        mxArray * location);

static mexFunctionTableEntry local_function_table_[7]
  = { { "testLoc1", mlxWextend_testLoc1, 1, 1, NULL },
      { "testLoc2", mlxWextend_testLoc2, 1, 2, NULL },
      { "getZPD_ext", mlxWextend_getZPD_ext, 3, 2, NULL },
      { "getSP0_ext", mlxWextend_getSP0_ext, 5, 2, NULL },
      { "getSP1_ext", mlxWextend_getSP1_ext, 7, 2, NULL },
      { "getPerIndices", mlxWextend_getPerIndices, 3, 1, NULL },
      { "getSymIndices", mlxWextend_getSymIndices, 3, 1, NULL } };

_mexLocalFunctionTable _local_function_table_wextend
  = { 7, local_function_table_ };

/*
 * The function "mlfWextend" contains the normal interface for the "wextend"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 1-173). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWextend(mxArray * type,
                     mxArray * mode,
                     mxArray * x_in,
                     mxArray * lf,
                     mxArray * location) {
    int nargout = 1;
    mxArray * x = NULL;
    mlfEnterNewContext(0, 5, type, mode, x_in, lf, location);
    x = Mwextend(nargout, type, mode, x_in, lf, location);
    mlfRestorePreviousContext(0, 5, type, mode, x_in, lf, location);
    return mlfReturnValue(x);
}

/*
 * The function "mlxWextend" contains the feval interface for the "wextend"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 1-173). The
 * feval function calls the implementation version of wextend through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWextend(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend Line: 1 Column: "
            "1 The function \"wextend\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend Line: 1 Column:"
            " 1 The function \"wextend\" was called with m"
            "ore than the declared number of inputs (5)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mplhs[0] = Mwextend(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWextend_testLoc1" contains the normal interface for the
 * "wextend/testLoc1" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 173-181).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_testLoc1(mxArray * location_in) {
    int nargout = 1;
    mxArray * location = NULL;
    mlfEnterNewContext(0, 1, location_in);
    location = Mwextend_testLoc1(nargout, location_in);
    mlfRestorePreviousContext(0, 1, location_in);
    return mlfReturnValue(location);
}

/*
 * The function "mlxWextend_testLoc1" contains the feval interface for the
 * "wextend/testLoc1" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 173-181).
 * The feval function calls the implementation version of wextend/testLoc1
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_testLoc1(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/testLoc1 Line: 173 Col"
            "umn: 1 The function \"wextend/testLoc1\" was called "
            "with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/testLoc1 Line: 173 Col"
            "umn: 1 The function \"wextend/testLoc1\" was called "
            "with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwextend_testLoc1(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWextend_testLoc2" contains the normal interface for the
 * "wextend/testLoc2" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 181-187).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_testLoc2(mxArray * * locCol, mxArray * location) {
    int nargout = 1;
    mxArray * locRow = NULL;
    mxArray * locCol__ = NULL;
    mlfEnterNewContext(1, 1, locCol, location);
    if (locCol != NULL) {
        ++nargout;
    }
    locRow = Mwextend_testLoc2(&locCol__, nargout, location);
    mlfRestorePreviousContext(1, 1, locCol, location);
    if (locCol != NULL) {
        mclCopyOutputArg(locCol, locCol__);
    } else {
        mxDestroyArray(locCol__);
    }
    return mlfReturnValue(locRow);
}

/*
 * The function "mlxWextend_testLoc2" contains the feval interface for the
 * "wextend/testLoc2" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 181-187).
 * The feval function calls the implementation version of wextend/testLoc2
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_testLoc2(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/testLoc2 Line: 181 Col"
            "umn: 1 The function \"wextend/testLoc2\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/testLoc2 Line: 181 Col"
            "umn: 1 The function \"wextend/testLoc2\" was called "
            "with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwextend_testLoc2(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "mlfWextend_getZPD_ext" contains the normal interface for the
 * "wextend/getZPD_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 187-196).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_getZPD_ext(mxArray * * ext_R,
                                       mxArray * nbr,
                                       mxArray * nbc,
                                       mxArray * location) {
    int nargout = 1;
    mxArray * ext_L = NULL;
    mxArray * ext_R__ = NULL;
    mlfEnterNewContext(1, 3, ext_R, nbr, nbc, location);
    if (ext_R != NULL) {
        ++nargout;
    }
    ext_L = Mwextend_getZPD_ext(&ext_R__, nargout, nbr, nbc, location);
    mlfRestorePreviousContext(1, 3, ext_R, nbr, nbc, location);
    if (ext_R != NULL) {
        mclCopyOutputArg(ext_R, ext_R__);
    } else {
        mxDestroyArray(ext_R__);
    }
    return mlfReturnValue(ext_L);
}

/*
 * The function "mlxWextend_getZPD_ext" contains the feval interface for the
 * "wextend/getZPD_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 187-196).
 * The feval function calls the implementation version of wextend/getZPD_ext
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_getZPD_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getZPD_ext Line: 187 Col"
            "umn: 1 The function \"wextend/getZPD_ext\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getZPD_ext Line: 187 Co"
            "lumn: 1 The function \"wextend/getZPD_ext\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwextend_getZPD_ext(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWextend_getSP0_ext" contains the normal interface for the
 * "wextend/getSP0_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 196-209).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_getSP0_ext(mxArray * * ext_R,
                                       mxArray * type,
                                       mxArray * x_L,
                                       mxArray * x_R,
                                       mxArray * lf,
                                       mxArray * location) {
    int nargout = 1;
    mxArray * ext_L = NULL;
    mxArray * ext_R__ = NULL;
    mlfEnterNewContext(1, 5, ext_R, type, x_L, x_R, lf, location);
    if (ext_R != NULL) {
        ++nargout;
    }
    ext_L
      = Mwextend_getSP0_ext(&ext_R__, nargout, type, x_L, x_R, lf, location);
    mlfRestorePreviousContext(1, 5, ext_R, type, x_L, x_R, lf, location);
    if (ext_R != NULL) {
        mclCopyOutputArg(ext_R, ext_R__);
    } else {
        mxDestroyArray(ext_R__);
    }
    return mlfReturnValue(ext_L);
}

/*
 * The function "mlxWextend_getSP0_ext" contains the feval interface for the
 * "wextend/getSP0_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 196-209).
 * The feval function calls the implementation version of wextend/getSP0_ext
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_getSP0_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSP0_ext Line: 196 Col"
            "umn: 1 The function \"wextend/getSP0_ext\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSP0_ext Line: 196 Co"
            "lumn: 1 The function \"wextend/getSP0_ext\" was calle"
            "d with more than the declared number of inputs (5)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mplhs[0]
      = Mwextend_getSP0_ext(
          &mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWextend_getSP1_ext" contains the normal interface for the
 * "wextend/getSP1_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 209-230).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_getSP1_ext(mxArray * * ext_R,
                                       mxArray * type,
                                       mxArray * x_L,
                                       mxArray * x_R,
                                       mxArray * d_L,
                                       mxArray * d_R,
                                       mxArray * lf,
                                       mxArray * location) {
    int nargout = 1;
    mxArray * ext_L = NULL;
    mxArray * ext_R__ = NULL;
    mlfEnterNewContext(1, 7, ext_R, type, x_L, x_R, d_L, d_R, lf, location);
    if (ext_R != NULL) {
        ++nargout;
    }
    ext_L
      = Mwextend_getSP1_ext(
          &ext_R__, nargout, type, x_L, x_R, d_L, d_R, lf, location);
    mlfRestorePreviousContext(
      1, 7, ext_R, type, x_L, x_R, d_L, d_R, lf, location);
    if (ext_R != NULL) {
        mclCopyOutputArg(ext_R, ext_R__);
    } else {
        mxDestroyArray(ext_R__);
    }
    return mlfReturnValue(ext_L);
}

/*
 * The function "mlxWextend_getSP1_ext" contains the feval interface for the
 * "wextend/getSP1_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 209-230).
 * The feval function calls the implementation version of wextend/getSP1_ext
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_getSP1_ext(int nlhs,
                                  mxArray * plhs[],
                                  int nrhs,
                                  mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSP1_ext Line: 209 Col"
            "umn: 1 The function \"wextend/getSP1_ext\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSP1_ext Line: 209 Co"
            "lumn: 1 The function \"wextend/getSP1_ext\" was calle"
            "d with more than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mwextend_getSP1_ext(
          &mplhs[1],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWextend_getPerIndices" contains the normal interface for
 * the "wextend/getPerIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 230-243).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_getPerIndices(mxArray * lx,
                                          mxArray * lf,
                                          mxArray * location) {
    int nargout = 1;
    mxArray * I = NULL;
    mlfEnterNewContext(0, 3, lx, lf, location);
    I = Mwextend_getPerIndices(nargout, lx, lf, location);
    mlfRestorePreviousContext(0, 3, lx, lf, location);
    return mlfReturnValue(I);
}

/*
 * The function "mlxWextend_getPerIndices" contains the feval interface for the
 * "wextend/getPerIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 230-243).
 * The feval function calls the implementation version of wextend/getPerIndices
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_getPerIndices(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getPerIndices Line: 230 Co"
            "lumn: 1 The function \"wextend/getPerIndices\" was calle"
            "d with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getPerIndices Line: 230 C"
            "olumn: 1 The function \"wextend/getPerIndices\" was cal"
            "led with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mwextend_getPerIndices(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWextend_getSymIndices" contains the normal interface for
 * the "wextend/getSymIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 243-263).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWextend_getSymIndices(mxArray * lx,
                                          mxArray * lf,
                                          mxArray * location) {
    int nargout = 1;
    mxArray * I = NULL;
    mlfEnterNewContext(0, 3, lx, lf, location);
    I = Mwextend_getSymIndices(nargout, lx, lf, location);
    mlfRestorePreviousContext(0, 3, lx, lf, location);
    return mlfReturnValue(I);
}

/*
 * The function "mlxWextend_getSymIndices" contains the feval interface for the
 * "wextend/getSymIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 243-263).
 * The feval function calls the implementation version of wextend/getSymIndices
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWextend_getSymIndices(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSymIndices Line: 243 Co"
            "lumn: 1 The function \"wextend/getSymIndices\" was calle"
            "d with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wextend/getSymIndices Line: 243 C"
            "olumn: 1 The function \"wextend/getSymIndices\" was cal"
            "led with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mwextend_getSymIndices(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwextend" is the implementation version of the "wextend"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 1-173). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function x = wextend(type,mode,x,lf,location)
 */
static mxArray * Mwextend(int nargout_,
                          mxArray * type,
                          mxArray * mode,
                          mxArray * x_in,
                          mxArray * lf,
                          mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    int nargin_ = mclNargin(5, type, mode, x_in, lf, location, NULL);
    mxArray * x = NULL;
    mxArray * cx = NULL;
    mxArray * rx = NULL;
    mxArray * locCol = NULL;
    mxArray * locRow = NULL;
    mxArray * ans = NULL;
    mxArray * d_R = NULL;
    mxArray * d_L = NULL;
    mxArray * d = NULL;
    mxArray * I = NULL;
    mxArray * ext_R = NULL;
    mxArray * ext_L = NULL;
    mxArray * isrow = NULL;
    mxArray * loc = NULL;
    mxArray * sx = NULL;
    mclCopyArray(&type);
    mclCopyArray(&mode);
    mclCopyInputArg(&x, x_in);
    mclCopyArray(&lf);
    mclCopyArray(&location);
    /*
     * %WEXTEND Extend a Vector or a Matrix.
     * %
     * %   Y = WEXTEND(TYPE,MODE,X,L,LOC) or
     * %   Y = WEXTEND(TYPE,MODE,X,L)
     * %
     * %   The valid extension types (TYPE) are:
     * %     1,'1','1d' or '1D'    : 1-D extension
     * %     2,'2','2d' or '2D'    : 2-D extension 
     * %     'ar' or 'addrow'      : add rows  
     * %     'ac' or 'addcol       : add columns   
     * %
     * %   The valid extension modes (MODE) are:
     * %     'zpd' zero extension.
     * %     'sp0' smooth extension of order 0.
     * %     'spd' (or 'sp1') smooth extension of order 1.
     * %     'sym' symmetric extension.
     * %     'ppd' periodized extension (1).
     * %     'per' periodized extension (2):
     * %        If the signal length is odd, WEXTEND adds an extra-sample
     * %        equal to the last value on the right and performs extension
     * %        using the 'ppd' mode. Otherwise, 'per' reduces to 'ppd'.
     * %        The same kind of rule stands for images.
     * %
     * %   With TYPE = {1,'1','1d' or '1D'}: 
     * %     LOC = 'l' (or 'u') for left (up) extension.
     * %     LOC = 'r' (or 'd') for right (down) extension.
     * %     LOC = 'b' for extension on both sides.
     * %     LOC = 'n' nul extension
     * %     The default is LOC = 'b'.
     * %     L is the length of the extension.
     * %
     * %   With TYPE = {'ar','addrow'}
     * %     LOC is a 1D extension location.
     * %     The default is LOC = 'b'.
     * %     L is the number of rows to add.
     * %
     * %   With TYPE = {'ac','addcol'}
     * %     LOC is a 1D extension location.
     * %     The default is LOC = 'b'.
     * %     L is the number of columns to add.
     * %
     * %   With TYPE = {2,'2','2d' or '2D'}:
     * %     LOC = [locrow,loccol] where locrow and loccol are 1D
     * %     extension locations or 'n' (none).
     * %     The default is LOC = 'bb'.
     * %     L = [lrow,lcol] where lrow is the number of rows 
     * %     to add and lcol is the number of columns to add.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 15-Nov-97.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * type = lower(type);
     */
    mlfAssign(&type, mlfLower(mclVa(type, "type")));
    /*
     * sx = size(x);
     */
    mlfAssign(&sx, mlfSize(mclValueVarargout(), mclVa(x, "x"), NULL));
    /*
     * switch type
     */
    {
        mxArray * v_ = mclInitialize(mclVa(type, "type"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case {1,'1','1d'}
             * if nargin<5 , loc = 'b'; else , loc = testLoc1(location); end
             */
            if (nargin_ < 5) {
                mlfAssign(&loc, _mxarray7_);
            } else {
                mlfAssign(
                  &loc, mlfWextend_testLoc1(mclVa(location, "location")));
            }
            /*
             * isrow = (sx(1)<2);
             */
            mlfAssign(
              &isrow, mclLt(mclIntArrayRef1(mclVv(sx, "sx"), 1), _mxarray9_));
            /*
             * x  = x(:)';
             */
            mlfAssign(
              &x,
              mlfCtranspose(
                mclArrayRef1(mclVa(x, "x"), mlfCreateColonIndex())));
            /*
             * sx = length(x);
             */
            mlfAssign(&sx, mlfScalar(mclLengthInt(mclVa(x, "x"))));
            /*
             * switch mode
             */
            {
                mxArray * v_0 = mclInitialize(mclVa(mode, "mode"));
                if (mclSwitchCompare(v_0, _mxarray10_)) {
                    /*
                     * case 'zpd'          % Zero Padding.
                     * [ext_L,ext_R] = getZPD_ext(1,lf,loc);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getZPD_ext(
                        &ext_R,
                        _mxarray2_,
                        mclVa(lf, "lf"),
                        mclVv(loc, "loc")));
                    /*
                     * x = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case 'sym'          % Symmetrization.
                 */
                } else if (mclSwitchCompare(v_0, _mxarray12_)) {
                    /*
                     * I = getSymIndices(sx,lf,loc);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getSymIndices(
                        mclVv(sx, "sx"), mclVa(lf, "lf"), mclVv(loc, "loc")));
                    /*
                     * x  = x(I);
                     */
                    mlfAssign(&x, mclArrayRef1(mclVa(x, "x"), mclVv(I, "I")));
                /*
                 * 
                 * case 'sp0'          % Smooth padding of order 0.
                 */
                } else if (mclSwitchCompare(v_0, _mxarray14_)) {
                    /*
                     * [ext_L,ext_R] = getSP0_ext('row',x(1),x(sx),lf,loc);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP0_ext(
                        &ext_R,
                        _mxarray16_,
                        mclIntArrayRef1(mclVa(x, "x"), 1),
                        mclArrayRef1(mclVa(x, "x"), mclVv(sx, "sx")),
                        mclVa(lf, "lf"),
                        mclVv(loc, "loc")));
                    /*
                     * x = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case {'spd','sp1'}  % Smooth padding of order 1.
                 */
                } else if (mclSwitchCompare(v_0, _mxarray18_)) {
                    /*
                     * if sx<2 , d = 0; else , d = 1; end
                     */
                    if (mclLtBool(mclVv(sx, "sx"), _mxarray9_)) {
                        mlfAssign(&d, _mxarray24_);
                    } else {
                        mlfAssign(&d, _mxarray2_);
                    }
                    /*
                     * d_L = x(1)-x(1+d);
                     */
                    mlfAssign(
                      &d_L,
                      mclMinus(
                        mclIntArrayRef1(mclVa(x, "x"), 1),
                        mclArrayRef1(
                          mclVa(x, "x"), mclPlus(_mxarray2_, mclVv(d, "d")))));
                    /*
                     * d_R = x(sx)-x(sx-d);
                     */
                    mlfAssign(
                      &d_R,
                      mclMinus(
                        mclArrayRef1(mclVa(x, "x"), mclVv(sx, "sx")),
                        mclArrayRef1(
                          mclVa(x, "x"),
                          mclMinus(mclVv(sx, "sx"), mclVv(d, "d")))));
                    /*
                     * [ext_L,ext_R] = getSP1_ext('row',x(1),x(sx),d_L,d_R,lf,loc);                  
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP1_ext(
                        &ext_R,
                        _mxarray16_,
                        mclIntArrayRef1(mclVa(x, "x"), 1),
                        mclArrayRef1(mclVa(x, "x"), mclVv(sx, "sx")),
                        mclVv(d_L, "d_L"),
                        mclVv(d_R, "d_R"),
                        mclVa(lf, "lf"),
                        mclVv(loc, "loc")));
                    /*
                     * x = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case {'ppd'}        % Periodization.
                 */
                } else if (mclSwitchCompare(v_0, _mxarray25_)) {
                    /*
                     * I = getPerIndices(sx,lf,loc);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(sx, "sx"), mclVa(lf, "lf"), mclVv(loc, "loc")));
                    /*
                     * x = x(I);
                     */
                    mlfAssign(&x, mclArrayRef1(mclVa(x, "x"), mclVv(I, "I")));
                /*
                 * 
                 * case {'per'}        % Periodization.
                 */
                } else if (mclSwitchCompare(v_0, _mxarray28_)) {
                    /*
                     * if rem(sx,2) , x(sx+1) = x(sx); sx = sx+1; end
                     */
                    if (mlfTobool(mlfRem(mclVv(sx, "sx"), _mxarray9_))) {
                        mclArrayAssign1(
                          &x,
                          mclArrayRef1(mclVa(x, "x"), mclVv(sx, "sx")),
                          mclPlus(mclVv(sx, "sx"), _mxarray2_));
                        mlfAssign(&sx, mclPlus(mclVv(sx, "sx"), _mxarray2_));
                    }
                    /*
                     * I = getPerIndices(sx,lf,loc);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(sx, "sx"), mclVa(lf, "lf"), mclVv(loc, "loc")));
                    /*
                     * x = x(I);
                     */
                    mlfAssign(&x, mclArrayRef1(mclVa(x, "x"), mclVv(I, "I")));
                /*
                 * 
                 * otherwise
                 */
                } else {
                    /*
                     * errargt(mfilename,'Invalid Extension Mode for DWT!','msg');
                     */
                    mclAssignAns(
                      &ans,
                      mlfErrargt(
                        mxCreateString("wextend"),
                        _mxarray31_,
                        _mxarray33_,
                        NULL));
                    /*
                     * error('*')
                     */
                    mlfError(_mxarray35_, NULL);
                /*
                 * end
                 */
                }
                mxDestroyArray(v_0);
            }
            /*
             * if ~isrow , x = x'; end
             */
            if (mclNotBool(mclVv(isrow, "isrow"))) {
                mlfAssign(&x, mlfCtranspose(mclVa(x, "x")));
            }
        /*
         * 
         * case {2,'2','2d'}
         */
        } else if (mclSwitchCompare(v_, _mxarray37_)) {
            /*
             * if nargin<5
             */
            if (nargin_ < 5) {
                /*
                 * locRow = 'b';locCol = 'b';
                 */
                mlfAssign(&locRow, _mxarray7_);
                mlfAssign(&locCol, _mxarray7_);
            /*
             * else
             */
            } else {
                /*
                 * [locRow,locCol] = testLoc2(location);
                 */
                mlfAssign(
                  &locRow,
                  mlfWextend_testLoc2(&locCol, mclVa(location, "location")));
            /*
             * end
             */
            }
            /*
             * if length(lf)<2 , lf = [lf , lf]; end
             */
            if (mclLengthInt(mclVa(lf, "lf")) < 2) {
                mlfAssign(
                  &lf, mlfHorzcat(mclVa(lf, "lf"), mclVa(lf, "lf"), NULL));
            }
            /*
             * rx = sx(1); cx = sx(2);
             */
            mlfAssign(&rx, mclIntArrayRef1(mclVv(sx, "sx"), 1));
            mlfAssign(&cx, mclIntArrayRef1(mclVv(sx, "sx"), 2));
            /*
             * 
             * switch mode
             */
            {
                mxArray * v_1 = mclInitialize(mclVa(mode, "mode"));
                if (mclSwitchCompare(v_1, _mxarray10_)) {
                    /*
                     * case 'zpd'          % Zero Padding.
                     * [ext_L,ext_R] = getZPD_ext(rx,lf(2),locCol);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getZPD_ext(
                        &ext_R,
                        mclVv(rx, "rx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x  = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                    /*
                     * cx = size(x,2);
                     */
                    mlfAssign(
                      &cx,
                      mlfSize(mclValueVarargout(), mclVa(x, "x"), _mxarray9_));
                    /*
                     * [ext_L,ext_R] = getZPD_ext(lf(1),cx,locRow);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getZPD_ext(
                        &ext_R,
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(cx, "cx"),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = [ext_L ; x ; ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfVertcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case 'sym'          % Symmetrization.
                 */
                } else if (mclSwitchCompare(v_1, _mxarray12_)) {
                    /*
                     * I = getSymIndices(cx,lf(2),locCol);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getSymIndices(
                        mclVv(cx, "cx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x = x(:,I);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mlfCreateColonIndex(), mclVv(I, "I")));
                    /*
                     * I = getSymIndices(rx,lf(1),locRow);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getSymIndices(
                        mclVv(rx, "rx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = x(I,:);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mclVv(I, "I"), mlfCreateColonIndex()));
                /*
                 * 
                 * case 'sp0'          % Smooth padding of order 0.
                 */
                } else if (mclSwitchCompare(v_1, _mxarray14_)) {
                    /*
                     * [ext_L,ext_R] = getSP0_ext('row',x(:,1),x(:,cx),lf(2),locCol);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP0_ext(
                        &ext_R,
                        _mxarray16_,
                        mclArrayRef2(
                          mclVa(x, "x"), mlfCreateColonIndex(), _mxarray2_),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mlfCreateColonIndex(),
                          mclVv(cx, "cx")),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                    /*
                     * [ext_L,ext_R] = getSP0_ext('col',x(1,:),x(rx,:),lf(1),locRow);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP0_ext(
                        &ext_R,
                        _mxarray43_,
                        mclArrayRef2(
                          mclVa(x, "x"), _mxarray2_, mlfCreateColonIndex()),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mclVv(rx, "rx"),
                          mlfCreateColonIndex()),
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = [ext_L ; x ; ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfVertcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case {'spd','sp1'}  % Smooth padding of order 1.
                 */
                } else if (mclSwitchCompare(v_1, _mxarray18_)) {
                    /*
                     * if cx<2 , d = 0; else , d = 1; end
                     */
                    if (mclLtBool(mclVv(cx, "cx"), _mxarray9_)) {
                        mlfAssign(&d, _mxarray24_);
                    } else {
                        mlfAssign(&d, _mxarray2_);
                    }
                    /*
                     * d_L = x(:,1) -x(:,1+d);
                     */
                    mlfAssign(
                      &d_L,
                      mclMinus(
                        mclArrayRef2(
                          mclVa(x, "x"), mlfCreateColonIndex(), _mxarray2_),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mlfCreateColonIndex(),
                          mclPlus(_mxarray2_, mclVv(d, "d")))));
                    /*
                     * d_R = x(:,cx)-x(:,cx-d);
                     */
                    mlfAssign(
                      &d_R,
                      mclMinus(
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mlfCreateColonIndex(),
                          mclVv(cx, "cx")),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mlfCreateColonIndex(),
                          mclMinus(mclVv(cx, "cx"), mclVv(d, "d")))));
                    /*
                     * [ext_L,ext_R] = getSP1_ext('row',x(:,1),x(:,cx),d_L,d_R,lf(2),locCol);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP1_ext(
                        &ext_R,
                        _mxarray16_,
                        mclArrayRef2(
                          mclVa(x, "x"), mlfCreateColonIndex(), _mxarray2_),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mlfCreateColonIndex(),
                          mclVv(cx, "cx")),
                        mclVv(d_L, "d_L"),
                        mclVv(d_R, "d_R"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x = [ext_L x ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfHorzcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                    /*
                     * if rx<2 , d = 0; else , d = 1; end          
                     */
                    if (mclLtBool(mclVv(rx, "rx"), _mxarray9_)) {
                        mlfAssign(&d, _mxarray24_);
                    } else {
                        mlfAssign(&d, _mxarray2_);
                    }
                    /*
                     * d_L = x(1,:) -x(1+d,:);
                     */
                    mlfAssign(
                      &d_L,
                      mclMinus(
                        mclArrayRef2(
                          mclVa(x, "x"), _mxarray2_, mlfCreateColonIndex()),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mclPlus(_mxarray2_, mclVv(d, "d")),
                          mlfCreateColonIndex())));
                    /*
                     * d_R = x(rx,:)-x(rx-d,:);        
                     */
                    mlfAssign(
                      &d_R,
                      mclMinus(
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mclVv(rx, "rx"),
                          mlfCreateColonIndex()),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mclMinus(mclVv(rx, "rx"), mclVv(d, "d")),
                          mlfCreateColonIndex())));
                    /*
                     * [ext_L,ext_R] = getSP1_ext('col',x(1,:),x(rx,:),d_L,d_R,lf(1),locRow);
                     */
                    mlfAssign(
                      &ext_L,
                      mlfWextend_getSP1_ext(
                        &ext_R,
                        _mxarray43_,
                        mclArrayRef2(
                          mclVa(x, "x"), _mxarray2_, mlfCreateColonIndex()),
                        mclArrayRef2(
                          mclVa(x, "x"),
                          mclVv(rx, "rx"),
                          mlfCreateColonIndex()),
                        mclVv(d_L, "d_L"),
                        mclVv(d_R, "d_R"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = [ext_L ; x ; ext_R];
                     */
                    mlfAssign(
                      &x,
                      mlfVertcat(
                        mclVv(ext_L, "ext_L"),
                        mclVa(x, "x"),
                        mclVv(ext_R, "ext_R"),
                        NULL));
                /*
                 * 
                 * case 'ppd'          % Periodization.
                 */
                } else if (mclSwitchCompare(v_1, _mxarray26_)) {
                    /*
                     * I = getPerIndices(cx,lf(2),locCol);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(cx, "cx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x = x(:,I);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mlfCreateColonIndex(), mclVv(I, "I")));
                    /*
                     * I = getPerIndices(rx,lf(1),locRow);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(rx, "rx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = x(I,:);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mclVv(I, "I"), mlfCreateColonIndex()));
                /*
                 * 
                 * case 'per'          % Periodization.
                 */
                } else if (mclSwitchCompare(v_1, _mxarray29_)) {
                    /*
                     * if rem(cx,2) , x(:,cx+1) = x(:,cx); cx = cx+1; end
                     */
                    if (mlfTobool(mlfRem(mclVv(cx, "cx"), _mxarray9_))) {
                        mclArrayAssign2(
                          &x,
                          mclArrayRef2(
                            mclVa(x, "x"),
                            mlfCreateColonIndex(),
                            mclVv(cx, "cx")),
                          mlfCreateColonIndex(),
                          mclPlus(mclVv(cx, "cx"), _mxarray2_));
                        mlfAssign(&cx, mclPlus(mclVv(cx, "cx"), _mxarray2_));
                    }
                    /*
                     * I = getPerIndices(cx,lf(2),locCol);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(cx, "cx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 2),
                        mclVv(locCol, "locCol")));
                    /*
                     * x = x(:,I);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mlfCreateColonIndex(), mclVv(I, "I")));
                    /*
                     * if rem(rx,2) , x(rx+1,:) = x(rx,:); rx = rx+1; end
                     */
                    if (mlfTobool(mlfRem(mclVv(rx, "rx"), _mxarray9_))) {
                        mclArrayAssign2(
                          &x,
                          mclArrayRef2(
                            mclVa(x, "x"),
                            mclVv(rx, "rx"),
                            mlfCreateColonIndex()),
                          mclPlus(mclVv(rx, "rx"), _mxarray2_),
                          mlfCreateColonIndex());
                        mlfAssign(&rx, mclPlus(mclVv(rx, "rx"), _mxarray2_));
                    }
                    /*
                     * I = getPerIndices(rx,lf(1),locRow);
                     */
                    mlfAssign(
                      &I,
                      mlfWextend_getPerIndices(
                        mclVv(rx, "rx"),
                        mclIntArrayRef1(mclVa(lf, "lf"), 1),
                        mclVv(locRow, "locRow")));
                    /*
                     * x = x(I,:);
                     */
                    mlfAssign(
                      &x,
                      mclArrayRef2(
                        mclVa(x, "x"), mclVv(I, "I"), mlfCreateColonIndex()));
                    /*
                     * sx = [rx,sx];
                     */
                    mlfAssign(
                      &sx, mlfHorzcat(mclVv(rx, "rx"), mclVv(sx, "sx"), NULL));
                /*
                 * 
                 * otherwise
                 */
                } else {
                    /*
                     * errargt(mfilename,'Invalid Extension Mode!','msg');
                     */
                    mclAssignAns(
                      &ans,
                      mlfErrargt(
                        mxCreateString("wextend"),
                        _mxarray45_,
                        _mxarray33_,
                        NULL));
                    /*
                     * error('*')
                     */
                    mlfError(_mxarray35_, NULL);
                /*
                 * end
                 */
                }
                mxDestroyArray(v_1);
            }
        /*
         * 
         * case {'ar','addrow'}
         */
        } else if (mclSwitchCompare(v_, _mxarray47_)) {
            /*
             * if nargin<5, loc = 'b'; else , loc = testLoc1(location(1)); end
             */
            if (nargin_ < 5) {
                mlfAssign(&loc, _mxarray7_);
            } else {
                mlfAssign(
                  &loc,
                  mlfWextend_testLoc1(
                    mclIntArrayRef1(mclVa(location, "location"), 1)));
            }
            /*
             * location = [loc , 'n'];
             */
            mlfAssign(
              &location, mlfHorzcat(mclVv(loc, "loc"), _mxarray53_, NULL));
            /*
             * x = wextend('2D',mode,x,lf,location);
             */
            mlfAssign(
              &x,
              mlfWextend(
                _mxarray55_,
                mclVa(mode, "mode"),
                mclVa(x, "x"),
                mclVa(lf, "lf"),
                mclVa(location, "location")));
        /*
         * 
         * case {'ac','addcol'}      
         */
        } else if (mclSwitchCompare(v_, _mxarray57_)) {
            /*
             * if nargin<5, loc = 'b'; else , loc = testLoc1(location(1)); end
             */
            if (nargin_ < 5) {
                mlfAssign(&loc, _mxarray7_);
            } else {
                mlfAssign(
                  &loc,
                  mlfWextend_testLoc1(
                    mclIntArrayRef1(mclVa(location, "location"), 1)));
            }
            /*
             * location = ['n' , loc];
             */
            mlfAssign(
              &location, mlfHorzcat(_mxarray53_, mclVv(loc, "loc"), NULL));
            /*
             * x = wextend('2D',mode,x,lf,location);
             */
            mlfAssign(
              &x,
              mlfWextend(
                _mxarray55_,
                mclVa(mode, "mode"),
                mclVa(x, "x"),
                mclVa(lf, "lf"),
                mclVa(location, "location")));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(x, 1, nargout_, "x", "wextend");
    mxDestroyArray(sx);
    mxDestroyArray(loc);
    mxDestroyArray(isrow);
    mxDestroyArray(ext_L);
    mxDestroyArray(ext_R);
    mxDestroyArray(I);
    mxDestroyArray(d);
    mxDestroyArray(d_L);
    mxDestroyArray(d_R);
    mxDestroyArray(ans);
    mxDestroyArray(locRow);
    mxDestroyArray(locCol);
    mxDestroyArray(rx);
    mxDestroyArray(cx);
    mxDestroyArray(location);
    mxDestroyArray(lf);
    mxDestroyArray(mode);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return x;
    /*
     * 
     * %----------------------------------------------------------------------------%
     * % Internal Function(s)
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_testLoc1" is the implementation version of the
 * "wextend/testLoc1" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 173-181). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function location = testLoc1(location)
 */
static mxArray * Mwextend_testLoc1(int nargout_, mxArray * location_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * location = NULL;
    mclCopyInputArg(&location, location_in);
    /*
     * 
     * if ~ischar(location) , location = 'b'; return; end
     */
    if (mclNotBool(mlfIschar(mclVa(location, "location")))) {
        mlfAssign(&location, _mxarray7_);
        goto return_;
    }
    /*
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray63_)) {
        /*
         * case {'n','l','u','b','r','d'}
         * otherwise , location = 'b';
         */
        } else {
            mlfAssign(&location, _mxarray7_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * %----------------------------------------------------------------------------%
     */
    return_:
    mclValidateOutput(location, 1, nargout_, "location", "wextend/testLoc1");
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return location;
}

/*
 * The function "Mwextend_testLoc2" is the implementation version of the
 * "wextend/testLoc2" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 181-187). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [locRow,locCol] = testLoc2(location)
 */
static mxArray * Mwextend_testLoc2(mxArray * * locCol,
                                   int nargout_,
                                   mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * locRow = NULL;
    mclCopyArray(&location);
    /*
     * 
     * if length(location)<2 , location(2) = location(1); end
     */
    if (mclLengthInt(mclVa(location, "location")) < 2) {
        mclIntArrayAssign1(
          &location, mclIntArrayRef1(mclVa(location, "location"), 1), 2);
    }
    /*
     * locRow = testLoc1(location(1)); 
     */
    mlfAssign(
      &locRow,
      mlfWextend_testLoc1(mclIntArrayRef1(mclVa(location, "location"), 1)));
    /*
     * locCol = testLoc1(location(2));
     */
    mlfAssign(
      locCol,
      mlfWextend_testLoc1(mclIntArrayRef1(mclVa(location, "location"), 2)));
    mclValidateOutput(locRow, 1, nargout_, "locRow", "wextend/testLoc2");
    mclValidateOutput(*locCol, 2, nargout_, "locCol", "wextend/testLoc2");
    mxDestroyArray(location);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return locRow;
    /*
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_getZPD_ext" is the implementation version of the
 * "wextend/getZPD_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 187-196). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [ext_L,ext_R] = getZPD_ext(nbr,nbc,location)
 */
static mxArray * Mwextend_getZPD_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * nbr,
                                     mxArray * nbc,
                                     mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * ext_L = NULL;
    mclCopyArray(&nbr);
    mclCopyArray(&nbc);
    mclCopyArray(&location);
    /*
     * 
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * case {'n'}     , ext_L = [];             ext_R = [];
             */
            mlfAssign(&ext_L, _mxarray74_);
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'l','u'} , ext_L = zeros(nbr,nbc); ext_R = [];
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            mlfAssign(
              &ext_L, mlfZeros(mclVa(nbr, "nbr"), mclVa(nbc, "nbc"), NULL));
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'b'}     , ext_L = zeros(nbr,nbc); ext_R = zeros(nbr,nbc);
         */
        } else if (mclSwitchCompare(v_, _mxarray77_)) {
            mlfAssign(
              &ext_L, mlfZeros(mclVa(nbr, "nbr"), mclVa(nbc, "nbc"), NULL));
            mlfAssign(
              ext_R, mlfZeros(mclVa(nbr, "nbr"), mclVa(nbc, "nbc"), NULL));
        /*
         * case {'r','d'} , ext_L = [];             ext_R = zeros(nbr,nbc);
         */
        } else if (mclSwitchCompare(v_, _mxarray78_)) {
            mlfAssign(&ext_L, _mxarray74_);
            mlfAssign(
              ext_R, mlfZeros(mclVa(nbr, "nbr"), mclVa(nbc, "nbc"), NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(ext_L, 1, nargout_, "ext_L", "wextend/getZPD_ext");
    mclValidateOutput(*ext_R, 2, nargout_, "ext_R", "wextend/getZPD_ext");
    mxDestroyArray(location);
    mxDestroyArray(nbc);
    mxDestroyArray(nbr);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ext_L;
    /*
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_getSP0_ext" is the implementation version of the
 * "wextend/getSP0_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 196-209). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [ext_L,ext_R] = getSP0_ext(type,x_L,x_R,lf,location)
 */
static mxArray * Mwextend_getSP0_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * type,
                                     mxArray * x_L,
                                     mxArray * x_R,
                                     mxArray * lf,
                                     mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * ext_L = NULL;
    mxArray * ext_V = NULL;
    mclCopyArray(&type);
    mclCopyArray(&x_L);
    mclCopyArray(&x_R);
    mclCopyArray(&lf);
    mclCopyArray(&location);
    /*
     * 
     * switch type(1)
     */
    {
        mxArray * v_ = mclInitialize(mclIntArrayRef1(mclVa(type, "type"), 1));
        if (mclSwitchCompare(v_, _mxarray69_)) {
            /*
             * case 'r' , ext_V = ones(1,lf);
             */
            mlfAssign(&ext_V, mlfOnes(_mxarray2_, mclVa(lf, "lf"), NULL));
        /*
         * case 'c' , ext_V = ones(lf,1);
         */
        } else if (mclSwitchCompare(v_, _mxarray80_)) {
            mlfAssign(&ext_V, mlfOnes(mclVa(lf, "lf"), _mxarray2_, NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * case {'n'}     , ext_L = [];              ext_R = [];
             */
            mlfAssign(&ext_L, _mxarray74_);
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'l','u'} , ext_L = kron(ext_V,x_L); ext_R = [];
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            mlfAssign(
              &ext_L, mlfKron(mclVv(ext_V, "ext_V"), mclVa(x_L, "x_L")));
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'b'}     , ext_L = kron(ext_V,x_L); ext_R = kron(ext_V,x_R);
         */
        } else if (mclSwitchCompare(v_, _mxarray77_)) {
            mlfAssign(
              &ext_L, mlfKron(mclVv(ext_V, "ext_V"), mclVa(x_L, "x_L")));
            mlfAssign(ext_R, mlfKron(mclVv(ext_V, "ext_V"), mclVa(x_R, "x_R")));
        /*
         * case {'r','d'} , ext_L = [];              ext_R = kron(ext_V,x_R);
         */
        } else if (mclSwitchCompare(v_, _mxarray78_)) {
            mlfAssign(&ext_L, _mxarray74_);
            mlfAssign(ext_R, mlfKron(mclVv(ext_V, "ext_V"), mclVa(x_R, "x_R")));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(ext_L, 1, nargout_, "ext_L", "wextend/getSP0_ext");
    mclValidateOutput(*ext_R, 2, nargout_, "ext_R", "wextend/getSP0_ext");
    mxDestroyArray(ext_V);
    mxDestroyArray(location);
    mxDestroyArray(lf);
    mxDestroyArray(x_R);
    mxDestroyArray(x_L);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ext_L;
    /*
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_getSP1_ext" is the implementation version of the
 * "wextend/getSP1_ext" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 209-230). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [ext_L,ext_R] = getSP1_ext(type,x_L,x_R,d_L,d_R,lf,location)
 */
static mxArray * Mwextend_getSP1_ext(mxArray * * ext_R,
                                     int nargout_,
                                     mxArray * type,
                                     mxArray * x_L,
                                     mxArray * x_R,
                                     mxArray * d_L,
                                     mxArray * d_R,
                                     mxArray * lf,
                                     mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * ext_L = NULL;
    mxArray * ext_VR = NULL;
    mxArray * ext_VL = NULL;
    mxArray * ext_V0 = NULL;
    mclCopyArray(&type);
    mclCopyArray(&x_L);
    mclCopyArray(&x_R);
    mclCopyArray(&d_L);
    mclCopyArray(&d_R);
    mclCopyArray(&lf);
    mclCopyArray(&location);
    /*
     * 
     * switch type(1)
     */
    {
        mxArray * v_ = mclInitialize(mclIntArrayRef1(mclVa(type, "type"), 1));
        if (mclSwitchCompare(v_, _mxarray69_)) {
            /*
             * case 'r' , ext_V0 = ones(1,lf); ext_VL = [lf:-1:1];  ext_VR = [1:lf];
             */
            mlfAssign(&ext_V0, mlfOnes(_mxarray2_, mclVa(lf, "lf"), NULL));
            mlfAssign(
              &ext_VL, mlfColon(mclVa(lf, "lf"), _mxarray82_, _mxarray2_));
            mlfAssign(&ext_VR, mlfColon(_mxarray2_, mclVa(lf, "lf"), NULL));
        /*
         * case 'c' , ext_V0 = ones(lf,1); ext_VL = [lf:-1:1]'; ext_VR = [1:lf]';
         */
        } else if (mclSwitchCompare(v_, _mxarray80_)) {
            mlfAssign(&ext_V0, mlfOnes(mclVa(lf, "lf"), _mxarray2_, NULL));
            mlfAssign(
              &ext_VL,
              mlfCtranspose(
                mlfColon(mclVa(lf, "lf"), _mxarray82_, _mxarray2_)));
            mlfAssign(
              &ext_VR,
              mlfCtranspose(mlfColon(_mxarray2_, mclVa(lf, "lf"), NULL)));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * case {'n'}
             * ext_L = [];
             */
            mlfAssign(&ext_L, _mxarray74_);
            /*
             * ext_R = [];
             */
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'l','u'}
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            /*
             * ext_L = kron(ext_V0,x_L) + kron(ext_VL,d_L);
             */
            mlfAssign(
              &ext_L,
              mclPlus(
                mlfKron(mclVv(ext_V0, "ext_V0"), mclVa(x_L, "x_L")),
                mlfKron(mclVv(ext_VL, "ext_VL"), mclVa(d_L, "d_L"))));
            /*
             * ext_R = [];
             */
            mlfAssign(ext_R, _mxarray74_);
        /*
         * case {'b'}
         */
        } else if (mclSwitchCompare(v_, _mxarray77_)) {
            /*
             * ext_L = kron(ext_V0,x_L) + kron(ext_VL,d_L);
             */
            mlfAssign(
              &ext_L,
              mclPlus(
                mlfKron(mclVv(ext_V0, "ext_V0"), mclVa(x_L, "x_L")),
                mlfKron(mclVv(ext_VL, "ext_VL"), mclVa(d_L, "d_L"))));
            /*
             * ext_R = kron(ext_V0,x_R) + kron(ext_VR,d_R);
             */
            mlfAssign(
              ext_R,
              mclPlus(
                mlfKron(mclVv(ext_V0, "ext_V0"), mclVa(x_R, "x_R")),
                mlfKron(mclVv(ext_VR, "ext_VR"), mclVa(d_R, "d_R"))));
        /*
         * case {'r','d'}
         */
        } else if (mclSwitchCompare(v_, _mxarray78_)) {
            /*
             * ext_L = [];
             */
            mlfAssign(&ext_L, _mxarray74_);
            /*
             * ext_R = kron(ext_V0,x_R) + kron(ext_VR,d_R);
             */
            mlfAssign(
              ext_R,
              mclPlus(
                mlfKron(mclVv(ext_V0, "ext_V0"), mclVa(x_R, "x_R")),
                mlfKron(mclVv(ext_VR, "ext_VR"), mclVa(d_R, "d_R"))));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(ext_L, 1, nargout_, "ext_L", "wextend/getSP1_ext");
    mclValidateOutput(*ext_R, 2, nargout_, "ext_R", "wextend/getSP1_ext");
    mxDestroyArray(ext_V0);
    mxDestroyArray(ext_VL);
    mxDestroyArray(ext_VR);
    mxDestroyArray(location);
    mxDestroyArray(lf);
    mxDestroyArray(d_R);
    mxDestroyArray(d_L);
    mxDestroyArray(x_R);
    mxDestroyArray(x_L);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ext_L;
    /*
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_getPerIndices" is the implementation version of the
 * "wextend/getPerIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 230-243). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function I = getPerIndices(lx,lf,location)
 */
static mxArray * Mwextend_getPerIndices(int nargout_,
                                        mxArray * lx,
                                        mxArray * lf,
                                        mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * I = NULL;
    mclCopyArray(&lx);
    mclCopyArray(&lf);
    mclCopyArray(&location);
    /*
     * 
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * case {'n'}     , I = [1:lx];
             */
            mlfAssign(&I, mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL));
        /*
         * case {'l','u'} , I = [lx-lf+1:lx , 1:lx];
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(
                  mclPlus(
                    mclMinus(mclVa(lx, "lx"), mclVa(lf, "lf")), _mxarray2_),
                  mclVa(lx, "lx"),
                  NULL),
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                NULL));
        /*
         * case {'b'}     , I = [lx-lf+1:lx , 1:lx , 1:lf];
         */
        } else if (mclSwitchCompare(v_, _mxarray77_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(
                  mclPlus(
                    mclMinus(mclVa(lx, "lx"), mclVa(lf, "lf")), _mxarray2_),
                  mclVa(lx, "lx"),
                  NULL),
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                mlfColon(_mxarray2_, mclVa(lf, "lf"), NULL),
                NULL));
        /*
         * case {'r','d'} , I = [1:lx , 1:lf];
         */
        } else if (mclSwitchCompare(v_, _mxarray78_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                mlfColon(_mxarray2_, mclVa(lf, "lf"), NULL),
                NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * if lx<lf
     */
    if (mclLtBool(mclVa(lx, "lx"), mclVa(lf, "lf"))) {
        /*
         * I = mod(I,lx);
         */
        mlfAssign(&I, mlfMod(mclVv(I, "I"), mclVa(lx, "lx")));
        /*
         * I(I==0) = lx;
         */
        mclArrayAssign1(&I, mclVa(lx, "lx"), mclEq(mclVv(I, "I"), _mxarray24_));
    /*
     * end
     */
    }
    mclValidateOutput(I, 1, nargout_, "I", "wextend/getPerIndices");
    mxDestroyArray(location);
    mxDestroyArray(lf);
    mxDestroyArray(lx);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return I;
    /*
     * %----------------------------------------------------------------------------%
     */
}

/*
 * The function "Mwextend_getSymIndices" is the implementation version of the
 * "wextend/getSymIndices" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wextend.m" (lines 243-263). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function I = getSymIndices(lx,lf,location)
 */
static mxArray * Mwextend_getSymIndices(int nargout_,
                                        mxArray * lx,
                                        mxArray * lf,
                                        mxArray * location) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wextend);
    mxArray * I = NULL;
    mxArray * J = NULL;
    mxArray * K = NULL;
    mclCopyArray(&lx);
    mclCopyArray(&lf);
    mclCopyArray(&location);
    /*
     * 
     * switch location
     */
    {
        mxArray * v_ = mclInitialize(mclVa(location, "location"));
        if (mclSwitchCompare(v_, _mxarray73_)) {
            /*
             * case {'n'}     , I = [1:lx];
             */
            mlfAssign(&I, mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL));
        /*
         * case {'l','u'} , I = [lf:-1:1 , 1:lx];
         */
        } else if (mclSwitchCompare(v_, _mxarray75_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(mclVa(lf, "lf"), _mxarray82_, _mxarray2_),
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                NULL));
        /*
         * case {'b'}     , I = [lf:-1:1 , 1:lx , lx:-1:lx-lf+1];
         */
        } else if (mclSwitchCompare(v_, _mxarray77_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(mclVa(lf, "lf"), _mxarray82_, _mxarray2_),
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                mlfColon(
                  mclVa(lx, "lx"),
                  _mxarray82_,
                  mclPlus(
                    mclMinus(mclVa(lx, "lx"), mclVa(lf, "lf")), _mxarray2_)),
                NULL));
        /*
         * case {'r','d'} , I = [1:lx , lx:-1:lx-lf+1];
         */
        } else if (mclSwitchCompare(v_, _mxarray78_)) {
            mlfAssign(
              &I,
              mlfHorzcat(
                mlfColon(_mxarray2_, mclVa(lx, "lx"), NULL),
                mlfColon(
                  mclVa(lx, "lx"),
                  _mxarray82_,
                  mclPlus(
                    mclMinus(mclVa(lx, "lx"), mclVa(lf, "lf")), _mxarray2_)),
                NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * if lx<lf
     */
    if (mclLtBool(mclVa(lx, "lx"), mclVa(lf, "lf"))) {
        /*
         * K = (I<1);
         */
        mlfAssign(&K, mclLt(mclVv(I, "I"), _mxarray2_));
        /*
         * I(K) = 1-I(K);
         */
        mclArrayAssign1(
          &I,
          mclMinus(_mxarray2_, mclArrayRef1(mclVv(I, "I"), mclVv(K, "K"))),
          mclVv(K, "K"));
        /*
         * J = (I>lx);
         */
        mlfAssign(&J, mclGt(mclVv(I, "I"), mclVa(lx, "lx")));
        /*
         * while any(J)
         */
        while (mlfTobool(mlfAny(mclVv(J, "J"), NULL))) {
            /*
             * I(J) = 2*lx+1-I(J);
             */
            mclArrayAssign1(
              &I,
              mclMinus(
                mclPlus(mclMtimes(_mxarray9_, mclVa(lx, "lx")), _mxarray2_),
                mclArrayRef1(mclVv(I, "I"), mclVv(J, "J"))),
              mclVv(J, "J"));
            /*
             * K = (I<1);
             */
            mlfAssign(&K, mclLt(mclVv(I, "I"), _mxarray2_));
            /*
             * I(K) = 1-I(K);
             */
            mclArrayAssign1(
              &I,
              mclMinus(_mxarray2_, mclArrayRef1(mclVv(I, "I"), mclVv(K, "K"))),
              mclVv(K, "K"));
            /*
             * J = (I>lx);
             */
            mlfAssign(&J, mclGt(mclVv(I, "I"), mclVa(lx, "lx")));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    mclValidateOutput(I, 1, nargout_, "I", "wextend/getSymIndices");
    mxDestroyArray(K);
    mxDestroyArray(J);
    mxDestroyArray(location);
    mxDestroyArray(lf);
    mxDestroyArray(lx);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return I;
    /*
     * %----------------------------------------------------------------------------%
     */
}
