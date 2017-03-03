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
#include "idwt.h"
#include "dwtmode.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "upsaconv.h"
#include "wfilters.h"

static double _array1_[7] = { 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

static mxChar _array9_[1] = { 'r' };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;

static mxChar _array13_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray12_;

static mxChar _array15_[4] = { 'm', 'o', 'd', 'e' };
static mxArray * _mxarray14_;

static mxChar _array17_[5] = { 's', 'h', 'i', 'f', 't' };
static mxArray * _mxarray16_;

static mxChar _array19_[2] = { '1', 'D' };
static mxArray * _mxarray18_;

void InitializeModule_idwt(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 7, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeDouble(3.0);
    _mxarray12_ = mclInitializeString(3, _array13_);
    _mxarray14_ = mclInitializeString(4, _array15_);
    _mxarray16_ = mclInitializeString(5, _array17_);
    _mxarray18_ = mclInitializeString(2, _array19_);
}

void TerminateModule_idwt(void) {
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Midwt(int nargout_,
                       mxArray * a,
                       mxArray * d,
                       mxArray * varargin);

_mexLocalFunctionTable _local_function_table_idwt
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNIdwt" contains the nargout interface for the "idwt"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/idwt.m"
 * (lines 1-78). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNIdwt(int nargout, mxArray * a, mxArray * d, ...) {
    mxArray * varargin = NULL;
    mxArray * x = NULL;
    mlfVarargin(&varargin, d, 0);
    mlfEnterNewContext(0, -3, a, d, varargin);
    x = Midwt(nargout, a, d, varargin);
    mlfRestorePreviousContext(0, 2, a, d);
    mxDestroyArray(varargin);
    return mlfReturnValue(x);
}

/*
 * The function "mlfIdwt" contains the normal interface for the "idwt"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/idwt.m"
 * (lines 1-78). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfIdwt(mxArray * a, mxArray * d, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * x = NULL;
    mlfVarargin(&varargin, d, 0);
    mlfEnterNewContext(0, -3, a, d, varargin);
    x = Midwt(nargout, a, d, varargin);
    mlfRestorePreviousContext(0, 2, a, d);
    mxDestroyArray(varargin);
    return mlfReturnValue(x);
}

/*
 * The function "mlfVIdwt" contains the void interface for the "idwt"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/idwt.m"
 * (lines 1-78). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVIdwt(mxArray * a, mxArray * d, ...) {
    mxArray * varargin = NULL;
    mxArray * x = NULL;
    mlfVarargin(&varargin, d, 0);
    mlfEnterNewContext(0, -3, a, d, varargin);
    x = Midwt(0, a, d, varargin);
    mlfRestorePreviousContext(0, 2, a, d);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxIdwt" contains the feval interface for the "idwt"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/idwt.m"
 * (lines 1-78). The feval function calls the implementation version of idwt
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxIdwt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: idwt Line: 1 Column: 1 The function \"idwt\""
            " was called with more than the declared number of outputs (1)."),
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
    mprhs[2] = NULL;
    mlfAssign(&mprhs[2], mclCreateVararginCell(nrhs - 2, prhs + 2));
    mplhs[0] = Midwt(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[2]);
}

/*
 * The function "Midwt" is the implementation version of the "idwt" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/idwt.m" (lines
 * 1-78). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function x = idwt(a,d,varargin)
 */
static mxArray * Midwt(int nargout_,
                       mxArray * a,
                       mxArray * d,
                       mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_idwt);
    int nargin_ = mclNargin(-3, a, d, varargin, NULL);
    mxArray * x = NULL;
    mxArray * k = NULL;
    mxArray * dwtATTR = NULL;
    mxArray * lx = NULL;
    mxArray * next = NULL;
    mxArray * Hi_R = NULL;
    mxArray * Lo_R = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&d);
    mclCopyArray(&varargin);
    /*
     * %IDWT Single-level inverse discrete 1-D wavelet transform.
     * %   IDWT performs a single-level 1-D wavelet reconstruction
     * %   with respect to either a particular wavelet
     * %   ('wname', see WFILTERS for more information) or particular wavelet
     * %   reconstruction filters (Lo_R and Hi_R) that you specify.
     * %
     * %   X = IDWT(CA,CD,'wname') returns the single-level
     * %   reconstructed approximation coefficients vector X
     * %   based on approximation and detail coefficients
     * %   vectors CA and CD, and using the wavelet 'wname'.
     * %
     * %   X = IDWT(CA,CD,Lo_R,Hi_R) reconstructs as above,
     * %   using filters that you specify:
     * %   Lo_R is the reconstruction low-pass filter.
     * %   Hi_R is the reconstruction high-pass filter.
     * %   Lo_R and Hi_R must be the same length.
     * %
     * %   Let LA = length(CA) = length(CD) and LF the length
     * %   of the filters; then length(X) = LX where LX = 2*LA
     * %   if the DWT extension mode is set to periodization.
     * %   LX = 2*LA-LF+2 for the other extension modes.
     * %   For the different DWT extension modes, see DWTMODE. 
     * %
     * %   X = IDWT(CA,CD,'wname',L) or X = IDWT(CA,CD,Lo_R,Hi_R,L)
     * %   returns the length-L central portion of the result
     * %   obtained using IDWT(CA,CD,'wname'). L must be less than LX.
     * %
     * %   X = IDWT(...,'mode',MODE) computes the wavelet
     * %   reconstruction using the specified extension mode MODE.
     * %
     * %   X = IDWT(CA,[], ... ) returns the single-level
     * %   reconstructed approximation coefficients vector X
     * %   based on approximation coefficients vector CA.
     * %   
     * %   X = IDWT([],CD, ... ) returns the single-level
     * %   reconstructed detail coefficients vector X
     * %   based on detail coefficients vector CD.
     * % 
     * %   See also DWT, DWTMODE, UPWLEV.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3:9],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("idwt"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if isempty(a) & isempty(d) , x = []; return; end
     */
    {
        mxArray * a_ = mclInitialize(mlfIsempty(mclVa(a, "a")));
        if (mlfTobool(a_) && mlfTobool(mclAnd(a_, mlfIsempty(mclVa(d, "d"))))) {
            mxDestroyArray(a_);
            mlfAssign(&x, _mxarray6_);
            goto return_;
        } else {
            mxDestroyArray(a_);
        }
    }
    /*
     * 
     * if ischar(varargin{1})
     */
    if (mlfTobool(
          mclFeval(
            mclValueVarargout(),
            mlxIschar,
            mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_),
            NULL))) {
        /*
         * [Lo_R,Hi_R] = wfilters(varargin{1},'r'); next = 2;
         */
        mclFeval(
          mlfVarargout(&Lo_R, &Hi_R, NULL),
          mlxWfilters,
          mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_),
          _mxarray8_,
          NULL);
        mlfAssign(&next, _mxarray10_);
    /*
     * else
     */
    } else {
        /*
         * Lo_R = varargin{1}; Hi_R = varargin{2};  next = 3;
         */
        mlfAssign(
          &Lo_R, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_));
        mlfAssign(
          &Hi_R, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray10_));
        mlfAssign(&next, _mxarray11_);
    /*
     * end
     */
    }
    /*
     * 
     * % Default: Length, Shift and Extension.
     * lx      = [];
     */
    mlfAssign(&lx, _mxarray6_);
    /*
     * dwtATTR = dwtmode('get');
     */
    mlfAssign(&dwtATTR, mlfNDwtmode(0, mclValueVarargout(), _mxarray12_, NULL));
    /*
     * 
     * % Check arguments for Length, Shift and Extension.
     * k = next;
     */
    mlfAssign(&k, mclVv(next, "next"));
    /*
     * while k<=length(varargin)
     */
    while (mclLeBool(
             mclVv(k, "k"),
             mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))))) {
        /*
         * if ischar(varargin{k})
         */
        if (mlfTobool(
              mclFeval(
                mclValueVarargout(),
                mlxIschar,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mclVv(k, "k")),
                NULL))) {
            /*
             * switch varargin{k}
             */
            mxArray * v_
              = mclInitialize(
                  mlfIndexRef(
                    mclVa(varargin, "varargin"), "{?}", mclVv(k, "k")));
            if (mclSwitchCompare(v_, _mxarray14_)) {
                /*
                 * case 'mode'  , dwtATTR.extMode = varargin{k+1};
                 */
                mlfIndexAssign(
                  &dwtATTR,
                  ".extMode",
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclPlus(mclVv(k, "k"), _mxarray7_)));
            /*
             * case 'shift' , dwtATTR.shift1D = mod(varargin{k+1},2);
             */
            } else if (mclSwitchCompare(v_, _mxarray16_)) {
                mlfIndexAssign(
                  &dwtATTR,
                  ".shift1D",
                  mclFeval(
                    mclValueVarargout(),
                    mlxMod,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"),
                      "{?}",
                      mclPlus(mclVv(k, "k"), _mxarray7_)),
                    _mxarray10_,
                    NULL));
            /*
             * end
             */
            }
            mxDestroyArray(v_);
            /*
             * k = k+2;
             */
            mlfAssign(&k, mclPlus(mclVv(k, "k"), _mxarray10_));
        /*
         * else
         */
        } else {
            /*
             * lx = varargin{k}; k = k+1;
             */
            mlfAssign(
              &lx,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mclVv(k, "k")));
            mlfAssign(&k, mclPlus(mclVv(k, "k"), _mxarray7_));
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
     * % Reconstructed Approximation.
     * x = upsaconv('1D',a,Lo_R,lx,dwtATTR)+ ...   % Approximation.
     */
    mlfAssign(
      &x,
      mclPlus(
        mlfUpsaconv(
          _mxarray18_,
          mclVa(a, "a"),
          mclVv(Lo_R, "Lo_R"),
          mclVv(lx, "lx"),
          mclVv(dwtATTR, "dwtATTR"),
          NULL),
        mlfUpsaconv(
          _mxarray18_,
          mclVa(d, "d"),
          mclVv(Hi_R, "Hi_R"),
          mclVv(lx, "lx"),
          mclVv(dwtATTR, "dwtATTR"),
          NULL)));
    /*
     * upsaconv('1D',d,Hi_R,lx,dwtATTR);       % Detail.
     */
    return_:
    mclValidateOutput(x, 1, nargout_, "x", "idwt");
    mxDestroyArray(ans);
    mxDestroyArray(Lo_R);
    mxDestroyArray(Hi_R);
    mxDestroyArray(next);
    mxDestroyArray(lx);
    mxDestroyArray(dwtATTR);
    mxDestroyArray(k);
    mxDestroyArray(varargin);
    mxDestroyArray(d);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return x;
}
