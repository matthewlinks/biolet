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
#include "appcoef.h"
#include "detcoef.h"
#include "errargn.h"
#include "errargt.h"
#include "idwt.h"
#include "libmatlbm.h"
#include "wfilters.h"

static double _array1_[3] = { 3.0, 4.0, 5.0 };
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

static mxChar _array12_[19] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd',
                                ' ', 'l', 'e', 'v', 'e', 'l', ' ',
                                'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray11_;

static mxChar _array14_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray13_;
static mxArray * _mxarray15_;
static mxArray * _mxarray16_;

void InitializeModule_appcoef(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(2.0);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeDouble(3.0);
    _mxarray11_ = mclInitializeString(19, _array12_);
    _mxarray13_ = mclInitializeString(3, _array14_);
    _mxarray15_ = mclInitializeDouble(0.0);
    _mxarray16_ = mclInitializeDouble(-1.0);
}

void TerminateModule_appcoef(void) {
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mappcoef(int nargout_,
                          mxArray * c,
                          mxArray * l,
                          mxArray * varargin);

_mexLocalFunctionTable _local_function_table_appcoef
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNAppcoef" contains the nargout interface for the "appcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/appcoef.m" (lines 1-52). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNAppcoef(int nargout, mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    mxArray * a = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    a = Mappcoef(nargout, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
    return mlfReturnValue(a);
}

/*
 * The function "mlfAppcoef" contains the normal interface for the "appcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/appcoef.m" (lines 1-52). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfAppcoef(mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * a = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    a = Mappcoef(nargout, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
    return mlfReturnValue(a);
}

/*
 * The function "mlfVAppcoef" contains the void interface for the "appcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/appcoef.m" (lines 1-52). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVAppcoef(mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    mxArray * a = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    a = Mappcoef(0, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxAppcoef" contains the feval interface for the "appcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/appcoef.m" (lines 1-52). The
 * feval function calls the implementation version of appcoef through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxAppcoef(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: appcoef Line: 1 Column: "
            "1 The function \"appcoef\" was called with mor"
            "e than the declared number of outputs (1)."),
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
    mplhs[0] = Mappcoef(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[2]);
}

/*
 * The function "Mappcoef" is the implementation version of the "appcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/appcoef.m" (lines 1-52). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function a = appcoef(c,l,varargin)
 */
static mxArray * Mappcoef(int nargout_,
                          mxArray * c,
                          mxArray * l,
                          mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_appcoef);
    int nargin_ = mclNargin(-3, c, l, varargin, NULL);
    mxArray * a = NULL;
    mxArray * d = NULL;
    mxArray * p = NULL;
    mxArray * imax = NULL;
    mxArray * n = NULL;
    mxArray * next = NULL;
    mxArray * Hi_R = NULL;
    mxArray * Lo_R = NULL;
    mxArray * nmax = NULL;
    mxArray * rmax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&c);
    mclCopyArray(&l);
    mclCopyArray(&varargin);
    /*
     * %APPCOEF Extract 1-D approximation coefficients.
     * %   APPCOEF computes the approximation coefficients of a
     * %   one-dimensional signal.
     * %
     * %   A = APPCOEF(C,L,'wname',N) computes the approximation
     * %   coefficients at level N using the wavelet decomposition
     * %   structure [C,L] (see WAVEDEC).
     * %   'wname' is a string containing the wavelet name.
     * %   Level N must be an integer such that 0 <= N <= length(L)-2. 
     * %
     * %   A = APPCOEF(C,L,'wname') extracts the approximation
     * %   coefficients at the last level length(L)-2.
     * %
     * %   Instead of giving the wavelet name, you can give the filters.
     * %   For A = APPCOEF(C,L,Lo_R,Hi_R) or
     * %   A = APPCOEF(C,L,Lo_R,Hi_R,N),
     * %   Lo_R is the reconstruction low-pass filter and
     * %   Hi_R is the reconstruction high-pass filter.
     * %   
     * %   See also DETCOEF, WAVEDEC.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3:5],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("appcoef"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * rmax = length(l);
     */
    mlfAssign(&rmax, mlfScalar(mclLengthInt(mclVa(l, "l"))));
    /*
     * nmax = rmax-2;
     */
    mlfAssign(&nmax, mclMinus(mclVv(rmax, "rmax"), _mxarray6_));
    /*
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
        mlfAssign(&next, _mxarray6_);
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
          &Hi_R, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray6_));
        mlfAssign(&next, _mxarray10_);
    /*
     * end
     */
    }
    /*
     * if nargin>=(2+next) , n = varargin{next}; else, n = nmax; end
     */
    if (mclGeBool(
          mlfScalar(nargin_), mclPlus(_mxarray6_, mclVv(next, "next")))) {
        mlfAssign(
          &n,
          mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mclVv(next, "next")));
    } else {
        mlfAssign(&n, mclVv(nmax, "nmax"));
    }
    /*
     * 
     * if (n < 0) | (n > nmax) | (n ~= fix(n))
     */
    {
        mxArray * a_ = mclInitialize(mclLt(mclVv(n, "n"), _mxarray15_));
        if (mlfTobool(a_)) {
            mlfAssign(&a_, mlfScalar(1));
        } else {
            mlfAssign(
              &a_, mclOr(a_, mclGt(mclVv(n, "n"), mclVv(nmax, "nmax"))));
        }
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(a_, mclNe(mclVv(n, "n"), mlfFix(mclVv(n, "n")))))) {
            mxDestroyArray(a_);
            /*
             * errargt(mfilename,'invalid level value','msg'); error('*');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("appcoef"), _mxarray11_, _mxarray13_, NULL));
            mlfError(_mxarray4_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * % Initialization.
     * a = c(1:l(1));
     */
    mlfAssign(
      &a,
      mclArrayRef1(
        mclVa(c, "c"),
        mlfColon(_mxarray7_, mclIntArrayRef1(mclVa(l, "l"), 1), NULL)));
    /*
     * 
     * % Iterated reconstruction.
     * imax = rmax+1;
     */
    mlfAssign(&imax, mclPlus(mclVv(rmax, "rmax"), _mxarray7_));
    /*
     * for p = nmax:-1:n+1
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mclVv(nmax, "nmax"),
               _mxarray16_,
               mclPlus(mclVv(n, "n"), _mxarray7_));
             mclForNext(&viter__, &p);
             ) {
            /*
             * d = detcoef(c,l,p);                % extract detail
             */
            mlfAssign(
              &d,
              mlfNDetcoef(
                0,
                mclValueVarargout(),
                mclVa(c, "c"),
                mclVa(l, "l"),
                mclVv(p, "p"),
                NULL));
            /*
             * a = idwt(a,d,Lo_R,Hi_R,l(imax-p));
             */
            mlfAssign(
              &a,
              mlfNIdwt(
                1,
                mclVv(a, "a"),
                mclVv(d, "d"),
                mclVv(Lo_R, "Lo_R"),
                mclVv(Hi_R, "Hi_R"),
                mclArrayRef1(
                  mclVa(l, "l"), mclMinus(mclVv(imax, "imax"), mclVv(p, "p"))),
                NULL));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    mclValidateOutput(a, 1, nargout_, "a", "appcoef");
    mxDestroyArray(ans);
    mxDestroyArray(rmax);
    mxDestroyArray(nmax);
    mxDestroyArray(Lo_R);
    mxDestroyArray(Hi_R);
    mxDestroyArray(next);
    mxDestroyArray(n);
    mxDestroyArray(imax);
    mxDestroyArray(p);
    mxDestroyArray(d);
    mxDestroyArray(varargin);
    mxDestroyArray(l);
    mxDestroyArray(c);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return a;
}
