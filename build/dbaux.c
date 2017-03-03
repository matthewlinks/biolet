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
#include "dbaux.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wlagrang.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

void InitializeModule_dbaux(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDouble(1.0);
}

void TerminateModule_dbaux(void) {
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdbaux(int nargout_, mxArray * N, mxArray * sumw);

_mexLocalFunctionTable _local_function_table_dbaux
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNDbaux" contains the nargout interface for the "dbaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbaux.m"
 * (lines 1-32). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNDbaux(int nargout, mxArray * N, mxArray * sumw) {
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Mdbaux(nargout, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    return mlfReturnValue(w);
}

/*
 * The function "mlfDbaux" contains the normal interface for the "dbaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbaux.m"
 * (lines 1-32). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfDbaux(mxArray * N, mxArray * sumw) {
    int nargout = 1;
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Mdbaux(nargout, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    return mlfReturnValue(w);
}

/*
 * The function "mlfVDbaux" contains the void interface for the "dbaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbaux.m"
 * (lines 1-32). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVDbaux(mxArray * N, mxArray * sumw) {
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Mdbaux(0, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    mxDestroyArray(w);
}

/*
 * The function "mlxDbaux" contains the feval interface for the "dbaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbaux.m"
 * (lines 1-32). The feval function calls the implementation version of dbaux
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxDbaux(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dbaux Line: 1 Column: 1 The function \"dbaux"
            "\" was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dbaux Line: 1 Column: 1 The function \"dbaux"
            "\" was called with more than the declared number of inputs (2)."),
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
    mplhs[0] = Mdbaux(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdbaux" is the implementation version of the "dbaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/dbaux.m"
 * (lines 1-32). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function w = dbaux(N,sumw);
 */
static mxArray * Mdbaux(int nargout_, mxArray * N, mxArray * sumw) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dbaux);
    int nargin_ = mclNargin(2, N, sumw, NULL);
    mxArray * w = NULL;
    mxArray * R = NULL;
    mxArray * P = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&N);
    mclCopyArray(&sumw);
    /*
     * %DBAUX Daubechies wavelet filter computation.
     * %   W = DBAUX(N,SUMW) is the order N Daubechies scaling
     * %   filter such that SUM(W) = SUMW.
     * %   Possible values for N are:
     * %      N = 1, 2, 3, ...
     * %   Caution: Instability may occur when N is too large.
     * %
     * %   W = DBAUX(N) is equivalent to W = DBAUX(N,1)
     * %   W = DBAUX(N,0) is equivalent to W = DBAUX(N,1)
     * %
     * %   See also DBWAVF, WFILTERS.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:2],nargout,[0:1]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("dbaux"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin < 2 | sumw==0 , sumw = 1; end
     */
    {
        mxArray * a_ = mclInitialize(mclBoolToArray(nargin_ < 2));
        if (mlfTobool(a_)
            || mlfTobool(mclOr(a_, mclEq(mclVa(sumw, "sumw"), _mxarray6_)))) {
            mxDestroyArray(a_);
            mlfAssign(&sumw, _mxarray7_);
        } else {
            mxDestroyArray(a_);
        }
    }
    /*
     * 
     * % if P is the "Lagrange a trous" filter of order N
     * % and if w denotes the order N daub scaling filter,
     * % one has: P = 2*conv(wrev(w),w).
     * [P,R] = wlagrang(N);
     */
    mlfAssign(&P, mlfNWlagrang(2, &R, mclVa(N, "N")));
    /*
     * 
     * % R gives partial root location of w. 
     * % w have N zeros located at -1.
     * w = real(poly([R(abs(R)<1);-ones(N,1)]));
     */
    mlfAssign(
      &w,
      mlfReal(
        mlfPoly(
          mlfVertcat(
            mclArrayRef1(
              mclVv(R, "R"), mclLt(mlfAbs(mclVv(R, "R")), _mxarray7_)),
            mclUminus(mlfOnes(mclVa(N, "N"), _mxarray7_, NULL)),
            NULL))));
    /*
     * w = sumw*(w/sum(w)); 
     */
    mlfAssign(
      &w,
      mclMtimes(
        mclVa(sumw, "sumw"),
        mclMrdivide(mclVv(w, "w"), mlfSum(mclVv(w, "w"), NULL))));
    mclValidateOutput(w, 1, nargout_, "w", "dbaux");
    mxDestroyArray(ans);
    mxDestroyArray(P);
    mxDestroyArray(R);
    mxDestroyArray(sumw);
    mxDestroyArray(N);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return w;
}
