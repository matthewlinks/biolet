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
#include "orthfilt.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "qmf.h"
#include "wrev.h"

static double _array1_[2] = { 1.0, 2.0 };
static mxArray * _mxarray0_;

static double _array3_[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

void InitializeModule_orthfilt(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 5, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDouble(2.0);
}

void TerminateModule_orthfilt(void) {
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Morthfilt(mxArray * * Hi_D,
                           mxArray * * Lo_R,
                           mxArray * * Hi_R,
                           int nargout_,
                           mxArray * W,
                           mxArray * P);

_mexLocalFunctionTable _local_function_table_orthfilt
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNOrthfilt" contains the nargout interface for the
 * "orthfilt" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/orthfilt.m" (lines 1-30). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNOrthfilt(int nargout,
                       mxArray * * Hi_D,
                       mxArray * * Lo_R,
                       mxArray * * Hi_R,
                       mxArray * W,
                       mxArray * P) {
    mxArray * Lo_D = NULL;
    mxArray * Hi_D__ = NULL;
    mxArray * Lo_R__ = NULL;
    mxArray * Hi_R__ = NULL;
    mlfEnterNewContext(3, 2, Hi_D, Lo_R, Hi_R, W, P);
    Lo_D = Morthfilt(&Hi_D__, &Lo_R__, &Hi_R__, nargout, W, P);
    mlfRestorePreviousContext(3, 2, Hi_D, Lo_R, Hi_R, W, P);
    if (Hi_D != NULL) {
        mclCopyOutputArg(Hi_D, Hi_D__);
    } else {
        mxDestroyArray(Hi_D__);
    }
    if (Lo_R != NULL) {
        mclCopyOutputArg(Lo_R, Lo_R__);
    } else {
        mxDestroyArray(Lo_R__);
    }
    if (Hi_R != NULL) {
        mclCopyOutputArg(Hi_R, Hi_R__);
    } else {
        mxDestroyArray(Hi_R__);
    }
    return mlfReturnValue(Lo_D);
}

/*
 * The function "mlfOrthfilt" contains the normal interface for the "orthfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/orthfilt.m" (lines 1-30). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfOrthfilt(mxArray * * Hi_D,
                      mxArray * * Lo_R,
                      mxArray * * Hi_R,
                      mxArray * W,
                      mxArray * P) {
    int nargout = 1;
    mxArray * Lo_D = NULL;
    mxArray * Hi_D__ = NULL;
    mxArray * Lo_R__ = NULL;
    mxArray * Hi_R__ = NULL;
    mlfEnterNewContext(3, 2, Hi_D, Lo_R, Hi_R, W, P);
    if (Hi_D != NULL) {
        ++nargout;
    }
    if (Lo_R != NULL) {
        ++nargout;
    }
    if (Hi_R != NULL) {
        ++nargout;
    }
    Lo_D = Morthfilt(&Hi_D__, &Lo_R__, &Hi_R__, nargout, W, P);
    mlfRestorePreviousContext(3, 2, Hi_D, Lo_R, Hi_R, W, P);
    if (Hi_D != NULL) {
        mclCopyOutputArg(Hi_D, Hi_D__);
    } else {
        mxDestroyArray(Hi_D__);
    }
    if (Lo_R != NULL) {
        mclCopyOutputArg(Lo_R, Lo_R__);
    } else {
        mxDestroyArray(Lo_R__);
    }
    if (Hi_R != NULL) {
        mclCopyOutputArg(Hi_R, Hi_R__);
    } else {
        mxDestroyArray(Hi_R__);
    }
    return mlfReturnValue(Lo_D);
}

/*
 * The function "mlfVOrthfilt" contains the void interface for the "orthfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/orthfilt.m" (lines 1-30). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVOrthfilt(mxArray * W, mxArray * P) {
    mxArray * Lo_D = NULL;
    mxArray * Hi_D = NULL;
    mxArray * Lo_R = NULL;
    mxArray * Hi_R = NULL;
    mlfEnterNewContext(0, 2, W, P);
    Lo_D = Morthfilt(&Hi_D, &Lo_R, &Hi_R, 0, W, P);
    mlfRestorePreviousContext(0, 2, W, P);
    mxDestroyArray(Lo_D);
    mxDestroyArray(Hi_D);
    mxDestroyArray(Lo_R);
    mxDestroyArray(Hi_R);
}

/*
 * The function "mlxOrthfilt" contains the feval interface for the "orthfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/orthfilt.m" (lines 1-30). The
 * feval function calls the implementation version of orthfilt through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxOrthfilt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[4];
    int i;
    if (nlhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: orthfilt Line: 1 Column:"
            " 1 The function \"orthfilt\" was called with m"
            "ore than the declared number of outputs (4)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: orthfilt Line: 1 Column:"
            " 1 The function \"orthfilt\" was called with m"
            "ore than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 4; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0]
      = Morthfilt(&mplhs[1], &mplhs[2], &mplhs[3], nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 4 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 4; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Morthfilt" is the implementation version of the "orthfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/orthfilt.m" (lines 1-30). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [Lo_D,Hi_D,Lo_R,Hi_R] = orthfilt(W,P)
 */
static mxArray * Morthfilt(mxArray * * Hi_D,
                           mxArray * * Lo_R,
                           mxArray * * Hi_R,
                           int nargout_,
                           mxArray * W,
                           mxArray * P) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_orthfilt);
    int nargin_ = mclNargin(2, W, P, NULL);
    mxArray * Lo_D = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&W);
    mclCopyArray(&P);
    /*
     * %ORTHFILT Orthogonal wavelet filter set.
     * %   [LO_D,HI_D,LO_R,HI_R] = ORTHFILT(W) computes the
     * %   four filters associated with the scaling filter W 
     * %   corresponding to a wavelet:
     * %   LO_D = decomposition low-pass filter
     * %   HI_D = decomposition high-pass filter
     * %   LO_R = reconstruction low-pass filter
     * %   HI_R = reconstruction high-pass filter.
     * %
     * %   See also BIORFILT, QMF, WFILTERS.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 21-May-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1,2],nargout,[0:4]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("orthfilt"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * if nargin<2 , P = 0; end
     */
    if (nargin_ < 2) {
        mlfAssign(&P, _mxarray6_);
    }
    /*
     * 
     * % Normalize filter sum.
     * W = W/sum(W);
     */
    mlfAssign(&W, mclMrdivide(mclVa(W, "W"), mlfSum(mclVa(W, "W"), NULL)));
    /*
     * 
     * % Associated filters.
     * Lo_R = sqrt(2)*W;
     */
    mlfAssign(Lo_R, mclMtimes(mlfSqrt(_mxarray7_), mclVa(W, "W")));
    /*
     * Hi_R = qmf(Lo_R,P);
     */
    mlfAssign(Hi_R, mlfNQmf(1, mclVv(*Lo_R, "Lo_R"), mclVa(P, "P")));
    /*
     * Hi_D = wrev(Hi_R);
     */
    mlfAssign(Hi_D, mlfNWrev(1, mclVv(*Hi_R, "Hi_R")));
    /*
     * Lo_D = wrev(Lo_R);
     */
    mlfAssign(&Lo_D, mlfNWrev(1, mclVv(*Lo_R, "Lo_R")));
    mclValidateOutput(Lo_D, 1, nargout_, "Lo_D", "orthfilt");
    mclValidateOutput(*Hi_D, 2, nargout_, "Hi_D", "orthfilt");
    mclValidateOutput(*Lo_R, 3, nargout_, "Lo_R", "orthfilt");
    mclValidateOutput(*Hi_R, 4, nargout_, "Hi_R", "orthfilt");
    mxDestroyArray(ans);
    mxDestroyArray(P);
    mxDestroyArray(W);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return Lo_D;
}
