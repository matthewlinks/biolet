/*
 * MATLAB Compiler: 3.0
 * Date: Thu May  3 10:27:13 2007
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "./src/wavelet.m" "-d"
 * "./build" "-I" "/usr/local/matlab6p5/toolbox/wavelet/wavelet/" "-I"
 * "/usr/local/matlab6p5/toolbox/matlab/general/" "-W" "main" "-T" "link:exe"
 * "-v" 
 */
#include "wavedec.h"
#include "dwt.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "wfilters.h"

static double _array1_[2] = { 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;

static mxChar _array7_[3] = { 'i', 'n', 't' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array10_[1] = { 'd' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;

void InitializeModule_wavedec(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeString(3, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeString(1, _array10_);
    _mxarray11_ = mclInitializeDouble(2.0);
    _mxarray12_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_wavedec(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwavedec(mxArray * * l,
                          int nargout_,
                          mxArray * x,
                          mxArray * n,
                          mxArray * varargin);

_mexLocalFunctionTable _local_function_table_wavedec
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWavedec" contains the nargout interface for the "wavedec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wavedec.m" (lines 1-55). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWavedec(int nargout,
                      mxArray * * l,
                      mxArray * x,
                      mxArray * n,
                      ...) {
    mxArray * varargin = NULL;
    mxArray * c = NULL;
    mxArray * l__ = NULL;
    mlfVarargin(&varargin, n, 0);
    mlfEnterNewContext(1, -3, l, x, n, varargin);
    c = Mwavedec(&l__, nargout, x, n, varargin);
    mlfRestorePreviousContext(1, 2, l, x, n);
    mxDestroyArray(varargin);
    if (l != NULL) {
        mclCopyOutputArg(l, l__);
    } else {
        mxDestroyArray(l__);
    }
    return mlfReturnValue(c);
}

/*
 * The function "mlfWavedec" contains the normal interface for the "wavedec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wavedec.m" (lines 1-55). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWavedec(mxArray * * l, mxArray * x, mxArray * n, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * c = NULL;
    mxArray * l__ = NULL;
    mlfVarargin(&varargin, n, 0);
    mlfEnterNewContext(1, -3, l, x, n, varargin);
    if (l != NULL) {
        ++nargout;
    }
    c = Mwavedec(&l__, nargout, x, n, varargin);
    mlfRestorePreviousContext(1, 2, l, x, n);
    mxDestroyArray(varargin);
    if (l != NULL) {
        mclCopyOutputArg(l, l__);
    } else {
        mxDestroyArray(l__);
    }
    return mlfReturnValue(c);
}

/*
 * The function "mlfVWavedec" contains the void interface for the "wavedec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wavedec.m" (lines 1-55). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWavedec(mxArray * x, mxArray * n, ...) {
    mxArray * varargin = NULL;
    mxArray * c = NULL;
    mxArray * l = NULL;
    mlfVarargin(&varargin, n, 0);
    mlfEnterNewContext(0, -3, x, n, varargin);
    c = Mwavedec(&l, 0, x, n, varargin);
    mlfRestorePreviousContext(0, 2, x, n);
    mxDestroyArray(varargin);
    mxDestroyArray(c);
}

/*
 * The function "mlxWavedec" contains the feval interface for the "wavedec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wavedec.m" (lines 1-55). The
 * feval function calls the implementation version of wavedec through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWavedec(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavedec Line: 1 Column: "
            "1 The function \"wavedec\" was called with mor"
            "e than the declared number of outputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
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
    mplhs[0] = Mwavedec(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
    mxDestroyArray(mprhs[2]);
}

/*
 * The function "Mwavedec" is the implementation version of the "wavedec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wavedec.m" (lines 1-55). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [c,l] = wavedec(x,n,varargin)
 */
static mxArray * Mwavedec(mxArray * * l,
                          int nargout_,
                          mxArray * x,
                          mxArray * n,
                          mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavedec);
    int nargin_ = mclNargin(-3, x, n, varargin, NULL);
    mxArray * c = NULL;
    mxArray * d = NULL;
    mxArray * k = NULL;
    mxArray * s = NULL;
    mxArray * Hi_D = NULL;
    mxArray * Lo_D = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&n);
    mclCopyArray(&varargin);
    /*
     * %WAVEDEC Multi-level 1-D wavelet decomposition.
     * %   WAVEDEC performs a multilevel 1-D wavelet analysis
     * %   using either a specific wavelet 'wname' or a specific set 
     * %   of wavelet decomposition filters (see WFILTERS).
     * %
     * %   [C,L] = WAVEDEC(X,N,'wname') returns the wavelet
     * %   decomposition of the signal X at level N, using 'wname'.
     * %
     * %   N must be a strictly positive integer (see WMAXLEV).
     * %   The output decomposition structure contains the wavelet
     * %   decomposition vector C and the bookkeeping vector L.
     * %
     * %   For [C,L] = WAVEDEC(X,N,Lo_D,Hi_D),
     * %   Lo_D is the decomposition low-pass filter and
     * %   Hi_D is the decomposition high-pass filter.
     * %
     * %   The structure is organized as:
     * %   C      = [app. coef.(N)|det. coef.(N)|... |det. coef.(1)]
     * %   L(1)   = length of app. coef.(N)
     * %   L(i)   = length of det. coef.(N-i+2) for i = 2,...,N+1
     * %   L(N+2) = length(X).
     * %
     * %   See also DWT, WAVEINFO, WAVEREC, WFILTERS, WMAXLEV.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 04-Dec-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $ $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3:4],nargout,[0:2]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wavedec"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if errargt(mfilename,n,'int'), error('*'), end
     */
    if (mlfTobool(
          mlfErrargt(
            mxCreateString("wavedec"), mclVa(n, "n"), _mxarray6_, NULL))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin==3
     */
    if (nargin_ == 3) {
        /*
         * [Lo_D,Hi_D] = wfilters(varargin{1},'d');
         */
        mclFeval(
          mlfVarargout(&Lo_D, &Hi_D, NULL),
          mlxWfilters,
          mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_),
          _mxarray9_,
          NULL);
    /*
     * else
     */
    } else {
        /*
         * Lo_D = varargin{1};   Hi_D = varargin{2};
         */
        mlfAssign(
          &Lo_D, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_));
        mlfAssign(
          &Hi_D, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray11_));
    /*
     * end
     */
    }
    /*
     * 
     * % Initialization.
     * s = size(x); x = x(:)'; % row vector
     */
    mlfAssign(&s, mlfSize(mclValueVarargout(), mclVa(x, "x"), NULL));
    mlfAssign(
      &x, mlfCtranspose(mclArrayRef1(mclVa(x, "x"), mlfCreateColonIndex())));
    /*
     * c = [];      l = [length(x)];
     */
    mlfAssign(&c, _mxarray12_);
    mlfAssign(l, mlfScalar(mclLengthInt(mclVa(x, "x"))));
    /*
     * 
     * for k = 1:n
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(n, "n"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray12_);
        } else {
            /*
             * [x,d] = dwt(x,Lo_D,Hi_D); % decomposition
             * c     = [d c];            % store detail
             * l     = [length(d) l];    % store length
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &x,
                  mlfNDwt(
                    2,
                    &d,
                    mclVa(x, "x"),
                    mclVv(Lo_D, "Lo_D"),
                    mclVv(Hi_D, "Hi_D"),
                    NULL));
                mlfAssign(&c, mlfHorzcat(mclVv(d, "d"), mclVv(c, "c"), NULL));
                mlfAssign(
                  l,
                  mlfHorzcat(
                    mlfScalar(mclLengthInt(mclVv(d, "d"))),
                    mclVv(*l, "l"),
                    NULL));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    /*
     * 
     * % Last approximation.
     * c = [x c];
     */
    mlfAssign(&c, mlfHorzcat(mclVa(x, "x"), mclVv(c, "c"), NULL));
    /*
     * l = [length(x) l];
     */
    mlfAssign(
      l,
      mlfHorzcat(mlfScalar(mclLengthInt(mclVa(x, "x"))), mclVv(*l, "l"), NULL));
    /*
     * 
     * if s(1)>1, c = c'; l = l'; end
     */
    if (mclGtBool(mclIntArrayRef1(mclVv(s, "s"), 1), _mxarray8_)) {
        mlfAssign(&c, mlfCtranspose(mclVv(c, "c")));
        mlfAssign(l, mlfCtranspose(mclVv(*l, "l")));
    }
    mclValidateOutput(c, 1, nargout_, "c", "wavedec");
    mclValidateOutput(*l, 2, nargout_, "l", "wavedec");
    mxDestroyArray(ans);
    mxDestroyArray(Lo_D);
    mxDestroyArray(Hi_D);
    mxDestroyArray(s);
    mxDestroyArray(k);
    mxDestroyArray(d);
    mxDestroyArray(varargin);
    mxDestroyArray(n);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return c;
}
