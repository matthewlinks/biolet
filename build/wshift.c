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
#include "wshift.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray3_;

static mxChar _array5_[1] = { '1' };
static mxArray * _mxarray4_;

static mxChar _array7_[2] = { '1', 'd' };
static mxArray * _mxarray6_;

static mxChar _array9_[2] = { '1', 'D' };
static mxArray * _mxarray8_;

static mxArray * _array2_[4] = { NULL /*_mxarray3_*/, NULL /*_mxarray4_*/,
                                 NULL /*_mxarray6_*/, NULL /*_mxarray8_*/ };
static mxArray * _mxarray1_;
static mxArray * _mxarray12_;

static mxChar _array14_[1] = { '2' };
static mxArray * _mxarray13_;

static mxChar _array16_[2] = { '2', 'd' };
static mxArray * _mxarray15_;

static mxChar _array18_[2] = { '2', 'D' };
static mxArray * _mxarray17_;

static mxArray * _array11_[4] = { NULL /*_mxarray12_*/, NULL /*_mxarray13_*/,
                                  NULL /*_mxarray15_*/, NULL /*_mxarray17_*/ };
static mxArray * _mxarray10_;

static double _array20_[2] = { 1.0, 1.0 };
static mxArray * _mxarray19_;

void InitializeModule_wshift(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray3_ = mclInitializeDouble(1.0);
    _array2_[0] = _mxarray3_;
    _mxarray4_ = mclInitializeString(1, _array5_);
    _array2_[1] = _mxarray4_;
    _mxarray6_ = mclInitializeString(2, _array7_);
    _array2_[2] = _mxarray6_;
    _mxarray8_ = mclInitializeString(2, _array9_);
    _array2_[3] = _mxarray8_;
    _mxarray1_ = mclInitializeCellVector(1, 4, _array2_);
    _mxarray12_ = mclInitializeDouble(2.0);
    _array11_[0] = _mxarray12_;
    _mxarray13_ = mclInitializeString(1, _array14_);
    _array11_[1] = _mxarray13_;
    _mxarray15_ = mclInitializeString(2, _array16_);
    _array11_[2] = _mxarray15_;
    _mxarray17_ = mclInitializeString(2, _array18_);
    _array11_[3] = _mxarray17_;
    _mxarray10_ = mclInitializeCellVector(1, 4, _array11_);
    _mxarray19_ = mclInitializeDoubleVector(1, 2, _array20_);
}

void TerminateModule_wshift(void) {
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwshift(int nargout_,
                         mxArray * type,
                         mxArray * x,
                         mxArray * p);

_mexLocalFunctionTable _local_function_table_wshift
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfWshift" contains the normal interface for the "wshift"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wshift.m"
 * (lines 1-48). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfWshift(mxArray * type, mxArray * x, mxArray * p) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 3, type, x, p);
    y = Mwshift(nargout, type, x, p);
    mlfRestorePreviousContext(0, 3, type, x, p);
    return mlfReturnValue(y);
}

/*
 * The function "mlxWshift" contains the feval interface for the "wshift"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wshift.m"
 * (lines 1-48). The feval function calls the implementation version of wshift
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWshift(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wshift Line: 1 Column: "
            "1 The function \"wshift\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wshift Line: 1 Column: "
            "1 The function \"wshift\" was called with mor"
            "e than the declared number of inputs (3)."),
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
    mplhs[0] = Mwshift(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwshift" is the implementation version of the "wshift"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wshift.m"
 * (lines 1-48). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function y = wshift(type,x,p)
 */
static mxArray * Mwshift(int nargout_,
                         mxArray * type,
                         mxArray * x,
                         mxArray * p) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wshift);
    int nargin_ = mclNargin(3, type, x, p, NULL);
    mxArray * y = NULL;
    mxArray * k = NULL;
    mxArray * S = NULL;
    mxArray * L = NULL;
    mclCopyArray(&type);
    mclCopyArray(&x);
    mclCopyArray(&p);
    /*
     * %WSHIFT Shift Vector or Matrix.
     * %   Y = WSHIFT(TYPE,X,P) with TYPE = {1,'1','1d' or '1D'}
     * %   performs a P-circular shift of vector X.
     * %   The shift P must be an integer, positive for right to left
     * %   shift and negative for left to right shift.
     * %
     * %   Y = WSHIFT(TYPE,X,P) with TYPE = {2,'2','2d' or '2D'}
     * %   performs a P-circular shift of matrix X.
     * %   The shifts P must be integers. P(1) is the shift for rows
     * %   and P(2) is the shift for columns.
     * %
     * %   WSHIFT('1D',X) is equivalent to WSHIFT('1D',X,1)
     * %   WSHIFT('2D',X) is equivalent to WSHIFT('2D',X,[1 1])
     * %
     * %   Example 1D:
     * %     x = [1 2 3 4 5]
     * %     wshift('1D',x,1)  = [2 3 4 5 1]
     * %     wshift('1D',x,-1) = [5 1 2 3 4]
     * %
     * %   Example 2D:
     * %     x = [1 2 3;5 6 7]
     * %     wshift('2D',x,[1 1])  = [6 7 5;2 3 1]
     * %     wshift('2D',x,[-1,0]) = [5 6 7;1 2 3]
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-Dec-97.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:44 $
     * 
     * if isempty(x) | all(p==0) , y = x; return; end
     */
    {
        mxArray * a_ = mclInitialize(mlfIsempty(mclVa(x, "x")));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(a_, mlfAll(mclEq(mclVa(p, "p"), _mxarray0_), NULL)))) {
            mxDestroyArray(a_);
            mlfAssign(&y, mclVa(x, "x"));
            goto return_;
        } else {
            mxDestroyArray(a_);
        }
    }
    /*
     * switch type
     */
    {
        mxArray * v_ = mclInitialize(mclVa(type, "type"));
        if (mclSwitchCompare(v_, _mxarray1_)) {
            /*
             * case {1,'1','1d','1D'}
             * if nargin<3 , p = 1; end
             */
            if (nargin_ < 3) {
                mlfAssign(&p, _mxarray3_);
            }
            /*
             * L = length(x);
             */
            mlfAssign(&L, mlfScalar(mclLengthInt(mclVa(x, "x"))));
            /*
             * p = rem(p,L);
             */
            mlfAssign(&p, mlfRem(mclVa(p, "p"), mclVv(L, "L")));
            /*
             * if p<0 , p = L+p; end
             */
            if (mclLtBool(mclVa(p, "p"), _mxarray0_)) {
                mlfAssign(&p, mclPlus(mclVv(L, "L"), mclVa(p, "p")));
            }
            /*
             * y = x([p+1:L,1:p]);
             */
            mlfAssign(
              &y,
              mclArrayRef1(
                mclVa(x, "x"),
                mlfHorzcat(
                  mlfColon(
                    mclPlus(mclVa(p, "p"), _mxarray3_), mclVv(L, "L"), NULL),
                  mlfColon(_mxarray3_, mclVa(p, "p"), NULL),
                  NULL)));
        /*
         * 
         * case {2,'2','2d','2D'}
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * if nargin<3 , p = [1 1]; end
             */
            if (nargin_ < 3) {
                mlfAssign(&p, _mxarray19_);
            }
            /*
             * S = size(x);
             */
            mlfAssign(&S, mlfSize(mclValueVarargout(), mclVa(x, "x"), NULL));
            /*
             * p = rem(p,S);
             */
            mlfAssign(&p, mlfRem(mclVa(p, "p"), mclVv(S, "S")));
            /*
             * k = (p<0);
             */
            mlfAssign(&k, mclLt(mclVa(p, "p"), _mxarray0_));
            /*
             * p(k) = S(k)+p(k);
             */
            mclArrayAssign1(
              &p,
              mclPlus(
                mclArrayRef1(mclVv(S, "S"), mclVv(k, "k")),
                mclArrayRef1(mclVa(p, "p"), mclVv(k, "k"))),
              mclVv(k, "k"));
            /*
             * y = x([p(1)+1:S(1),1:p(1)],[p(2)+1:S(2),1:p(2)]);
             */
            mlfAssign(
              &y,
              mclArrayRef2(
                mclVa(x, "x"),
                mlfHorzcat(
                  mlfColon(
                    mclPlus(mclIntArrayRef1(mclVa(p, "p"), 1), _mxarray3_),
                    mclIntArrayRef1(mclVv(S, "S"), 1),
                    NULL),
                  mlfColon(_mxarray3_, mclIntArrayRef1(mclVa(p, "p"), 1), NULL),
                  NULL),
                mlfHorzcat(
                  mlfColon(
                    mclPlus(mclIntArrayRef1(mclVa(p, "p"), 2), _mxarray3_),
                    mclIntArrayRef1(mclVv(S, "S"), 2),
                    NULL),
                  mlfColon(_mxarray3_, mclIntArrayRef1(mclVa(p, "p"), 2), NULL),
                  NULL)));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mclValidateOutput(y, 1, nargout_, "y", "wshift");
    mxDestroyArray(L);
    mxDestroyArray(S);
    mxDestroyArray(k);
    mxDestroyArray(p);
    mxDestroyArray(x);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
