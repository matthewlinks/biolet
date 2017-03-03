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
#include "wconv.h"
#include "errargn.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static double _array2_[2] = { 0.0, 1.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;
static mxArray * _mxarray7_;

static mxChar _array9_[1] = { '1' };
static mxArray * _mxarray8_;

static mxChar _array11_[2] = { '1', 'd' };
static mxArray * _mxarray10_;

static mxChar _array13_[2] = { '1', 'D' };
static mxArray * _mxarray12_;

static mxArray * _array6_[4] = { NULL /*_mxarray7_*/, NULL /*_mxarray8_*/,
                                 NULL /*_mxarray10_*/, NULL /*_mxarray12_*/ };
static mxArray * _mxarray5_;
static mxArray * _mxarray16_;

static mxChar _array18_[1] = { '2' };
static mxArray * _mxarray17_;

static mxChar _array20_[2] = { '2', 'd' };
static mxArray * _mxarray19_;

static mxChar _array22_[2] = { '2', 'D' };
static mxArray * _mxarray21_;

static mxArray * _array15_[4] = { NULL /*_mxarray16_*/, NULL /*_mxarray17_*/,
                                  NULL /*_mxarray19_*/, NULL /*_mxarray21_*/ };
static mxArray * _mxarray14_;

static mxChar _array26_[1] = { 'r' };
static mxArray * _mxarray25_;

static mxChar _array28_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray27_;

static mxArray * _array24_[2] = { NULL /*_mxarray25_*/, NULL /*_mxarray27_*/ };
static mxArray * _mxarray23_;

static mxChar _array32_[1] = { 'c' };
static mxArray * _mxarray31_;

static mxChar _array34_[3] = { 'c', 'o', 'l' };
static mxArray * _mxarray33_;

static mxArray * _array30_[2] = { NULL /*_mxarray31_*/, NULL /*_mxarray33_*/ };
static mxArray * _mxarray29_;

void InitializeModule_wconv(void) {
    _mxarray0_ = mclInitializeDouble(3.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 2, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray7_ = mclInitializeDouble(1.0);
    _array6_[0] = _mxarray7_;
    _mxarray8_ = mclInitializeString(1, _array9_);
    _array6_[1] = _mxarray8_;
    _mxarray10_ = mclInitializeString(2, _array11_);
    _array6_[2] = _mxarray10_;
    _mxarray12_ = mclInitializeString(2, _array13_);
    _array6_[3] = _mxarray12_;
    _mxarray5_ = mclInitializeCellVector(1, 4, _array6_);
    _mxarray16_ = mclInitializeDouble(2.0);
    _array15_[0] = _mxarray16_;
    _mxarray17_ = mclInitializeString(1, _array18_);
    _array15_[1] = _mxarray17_;
    _mxarray19_ = mclInitializeString(2, _array20_);
    _array15_[2] = _mxarray19_;
    _mxarray21_ = mclInitializeString(2, _array22_);
    _array15_[3] = _mxarray21_;
    _mxarray14_ = mclInitializeCellVector(1, 4, _array15_);
    _mxarray25_ = mclInitializeString(1, _array26_);
    _array24_[0] = _mxarray25_;
    _mxarray27_ = mclInitializeString(3, _array28_);
    _array24_[1] = _mxarray27_;
    _mxarray23_ = mclInitializeCellVector(1, 2, _array24_);
    _mxarray31_ = mclInitializeString(1, _array32_);
    _array30_[0] = _mxarray31_;
    _mxarray33_ = mclInitializeString(3, _array34_);
    _array30_[1] = _mxarray33_;
    _mxarray29_ = mclInitializeCellVector(1, 2, _array30_);
}

void TerminateModule_wconv(void) {
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwconv(int nargout_, mxArray * type, mxArray * x, mxArray * f);

_mexLocalFunctionTable _local_function_table_wconv
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWconv" contains the nargout interface for the "wconv"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wconv.m"
 * (lines 1-38). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNWconv(int nargout, mxArray * type, mxArray * x, mxArray * f) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, type, x, f);
    y = Mwconv(nargout, type, x, f);
    mlfRestorePreviousContext(0, 3, type, x, f);
    return mlfReturnValue(y);
}

/*
 * The function "mlfWconv" contains the normal interface for the "wconv"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wconv.m"
 * (lines 1-38). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfWconv(mxArray * type, mxArray * x, mxArray * f) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, type, x, f);
    y = Mwconv(nargout, type, x, f);
    mlfRestorePreviousContext(0, 3, type, x, f);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVWconv" contains the void interface for the "wconv"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wconv.m"
 * (lines 1-38). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWconv(mxArray * type, mxArray * x, mxArray * f) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, type, x, f);
    y = Mwconv(0, type, x, f);
    mlfRestorePreviousContext(0, 3, type, x, f);
    mxDestroyArray(y);
}

/*
 * The function "mlxWconv" contains the feval interface for the "wconv"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wconv.m"
 * (lines 1-38). The feval function calls the implementation version of wconv
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWconv(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wconv Line: 1 Column: 1 The function \"wconv"
            "\" was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wconv Line: 1 Column: 1 The function \"wconv"
            "\" was called with more than the declared number of inputs (3)."),
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
    mplhs[0] = Mwconv(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwconv" is the implementation version of the "wconv"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wconv.m"
 * (lines 1-38). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function y = wconv(type,x,f)
 */
static mxArray * Mwconv(int nargout_,
                        mxArray * type,
                        mxArray * x,
                        mxArray * f) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wconv);
    int nargin_ = mclNargin(3, type, x, f, NULL);
    mxArray * y = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&type);
    mclCopyArray(&x);
    mclCopyArray(&f);
    /*
     * %WCONV  1-D or 2-D Convolution.
     * %   Y = WCONV(TYPE,X,F) performs the 1-D or 2-D
     * %   convolution of X and F.
     * %
     * %   Y = WCONV(TYPE,X,F) with TYPE = {1,'1','1d' or '1D'}
     * %   and if X and F are vectors, performs the 1-D 
     * %   convolution of X and F.
     * %    
     * %   Y = WCONV(TYPE,X,F) with TYPE = {2,'2','2d' or '2D'}
     * %   and if X and F are matrices, performs the 2-D 
     * %   convolution of X and F.
     * %
     * %   Y = WCONV('r',X,F) or Y = WCONV('row',X,F)
     * %   if X is a matrix and F a vector, performs 
     * %   the 1-D convolution of the rows of X and F.
     * %
     * %   Y = WCONV('c',X,F) or Y = WCONV('col',X,F)
     * %   if X is a matrix and F a vector, performs 
     * %   the 1-D convolution of the columns of X and F.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 15-Nov-97.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wconv"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * switch type
     */
    {
        mxArray * v_ = mclInitialize(mclVa(type, "type"));
        if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * case {1,'1','1d','1D'}
             * y = conv2(x(:)',f(:)'); if size(x,1)>1 , y = y'; end
             */
            mlfAssign(
              &y,
              mlfConv2(
                mlfCtranspose(
                  mclArrayRef1(mclVa(x, "x"), mlfCreateColonIndex())),
                mlfCtranspose(
                  mclArrayRef1(mclVa(f, "f"), mlfCreateColonIndex())),
                NULL,
                NULL));
            if (mclGtBool(
                  mlfSize(mclValueVarargout(), mclVa(x, "x"), _mxarray7_),
                  _mxarray7_)) {
                mlfAssign(&y, mlfCtranspose(mclVv(y, "y")));
            }
        /*
         * 
         * case {2,'2','2d','2D'}, y = conv2(x,f);
         */
        } else if (mclSwitchCompare(v_, _mxarray14_)) {
            mlfAssign(&y, mlfConv2(mclVa(x, "x"), mclVa(f, "f"), NULL, NULL));
        /*
         * case {'r','row'}, y = conv2(x,f(:)');
         */
        } else if (mclSwitchCompare(v_, _mxarray23_)) {
            mlfAssign(
              &y,
              mlfConv2(
                mclVa(x, "x"),
                mlfCtranspose(
                  mclArrayRef1(mclVa(f, "f"), mlfCreateColonIndex())),
                NULL,
                NULL));
        /*
         * case {'c','col'}, y = conv2(x',f(:)'); y = y';
         */
        } else if (mclSwitchCompare(v_, _mxarray29_)) {
            mlfAssign(
              &y,
              mlfConv2(
                mlfCtranspose(mclVa(x, "x")),
                mlfCtranspose(
                  mclArrayRef1(mclVa(f, "f"), mlfCreateColonIndex())),
                NULL,
                NULL));
            mlfAssign(&y, mlfCtranspose(mclVv(y, "y")));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(y, 1, nargout_, "y", "wconv");
    mxDestroyArray(ans);
    mxDestroyArray(f);
    mxDestroyArray(x);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
