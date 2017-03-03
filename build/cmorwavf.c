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
#include "cmorwavf.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wstr2num.h"

static double _array1_[2] = { 4.0, 5.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 1.0, 2.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;

static mxChar _array10_[4] = { 'c', 'm', 'o', 'r' };
static mxArray * _mxarray9_;

static double _array12_[4] = { 1.0, 2.0, 3.0, 4.0 };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

static mxChar _array15_[1] = { '-' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;

static mxChar _array19_[23] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'W', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                'N', 'u', 'm', 'b', 'e', 'r', '!' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;

void InitializeModule_cmorwavf(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeDouble(3.0);
    _mxarray8_ = mclInitializeDouble(4.0);
    _mxarray9_ = mclInitializeString(4, _array10_);
    _mxarray11_ = mclInitializeDoubleVector(1, 4, _array12_);
    _mxarray13_ = mclInitializeDouble(0.0);
    _mxarray14_ = mclInitializeString(1, _array15_);
    _mxarray16_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray17_ = mclInitializeDouble(5.0);
    _mxarray18_ = mclInitializeString(23, _array19_);
    _mxarray20_ = mclInitializeDouble(3.141592653589793);
    _mxarray21_ = mclInitializeDouble(-.5);
    _mxarray22_ = mclInitializeComplex(0.0, 6.283185307179586);
}

void TerminateModule_cmorwavf(void) {
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
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

static mxArray * Mcmorwavf(mxArray * * X, int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_cmorwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNCmorwavf" contains the nargout interface for the
 * "cmorwavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cmorwavf.m" (lines 1-58). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNCmorwavf(int nargout, mxArray * * X, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    psi = Mcmorwavf(&X__, nargout, varargin);
    mlfRestorePreviousContext(1, 0, X);
    mxDestroyArray(varargin);
    if (X != NULL) {
        mclCopyOutputArg(X, X__);
    } else {
        mxDestroyArray(X__);
    }
    return mlfReturnValue(psi);
}

/*
 * The function "mlfCmorwavf" contains the normal interface for the "cmorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cmorwavf.m" (lines 1-58). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfCmorwavf(mxArray * * X, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * psi = NULL;
    mxArray * X__ = NULL;
    mlfVarargin(&varargin, X, 0);
    mlfEnterNewContext(1, -1, X, varargin);
    if (X != NULL) {
        ++nargout;
    }
    psi = Mcmorwavf(&X__, nargout, varargin);
    mlfRestorePreviousContext(1, 0, X);
    mxDestroyArray(varargin);
    if (X != NULL) {
        mclCopyOutputArg(X, X__);
    } else {
        mxDestroyArray(X__);
    }
    return mlfReturnValue(psi);
}

/*
 * The function "mlfVCmorwavf" contains the void interface for the "cmorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cmorwavf.m" (lines 1-58). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCmorwavf(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * psi = NULL;
    mxArray * X = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    psi = Mcmorwavf(&X, 0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    mxDestroyArray(psi);
}

/*
 * The function "mlxCmorwavf" contains the feval interface for the "cmorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cmorwavf.m" (lines 1-58). The
 * feval function calls the implementation version of cmorwavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxCmorwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cmorwavf Line: 1 Column:"
            " 1 The function \"cmorwavf\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mcmorwavf(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mcmorwavf" is the implementation version of the "cmorwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/cmorwavf.m" (lines 1-58). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [psi,X] = cmorwavf(varargin)
 */
static mxArray * Mcmorwavf(mxArray * * X, int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cmorwavf);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * psi = NULL;
    mxArray * msg = NULL;
    mxArray * err = NULL;
    mxArray * len = NULL;
    mxArray * ind = NULL;
    mxArray * label = NULL;
    mxArray * Fb = NULL;
    mxArray * Fc = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %CMORWAVF Complex Morlet wavelet.
     * %   [PSI,X] = CMORWAVF(LB,UB,N,FB,FC) returns values of
     * %   the complex Morlet wavelet defined by a positive bandwidth
     * %   parameter FB, a wavelet center frequency FC, and the expression
     * %   PSI(X) = ((pi*FB)^(-0.5))*exp(2*i*pi*FC*X)*exp(-(X^2)/FB)
     * %   on an N point regular grid in the interval [LB,UB].
     * %
     * %   Output arguments are the wavelet function PSI
     * %   computed on the grid X.
     * %
     * %   See also WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 09-Jun-99.
     * %   Last Revision: 13-Feb-2002.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[4 5],nargout,[0:2]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("cmorwavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * X = linspace(varargin{1:3});  % wavelet support.
     */
    mlfAssign(
      X,
      mclFeval(
        mclValueVarargout(),
        mlxLinspace,
        mlfIndexRef(
          mclVa(varargin, "varargin"),
          "{?}",
          mlfColon(_mxarray6_, _mxarray7_, NULL)),
        NULL));
    /*
     * Fc = 1;
     */
    mlfAssign(&Fc, _mxarray6_);
    /*
     * Fb = 1;
     */
    mlfAssign(&Fb, _mxarray6_);
    /*
     * switch nargin
     */
    {
        mxArray * v_ = mclInitialize(mlfScalar(nargin_));
        if (mclSwitchCompare(v_, _mxarray8_)) {
            /*
             * case 4
             * if ischar(varargin{4})
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxIschar,
                    mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_),
                    NULL))) {
                /*
                 * label = deblank(varargin{4});
                 */
                mlfAssign(
                  &label,
                  mclFeval(
                    mclValueVarargout(),
                    mlxDeblank,
                    mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_),
                    NULL));
                /*
                 * ind   = strncmpi('cmor',label,4);
                 */
                mlfAssign(
                  &ind,
                  mlfStrncmpi(_mxarray9_, mclVv(label, "label"), _mxarray8_));
                /*
                 * if isequal(ind,1)
                 */
                if (mlfTobool(
                      mlfIsequal(mclVv(ind, "ind"), _mxarray6_, NULL))) {
                    /*
                     * label([1:4]) = [];
                     */
                    mlfIndexDelete(&label, "(?)", _mxarray11_);
                    /*
                     * len = length(label);
                     */
                    mlfAssign(
                      &len, mlfScalar(mclLengthInt(mclVv(label, "label"))));
                    /*
                     * if len>0
                     */
                    if (mclGtBool(mclVv(len, "len"), _mxarray13_)) {
                        /*
                         * ind = findstr('-',label);
                         */
                        mlfAssign(
                          &ind, mlfFindstr(_mxarray14_, mclVv(label, "label")));
                        /*
                         * if isempty(ind)
                         */
                        if (mlfTobool(mlfIsempty(mclVv(ind, "ind")))) {
                            /*
                             * Fb = []; % error 
                             */
                            mlfAssign(&Fb, _mxarray16_);
                        /*
                         * else
                         */
                        } else {
                            /*
                             * Fb = wstr2num(label(1:ind-1));
                             */
                            mlfAssign(
                              &Fb,
                              mlfWstr2num(
                                mclArrayRef1(
                                  mclVv(label, "label"),
                                  mlfColon(
                                    _mxarray6_,
                                    mclMinus(mclVv(ind, "ind"), _mxarray6_),
                                    NULL))));
                            /*
                             * label(1:ind) = [];
                             */
                            mlfIndexDelete(
                              &label,
                              "(?)",
                              mlfColon(_mxarray6_, mclVv(ind, "ind"), NULL));
                            /*
                             * Fc = wstr2num(label);    
                             */
                            mlfAssign(&Fc, mlfWstr2num(mclVv(label, "label")));
                        /*
                         * end
                         */
                        }
                    /*
                     * end
                     */
                    }
                /*
                 * else
                 */
                } else {
                    /*
                     * Fc = []; % error 
                     */
                    mlfAssign(&Fc, _mxarray16_);
                /*
                 * end
                 */
                }
            /*
             * else
             */
            } else {
                /*
                 * Fb = []; % error 
                 */
                mlfAssign(&Fb, _mxarray16_);
            /*
             * end
             */
            }
        /*
         * case 5 ,Fb = varargin{4};  Fc = varargin{5};
         */
        } else if (mclSwitchCompare(v_, _mxarray17_)) {
            mlfAssign(
              &Fb, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray8_));
            mlfAssign(
              &Fc,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray17_));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * if isempty(Fc) | isempty(Fb) , err = 1; else , err = 0; end
     */
    {
        mxArray * a_ = mclInitialize(mlfIsempty(mclVv(Fc, "Fc")));
        if (mlfTobool(a_)
            || mlfTobool(mclOr(a_, mlfIsempty(mclVv(Fb, "Fb"))))) {
            mxDestroyArray(a_);
            mlfAssign(&err, _mxarray6_);
        } else {
            mxDestroyArray(a_);
            mlfAssign(&err, _mxarray13_);
        }
    }
    /*
     * if ~err , err = ~isnumeric(Fc) | ~isnumeric(Fb) | (Fc<=0) | (Fb<=0); end
     */
    if (mclNotBool(mclVv(err, "err"))) {
        mlfAssign(
          &err,
          mclOr(
            mclOr(
              mclOr(
                mclNot(mlfIsnumeric(mclVv(Fc, "Fc"))),
                mclNot(mlfIsnumeric(mclVv(Fb, "Fb")))),
              mclLe(mclVv(Fc, "Fc"), _mxarray13_)),
            mclLe(mclVv(Fb, "Fb"), _mxarray13_)));
    }
    /*
     * if err
     */
    if (mlfTobool(mclVv(err, "err"))) {
        /*
         * msg = 'Invalid Wavelet Number!';
         */
        mlfAssign(&msg, _mxarray18_);
        /*
         * error(msg)
         */
        mlfError(mclVv(msg, "msg"), NULL);
    /*
     * end
     */
    }
    /*
     * psi = ((pi*Fb)^(-0.5))*exp(2*i*pi*Fc*X).*exp(-(X.*X)/Fb);
     */
    mlfAssign(
      &psi,
      mclTimes(
        mclMtimes(
          mclMpower(mclMtimes(_mxarray20_, mclVv(Fb, "Fb")), _mxarray21_),
          mlfExp(
            mclMtimes(
              mclMtimes(_mxarray22_, mclVv(Fc, "Fc")), mclVv(*X, "X")))),
        mlfExp(
          mclMrdivide(
            mclUminus(mclTimes(mclVv(*X, "X"), mclVv(*X, "X"))),
            mclVv(Fb, "Fb")))));
    mclValidateOutput(psi, 1, nargout_, "psi", "cmorwavf");
    mclValidateOutput(*X, 2, nargout_, "X", "cmorwavf");
    mxDestroyArray(ans);
    mxDestroyArray(Fc);
    mxDestroyArray(Fb);
    mxDestroyArray(label);
    mxDestroyArray(ind);
    mxDestroyArray(len);
    mxDestroyArray(err);
    mxDestroyArray(msg);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return psi;
}
