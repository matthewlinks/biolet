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
#include "dyaddown.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"

static double _array1_[3] = { 1.0, 2.0, 3.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;

static mxChar _array10_[19] = { 't', 'o', 'o', ' ', 'm', 'a', 'n',
                                'y', ' ', 'a', 'r', 'g', 'u', 'm',
                                'e', 'n', 't', 's', '.' };
static mxArray * _mxarray9_;

static mxChar _array12_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray11_;

static mxChar _array14_[1] = { 'c' };
static mxArray * _mxarray13_;

static mxChar _array16_[1] = { 'r' };
static mxArray * _mxarray15_;

static mxChar _array18_[1] = { 'm' };
static mxArray * _mxarray17_;

static mxChar _array20_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray19_;

void InitializeModule_dyaddown(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDouble(2.0);
    _mxarray9_ = mclInitializeString(19, _array10_);
    _mxarray11_ = mclInitializeString(3, _array12_);
    _mxarray13_ = mclInitializeString(1, _array14_);
    _mxarray15_ = mclInitializeString(1, _array16_);
    _mxarray17_ = mclInitializeString(1, _array18_);
    _mxarray19_ = mclInitializeString(22, _array20_);
}

void TerminateModule_dyaddown(void) {
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdyaddown(int nargout_, mxArray * x, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_dyaddown
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNDyaddown" contains the nargout interface for the
 * "dyaddown" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyaddown.m" (lines 1-92). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNDyaddown(int nargout, mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyaddown(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfDyaddown" contains the normal interface for the "dyaddown"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyaddown.m" (lines 1-92). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfDyaddown(mxArray * x, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyaddown(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVDyaddown" contains the void interface for the "dyaddown"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyaddown.m" (lines 1-92). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVDyaddown(mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyaddown(0, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxDyaddown" contains the feval interface for the "dyaddown"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyaddown.m" (lines 1-92). The
 * feval function calls the implementation version of dyaddown through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDyaddown(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dyaddown Line: 1 Column:"
            " 1 The function \"dyaddown\" was called with m"
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
    mplhs[0] = Mdyaddown(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mdyaddown" is the implementation version of the "dyaddown"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyaddown.m" (lines 1-92). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = dyaddown(x,varargin)
 */
static mxArray * Mdyaddown(int nargout_, mxArray * x, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dyaddown);
    int nargin_ = mclNargin(-2, x, varargin, NULL);
    mxArray * y = NULL;
    mxArray * first = NULL;
    mxArray * o = NULL;
    mxArray * p = NULL;
    mxArray * dim = NULL;
    mxArray * c = NULL;
    mxArray * r = NULL;
    mxArray * nbin = NULL;
    mxArray * def_evenodd = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&varargin);
    /*
     * %DYADDOWN Dyadic downsampling.
     * %   Y = DYADDOWN(X,EVENODD) where X is a vector, and returns
     * %   a version of X that has been downsampled by 2.
     * %   Whether Y contains the even- or odd-indexed samples
     * %   of X depends on the value of positive integer EVENODD:
     * %   If EVENODD is even, then Y(k) = X(2k).
     * %   If EVENODD is odd,  then Y(k) = X(2k-1).
     * %
     * %   Y = DYADDOWN(X) is equivalent to Y = DYADDOWN(X,0)
     * %
     * %   Y = DYADDOWN(X,EVENODD,'type') or 
     * %   Y = DYADDOWN(X,'type',EVENODD) where X is a matrix,
     * %   return a version of X obtained by suppressing columns
     * %   (or rows or both) if 'type' = 'c' (or 'r' or 'm'
     * %   respectively), according to the parameter EVENODD, which
     * %   is as above.
     * %
     * %   Y = DYADDOWN(X) is equivalent to
     * %   Y = DYADDOWN(X,0,'c').
     * %   Y = DYADDOWN(X,'type') is equivalent to
     * %   Y = DYADDOWN(X,0,'type').
     * %   Y = DYADDOWN(X,EVENODD) is equivalent to
     * %   Y = DYADDOWN(X,EVENODD,'c').
     * %
     * %                  |1 2 3 4|                       |2 4|
     * %   Examples : X = |2 4 6 8|  ,  DYADDOWN(X,'c') = |4 8|
     * %                  |3 6 9 0|                       |6 0|
     * %
     * %                       |1 2 3 4|                        |1 3|
     * %   DYADDOWN(X,'r',1) = |3 6 9 0|  , DYADDOWN(X,'m',1) = |3 9|
     * %
     * %   See also DYADUP.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
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
            mxCreateString("dyaddown"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * def_evenodd = 0;
     */
    mlfAssign(&def_evenodd, _mxarray6_);
    /*
     * nbin  = nargin-1;
     */
    mlfAssign(&nbin, mlfScalar(nargin_ - 1));
    /*
     * [r,c] = size(x);
     */
    mlfSize(mlfVarargout(&r, &c, NULL), mclVa(x, "x"), NULL);
    /*
     * 
     * if min(r,c)<=1
     */
    if (mclLeBool(
          mlfMin(NULL, mclVv(r, "r"), mclVv(c, "c"), NULL), _mxarray7_)) {
        /*
         * dim = 1;
         */
        mlfAssign(&dim, _mxarray7_);
        /*
         * switch nbin
         */
        {
            mxArray * v_ = mclInitialize(mclVv(nbin, "nbin"));
            if (mclSwitchCompare(v_, _mxarray7_)) {
                /*
                 * case 1 , if ischar(varargin{1}) , dim = 2; end
                 */
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIschar,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray7_),
                        NULL))) {
                    mlfAssign(&dim, _mxarray8_);
                }
            /*
             * case 2 , if ischar(varargin{1}) | ischar(varargin{2}) , dim = 2; end
             */
            } else if (mclSwitchCompare(v_, _mxarray8_)) {
                mxArray * a_
                  = mclInitialize(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIschar,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray7_),
                        NULL));
                if (mlfTobool(a_)
                    || mlfTobool(
                         mclOr(
                           a_,
                           mclFeval(
                             mclValueVarargout(),
                             mlxIschar,
                             mlfIndexRef(
                               mclVa(varargin, "varargin"), "{?}", _mxarray8_),
                             NULL)))) {
                    mxDestroyArray(a_);
                    mlfAssign(&dim, _mxarray8_);
                } else {
                    mxDestroyArray(a_);
                }
            /*
             * end
             */
            }
            mxDestroyArray(v_);
        }
    /*
     * else
     */
    } else {
        /*
         * dim = 2;
         */
        mlfAssign(&dim, _mxarray8_);
    /*
     * end
     */
    }
    /*
     * 
     * if dim==1
     */
    if (mclEqBool(mclVv(dim, "dim"), _mxarray7_)) {
        /*
         * switch nbin
         */
        mxArray * v_ = mclInitialize(mclVv(nbin, "nbin"));
        if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * case 0 ,    p = def_evenodd;
             */
            mlfAssign(&p, mclVv(def_evenodd, "def_evenodd"));
        /*
         * case 1 ,    p = varargin{1};
         */
        } else if (mclSwitchCompare(v_, _mxarray7_)) {
            mlfAssign(
              &p, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_));
        /*
         * otherwise , errargt(mfilename,'too many arguments.','msg'); error('*');
         */
        } else {
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("dyaddown"), _mxarray9_, _mxarray11_, NULL));
            mlfError(_mxarray4_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
        /*
         * y = x(2-rem(p,2):2:end);
         */
        mlfAssign(
          &y,
          mclArrayRef1(
            mclVa(x, "x"),
            mlfColon(
              mclMinus(_mxarray8_, mlfRem(mclVv(p, "p"), _mxarray8_)),
              _mxarray8_,
              mlfEnd(mclVa(x, "x"), _mxarray7_, _mxarray7_))));
    /*
     * else
     */
    } else {
        /*
         * switch nbin
         */
        mxArray * v_ = mclInitialize(mclVv(nbin, "nbin"));
        if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * case 0
             * o = 'c'; p = def_evenodd;
             */
            mlfAssign(&o, _mxarray13_);
            mlfAssign(&p, mclVv(def_evenodd, "def_evenodd"));
        /*
         * 
         * case 1 
         */
        } else if (mclSwitchCompare(v_, _mxarray7_)) {
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
                 * p = def_evenodd; o = lower(varargin{1}(1));
                 */
                mlfAssign(&p, mclVv(def_evenodd, "def_evenodd"));
                mlfAssign(
                  &o,
                  mclFeval(
                    mclValueVarargout(),
                    mlxLower,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"),
                      "{?}(?)",
                      _mxarray7_,
                      _mxarray7_),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * p = varargin{1}; o = 'c';
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_));
                mlfAssign(&o, _mxarray13_);
            /*
             * end
             */
            }
        /*
         * 
         * otherwise
         */
        } else {
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
                 * p = varargin{2}; o = lower(varargin{1}(1));
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_));
                mlfAssign(
                  &o,
                  mclFeval(
                    mclValueVarargout(),
                    mlxLower,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"),
                      "{?}(?)",
                      _mxarray7_,
                      _mxarray7_),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * p = varargin{1}; o = lower(varargin{2}(1));
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_));
                mlfAssign(
                  &o,
                  mclFeval(
                    mclValueVarargout(),
                    mlxLower,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"),
                      "{?}(?)",
                      _mxarray8_,
                      _mxarray7_),
                    NULL));
            /*
             * end
             */
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
        /*
         * first = 2-rem(p,2);
         */
        mlfAssign(
          &first, mclMinus(_mxarray8_, mlfRem(mclVv(p, "p"), _mxarray8_)));
        /*
         * switch o
         */
        {
            mxArray * v_ = mclInitialize(mclVv(o, "o"));
            if (mclSwitchCompare(v_, _mxarray13_)) {
                /*
                 * case 'c'  , y = x(:,first:2:c);
                 */
                mlfAssign(
                  &y,
                  mclArrayRef2(
                    mclVa(x, "x"),
                    mlfCreateColonIndex(),
                    mlfColon(
                      mclVv(first, "first"), _mxarray8_, mclVv(c, "c"))));
            /*
             * case 'r'  , y = x(first:2:r,:);
             */
            } else if (mclSwitchCompare(v_, _mxarray15_)) {
                mlfAssign(
                  &y,
                  mclArrayRef2(
                    mclVa(x, "x"),
                    mlfColon(mclVv(first, "first"), _mxarray8_, mclVv(r, "r")),
                    mlfCreateColonIndex()));
            /*
             * case 'm'  , y = x(first:2:r,first:2:c);
             */
            } else if (mclSwitchCompare(v_, _mxarray17_)) {
                mlfAssign(
                  &y,
                  mclArrayRef2(
                    mclVa(x, "x"),
                    mlfColon(mclVv(first, "first"), _mxarray8_, mclVv(r, "r")),
                    mlfColon(
                      mclVv(first, "first"), _mxarray8_, mclVv(c, "c"))));
            /*
             * otherwise , errargt(mfilename,'invalid argument value','msg'); error('*');
             */
            } else {
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("dyaddown"),
                    _mxarray19_,
                    _mxarray11_,
                    NULL));
                mlfError(_mxarray4_, NULL);
            /*
             * end
             */
            }
            mxDestroyArray(v_);
        }
    /*
     * end
     */
    }
    mclValidateOutput(y, 1, nargout_, "y", "dyaddown");
    mxDestroyArray(ans);
    mxDestroyArray(def_evenodd);
    mxDestroyArray(nbin);
    mxDestroyArray(r);
    mxDestroyArray(c);
    mxDestroyArray(dim);
    mxDestroyArray(p);
    mxDestroyArray(o);
    mxDestroyArray(first);
    mxDestroyArray(varargin);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * 
     */
}
