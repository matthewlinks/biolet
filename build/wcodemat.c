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
#include "wcodemat.h"
#include "errargn.h"
#include "libmatlbm.h"

static double _array1_[4] = { 1.0, 2.0, 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[3] = { 'm', 'a', 't' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;

static mxChar _array14_[1] = { 'r' };
static mxArray * _mxarray13_;

static mxChar _array16_[3] = { 'c', 'o', 'l' };
static mxArray * _mxarray15_;

static mxChar _array18_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray17_;

static mxChar _array22_[1] = { 'm' };
static mxArray * _mxarray21_;

static mxArray * _array20_[2] = { NULL /*_mxarray7_*/, NULL /*_mxarray21_*/ };
static mxArray * _mxarray19_;
static mxArray * _mxarray23_;

static mxChar _array27_[1] = { 'c' };
static mxArray * _mxarray26_;

static mxArray * _array25_[2] = { NULL /*_mxarray15_*/, NULL /*_mxarray26_*/ };
static mxArray * _mxarray24_;

static mxChar _array29_[4] = { '*', '*', '*', ' ' };
static mxArray * _mxarray28_;

static mxChar _array31_[21] = { ' ', ':', ' ', 'U', 'n', 'k', 'n',
                                'o', 'w', 'n', ' ', 'O', 'p', 't',
                                'i', 'o', 'n', ' ', '*', '*', '*' };
static mxArray * _mxarray30_;

void InitializeModule_wcodemat(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 4, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeString(3, _array8_);
    _mxarray9_ = mclInitializeDouble(16.0);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeDouble(3.0);
    _mxarray12_ = mclInitializeDouble(0.0);
    _mxarray13_ = mclInitializeString(1, _array14_);
    _mxarray15_ = mclInitializeString(3, _array16_);
    _mxarray17_ = mclInitializeString(3, _array18_);
    _array20_[0] = _mxarray7_;
    _mxarray21_ = mclInitializeString(1, _array22_);
    _array20_[1] = _mxarray21_;
    _mxarray19_ = mclInitializeCellVector(1, 2, _array20_);
    _mxarray23_ = mclInitializeDouble(2.220446049250313e-16);
    _array25_[0] = _mxarray15_;
    _mxarray26_ = mclInitializeString(1, _array27_);
    _array25_[1] = _mxarray26_;
    _mxarray24_ = mclInitializeCellVector(1, 2, _array25_);
    _mxarray28_ = mclInitializeString(4, _array29_);
    _mxarray30_ = mclInitializeString(21, _array31_);
}

void TerminateModule_wcodemat(void) {
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwcodemat(int nargout_,
                           mxArray * x,
                           mxArray * nb,
                           mxArray * opt,
                           mxArray * absol);

_mexLocalFunctionTable _local_function_table_wcodemat
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWcodemat" contains the nargout interface for the
 * "wcodemat" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wcodemat.m" (lines 1-66). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWcodemat(int nargout,
                       mxArray * x,
                       mxArray * nb,
                       mxArray * opt,
                       mxArray * absol) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 4, x, nb, opt, absol);
    y = Mwcodemat(nargout, x, nb, opt, absol);
    mlfRestorePreviousContext(0, 4, x, nb, opt, absol);
    return mlfReturnValue(y);
}

/*
 * The function "mlfWcodemat" contains the normal interface for the "wcodemat"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wcodemat.m" (lines 1-66). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWcodemat(mxArray * x,
                      mxArray * nb,
                      mxArray * opt,
                      mxArray * absol) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 4, x, nb, opt, absol);
    y = Mwcodemat(nargout, x, nb, opt, absol);
    mlfRestorePreviousContext(0, 4, x, nb, opt, absol);
    return mlfReturnValue(y);
}

/*
 * The function "mlfVWcodemat" contains the void interface for the "wcodemat"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wcodemat.m" (lines 1-66). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWcodemat(mxArray * x, mxArray * nb, mxArray * opt, mxArray * absol) {
    mxArray * y = NULL;
    mlfEnterNewContext(0, 4, x, nb, opt, absol);
    y = Mwcodemat(0, x, nb, opt, absol);
    mlfRestorePreviousContext(0, 4, x, nb, opt, absol);
    mxDestroyArray(y);
}

/*
 * The function "mlxWcodemat" contains the feval interface for the "wcodemat"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wcodemat.m" (lines 1-66). The
 * feval function calls the implementation version of wcodemat through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWcodemat(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wcodemat Line: 1 Column:"
            " 1 The function \"wcodemat\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wcodemat Line: 1 Column:"
            " 1 The function \"wcodemat\" was called with m"
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
    mplhs[0] = Mwcodemat(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwcodemat" is the implementation version of the "wcodemat"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wcodemat.m" (lines 1-66). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = wcodemat(x,nb,opt,absol)
 */
static mxArray * Mwcodemat(int nargout_,
                           mxArray * x,
                           mxArray * nb,
                           mxArray * opt,
                           mxArray * absol) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wcodemat);
    int nargin_ = mclNargin(4, x, nb, opt, absol, NULL);
    mxArray * y = NULL;
    mxArray * indexs = NULL;
    mxArray * echel = NULL;
    mxArray * minx = NULL;
    mxArray * mul = NULL;
    mxArray * maxx = NULL;
    mxArray * t2 = NULL;
    mxArray * t1 = NULL;
    mxArray * trans = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    mclCopyArray(&nb);
    mclCopyArray(&opt);
    mclCopyArray(&absol);
    /*
     * %WCODEMAT Extended pseudocolor matrix scaling.
     * %   Y = WCODEMAT(X,NBCODES,OPT,ABSOL) returns a coded version
     * %   of input matrix X if ABSOL=0, or ABS(X) if ABSOL is 
     * %   nonzero, using the first NBCODES integers.
     * %   Coding can be done row-wise (OPT='row' or 'r'), columnwise 
     * %   (OPT='col' or 'c'), or globally (OPT='mat' or 'm'). 
     * %   Coding uses a regular grid between the minimum and 
     * %   the maximum values of each row (column or matrix,
     * %   respectively).
     * %
     * %   Y = WCODEMAT(X,NBCODES,OPT) is equivalent to
     * %   Y = WCODEMAT(X,NBCODES,OPT,1).
     * %   Y = WCODEMAT(X,NBCODES) is equivalent to
     * %   Y = WCODEMAT(X,NBCODES,'mat',1).
     * %   Y = WCODEMAT(X) is equivalent to
     * %   Y = WCODEMAT(X,16,'mat',1).
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:4],nargout,[0 1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("wcodemat"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * switch nargin
     */
    {
        mxArray * v_ = mclInitialize(mlfScalar(nargin_));
        if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * case 1 , absol = 1; opt = 'mat'; nb = 16;
             */
            mlfAssign(&absol, _mxarray6_);
            mlfAssign(&opt, _mxarray7_);
            mlfAssign(&nb, _mxarray9_);
        /*
         * case 2 , absol = 1; opt = 'mat';
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            mlfAssign(&absol, _mxarray6_);
            mlfAssign(&opt, _mxarray7_);
        /*
         * case 3 , absol = 1;
         */
        } else if (mclSwitchCompare(v_, _mxarray11_)) {
            mlfAssign(&absol, _mxarray6_);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * opt = lower(opt);
     */
    mlfAssign(&opt, mlfLower(mclVa(opt, "opt")));
    /*
     * 
     * trans = 0;
     */
    mlfAssign(&trans, _mxarray12_);
    /*
     * if isequal(opt,'row') | isequal(opt,'r')
     */
    {
        mxArray * a_
          = mclInitialize(mlfIsequal(mclVa(opt, "opt"), _mxarray17_, NULL));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(
                   a_, mlfIsequal(mclVa(opt, "opt"), _mxarray13_, NULL)))) {
            mxDestroyArray(a_);
            /*
             * trans = 1;
             */
            mlfAssign(&trans, _mxarray6_);
            /*
             * opt   = 'col';
             */
            mlfAssign(&opt, _mxarray15_);
            /*
             * x     = x';
             */
            mlfAssign(&x, mlfCtranspose(mclVa(x, "x")));
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * [t1,t2] = size(x);
     */
    mlfSize(mlfVarargout(&t1, &t2, NULL), mclVa(x, "x"), NULL);
    /*
     * y       = ones(t1,t2);
     */
    mlfAssign(&y, mlfOnes(mclVv(t1, "t1"), mclVv(t2, "t2"), NULL));
    /*
     * if absol , x = abs(x); end
     */
    if (mlfTobool(mclVa(absol, "absol"))) {
        mlfAssign(&x, mlfAbs(mclVa(x, "x")));
    }
    /*
     * switch opt
     */
    {
        mxArray * v_ = mclInitialize(mclVa(opt, "opt"));
        if (mclSwitchCompare(v_, _mxarray19_)) {
            /*
             * case {'mat','m'}
             * x = x - min(min(x));
             */
            mlfAssign(
              &x,
              mclMinus(
                mclVa(x, "x"),
                mlfMin(
                  NULL, mlfMin(NULL, mclVa(x, "x"), NULL, NULL), NULL, NULL)));
            /*
             * maxx  = max(max(x));
             */
            mlfAssign(
              &maxx,
              mlfMax(
                NULL, mlfMax(NULL, mclVa(x, "x"), NULL, NULL), NULL, NULL));
            /*
             * if maxx<eps , return; end
             */
            if (mclLtBool(mclVv(maxx, "maxx"), _mxarray23_)) {
                mxDestroyArray(v_);
                goto return_;
            }
            /*
             * mul  = nb/maxx;
             */
            mlfAssign(&mul, mclMrdivide(mclVa(nb, "nb"), mclVv(maxx, "maxx")));
            /*
             * y(:) = fix(1 + mul*x);
             */
            mclArrayAssign1(
              &y,
              mlfFix(
                mclPlus(
                  _mxarray6_, mclMtimes(mclVv(mul, "mul"), mclVa(x, "x")))),
              mlfCreateColonIndex());
        /*
         * 
         * case {'col','c'}
         */
        } else if (mclSwitchCompare(v_, _mxarray24_)) {
            /*
             * minx  = min(x); 
             */
            mlfAssign(&minx, mlfMin(NULL, mclVa(x, "x"), NULL, NULL));
            /*
             * x = (x - minx(ones(1,t1),:));
             */
            mlfAssign(
              &x,
              mclMinus(
                mclVa(x, "x"),
                mclArrayRef2(
                  mclVv(minx, "minx"),
                  mlfOnes(_mxarray6_, mclVv(t1, "t1"), NULL),
                  mlfCreateColonIndex())));
            /*
             * maxx  = max(x);
             */
            mlfAssign(&maxx, mlfMax(NULL, mclVa(x, "x"), NULL, NULL));
            /*
             * echel = maxx(ones(1,t1),:);
             */
            mlfAssign(
              &echel,
              mclArrayRef2(
                mclVv(maxx, "maxx"),
                mlfOnes(_mxarray6_, mclVv(t1, "t1"), NULL),
                mlfCreateColonIndex()));
            /*
             * echel = echel(:);
             */
            mlfAssign(
              &echel,
              mclArrayRef1(mclVv(echel, "echel"), mlfCreateColonIndex()));
            /*
             * indexs = find(echel>eps);
             */
            mlfAssign(
              &indexs,
              mlfFind(NULL, NULL, mclGt(mclVv(echel, "echel"), _mxarray23_)));
            /*
             * y(indexs) = fix(y(indexs) + nb*x(indexs)./echel(indexs));
             */
            mclArrayAssign1(
              &y,
              mlfFix(
                mclPlus(
                  mclArrayRef1(mclVv(y, "y"), mclVv(indexs, "indexs")),
                  mclRdivide(
                    mclMtimes(
                      mclVa(nb, "nb"),
                      mclArrayRef1(mclVa(x, "x"), mclVv(indexs, "indexs"))),
                    mclArrayRef1(
                      mclVv(echel, "echel"), mclVv(indexs, "indexs"))))),
              mclVv(indexs, "indexs"));
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * error(['*** ' mfilename ' : Unknown Option ***']);
             */
            mlfError(
              mlfHorzcat(
                _mxarray28_, mxCreateString("wcodemat"), _mxarray30_, NULL),
              NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * y(y>nb) = nb;
     */
    mclArrayAssign1(&y, mclVa(nb, "nb"), mclGt(mclVv(y, "y"), mclVa(nb, "nb")));
    /*
     * if trans, y = y'; end
     */
    if (mlfTobool(mclVv(trans, "trans"))) {
        mlfAssign(&y, mlfCtranspose(mclVv(y, "y")));
    }
    /*
     * 
     */
    return_:
    mclValidateOutput(y, 1, nargout_, "y", "wcodemat");
    mxDestroyArray(ans);
    mxDestroyArray(trans);
    mxDestroyArray(t1);
    mxDestroyArray(t2);
    mxDestroyArray(maxx);
    mxDestroyArray(mul);
    mxDestroyArray(minx);
    mxDestroyArray(echel);
    mxDestroyArray(indexs);
    mxDestroyArray(absol);
    mxDestroyArray(opt);
    mxDestroyArray(nb);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
