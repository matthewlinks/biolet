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
#include "symaux.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wlagrang.h"
#include "wstr2num.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

static double _array9_[2] = { .5, .5 };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;
static mxArray * _mxarray15_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;

static mxArray * _array17_[4] = { NULL /*_mxarray14_*/, NULL /*_mxarray18_*/,
                                  NULL /*_mxarray19_*/, NULL /*_mxarray20_*/ };
static mxArray * _mxarray16_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;

void InitializeModule_symaux(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDoubleVector(1, 2, _array9_);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeDouble(200.0);
    _mxarray12_ = mclInitializeDouble(6.283185307179586);
    _mxarray13_ = mclInitializeComplex(-0.0, -1.0);
    _mxarray14_ = mclInitializeDouble(4.0);
    _mxarray15_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _array17_[0] = _mxarray14_;
    _mxarray18_ = mclInitializeDouble(5.0);
    _array17_[1] = _mxarray18_;
    _mxarray19_ = mclInitializeDouble(7.0);
    _array17_[2] = _mxarray19_;
    _mxarray20_ = mclInitializeDouble(8.0);
    _array17_[3] = _mxarray20_;
    _mxarray16_ = mclInitializeCellVector(1, 4, _array17_);
    _mxarray21_ = mclInitializeComplex(0.0, 1.0);
    _mxarray22_ = mclInitializeDouble(3.0);
    _mxarray23_ = mclInitializeDouble(3.5);
}

void TerminateModule_symaux(void) {
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfSymaux_getZeroInd(mxArray * * iImZ,
                                      mxArray * num,
                                      mxArray * nbGrZ,
                                      mxArray * nbGrReZ,
                                      mxArray * indReZ,
                                      mxArray * indImZ);
static void mlxSymaux_getZeroInd(int nlhs,
                                 mxArray * plhs[],
                                 int nrhs,
                                 mxArray * prhs[]);
static mxArray * mlfSymaux_phasecontrib(mxArray * Z,
                                        mxArray * R,
                                        mxArray * teta);
static void mlxSymaux_phasecontrib(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfSymaux_nonlinph(mxArray * v, mxArray * freq);
static void mlxSymaux_nonlinph(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]);
static mxArray * Msymaux(int nargout_, mxArray * N, mxArray * sumw);
static mxArray * Msymaux_getZeroInd(mxArray * * iImZ,
                                    int nargout_,
                                    mxArray * num,
                                    mxArray * nbGrZ,
                                    mxArray * nbGrReZ,
                                    mxArray * indReZ,
                                    mxArray * indImZ);
static mxArray * Msymaux_phasecontrib(int nargout_,
                                      mxArray * Z,
                                      mxArray * R,
                                      mxArray * teta);
static mxArray * Msymaux_nonlinph(int nargout_, mxArray * v, mxArray * freq);

static mexFunctionTableEntry local_function_table_[3]
  = { { "getZeroInd", mlxSymaux_getZeroInd, 5, 2, NULL },
      { "phasecontrib", mlxSymaux_phasecontrib, 3, 1, NULL },
      { "nonlinph", mlxSymaux_nonlinph, 2, 1, NULL } };

_mexLocalFunctionTable _local_function_table_symaux
  = { 3, local_function_table_ };

/*
 * The function "mlfNSymaux" contains the nargout interface for the "symaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m"
 * (lines 1-117). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNSymaux(int nargout, mxArray * N, mxArray * sumw) {
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Msymaux(nargout, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    return mlfReturnValue(w);
}

/*
 * The function "mlfSymaux" contains the normal interface for the "symaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m"
 * (lines 1-117). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
mxArray * mlfSymaux(mxArray * N, mxArray * sumw) {
    int nargout = 1;
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Msymaux(nargout, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    return mlfReturnValue(w);
}

/*
 * The function "mlfVSymaux" contains the void interface for the "symaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m"
 * (lines 1-117). The void interface is only produced if the M-function uses
 * the special variable "nargout", and has at least one output. The void
 * interface function specifies zero output arguments to the implementation
 * version of the function, and in the event that the implementation version
 * still returns an output (which, in MATLAB, would be assigned to the "ans"
 * variable), it deallocates the output. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlfVSymaux(mxArray * N, mxArray * sumw) {
    mxArray * w = NULL;
    mlfEnterNewContext(0, 2, N, sumw);
    w = Msymaux(0, N, sumw);
    mlfRestorePreviousContext(0, 2, N, sumw);
    mxDestroyArray(w);
}

/*
 * The function "mlxSymaux" contains the feval interface for the "symaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m"
 * (lines 1-117). The feval function calls the implementation version of symaux
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxSymaux(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux Line: 1 Column: "
            "1 The function \"symaux\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux Line: 1 Column: "
            "1 The function \"symaux\" was called with mor"
            "e than the declared number of inputs (2)."),
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
    mplhs[0] = Msymaux(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfSymaux_getZeroInd" contains the normal interface for the
 * "symaux/getZeroInd" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 117-125).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfSymaux_getZeroInd(mxArray * * iImZ,
                                      mxArray * num,
                                      mxArray * nbGrZ,
                                      mxArray * nbGrReZ,
                                      mxArray * indReZ,
                                      mxArray * indImZ) {
    int nargout = 1;
    mxArray * iReZ = NULL;
    mxArray * iImZ__ = NULL;
    mlfEnterNewContext(1, 5, iImZ, num, nbGrZ, nbGrReZ, indReZ, indImZ);
    if (iImZ != NULL) {
        ++nargout;
    }
    iReZ
      = Msymaux_getZeroInd(
          &iImZ__, nargout, num, nbGrZ, nbGrReZ, indReZ, indImZ);
    mlfRestorePreviousContext(1, 5, iImZ, num, nbGrZ, nbGrReZ, indReZ, indImZ);
    if (iImZ != NULL) {
        mclCopyOutputArg(iImZ, iImZ__);
    } else {
        mxDestroyArray(iImZ__);
    }
    return mlfReturnValue(iReZ);
}

/*
 * The function "mlxSymaux_getZeroInd" contains the feval interface for the
 * "symaux/getZeroInd" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 117-125). The
 * feval function calls the implementation version of symaux/getZeroInd through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxSymaux_getZeroInd(int nlhs,
                                 mxArray * plhs[],
                                 int nrhs,
                                 mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/getZeroInd Line: 117 Col"
            "umn: 1 The function \"symaux/getZeroInd\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/getZeroInd Line: 117 Col"
            "umn: 1 The function \"symaux/getZeroInd\" was called "
            "with more than the declared number of inputs (5)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mplhs[0]
      = Msymaux_getZeroInd(
          &mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfSymaux_phasecontrib" contains the normal interface for the
 * "symaux/phasecontrib" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 125-146).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfSymaux_phasecontrib(mxArray * Z,
                                        mxArray * R,
                                        mxArray * teta) {
    int nargout = 1;
    mxArray * F = NULL;
    mlfEnterNewContext(0, 3, Z, R, teta);
    F = Msymaux_phasecontrib(nargout, Z, R, teta);
    mlfRestorePreviousContext(0, 3, Z, R, teta);
    return mlfReturnValue(F);
}

/*
 * The function "mlxSymaux_phasecontrib" contains the feval interface for the
 * "symaux/phasecontrib" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 125-146). The
 * feval function calls the implementation version of symaux/phasecontrib
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxSymaux_phasecontrib(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/phasecontrib Line: 125 Co"
            "lumn: 1 The function \"symaux/phasecontrib\" was calle"
            "d with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/phasecontrib Line: 125 Co"
            "lumn: 1 The function \"symaux/phasecontrib\" was calle"
            "d with more than the declared number of inputs (3)."),
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
    mplhs[0] = Msymaux_phasecontrib(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfSymaux_nonlinph" contains the normal interface for the
 * "symaux/nonlinph" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 146-156).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfSymaux_nonlinph(mxArray * v, mxArray * freq) {
    int nargout = 1;
    mxArray * nlphase = NULL;
    mlfEnterNewContext(0, 2, v, freq);
    nlphase = Msymaux_nonlinph(nargout, v, freq);
    mlfRestorePreviousContext(0, 2, v, freq);
    return mlfReturnValue(nlphase);
}

/*
 * The function "mlxSymaux_nonlinph" contains the feval interface for the
 * "symaux/nonlinph" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 146-156). The
 * feval function calls the implementation version of symaux/nonlinph through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxSymaux_nonlinph(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/nonlinph Line: 146 Colu"
            "mn: 1 The function \"symaux/nonlinph\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: symaux/nonlinph Line: 146 Col"
            "umn: 1 The function \"symaux/nonlinph\" was called "
            "with more than the declared number of inputs (2)."),
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
    mplhs[0] = Msymaux_nonlinph(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Msymaux" is the implementation version of the "symaux"
 * M-function from file "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m"
 * (lines 1-117). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function w = symaux(N,sumw)
 */
static mxArray * Msymaux(int nargout_, mxArray * N, mxArray * sumw) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_symaux);
    int nargin_ = mclNargin(2, N, sumw, NULL);
    mxArray * w = NULL;
    mxArray * imin = NULL;
    mxArray * phasMin = NULL;
    mxArray * i = NULL;
    mxArray * indImZ = NULL;
    mxArray * indReZ = NULL;
    mxArray * numG = NULL;
    mxArray * phas = NULL;
    mxArray * indRealZ = NULL;
    mxArray * indImagZ = NULL;
    mxArray * pow2NbGroup = NULL;
    mxArray * nbGroupOfZeros = NULL;
    mxArray * nbGroupOfImagZ = NULL;
    mxArray * nbGroupOfRealZ = NULL;
    mxArray * uZ = NULL;
    mxArray * freq = NULL;
    mxArray * nbfr = NULL;
    mxArray * teta = NULL;
    mxArray * rho = NULL;
    mxArray * tmp = NULL;
    mxArray * nbimagzeros = NULL;
    mxArray * imagzeros = NULL;
    mxArray * nbrealzeros = NULL;
    mxArray * realzeros = NULL;
    mxArray * Proots = NULL;
    mxArray * P = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&N);
    mclCopyArray(&sumw);
    /*
     * %SYMAUX Symlet wavelet filter computation.
     * %   Symlets are the "least asymmetric"
     * %   Daubechies' wavelets.
     * %   W = SYMAUX(N,SUMW) is the order N Symlet scaling
     * %   filter such that SUM(W) = SUMW.
     * %   Possible values for N are:
     * %          N = 1, 2, 3, ...
     * %   Caution: Instability may occur when N is too large.
     * %
     * %   W = SYMAUX(N) is equivalent to W = SYMAUX(N,1)
     * %   W = SYMAUX(N,0) is equivalent to W = SYMAUX(N,1)
     * %
     * %   See also SYMWAVF, WFILTERS.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 06-Feb-98.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1:2],nargout,[0:1]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("symaux"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin < 2 | sumw==0 , sumw = 1;  end
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
     * if N==1  % Haar filters
     */
    if (mclEqBool(mclVa(N, "N"), _mxarray7_)) {
        /*
         * w = [0.5 0.5];
         */
        mlfAssign(&w, _mxarray8_);
        /*
         * w = sumw*(w/sum(w)); 
         */
        mlfAssign(
          &w,
          mclMtimes(
            mclVa(sumw, "sumw"),
            mclMrdivide(mclVv(w, "w"), mlfSum(mclVv(w, "w"), NULL))));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * % Compute the "Lagrange a trous" filter of order N.
     * % and the roots (abs(R) ~= 1).
     * %--------------------------------------------------
     * [P,Proots] = wlagrang(N);
     */
    mlfAssign(&P, mlfNWlagrang(2, &Proots, mclVa(N, "N")));
    /*
     * 
     * % Find complex and real zeros.
     * % The real zeros are grouped by duplets:
     * %   [z,1/z]
     * % The complex zeros are grouped by quadruplets: 
     * %   [z,conj(z),1/z,1/conj(z)]
     * %------------------------------------------------ 
     * realzeros   = Proots(find(imag(Proots)==0));
     */
    mlfAssign(
      &realzeros,
      mclArrayRef1(
        mclVv(Proots, "Proots"),
        mlfFind(
          NULL, NULL, mclEq(mlfImag(mclVv(Proots, "Proots")), _mxarray6_))));
    /*
     * nbrealzeros = length(realzeros);
     */
    mlfAssign(
      &nbrealzeros, mlfScalar(mclLengthInt(mclVv(realzeros, "realzeros"))));
    /*
     * imagzeros   = Proots(find(imag(Proots)~=0));
     */
    mlfAssign(
      &imagzeros,
      mclArrayRef1(
        mclVv(Proots, "Proots"),
        mlfFind(
          NULL, NULL, mclNe(mlfImag(mclVv(Proots, "Proots")), _mxarray6_))));
    /*
     * nbimagzeros = length(imagzeros);
     */
    mlfAssign(
      &nbimagzeros, mlfScalar(mclLengthInt(mclVv(imagzeros, "imagzeros"))));
    /*
     * 
     * % Get complex modulus and angle for each group of complex zeros.
     * tmp  = imagzeros(1:2:nbimagzeros/2);
     */
    mlfAssign(
      &tmp,
      mclArrayRef1(
        mclVv(imagzeros, "imagzeros"),
        mlfColon(
          _mxarray7_,
          _mxarray10_,
          mclMrdivide(mclVv(nbimagzeros, "nbimagzeros"), _mxarray10_))));
    /*
     * rho  = abs(tmp);
     */
    mlfAssign(&rho, mlfAbs(mclVv(tmp, "tmp")));
    /*
     * teta = angle(tmp);
     */
    mlfAssign(&teta, mlfAngle(mclVv(tmp, "tmp")));
    /*
     * 
     * %--------------------------------------------------------------
     * % Calculate phase contribution of complex and real zeros
     * % for all the combination of these zeros.
     * % A combination is composed by one real zero in each duplets
     * % and two conjugate complex zeros in each quadruplets.
     * % Each combination of zeros is identified with a binary number.
     * % The phase of kth combination is the opposite of the phase
     * % of the combination which num is (2^NbGroup-k+1). 
     * %--------------------------------------------------------------
     * nbfr = 200;
     */
    mlfAssign(&nbfr, _mxarray11_);
    /*
     * freq = linspace(0,2*pi,nbfr);
     */
    mlfAssign(&freq, mlfLinspace(_mxarray6_, _mxarray12_, mclVv(nbfr, "nbfr")));
    /*
     * uZ   = exp(-i*freq);
     */
    mlfAssign(&uZ, mlfExp(mclMtimes(_mxarray13_, mclVv(freq, "freq"))));
    /*
     * nbGroupOfRealZ = nbrealzeros/2;
     */
    mlfAssign(
      &nbGroupOfRealZ,
      mclMrdivide(mclVv(nbrealzeros, "nbrealzeros"), _mxarray10_));
    /*
     * nbGroupOfImagZ = nbimagzeros/4;
     */
    mlfAssign(
      &nbGroupOfImagZ,
      mclMrdivide(mclVv(nbimagzeros, "nbimagzeros"), _mxarray14_));
    /*
     * nbGroupOfZeros = nbGroupOfImagZ+nbGroupOfRealZ;
     */
    mlfAssign(
      &nbGroupOfZeros,
      mclPlus(
        mclVv(nbGroupOfImagZ, "nbGroupOfImagZ"),
        mclVv(nbGroupOfRealZ, "nbGroupOfRealZ")));
    /*
     * pow2NbGroup    = 2^(nbGroupOfZeros-1);   
     */
    mlfAssign(
      &pow2NbGroup,
      mclMpower(
        _mxarray10_,
        mclMinus(mclVv(nbGroupOfZeros, "nbGroupOfZeros"), _mxarray7_)));
    /*
     * indImagZ       = [1:nbGroupOfImagZ];
     */
    mlfAssign(
      &indImagZ,
      mlfColon(_mxarray7_, mclVv(nbGroupOfImagZ, "nbGroupOfImagZ"), NULL));
    /*
     * indRealZ       = [nbGroupOfImagZ+1:nbGroupOfZeros];
     */
    mlfAssign(
      &indRealZ,
      mlfColon(
        mclPlus(mclVv(nbGroupOfImagZ, "nbGroupOfImagZ"), _mxarray7_),
        mclVv(nbGroupOfZeros, "nbGroupOfZeros"),
        NULL));
    /*
     * phas           = zeros(pow2NbGroup,nbfr);
     */
    mlfAssign(
      &phas,
      mlfZeros(mclVv(pow2NbGroup, "pow2NbGroup"), mclVv(nbfr, "nbfr"), NULL));
    /*
     * for numG=1:pow2NbGroup;
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(pow2NbGroup, "pow2NbGroup"));
        if (v_ > e_) {
            mlfAssign(&numG, _mxarray15_);
        } else {
            /*
             * [indReZ,indImZ] = getZeroInd(numG,nbGroupOfZeros,nbGroupOfRealZ, ...
             * indRealZ,indImagZ);
             * tmp = realzeros(indReZ);
             * for i=1:nbGroupOfRealZ
             * phas(numG,:) = phas(numG,:) + phasecontrib(uZ,tmp(i));
             * end                             
             * tmp = rho;
             * tmp(indImZ) = 1./tmp(indImZ);
             * for i=1:nbGroupOfImagZ       
             * phas(numG,:) = phas(numG,:) + phasecontrib(uZ,tmp(i),teta(i));
             * end
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &indReZ,
                  mlfSymaux_getZeroInd(
                    &indImZ,
                    mlfScalar(v_),
                    mclVv(nbGroupOfZeros, "nbGroupOfZeros"),
                    mclVv(nbGroupOfRealZ, "nbGroupOfRealZ"),
                    mclVv(indRealZ, "indRealZ"),
                    mclVv(indImagZ, "indImagZ")));
                mlfAssign(
                  &tmp,
                  mclArrayRef1(
                    mclVv(realzeros, "realzeros"), mclVv(indReZ, "indReZ")));
                {
                    int v_0 = mclForIntStart(1);
                    int e_0
                      = mclForIntEnd(mclVv(nbGroupOfRealZ, "nbGroupOfRealZ"));
                    if (v_0 > e_0) {
                        mlfAssign(&i, _mxarray15_);
                    } else {
                        for (; ; ) {
                            mclArrayAssign2(
                              &phas,
                              mclPlus(
                                mclArrayRef2(
                                  mclVv(phas, "phas"),
                                  mlfScalar(v_),
                                  mlfCreateColonIndex()),
                                mlfSymaux_phasecontrib(
                                  mclVv(uZ, "uZ"),
                                  mclIntArrayRef1(mclVv(tmp, "tmp"), v_0),
                                  NULL)),
                              mlfScalar(v_),
                              mlfCreateColonIndex());
                            if (v_0 == e_0) {
                                break;
                            }
                            ++v_0;
                        }
                        mlfAssign(&i, mlfScalar(v_0));
                    }
                }
                mlfAssign(&tmp, mclVv(rho, "rho"));
                mclArrayAssign1(
                  &tmp,
                  mclRdivide(
                    _mxarray7_,
                    mclArrayRef1(mclVv(tmp, "tmp"), mclVv(indImZ, "indImZ"))),
                  mclVv(indImZ, "indImZ"));
                {
                    int v_1 = mclForIntStart(1);
                    int e_1
                      = mclForIntEnd(mclVv(nbGroupOfImagZ, "nbGroupOfImagZ"));
                    if (v_1 > e_1) {
                        mlfAssign(&i, _mxarray15_);
                    } else {
                        for (; ; ) {
                            mclArrayAssign2(
                              &phas,
                              mclPlus(
                                mclArrayRef2(
                                  mclVv(phas, "phas"),
                                  mlfScalar(v_),
                                  mlfCreateColonIndex()),
                                mlfSymaux_phasecontrib(
                                  mclVv(uZ, "uZ"),
                                  mclIntArrayRef1(mclVv(tmp, "tmp"), v_1),
                                  mclIntArrayRef1(mclVv(teta, "teta"), v_1))),
                              mlfScalar(v_),
                              mlfCreateColonIndex());
                            if (v_1 == e_1) {
                                break;
                            }
                            ++v_1;
                        }
                        mlfAssign(&i, mlfScalar(v_1));
                    }
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&numG, mlfScalar(v_));
        }
    }
    /*
     * 
     * % To retain only the non linear part of the phase.
     * phas = nonlinph(phas,freq);
     */
    mlfAssign(
      &phas, mlfSymaux_nonlinph(mclVv(phas, "phas"), mclVv(freq, "freq")));
    /*
     * 
     * % We select the combination which phase is closer to zero
     * % (The L2-norm or variance of the phase is minimum).
     * phas = sum(phas'.^2);
     */
    mlfAssign(
      &phas,
      mlfSum(mlfPower(mlfCtranspose(mclVv(phas, "phas")), _mxarray10_), NULL));
    /*
     * [phasMin,imin]  = min(phas);
     */
    mlfAssign(&phasMin, mlfMin(&imin, mclVv(phas, "phas"), NULL, NULL));
    /*
     * %-----------------------------------------------------
     * % The following choice is only for compatibility 
     * % with load symN
     * switch N
     */
    {
        mxArray * v_ = mclInitialize(mclVa(N, "N"));
        if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * case {4,5,7,8} , imin = 2*pow2NbGroup-imin+1;
             */
            mlfAssign(
              &imin,
              mclPlus(
                mclMinus(
                  mclMtimes(_mxarray10_, mclVv(pow2NbGroup, "pow2NbGroup")),
                  mclVv(imin, "imin")),
                _mxarray7_));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * %-----------------------------------------------------
     * 
     * [indReZ,indImZ] = getZeroInd(imin,nbGroupOfZeros,nbGroupOfRealZ, ...
     */
    mlfAssign(
      &indReZ,
      mlfSymaux_getZeroInd(
        &indImZ,
        mclVv(imin, "imin"),
        mclVv(nbGroupOfZeros, "nbGroupOfZeros"),
        mclVv(nbGroupOfRealZ, "nbGroupOfRealZ"),
        mclVv(indRealZ, "indRealZ"),
        mclVv(indImagZ, "indImagZ")));
    /*
     * indRealZ,indImagZ);
     * % Choose real zeros.
     * realzeros = realzeros(indReZ);
     */
    mlfAssign(
      &realzeros,
      mclArrayRef1(mclVv(realzeros, "realzeros"), mclVv(indReZ, "indReZ")));
    /*
     * 
     * % Choose imaginary zeros.
     * tmp = rho;
     */
    mlfAssign(&tmp, mclVv(rho, "rho"));
    /*
     * tmp(indImZ) = 1./tmp(indImZ);
     */
    mclArrayAssign1(
      &tmp,
      mclRdivide(
        _mxarray7_, mclArrayRef1(mclVv(tmp, "tmp"), mclVv(indImZ, "indImZ"))),
      mclVv(indImZ, "indImZ"));
    /*
     * tmp = tmp.*exp(j*teta);
     */
    mlfAssign(
      &tmp,
      mclTimes(
        mclVv(tmp, "tmp"),
        mlfExp(mclMtimes(_mxarray21_, mclVv(teta, "teta")))));
    /*
     * tmp = [tmp conj(tmp)]';
     */
    mlfAssign(
      &tmp,
      mlfCtranspose(
        mlfHorzcat(mclVv(tmp, "tmp"), mlfConj(mclVv(tmp, "tmp")), NULL)));
    /*
     * imagzeros = tmp(:);
     */
    mlfAssign(
      &imagzeros, mclArrayRef1(mclVv(tmp, "tmp"), mlfCreateColonIndex()));
    /*
     * 
     * % Construction of the filter from its zeros.
     * w = real(poly([realzeros;imagzeros;-ones(N,1)]));
     */
    mlfAssign(
      &w,
      mlfReal(
        mlfPoly(
          mlfVertcat(
            mclVv(realzeros, "realzeros"),
            mclVv(imagzeros, "imagzeros"),
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
    /*
     * 
     * %-----------------------------------------------------------------------%
     */
    return_:
    mclValidateOutput(w, 1, nargout_, "w", "symaux");
    mxDestroyArray(ans);
    mxDestroyArray(P);
    mxDestroyArray(Proots);
    mxDestroyArray(realzeros);
    mxDestroyArray(nbrealzeros);
    mxDestroyArray(imagzeros);
    mxDestroyArray(nbimagzeros);
    mxDestroyArray(tmp);
    mxDestroyArray(rho);
    mxDestroyArray(teta);
    mxDestroyArray(nbfr);
    mxDestroyArray(freq);
    mxDestroyArray(uZ);
    mxDestroyArray(nbGroupOfRealZ);
    mxDestroyArray(nbGroupOfImagZ);
    mxDestroyArray(nbGroupOfZeros);
    mxDestroyArray(pow2NbGroup);
    mxDestroyArray(indImagZ);
    mxDestroyArray(indRealZ);
    mxDestroyArray(phas);
    mxDestroyArray(numG);
    mxDestroyArray(indReZ);
    mxDestroyArray(indImZ);
    mxDestroyArray(i);
    mxDestroyArray(phasMin);
    mxDestroyArray(imin);
    mxDestroyArray(sumw);
    mxDestroyArray(N);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return w;
}

/*
 * The function "Msymaux_getZeroInd" is the implementation version of the
 * "symaux/getZeroInd" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 117-125). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [iReZ,iImZ] = getZeroInd(num,nbGrZ,nbGrReZ,indReZ,indImZ) 
 */
static mxArray * Msymaux_getZeroInd(mxArray * * iImZ,
                                    int nargout_,
                                    mxArray * num,
                                    mxArray * nbGrZ,
                                    mxArray * nbGrReZ,
                                    mxArray * indReZ,
                                    mxArray * indImZ) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_symaux);
    mxArray * iReZ = NULL;
    mxArray * bin = NULL;
    mclCopyArray(&num);
    mclCopyArray(&nbGrZ);
    mclCopyArray(&nbGrReZ);
    mclCopyArray(&indReZ);
    mclCopyArray(&indImZ);
    /*
     * % Get indices of zeros for a group which number is num.
     * 
     * bin  = dec2bin(num-1,nbGrZ);
     */
    mlfAssign(
      &bin,
      mlfDec2bin(
        mclMinus(mclVa(num, "num"), _mxarray7_), mclVa(nbGrZ, "nbGrZ")));
    /*
     * bin  = logical(wstr2num(bin')');
     */
    mlfAssign(
      &bin,
      mlfLogical(mlfCtranspose(mlfWstr2num(mlfCtranspose(mclVv(bin, "bin"))))));
    /*
     * iReZ = [1:2:2*nbGrReZ]+bin(indReZ);
     */
    mlfAssign(
      &iReZ,
      mclPlus(
        mlfColon(
          _mxarray7_,
          _mxarray10_,
          mclMtimes(_mxarray10_, mclVa(nbGrReZ, "nbGrReZ"))),
        mclArrayRef1(mclVv(bin, "bin"), mclVa(indReZ, "indReZ"))));
    /*
     * iImZ = bin(indImZ);
     */
    mlfAssign(iImZ, mclArrayRef1(mclVv(bin, "bin"), mclVa(indImZ, "indImZ")));
    mclValidateOutput(iReZ, 1, nargout_, "iReZ", "symaux/getZeroInd");
    mclValidateOutput(*iImZ, 2, nargout_, "iImZ", "symaux/getZeroInd");
    mxDestroyArray(bin);
    mxDestroyArray(indImZ);
    mxDestroyArray(indReZ);
    mxDestroyArray(nbGrReZ);
    mxDestroyArray(nbGrZ);
    mxDestroyArray(num);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return iReZ;
    /*
     * %-----------------------------------------------------------------------%
     */
}

/*
 * The function "Msymaux_phasecontrib" is the implementation version of the
 * "symaux/phasecontrib" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 125-146). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function F = phasecontrib(Z,R,teta)
 */
static mxArray * Msymaux_phasecontrib(int nargout_,
                                      mxArray * Z,
                                      mxArray * R,
                                      mxArray * teta) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_symaux);
    int nargin_ = mclNargin(3, Z, R, teta, NULL);
    mxArray * F = NULL;
    mxArray * i = NULL;
    mxArray * I = NULL;
    mxArray * DF = NULL;
    mxArray * N = NULL;
    mxArray * V = NULL;
    mclCopyArray(&Z);
    mclCopyArray(&R);
    mclCopyArray(&teta);
    /*
     * %PHASECONTRIB  
     * %   F = PHASECONTRIB(Z,R,TETA) or F = PHASECONTRIB(Z,R)
     * %   returns the phase contribution of a complex pair of zeros
     * %   or of a real zero.
     * 
     * switch nargin
     */
    {
        mxArray * v_ = mclInitialize(mlfScalar(nargin_));
        if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * case 2 , V = Z-R;                                   % real case
             */
            mlfAssign(&V, mclMinus(mclVa(Z, "Z"), mclVa(R, "R")));
        /*
         * case 3 , V = (Z-R*exp(i*teta)).*(Z-R*exp(-i*teta)); % imaginary case
         */
        } else if (mclSwitchCompare(v_, _mxarray22_)) {
            mlfAssign(
              &V,
              mclTimes(
                mclMinus(
                  mclVa(Z, "Z"),
                  mclMtimes(
                    mclVa(R, "R"),
                    mlfExp(mclMtimes(_mxarray21_, mclVa(teta, "teta"))))),
                mclMinus(
                  mclVa(Z, "Z"),
                  mclMtimes(
                    mclVa(R, "R"),
                    mlfExp(mclMtimes(_mxarray13_, mclVa(teta, "teta")))))));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % Compute continuous phase over the pi-borders.
     * F  = atan2(imag(V),real(V));
     */
    mlfAssign(&F, mlfAtan2(mlfImag(mclVv(V, "V")), mlfReal(mclVv(V, "V"))));
    /*
     * N  = length(F);
     */
    mlfAssign(&N, mlfScalar(mclLengthInt(mclVv(F, "F"))));
    /*
     * DF = F(1:N-1)-F(2:N);
     */
    mlfAssign(
      &DF,
      mclMinus(
        mclArrayRef1(
          mclVv(F, "F"),
          mlfColon(_mxarray7_, mclMinus(mclVv(N, "N"), _mxarray7_), NULL)),
        mclArrayRef1(
          mclVv(F, "F"), mlfColon(_mxarray10_, mclVv(N, "N"), NULL))));
    /*
     * I  = find(abs(DF)>3.5);
     */
    mlfAssign(
      &I, mlfFind(NULL, NULL, mclGt(mlfAbs(mclVv(DF, "DF")), _mxarray23_)));
    /*
     * for i=I
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(&viter__, mclVv(I, "I"), NULL, NULL);
             mclForNext(&viter__, &i);
             ) {
            /*
             * F = F+2*pi*sign(DF(i))*[zeros(1,i) ones(1,N-i)];
             */
            mlfAssign(
              &F,
              mclPlus(
                mclVv(F, "F"),
                mclMtimes(
                  mclMtimes(
                    _mxarray12_,
                    mlfSign(mclArrayRef1(mclVv(DF, "DF"), mclVv(i, "i")))),
                  mlfHorzcat(
                    mlfZeros(_mxarray7_, mclVv(i, "i"), NULL),
                    mlfOnes(
                      _mxarray7_, mclMinus(mclVv(N, "N"), mclVv(i, "i")), NULL),
                    NULL))));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * F = F-F(1);
     */
    mlfAssign(&F, mclMinus(mclVv(F, "F"), mclIntArrayRef1(mclVv(F, "F"), 1)));
    mclValidateOutput(F, 1, nargout_, "F", "symaux/phasecontrib");
    mxDestroyArray(V);
    mxDestroyArray(N);
    mxDestroyArray(DF);
    mxDestroyArray(I);
    mxDestroyArray(i);
    mxDestroyArray(teta);
    mxDestroyArray(R);
    mxDestroyArray(Z);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return F;
    /*
     * %-----------------------------------------------------------------------%
     */
}

/*
 * The function "Msymaux_nonlinph" is the implementation version of the
 * "symaux/nonlinph" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/symaux.m" (lines 146-156). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function nlphase = nonlinph(v,freq)
 */
static mxArray * Msymaux_nonlinph(int nargout_, mxArray * v, mxArray * freq) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_symaux);
    mxArray * nlphase = NULL;
    mxArray * row = NULL;
    mxArray * n = NULL;
    mxArray * m = NULL;
    mclCopyArray(&v);
    mclCopyArray(&freq);
    /*
     * %NONLINPH NLPHASE = NONLINPH(V) eliminates the linear 
     * % part of the phase vector V.
     * 
     * [m,n] = size(v);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVa(v, "v"), NULL);
    /*
     * nlphase = zeros(m,n);
     */
    mlfAssign(&nlphase, mlfZeros(mclVv(m, "m"), mclVv(n, "n"), NULL));
    /*
     * for row=1:m
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(m, "m"));
        if (v_ > e_) {
            mlfAssign(&row, _mxarray15_);
        } else {
            /*
             * nlphase(row,:) = v(row,:)-v(row,n)*freq/(2*pi);
             * end
             */
            for (; ; ) {
                mclArrayAssign2(
                  &nlphase,
                  mclMinus(
                    mclArrayRef2(
                      mclVa(v, "v"), mlfScalar(v_), mlfCreateColonIndex()),
                    mclMrdivide(
                      mclMtimes(
                        mclArrayRef2(
                          mclVa(v, "v"), mlfScalar(v_), mclVv(n, "n")),
                        mclVa(freq, "freq")),
                      _mxarray12_)),
                  mlfScalar(v_),
                  mlfCreateColonIndex());
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&row, mlfScalar(v_));
        }
    }
    mclValidateOutput(nlphase, 1, nargout_, "nlphase", "symaux/nonlinph");
    mxDestroyArray(m);
    mxDestroyArray(n);
    mxDestroyArray(row);
    mxDestroyArray(freq);
    mxDestroyArray(v);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return nlphase;
    /*
     * %-----------------------------------------------------------------------%
     */
}
