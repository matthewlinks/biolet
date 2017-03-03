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
#include "wnoisest.h"
#include "detcoef.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static double _array1_[3] = { 1.0, 2.0, 3.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

static mxChar _array9_[28] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'a', 'r',
                               'g', 'u', 'm', 'e', 'n', 't', ' ', 'v', 'a', 'l',
                               'u', 'e', ' ', 'f', 'o', 'r', ':', ' ' };
static mxArray * _mxarray8_;

static mxChar _array11_[5] = { 'c', 'e', 'l', 'l', 's' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;

void InitializeModule_wnoisest(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeDouble(2.0);
    _mxarray8_ = mclInitializeString(28, _array9_);
    _mxarray10_ = mclInitializeString(5, _array11_);
    _mxarray12_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray13_ = mclInitializeDouble(.6745);
}

void TerminateModule_wnoisest(void) {
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwnoisest(int nargout_, mxArray * c, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_wnoisest
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWnoisest" contains the nargout interface for the
 * "wnoisest" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wnoisest.m" (lines 1-52). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWnoisest(int nargout, mxArray * c, ...) {
    mxArray * varargin = NULL;
    mxArray * stdc = NULL;
    mlfVarargin(&varargin, c, 0);
    mlfEnterNewContext(0, -2, c, varargin);
    stdc = Mwnoisest(nargout, c, varargin);
    mlfRestorePreviousContext(0, 1, c);
    mxDestroyArray(varargin);
    return mlfReturnValue(stdc);
}

/*
 * The function "mlfWnoisest" contains the normal interface for the "wnoisest"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wnoisest.m" (lines 1-52). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWnoisest(mxArray * c, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * stdc = NULL;
    mlfVarargin(&varargin, c, 0);
    mlfEnterNewContext(0, -2, c, varargin);
    stdc = Mwnoisest(nargout, c, varargin);
    mlfRestorePreviousContext(0, 1, c);
    mxDestroyArray(varargin);
    return mlfReturnValue(stdc);
}

/*
 * The function "mlfVWnoisest" contains the void interface for the "wnoisest"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wnoisest.m" (lines 1-52). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWnoisest(mxArray * c, ...) {
    mxArray * varargin = NULL;
    mxArray * stdc = NULL;
    mlfVarargin(&varargin, c, 0);
    mlfEnterNewContext(0, -2, c, varargin);
    stdc = Mwnoisest(0, c, varargin);
    mlfRestorePreviousContext(0, 1, c);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWnoisest" contains the feval interface for the "wnoisest"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wnoisest.m" (lines 1-52). The
 * feval function calls the implementation version of wnoisest through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWnoisest(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wnoisest Line: 1 Column:"
            " 1 The function \"wnoisest\" was called with m"
            "ore than the declared number of outputs (1)."),
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
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mwnoisest(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mwnoisest" is the implementation version of the "wnoisest"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wnoisest.m" (lines 1-52). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function stdc = wnoisest(c,varargin)
 */
static mxArray * Mwnoisest(int nargout_, mxArray * c, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wnoisest);
    int nargin_ = mclNargin(-2, c, varargin, NULL);
    mxArray * stdc = NULL;
    mxArray * k = NULL;
    mxArray * nblev = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&c);
    mclCopyArray(&varargin);
    /*
     * %WNOISEST Estimate noise of 1-D wavelet coefficients.
     * %   STDC = WNOISEST(C,L,S) returns estimates of the detail
     * %   coefficients' standard deviation for levels contained
     * %   in the input vector S.
     * %   [C,L] is the input wavelet decomposition structure
     * %   (see WAVEDEC for more information).
     * %
     * %   If C is a one dimensional cell array, STDC = WNOISEST(C)
     * %   returns a vector such that STDC(k) is an estimate of the
     * %   standard deviation of c{k}.
     * %
     * %   If C is a numeric array, STDC = WNOISEST(C)
     * %   returns a vector such that STDC(k) is an estimate of the
     * %   standard deviation of c(k,:).
     * %  
     * %   The estimator used is Median Absolute Deviation / 0.6745,
     * %   well suited for zero mean Gaussian white noise in the 
     * %   de-noising 1-D model (see THSELECT for more information).
     * %
     * %   See also THSELECT, WAVEDEC, WDEN.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 26-Jul-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:3],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wnoisest"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * if length(varargin)==0
     */
    if (mclLengthInt(mclVa(varargin, "varargin")) == 0) {
        /*
         * if iscell(c)
         */
        if (mlfTobool(mlfIscell(mclVa(c, "c")))) {
            /*
             * nblev = length(c);
             */
            mlfAssign(&nblev, mlfScalar(mclLengthInt(mclVa(c, "c"))));
        /*
         * elseif isnumeric(c)
         */
        } else if (mlfTobool(mlfIsnumeric(mclVa(c, "c")))) {
            /*
             * if size(c,1)>1
             */
            if (mclGtBool(
                  mlfSize(mclValueVarargout(), mclVa(c, "c"), _mxarray6_),
                  _mxarray6_)) {
                /*
                 * c = num2cell(c,2);
                 */
                mlfAssign(&c, mlfNum2cell(mclVa(c, "c"), _mxarray7_));
            /*
             * else
             */
            } else {
                /*
                 * c = num2cell(c(:)',2);
                 */
                mlfAssign(
                  &c,
                  mlfNum2cell(
                    mlfCtranspose(
                      mclArrayRef1(mclVa(c, "c"), mlfCreateColonIndex())),
                    _mxarray7_));
            /*
             * end
             */
            }
            /*
             * nblev = size(c,1);
             */
            mlfAssign(
              &nblev, mlfSize(mclValueVarargout(), mclVa(c, "c"), _mxarray6_));
        /*
         * else
         */
        } else {
            /*
             * error(['Invalid argument value for: ' inputname(c)]);
             */
            mlfError(
              mlfHorzcat(_mxarray8_, mlfInputname(mclVa(c, "c")), NULL), NULL);
        /*
         * end
         */
        }
    /*
     * else
     */
    } else {
        /*
         * c = detcoef(c,varargin{:},'cells');
         */
        mlfAssign(
          &c,
          mclFeval(
            mclValueVarargout(),
            mlxDetcoef,
            mclVa(c, "c"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            _mxarray10_,
            NULL));
        /*
         * nblev = length(c);
         */
        mlfAssign(&nblev, mlfScalar(mclLengthInt(mclVa(c, "c"))));
    /*
     * end
     */
    }
    /*
     * stdc = zeros(1,nblev);
     */
    mlfAssign(&stdc, mlfZeros(_mxarray6_, mclVv(nblev, "nblev"), NULL));
    /*
     * for k = 1:nblev
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(nblev, "nblev"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray12_);
        } else {
            /*
             * stdc(k) = median(abs(c{k}))/0.6745;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign1(
                  &stdc,
                  mclMrdivide(
                    mlfMedian(
                      mclFeval(
                        mclValueVarargout(),
                        mlxAbs,
                        mlfIndexRef(mclVa(c, "c"), "{?}", mlfScalar(v_)),
                        NULL),
                      NULL),
                    _mxarray13_),
                  v_);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    mclValidateOutput(stdc, 1, nargout_, "stdc", "wnoisest");
    mxDestroyArray(ans);
    mxDestroyArray(nblev);
    mxDestroyArray(k);
    mxDestroyArray(varargin);
    mxDestroyArray(c);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return stdc;
}
