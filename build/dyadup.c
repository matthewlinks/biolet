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
#include "dyadup.h"
#include "mwservices.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"

static double _array1_[4] = { 1.0, 2.0, 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray11_;

static mxArray * _array10_[2] = { NULL /*_mxarray7_*/, NULL /*_mxarray11_*/ };
static mxArray * _mxarray9_;
static mxArray * _mxarray12_;

static mxArray * _array14_[2] = { NULL /*_mxarray7_*/, NULL /*_mxarray12_*/ };
static mxArray * _mxarray13_;

static mxChar _array16_[18] = { 't', 'o', 'o', ' ', 'm', 'a', 'n', 'y', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray15_;

static mxChar _array18_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray17_;

static mxChar _array20_[1] = { 'c' };
static mxArray * _mxarray19_;

static mxChar _array22_[1] = { 'r' };
static mxArray * _mxarray21_;

static mxChar _array24_[1] = { 'm' };
static mxArray * _mxarray23_;

static mxChar _array26_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray25_;

void InitializeModule_dyadup(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 4, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDouble(0.0);
    _array10_[0] = _mxarray7_;
    _mxarray11_ = mclInitializeDouble(3.0);
    _array10_[1] = _mxarray11_;
    _mxarray9_ = mclInitializeCellVector(1, 2, _array10_);
    _mxarray12_ = mclInitializeDouble(2.0);
    _array14_[0] = _mxarray7_;
    _array14_[1] = _mxarray12_;
    _mxarray13_ = mclInitializeCellVector(1, 2, _array14_);
    _mxarray15_ = mclInitializeString(18, _array16_);
    _mxarray17_ = mclInitializeString(3, _array18_);
    _mxarray19_ = mclInitializeString(1, _array20_);
    _mxarray21_ = mclInitializeString(1, _array22_);
    _mxarray23_ = mclInitializeString(1, _array24_);
    _mxarray25_ = mclInitializeString(22, _array26_);
}

void TerminateModule_dyadup(void) {
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdyadup(int nargout_, mxArray * x, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_dyadup
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNDyadup" contains the nargout interface for the "dyadup"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyadup.m"
 * (lines 1-130). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNDyadup(int nargout, mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyadup(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfDyadup" contains the normal interface for the "dyadup"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyadup.m"
 * (lines 1-130). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
mxArray * mlfDyadup(mxArray * x, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyadup(nargout, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVDyadup" contains the void interface for the "dyadup"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyadup.m"
 * (lines 1-130). The void interface is only produced if the M-function uses
 * the special variable "nargout", and has at least one output. The void
 * interface function specifies zero output arguments to the implementation
 * version of the function, and in the event that the implementation version
 * still returns an output (which, in MATLAB, would be assigned to the "ans"
 * variable), it deallocates the output. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlfVDyadup(mxArray * x, ...) {
    mxArray * varargin = NULL;
    mxArray * y = NULL;
    mlfVarargin(&varargin, x, 0);
    mlfEnterNewContext(0, -2, x, varargin);
    y = Mdyadup(0, x, varargin);
    mlfRestorePreviousContext(0, 1, x);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxDyadup" contains the feval interface for the "dyadup"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyadup.m"
 * (lines 1-130). The feval function calls the implementation version of dyadup
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxDyadup(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dyadup Line: 1 Column: "
            "1 The function \"dyadup\" was called with mor"
            "e than the declared number of outputs (1)."),
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
    mplhs[0] = Mdyadup(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mdyadup" is the implementation version of the "dyadup"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dyadup.m"
 * (lines 1-130). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function y = dyadup(x,varargin)
 */
static mxArray * Mdyadup(int nargout_, mxArray * x, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dyadup);
    int nargin_ = mclNargin(-2, x, varargin, NULL);
    mxArray * y = NULL;
    mxArray * nr = NULL;
    mxArray * nc = NULL;
    mxArray * o = NULL;
    mxArray * l = NULL;
    mxArray * addLEN = NULL;
    mxArray * rem2 = NULL;
    mxArray * p = NULL;
    mxArray * dim = NULL;
    mxArray * evenLEN = NULL;
    mxArray * c = NULL;
    mxArray * r = NULL;
    mxArray * nbin = NULL;
    mxArray * def_evenodd = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&varargin);
    /*
     * %DYADUP Dyadic upsampling.
     * %   DYADUP implements a simple zero-padding scheme very
     * %   useful in the wavelet reconstruction algorithm.
     * %
     * %   Y = DYADUP(X,EVENODD), where X is a vector, returns
     * %   an extended copy of vector X obtained by inserting zeros.
     * %   Whether the zeros are inserted as even- or odd-indexed
     * %   elements of Y depends on the value of positive integer
     * %   EVENODD:
     * %   If EVENODD is even, then Y(2k-1) = X(k), Y(2k) = 0.
     * %   If EVENODD is odd,  then Y(2k-1) = 0   , Y(2k) = X(k).
     * %
     * %   Y = DYADUP(X) is equivalent to Y = DYADUP(X,1)
     * %
     * %   Y = DYADUP(X,EVENODD,'type') or
     * %   Y = DYADUP(X,'type',EVENODD) where X is a matrix,
     * %   return extended copies of X obtained by inserting columns 
     * %   of zeros (or rows or both) if 'type' = 'c' (or 'r' or 'm'
     * %   respectively), according to the parameter EVENODD, which
     * %   is as above.
     * %
     * %   Y = DYADUP(X) is equivalent to
     * %   Y = DYADUP(X,1,'c')
     * %   Y = DYADUP(X,'type')  is equivalent to
     * %   Y = DYADUP(X,1,'type')
     * %   Y = DYADUP(X,EVENODD) is equivalent to
     * %   Y = DYADUP(X,EVENODD,'c') 
     * %
     * %                  |1 2|                     |0 1 0 2 0|
     * %   Examples : X = |3 4|  ,  DYADUP(X,'c') = |0 3 0 4 0|
     * %
     * %                     |1 2|                      |1 0 2|
     * %   DYADUP(X,'r',0) = |0 0|  , DYADUP(X,'m',0) = |0 0 0|
     * %                     |3 4|                      |3 0 4|
     * %
     * %   See also DYADDOWN.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Internal options.
     * %-----------------
     * % Y = DYADUP(X,EVENODD,ARG) returns a vector with even length.
     * % Y = DYADUP([1 2 3],1,ARG) ==> [0 1 0 2 0 3]
     * % Y = DYADUP([1 2 3],0,ARG) ==> [1 0 2 0 3 0]
     * % 
     * % Y = DYADUP(X,EVENODD,TYPE,ARG) ... for a matrix
     * %--------------------------------------------------------------
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:4],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("dyadup"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * % Special case.
     * if isempty(x) , y = []; return; end
     */
    if (mlfTobool(mlfIsempty(mclVa(x, "x")))) {
        mlfAssign(&y, _mxarray6_);
        goto return_;
    }
    /*
     * 
     * def_evenodd = 1;
     */
    mlfAssign(&def_evenodd, _mxarray7_);
    /*
     * nbin    = nargin-1;
     */
    mlfAssign(&nbin, mlfScalar(nargin_ - 1));
    /*
     * [r,c]   = size(x);
     */
    mlfSize(mlfVarargout(&r, &c, NULL), mclVa(x, "x"), NULL);
    /*
     * evenLEN = 0;
     */
    mlfAssign(&evenLEN, _mxarray8_);
    /*
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
            if (mclSwitchCompare(v_, _mxarray9_)) {
                /*
                 * case {1,3}
                 * if ischar(varargin{1}) , dim = 2; end
                 */
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIschar,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray7_),
                        NULL))) {
                    mlfAssign(&dim, _mxarray12_);
                }
            /*
             * case 2
             */
            } else if (mclSwitchCompare(v_, _mxarray12_)) {
                /*
                 * if ischar(varargin{1}) | ischar(varargin{2}) , dim = 2; end
                 */
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
                               mclVa(varargin, "varargin"),
                               "{?}",
                               _mxarray12_),
                             NULL)))) {
                    mxDestroyArray(a_);
                    mlfAssign(&dim, _mxarray12_);
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
        mlfAssign(&dim, _mxarray12_);
    /*
     * end
     */
    }
    /*
     * if dim==1
     */
    if (mclEqBool(mclVv(dim, "dim"), _mxarray7_)) {
        /*
         * switch nbin
         */
        mxArray * v_ = mclInitialize(mclVv(nbin, "nbin"));
        if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * case 0
             * p = def_evenodd;
             */
            mlfAssign(&p, mclVv(def_evenodd, "def_evenodd"));
        /*
         * case {1,2}
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * p = varargin{1};
             */
            mlfAssign(
              &p, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray7_));
            /*
             * if nbin==2 , evenLEN = 1; end
             */
            if (mclEqBool(mclVv(nbin, "nbin"), _mxarray12_)) {
                mlfAssign(&evenLEN, _mxarray7_);
            }
        /*
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'too many arguments','msg'); error('*');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("dyadup"), _mxarray15_, _mxarray17_, NULL));
            mlfError(_mxarray4_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
        /*
         * rem2    = rem(p,2);
         */
        mlfAssign(&rem2, mlfRem(mclVv(p, "p"), _mxarray12_));
        /*
         * if evenLEN , addLEN = 0; else , addLEN = 2*rem2-1; end
         */
        if (mlfTobool(mclVv(evenLEN, "evenLEN"))) {
            mlfAssign(&addLEN, _mxarray8_);
        } else {
            mlfAssign(
              &addLEN,
              mclMinus(
                mclMtimes(_mxarray12_, mclVv(rem2, "rem2")), _mxarray7_));
        }
        /*
         * l = 2*length(x)+addLEN;
         */
        mlfAssign(
          &l,
          mclPlus(
            mlfScalar(
              svDoubleScalarTimes(2.0, (double) mclLengthInt(mclVa(x, "x")))),
            mclVv(addLEN, "addLEN")));
        /*
         * y = zeros(1,l);
         */
        mlfAssign(&y, mlfZeros(_mxarray7_, mclVv(l, "l"), NULL));
        /*
         * y(1+rem2:2:l) = x;
         */
        mclArrayAssign1(
          &y,
          mclVa(x, "x"),
          mlfColon(
            mclPlus(_mxarray7_, mclVv(rem2, "rem2")),
            _mxarray12_,
            mclVv(l, "l")));
        /*
         * if r>1, y = y'; end
         */
        if (mclGtBool(mclVv(r, "r"), _mxarray7_)) {
            mlfAssign(&y, mlfCtranspose(mclVv(y, "y")));
        }
    /*
     * else
     */
    } else {
        /*
         * switch nbin
         */
        mxArray * v_ = mclInitialize(mclVv(nbin, "nbin"));
        if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * case 0 , p = def_evenodd; o = 'c';
             */
            mlfAssign(&p, mclVv(def_evenodd, "def_evenodd"));
            mlfAssign(&o, _mxarray19_);
        /*
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
                mlfAssign(&o, _mxarray19_);
            /*
             * end
             */
            }
        /*
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
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray12_));
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
                      _mxarray12_,
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
         * if nbin==3 , evenLEN = 1; end
         */
        if (mclEqBool(mclVv(nbin, "nbin"), _mxarray11_)) {
            mlfAssign(&evenLEN, _mxarray7_);
        }
        /*
         * rem2 = rem(p,2);
         */
        mlfAssign(&rem2, mlfRem(mclVv(p, "p"), _mxarray12_));
        /*
         * if evenLEN , addLEN = 0; else , addLEN = 2*rem2-1; end
         */
        if (mlfTobool(mclVv(evenLEN, "evenLEN"))) {
            mlfAssign(&addLEN, _mxarray8_);
        } else {
            mlfAssign(
              &addLEN,
              mclMinus(
                mclMtimes(_mxarray12_, mclVv(rem2, "rem2")), _mxarray7_));
        }
        /*
         * switch o
         */
        {
            mxArray * v_ = mclInitialize(mclVv(o, "o"));
            if (mclSwitchCompare(v_, _mxarray19_)) {
                /*
                 * case 'c'
                 * nc = 2*c+addLEN;
                 */
                mlfAssign(
                  &nc,
                  mclPlus(
                    mclMtimes(_mxarray12_, mclVv(c, "c")),
                    mclVv(addLEN, "addLEN")));
                /*
                 * y  = zeros(r,nc);
                 */
                mlfAssign(&y, mlfZeros(mclVv(r, "r"), mclVv(nc, "nc"), NULL));
                /*
                 * y(:,1+rem2:2:nc) = x;
                 */
                mclArrayAssign2(
                  &y,
                  mclVa(x, "x"),
                  mlfCreateColonIndex(),
                  mlfColon(
                    mclPlus(_mxarray7_, mclVv(rem2, "rem2")),
                    _mxarray12_,
                    mclVv(nc, "nc")));
            /*
             * 
             * case 'r'
             */
            } else if (mclSwitchCompare(v_, _mxarray21_)) {
                /*
                 * nr = 2*r+addLEN;
                 */
                mlfAssign(
                  &nr,
                  mclPlus(
                    mclMtimes(_mxarray12_, mclVv(r, "r")),
                    mclVv(addLEN, "addLEN")));
                /*
                 * y  = zeros(nr,c);
                 */
                mlfAssign(&y, mlfZeros(mclVv(nr, "nr"), mclVv(c, "c"), NULL));
                /*
                 * y(1+rem2:2:nr,:) = x;
                 */
                mclArrayAssign2(
                  &y,
                  mclVa(x, "x"),
                  mlfColon(
                    mclPlus(_mxarray7_, mclVv(rem2, "rem2")),
                    _mxarray12_,
                    mclVv(nr, "nr")),
                  mlfCreateColonIndex());
            /*
             * 
             * case 'm'
             */
            } else if (mclSwitchCompare(v_, _mxarray23_)) {
                /*
                 * nc = 2*c+addLEN;
                 */
                mlfAssign(
                  &nc,
                  mclPlus(
                    mclMtimes(_mxarray12_, mclVv(c, "c")),
                    mclVv(addLEN, "addLEN")));
                /*
                 * nr = 2*r+addLEN;
                 */
                mlfAssign(
                  &nr,
                  mclPlus(
                    mclMtimes(_mxarray12_, mclVv(r, "r")),
                    mclVv(addLEN, "addLEN")));
                /*
                 * y  = zeros(nr,nc);
                 */
                mlfAssign(&y, mlfZeros(mclVv(nr, "nr"), mclVv(nc, "nc"), NULL));
                /*
                 * y(1+rem2:2:nr,1+rem2:2:nc) = x;
                 */
                mclArrayAssign2(
                  &y,
                  mclVa(x, "x"),
                  mlfColon(
                    mclPlus(_mxarray7_, mclVv(rem2, "rem2")),
                    _mxarray12_,
                    mclVv(nr, "nr")),
                  mlfColon(
                    mclPlus(_mxarray7_, mclVv(rem2, "rem2")),
                    _mxarray12_,
                    mclVv(nc, "nc")));
            /*
             * 
             * otherwise
             */
            } else {
                /*
                 * errargt(mfilename,'invalid argument value','msg'); error('*');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("dyadup"), _mxarray25_, _mxarray17_, NULL));
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
    return_:
    mclValidateOutput(y, 1, nargout_, "y", "dyadup");
    mxDestroyArray(ans);
    mxDestroyArray(def_evenodd);
    mxDestroyArray(nbin);
    mxDestroyArray(r);
    mxDestroyArray(c);
    mxDestroyArray(evenLEN);
    mxDestroyArray(dim);
    mxDestroyArray(p);
    mxDestroyArray(rem2);
    mxDestroyArray(addLEN);
    mxDestroyArray(l);
    mxDestroyArray(o);
    mxDestroyArray(nc);
    mxDestroyArray(nr);
    mxDestroyArray(varargin);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
