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
#include "dwt.h"
#include "dwtmode.h"
#include "dyaddown.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "wconv.h"
#include "wextend.h"
#include "wfilters.h"
#include "wkeep.h"

static double _array1_[6] = { 2.0, 3.0, 4.0, 5.0, 6.0, 7.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[1] = { 'd' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static mxChar _array12_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray11_;

static mxChar _array14_[4] = { 'm', 'o', 'd', 'e' };
static mxArray * _mxarray13_;

static mxChar _array16_[5] = { 's', 'h', 'i', 'f', 't' };
static mxArray * _mxarray15_;

static mxChar _array18_[3] = { 'p', 'e', 'r' };
static mxArray * _mxarray17_;

static mxChar _array20_[2] = { '1', 'D' };
static mxArray * _mxarray19_;

void InitializeModule_dwt(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 6, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeString(1, _array8_);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeDouble(3.0);
    _mxarray11_ = mclInitializeString(3, _array12_);
    _mxarray13_ = mclInitializeString(4, _array14_);
    _mxarray15_ = mclInitializeString(5, _array16_);
    _mxarray17_ = mclInitializeString(3, _array18_);
    _mxarray19_ = mclInitializeString(2, _array20_);
}

void TerminateModule_dwt(void) {
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfDwt_convdown(mxArray * x,
                                 mxArray * f,
                                 mxArray * lenKEPT,
                                 mxArray * shift);
static void mlxDwt_convdown(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]);
static mxArray * Mdwt(mxArray * * d,
                      int nargout_,
                      mxArray * x,
                      mxArray * varargin);
static mxArray * Mdwt_convdown(int nargout_,
                               mxArray * x,
                               mxArray * f,
                               mxArray * lenKEPT,
                               mxArray * shift);

static mexFunctionTableEntry local_function_table_[1]
  = { { "convdown", mlxDwt_convdown, 4, 1, NULL } };

_mexLocalFunctionTable _local_function_table_dwt = { 1, local_function_table_ };

/*
 * The function "mlfNDwt" contains the nargout interface for the "dwt"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m"
 * (lines 1-78). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNDwt(int nargout, mxArray * * d, mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * a = NULL;
    mxArray * d__ = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(1, -2, d, x, varargin);
    a = Mdwt(&d__, nargout, x, varargin);
    mlfRestorePreviousContext(1, 1, d, x);
    mxDestroyArray(varargin);
    if (d != NULL) {
        mclCopyOutputArg(d, d__);
    } else {
        mxDestroyArray(d__);
    }
    return mlfReturnValue(a);
}

/*
 * The function "mlfDwt" contains the normal interface for the "dwt" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 1-78).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfDwt(mxArray * * d, mxArray * x, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * a = NULL;
    mxArray * d__ = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(1, -2, d, x, varargin);
    if (d != NULL) {
        ++nargout;
    }
    a = Mdwt(&d__, nargout, x, varargin);
    mlfRestorePreviousContext(1, 1, d, x);
    mxDestroyArray(varargin);
    if (d != NULL) {
        mclCopyOutputArg(d, d__);
    } else {
        mxDestroyArray(d__);
    }
    return mlfReturnValue(a);
}

/*
 * The function "mlfVDwt" contains the void interface for the "dwt" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 1-78).
 * The void interface is only produced if the M-function uses the special
 * variable "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVDwt(mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * a = NULL;
    mxArray * d = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    a = Mdwt(&d, 0, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    mxDestroyArray(a);
}

/*
 * The function "mlxDwt" contains the feval interface for the "dwt" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 1-78).
 * The feval function calls the implementation version of dwt through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDwt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dwt Line: 1 Column: 1 The function \"dwt\""
            " was called with more than the declared number of outputs (2)."),
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
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mdwt(&mplhs[1], nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfDwt_convdown" contains the normal interface for the
 * "dwt/convdown" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 78-84). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfDwt_convdown(mxArray * x,
                                 mxArray * f,
                                 mxArray * lenKEPT,
                                 mxArray * shift) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 4, x, f, lenKEPT, shift);
    y = Mdwt_convdown(nargout, x, f, lenKEPT, shift);
    mlfRestorePreviousContext(0, 4, x, f, lenKEPT, shift);
    return mlfReturnValue(y);
}

/*
 * The function "mlxDwt_convdown" contains the feval interface for the
 * "dwt/convdown" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 78-84). The
 * feval function calls the implementation version of dwt/convdown through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlxDwt_convdown(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dwt/convdown Line: 78 Colum"
            "n: 1 The function \"dwt/convdown\" was called wit"
            "h more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dwt/convdown Line: 78 Colum"
            "n: 1 The function \"dwt/convdown\" was called wit"
            "h more than the declared number of inputs (4)."),
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
    mplhs[0] = Mdwt_convdown(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdwt" is the implementation version of the "dwt" M-function
 * from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 1-78).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [a,d] = dwt(x,varargin)
 */
static mxArray * Mdwt(mxArray * * d,
                      int nargout_,
                      mxArray * x,
                      mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dwt);
    int nargin_ = mclNargin(-2, x, varargin, NULL);
    mxArray * a = NULL;
    mxArray * y = NULL;
    mxArray * lenKEPT = NULL;
    mxArray * lenEXT = NULL;
    mxArray * flagPer = NULL;
    mxArray * lx = NULL;
    mxArray * lf = NULL;
    mxArray * k = NULL;
    mxArray * dwtEXTM = NULL;
    mxArray * shift = NULL;
    mxArray * dwtATTR = NULL;
    mxArray * next = NULL;
    mxArray * Hi_D = NULL;
    mxArray * Lo_D = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&varargin);
    /*
     * %DWT Single-level discrete 1-D wavelet transform.
     * %   DWT performs a single-level 1-D wavelet decomposition
     * %   with respect to either a particular wavelet ('wname',
     * %   see WFILTERS for more information) or particular wavelet filters
     * %   (Lo_D and Hi_D) that you specify.
     * %
     * %   [CA,CD] = DWT(X,'wname') computes the approximation
     * %   coefficients vector CA and detail coefficients vector CD,
     * %   obtained by a wavelet decomposition of the vector X.
     * %   'wname' is a string containing the wavelet name.
     * %
     * %   [CA,CD] = DWT(X,Lo_D,Hi_D) computes the wavelet decomposition
     * %   as above given these filters as input:
     * %   Lo_D is the decomposition low-pass filter.
     * %   Hi_D is the decomposition high-pass filter.
     * %   Lo_D and Hi_D must be the same length.
     * %
     * %   Let LX = length(X) and LF = the length of filters; then
     * %   length(CA) = length(CD) = LA where LA = CEIL(LX/2),
     * %   if the DWT extension mode is set to periodization.
     * %   LA = FLOOR((LX+LF-1)/2) for the other extension modes.  
     * %   For the different signal extension modes, see DWTMODE. 
     * %
     * %   [CA,CD] = DWT(...,'mode',MODE) computes the wavelet 
     * %   decomposition with the extension mode MODE you specify.
     * %   MODE is a string containing the extension mode.
     * %   Example: 
     * %     [ca,cd] = dwt(x,'db1','mode','sym');
     * %
     * %   See also DWTMODE, IDWT, WAVEDEC, WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[2:7],nargout,[0:2]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("dwt"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * if ischar(varargin{1})
     */
    if (mlfTobool(
          mclFeval(
            mclValueVarargout(),
            mlxIschar,
            mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray6_),
            NULL))) {
        /*
         * [Lo_D,Hi_D] = wfilters(varargin{1},'d'); next = 2;
         */
        mclFeval(
          mlfVarargout(&Lo_D, &Hi_D, NULL),
          mlxWfilters,
          mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray6_),
          _mxarray7_,
          NULL);
        mlfAssign(&next, _mxarray9_);
    /*
     * else
     */
    } else {
        /*
         * Lo_D = varargin{1}; Hi_D = varargin{2};  next = 3;
         */
        mlfAssign(
          &Lo_D, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray6_));
        mlfAssign(
          &Hi_D, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
        mlfAssign(&next, _mxarray10_);
    /*
     * end
     */
    }
    /*
     * 
     * % Default: Shift and Extension.
     * dwtATTR = dwtmode('get');
     */
    mlfAssign(&dwtATTR, mlfNDwtmode(0, mclValueVarargout(), _mxarray11_, NULL));
    /*
     * shift   = dwtATTR.shift1D;
     */
    mlfAssign(&shift, mlfIndexRef(mclVv(dwtATTR, "dwtATTR"), ".shift1D"));
    /*
     * dwtEXTM = dwtATTR.extMode;
     */
    mlfAssign(&dwtEXTM, mlfIndexRef(mclVv(dwtATTR, "dwtATTR"), ".extMode"));
    /*
     * 
     * % Check arguments for Extension and Shift.
     * for k = next:2:nargin-1
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mclVv(next, "next"),
               _mxarray9_,
               mlfScalar(nargin_ - 1));
             mclForNext(&viter__, &k);
             ) {
            /*
             * switch varargin{k}
             */
            mxArray * v_
              = mclInitialize(
                  mlfIndexRef(
                    mclVa(varargin, "varargin"), "{?}", mclVv(k, "k")));
            if (mclSwitchCompare(v_, _mxarray13_)) {
                /*
                 * case 'mode'  , dwtEXTM = varargin{k+1};
                 */
                mlfAssign(
                  &dwtEXTM,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclPlus(mclVv(k, "k"), _mxarray6_)));
            /*
             * case 'shift' , shift   = mod(varargin{k+1},2);
             */
            } else if (mclSwitchCompare(v_, _mxarray15_)) {
                mlfAssign(
                  &shift,
                  mclFeval(
                    mclValueVarargout(),
                    mlxMod,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"),
                      "{?}",
                      mclPlus(mclVv(k, "k"), _mxarray6_)),
                    _mxarray9_,
                    NULL));
            /*
             * end
             */
            }
            mxDestroyArray(v_);
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * % Compute sizes.
     * lf = length(Lo_D);
     */
    mlfAssign(&lf, mlfScalar(mclLengthInt(mclVv(Lo_D, "Lo_D"))));
    /*
     * lx = length(x);
     */
    mlfAssign(&lx, mlfScalar(mclLengthInt(mclVa(x, "x"))));
    /*
     * 
     * % Extend, Decompose &  Extract coefficients.
     * flagPer = isequal(dwtEXTM,'per');
     */
    mlfAssign(
      &flagPer, mlfIsequal(mclVv(dwtEXTM, "dwtEXTM"), _mxarray17_, NULL));
    /*
     * if ~flagPer
     */
    if (mclNotBool(mclVv(flagPer, "flagPer"))) {
        /*
         * lenEXT = lf-1; lenKEPT = lx+lf-1;
         */
        mlfAssign(&lenEXT, mclMinus(mclVv(lf, "lf"), _mxarray6_));
        mlfAssign(
          &lenKEPT,
          mclMinus(mclPlus(mclVv(lx, "lx"), mclVv(lf, "lf")), _mxarray6_));
    /*
     * else
     */
    } else {
        /*
         * lenEXT = lf/2; lenKEPT = 2*ceil(lx/2);
         */
        mlfAssign(&lenEXT, mclMrdivide(mclVv(lf, "lf"), _mxarray9_));
        mlfAssign(
          &lenKEPT,
          mclMtimes(
            _mxarray9_, mlfCeil(mclMrdivide(mclVv(lx, "lx"), _mxarray9_))));
    /*
     * end
     */
    }
    /*
     * y = wextend('1D',dwtEXTM,x,lenEXT);
     */
    mlfAssign(
      &y,
      mlfWextend(
        _mxarray19_,
        mclVv(dwtEXTM, "dwtEXTM"),
        mclVa(x, "x"),
        mclVv(lenEXT, "lenEXT"),
        NULL));
    /*
     * a = convdown(y,Lo_D,lenKEPT,shift);
     */
    mlfAssign(
      &a,
      mlfDwt_convdown(
        mclVv(y, "y"),
        mclVv(Lo_D, "Lo_D"),
        mclVv(lenKEPT, "lenKEPT"),
        mclVv(shift, "shift")));
    /*
     * d = convdown(y,Hi_D,lenKEPT,shift);
     */
    mlfAssign(
      d,
      mlfDwt_convdown(
        mclVv(y, "y"),
        mclVv(Hi_D, "Hi_D"),
        mclVv(lenKEPT, "lenKEPT"),
        mclVv(shift, "shift")));
    mclValidateOutput(a, 1, nargout_, "a", "dwt");
    mclValidateOutput(*d, 2, nargout_, "d", "dwt");
    mxDestroyArray(ans);
    mxDestroyArray(Lo_D);
    mxDestroyArray(Hi_D);
    mxDestroyArray(next);
    mxDestroyArray(dwtATTR);
    mxDestroyArray(shift);
    mxDestroyArray(dwtEXTM);
    mxDestroyArray(k);
    mxDestroyArray(lf);
    mxDestroyArray(lx);
    mxDestroyArray(flagPer);
    mxDestroyArray(lenEXT);
    mxDestroyArray(lenKEPT);
    mxDestroyArray(y);
    mxDestroyArray(varargin);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return a;
    /*
     * 
     * %-----------------------------------------------------%
     * % Internal Function(s)
     * %-----------------------------------------------------%
     */
}

/*
 * The function "Mdwt_convdown" is the implementation version of the
 * "dwt/convdown" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dwt.m" (lines 78-84). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = convdown(x,f,lenKEPT,shift)
 */
static mxArray * Mdwt_convdown(int nargout_,
                               mxArray * x,
                               mxArray * f,
                               mxArray * lenKEPT,
                               mxArray * shift) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dwt);
    mxArray * y = NULL;
    mclCopyArray(&x);
    mclCopyArray(&f);
    mclCopyArray(&lenKEPT);
    mclCopyArray(&shift);
    /*
     * 
     * y = wconv('1D',x,f);
     */
    mlfAssign(&y, mlfNWconv(1, _mxarray19_, mclVa(x, "x"), mclVa(f, "f")));
    /*
     * y = wkeep(y,lenKEPT);
     */
    mlfAssign(&y, mlfNWkeep(1, mclVv(y, "y"), mclVa(lenKEPT, "lenKEPT"), NULL));
    /*
     * y = dyaddown(y,shift);
     */
    mlfAssign(&y, mlfNDyaddown(1, mclVv(y, "y"), mclVa(shift, "shift"), NULL));
    mclValidateOutput(y, 1, nargout_, "y", "dwt/convdown");
    mxDestroyArray(shift);
    mxDestroyArray(lenKEPT);
    mxDestroyArray(f);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * %-----------------------------------------------------%
     */
}
