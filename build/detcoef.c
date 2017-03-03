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
#include "detcoef.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"

static double _array1_[3] = { 2.0, 3.0, 4.0 };
static mxArray * _mxarray0_;

static mxChar _array3_[3] = { 'v', 'a', 'r' };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[22] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                               'l', 'e', 'v', 'e', 'l', '(', 's', ')',
                               ' ', 'v', 'a', 'l', 'u', 'e' };
static mxArray * _mxarray7_;

static mxChar _array10_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;

void InitializeModule_detcoef(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 3, _array1_);
    _mxarray2_ = mclInitializeString(3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeString(22, _array8_);
    _mxarray9_ = mclInitializeString(3, _array10_);
    _mxarray11_ = mclInitializeDouble(1.0);
    _mxarray12_ = mclInitializeDouble(2.0);
    _mxarray13_ = mclInitializeDouble(-1.0);
    _mxarray14_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_detcoef(void) {
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdetcoef(int nargout_,
                          mxArray * coefs,
                          mxArray * longs,
                          mxArray * levels,
                          mxArray * dummy);

_mexLocalFunctionTable _local_function_table_detcoef
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNDetcoef" contains the nargout interface for the "detcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/detcoef.m" (lines 1-71). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNDetcoef(int nargout,
                      mlfVarargoutList * varargout,
                      mxArray * coefs,
                      mxArray * longs,
                      mxArray * levels,
                      mxArray * dummy) {
    mlfEnterNewContext(0, 4, coefs, longs, levels, dummy);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mdetcoef(nargout, coefs, longs, levels, dummy);
    mlfRestorePreviousContext(0, 4, coefs, longs, levels, dummy);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfDetcoef" contains the normal interface for the "detcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/detcoef.m" (lines 1-71). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfDetcoef(mlfVarargoutList * varargout,
                     mxArray * coefs,
                     mxArray * longs,
                     mxArray * levels,
                     mxArray * dummy) {
    int nargout = 0;
    mlfEnterNewContext(0, 4, coefs, longs, levels, dummy);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mdetcoef(nargout, coefs, longs, levels, dummy);
    mlfRestorePreviousContext(0, 4, coefs, longs, levels, dummy);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVDetcoef" contains the void interface for the "detcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/detcoef.m" (lines 1-71). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVDetcoef(mxArray * coefs,
                 mxArray * longs,
                 mxArray * levels,
                 mxArray * dummy) {
    mxArray * varargout = NULL;
    mlfEnterNewContext(0, 4, coefs, longs, levels, dummy);
    varargout = Mdetcoef(0, coefs, longs, levels, dummy);
    mlfRestorePreviousContext(0, 4, coefs, longs, levels, dummy);
    mxDestroyArray(varargout);
}

/*
 * The function "mlxDetcoef" contains the feval interface for the "detcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/detcoef.m" (lines 1-71). The
 * feval function calls the implementation version of detcoef through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDetcoef(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: detcoef Line: 1 Column:"
            " 1 The function \"detcoef\" was called with m"
            "ore than the declared number of inputs (4)."),
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
    mplhs[0] = Mdetcoef(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
}

/*
 * The function "Mdetcoef" is the implementation version of the "detcoef"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/detcoef.m" (lines 1-71). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = detcoef(coefs,longs,levels,dummy)
 */
static mxArray * Mdetcoef(int nargout_,
                          mxArray * coefs,
                          mxArray * longs,
                          mxArray * levels,
                          mxArray * dummy) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_detcoef);
    int nargin_ = mclNargin(4, coefs, longs, levels, dummy, NULL);
    mxArray * varargout = NULL;
    mxArray * k = NULL;
    mxArray * j = NULL;
    mxArray * tmp = NULL;
    mxArray * nblev = NULL;
    mxArray * last = NULL;
    mxArray * first = NULL;
    mxArray * cellFLAG = NULL;
    mxArray * nmax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&coefs);
    mclCopyArray(&longs);
    mclCopyArray(&levels);
    mclCopyArray(&dummy);
    /*
     * %DETCOEF Extract 1-D detail coefficients.
     * %   D = DETCOEF(C,L,N) extracts the detail coefficients
     * %   at level N from the wavelet decomposition structure [C,L].
     * %   See WAVEDEC for more information on C and L.
     * %   Level N must be an integer such that 1 <= N <= NMAX
     * %   where NMAX = length(L)-2.
     * %
     * %   D = DETCOEF(C,L) extracts the detail coefficients
     * %   at last level NMAX.
     * %
     * %   If N is a vector of integers such that 1 <= N(j) <= NMAX:
     * %
     * %     DCELL = DETCOEF(C,L,N,'cells') returns a cell array where
     * %     DCELL{j} contains the coefficients of detail N(j).
     * %
     * %     If length(N)>1, DCELL = DETCOEF(C,L,N) is equivalent to
     * %     DCELL = DETCOEF(C,L,N,'cells').
     * %
     * %     DCELL = DETCOEF(C,L,'cells') is equivalent to 
     * %     DCELL = DETCOEF(C,L,[1:NMAX])
     * %
     * %     [D1,...,Dp] = DETCOEF(C,L,[N(1),...,N(p)]) extracts the details
     * %     coefficients at levels [N(1),...,N(p)].
     * %
     * %   See also APPCOEF, WAVEDEC.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 23-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[2:4],nargout,'var'), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("detcoef"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * nmax = length(longs)-2;
     */
    mlfAssign(&nmax, mlfScalar(mclLengthInt(mclVa(longs, "longs")) - 2));
    /*
     * 
     * cellFLAG = 0;
     */
    mlfAssign(&cellFLAG, _mxarray6_);
    /*
     * if nargin>2
     */
    if (nargin_ > 2) {
        /*
         * if isnumeric(levels)
         */
        if (mlfTobool(mlfIsnumeric(mclVa(levels, "levels")))) {
            /*
             * if (any(levels) < 1) | (any(levels) > nmax) | ...
             */
            mxArray * a_
              = mclInitialize(
                  mclLt(mlfAny(mclVa(levels, "levels"), NULL), _mxarray11_));
            if (mlfTobool(a_)) {
                mlfAssign(&a_, mlfScalar(1));
            } else {
                mlfAssign(
                  &a_,
                  mclOr(
                    a_,
                    mclGt(
                      mlfAny(mclVa(levels, "levels"), NULL),
                      mclVv(nmax, "nmax"))));
            }
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mlfAny(
                         mclNe(
                           mclVa(levels, "levels"),
                           mlfFix(mclVa(levels, "levels"))),
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * any(levels ~= fix(levels))
                 * errargt(mfilename,'invalid level(s) value','msg'); error('*');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("detcoef"), _mxarray7_, _mxarray9_, NULL));
                mlfError(_mxarray4_, NULL);
            } else {
                mxDestroyArray(a_);
            }
            /*
             * end
             * cellFLAG = (nargin>3);
             */
            mlfAssign(&cellFLAG, mclBoolToArray(nargin_ > 3));
        /*
         * else
         */
        } else {
            /*
             * cellFLAG = 1;
             */
            mlfAssign(&cellFLAG, _mxarray11_);
            /*
             * levels = [1:nmax];
             */
            mlfAssign(
              &levels, mlfColon(_mxarray11_, mclVv(nmax, "nmax"), NULL));
        /*
         * end   
         */
        }
    /*
     * else
     */
    } else {
        /*
         * levels = nmax;
         */
        mlfAssign(&levels, mclVv(nmax, "nmax"));
    /*
     * end
     */
    }
    /*
     * 
     * first = cumsum(longs)+1;
     */
    mlfAssign(
      &first, mclPlus(mlfCumsum(mclVa(longs, "longs"), NULL), _mxarray11_));
    /*
     * first = first(end-2:-1:1);
     */
    mlfAssign(
      &first,
      mclArrayRef1(
        mclVv(first, "first"),
        mlfColon(
          mclMinus(
            mlfEnd(mclVv(first, "first"), _mxarray11_, _mxarray11_),
            _mxarray12_),
          _mxarray13_,
          _mxarray11_)));
    /*
     * longs = longs(end-1:-1:2);
     */
    mlfAssign(
      &longs,
      mclArrayRef1(
        mclVa(longs, "longs"),
        mlfColon(
          mclMinus(
            mlfEnd(mclVa(longs, "longs"), _mxarray11_, _mxarray11_),
            _mxarray11_),
          _mxarray13_,
          _mxarray12_)));
    /*
     * last  = first+longs-1;
     */
    mlfAssign(
      &last,
      mclMinus(
        mclPlus(mclVv(first, "first"), mclVa(longs, "longs")), _mxarray11_));
    /*
     * nblev = length(levels);
     */
    mlfAssign(&nblev, mlfScalar(mclLengthInt(mclVa(levels, "levels"))));
    /*
     * tmp   = cell(1,nblev);
     */
    mlfAssign(&tmp, mlfCell(_mxarray11_, mclVv(nblev, "nblev"), NULL));
    /*
     * for j = 1:nblev
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(nblev, "nblev"));
        if (v_ > e_) {
            mlfAssign(&j, _mxarray14_);
        } else {
            /*
             * k = levels(j);
             * tmp{j} = coefs(first(k):last(k));
             * end
             */
            for (; ; ) {
                mlfAssign(&k, mclIntArrayRef1(mclVa(levels, "levels"), v_));
                mlfIndexAssign(
                  &tmp,
                  "{?}",
                  mlfScalar(v_),
                  mclArrayRef1(
                    mclVa(coefs, "coefs"),
                    mlfColon(
                      mclArrayRef1(mclVv(first, "first"), mclVv(k, "k")),
                      mclArrayRef1(mclVv(last, "last"), mclVv(k, "k")),
                      NULL)));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&j, mlfScalar(v_));
        }
    }
    /*
     * 
     * if nargout>0
     */
    if (nargout_ > 0) {
        /*
         * if (nargout==1 & nblev>1) | cellFLAG
         */
        mxArray * a_ = mclInitialize(mclBoolToArray(nargout_ == 1));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_, mclAnd(a_, mclGt(mclVv(nblev, "nblev"), _mxarray11_)));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            || mlfTobool(mclOr(a_, mclVv(cellFLAG, "cellFLAG")))) {
            mxDestroyArray(a_);
            /*
             * varargout{1} = tmp;
             */
            mlfIndexAssign(&varargout, "{?}", _mxarray11_, mclVv(tmp, "tmp"));
        /*
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * varargout = tmp;
             */
            mlfAssign(&varargout, mclVv(tmp, "tmp"));
        }
    /*
     * end
     * end
     */
    }
    mxDestroyArray(ans);
    mxDestroyArray(nmax);
    mxDestroyArray(cellFLAG);
    mxDestroyArray(first);
    mxDestroyArray(last);
    mxDestroyArray(nblev);
    mxDestroyArray(tmp);
    mxDestroyArray(j);
    mxDestroyArray(k);
    mxDestroyArray(dummy);
    mxDestroyArray(levels);
    mxDestroyArray(longs);
    mxDestroyArray(coefs);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
