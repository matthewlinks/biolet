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
#include "biorfilt.h"
#include "errargn.h"
#include "libmatlbm.h"
#include "orthfilt.h"

static double _array1_[2] = { 2.0, 3.0 };
static mxArray * _mxarray0_;

static double _array3_[3] = { 0.0, 4.0, 8.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;

void InitializeModule_biorfilt(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 3, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(2.0);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeDouble(3.0);
}

void TerminateModule_biorfilt(void) {
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mbiorfilt(int nargout_,
                           mxArray * Df,
                           mxArray * Rf,
                           mxArray * in3);

_mexLocalFunctionTable _local_function_table_biorfilt
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNBiorfilt" contains the nargout interface for the
 * "biorfilt" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorfilt.m" (lines 1-45). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNBiorfilt(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * Df,
                       mxArray * Rf,
                       mxArray * in3) {
    mlfEnterNewContext(0, 3, Df, Rf, in3);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mbiorfilt(nargout, Df, Rf, in3);
    mlfRestorePreviousContext(0, 3, Df, Rf, in3);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfBiorfilt" contains the normal interface for the "biorfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorfilt.m" (lines 1-45). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfBiorfilt(mlfVarargoutList * varargout,
                      mxArray * Df,
                      mxArray * Rf,
                      mxArray * in3) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, Df, Rf, in3);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mbiorfilt(nargout, Df, Rf, in3);
    mlfRestorePreviousContext(0, 3, Df, Rf, in3);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVBiorfilt" contains the void interface for the "biorfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorfilt.m" (lines 1-45). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVBiorfilt(mxArray * Df, mxArray * Rf, mxArray * in3) {
    mxArray * varargout = NULL;
    mlfEnterNewContext(0, 3, Df, Rf, in3);
    varargout = Mbiorfilt(0, Df, Rf, in3);
    mlfRestorePreviousContext(0, 3, Df, Rf, in3);
    mxDestroyArray(varargout);
}

/*
 * The function "mlxBiorfilt" contains the feval interface for the "biorfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorfilt.m" (lines 1-45). The
 * feval function calls the implementation version of biorfilt through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxBiorfilt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: biorfilt Line: 1 Column:"
            " 1 The function \"biorfilt\" was called with m"
            "ore than the declared number of inputs (3)."),
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
    mplhs[0] = Mbiorfilt(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mbiorfilt" is the implementation version of the "biorfilt"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/biorfilt.m" (lines 1-45). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = biorfilt(Df,Rf,in3)
 */
static mxArray * Mbiorfilt(int nargout_,
                           mxArray * Df,
                           mxArray * Rf,
                           mxArray * in3) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_biorfilt);
    int nargin_ = mclNargin(3, Df, Rf, in3, NULL);
    mxArray * varargout = NULL;
    mxArray * Hi_R2 = NULL;
    mxArray * Lo_R2 = NULL;
    mxArray * Hi_D2 = NULL;
    mxArray * Lo_D2 = NULL;
    mxArray * Hi_R1 = NULL;
    mxArray * Lo_R1 = NULL;
    mxArray * Hi_D1 = NULL;
    mxArray * Lo_D1 = NULL;
    mxArray * lmax = NULL;
    mxArray * ld = NULL;
    mxArray * lr = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&Df);
    mclCopyArray(&Rf);
    mclCopyArray(&in3);
    /*
     * %BIORFILT Biorthogonal wavelet filter set.
     * %   The BIORFILT command returns either four or eight filters
     * %   associated with biorthogonal wavelets.
     * %
     * %   [LO_D,HI_D,LO_R,HI_R] = BIORFILT(DF,RF) computes four
     * %   filters associated with biorthogonal wavelet specified
     * %   by decomposition filter DF and reconstruction filter RF.
     * %   These filters are:
     * %   LO_D  Decomposition low-pass filter
     * %   HI_D  Decomposition high-pass filter
     * %   LO_R  Reconstruction low-pass filter
     * %   HI_R  Reconstruction high-pass filter
     * %
     * %   [LO_D1,HI_D1,LO_R1,HI_R1,LO_D2,HI_D2,LO_R2,HI_R2] = 
     * %                       BIORFILT(DF,RF,'8')
     * %   returns eight filters, the first four associated with
     * %   the decomposition wavelet and the last four associated
     * %   with the reconstruction wavelet.
     * %
     * %   See also BIORWAVF, ORTHFILT.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 14-May-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[2 3],nargout,[0 4 8]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("biorfilt"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * % The filters must be of the same even length.
     * lr = length(Rf);
     */
    mlfAssign(&lr, mlfScalar(mclLengthInt(mclVa(Rf, "Rf"))));
    /*
     * ld = length(Df);
     */
    mlfAssign(&ld, mlfScalar(mclLengthInt(mclVa(Df, "Df"))));
    /*
     * lmax = max(lr,ld);
     */
    mlfAssign(&lmax, mlfMax(NULL, mclVv(lr, "lr"), mclVv(ld, "ld"), NULL));
    /*
     * if rem(lmax,2) , lmax = lmax+1; end
     */
    if (mlfTobool(mlfRem(mclVv(lmax, "lmax"), _mxarray6_))) {
        mlfAssign(&lmax, mclPlus(mclVv(lmax, "lmax"), _mxarray7_));
    }
    /*
     * Rf = [zeros(1,floor((lmax-lr)/2)) Rf zeros(1,ceil((lmax-lr)/2))];
     */
    mlfAssign(
      &Rf,
      mlfHorzcat(
        mlfZeros(
          _mxarray7_,
          mlfFloor(
            mclMrdivide(
              mclMinus(mclVv(lmax, "lmax"), mclVv(lr, "lr")), _mxarray6_)),
          NULL),
        mclVa(Rf, "Rf"),
        mlfZeros(
          _mxarray7_,
          mlfCeil(
            mclMrdivide(
              mclMinus(mclVv(lmax, "lmax"), mclVv(lr, "lr")), _mxarray6_)),
          NULL),
        NULL));
    /*
     * Df = [zeros(1,floor((lmax-ld)/2)) Df zeros(1,ceil((lmax-ld)/2))];
     */
    mlfAssign(
      &Df,
      mlfHorzcat(
        mlfZeros(
          _mxarray7_,
          mlfFloor(
            mclMrdivide(
              mclMinus(mclVv(lmax, "lmax"), mclVv(ld, "ld")), _mxarray6_)),
          NULL),
        mclVa(Df, "Df"),
        mlfZeros(
          _mxarray7_,
          mlfCeil(
            mclMrdivide(
              mclMinus(mclVv(lmax, "lmax"), mclVv(ld, "ld")), _mxarray6_)),
          NULL),
        NULL));
    /*
     * 
     * [Lo_D1,Hi_D1,Lo_R1,Hi_R1] = orthfilt(Df);
     */
    mlfAssign(
      &Lo_D1, mlfNOrthfilt(4, &Hi_D1, &Lo_R1, &Hi_R1, mclVa(Df, "Df"), NULL));
    /*
     * [Lo_D2,Hi_D2,Lo_R2,Hi_R2] = orthfilt(Rf);
     */
    mlfAssign(
      &Lo_D2, mlfNOrthfilt(4, &Hi_D2, &Lo_R2, &Hi_R2, mclVa(Rf, "Rf"), NULL));
    /*
     * switch nargin
     */
    {
        mxArray * v_ = mclInitialize(mlfScalar(nargin_));
        if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * case 2 ,  varargout = {Lo_D1,Hi_D2,Lo_R2,Hi_R1};
             */
            mlfAssign(
              &varargout,
              mlfCellhcat(
                mclVv(Lo_D1, "Lo_D1"),
                mclVv(Hi_D2, "Hi_D2"),
                mclVv(Lo_R2, "Lo_R2"),
                mclVv(Hi_R1, "Hi_R1"),
                NULL));
        /*
         * case 3 ,  varargout = {Lo_D1,Hi_D1,Lo_R1,Hi_R1,Lo_D2,Hi_D2,Lo_R2,Hi_R2};
         */
        } else if (mclSwitchCompare(v_, _mxarray8_)) {
            mlfAssign(
              &varargout,
              mlfCellhcat(
                mclVv(Lo_D1, "Lo_D1"),
                mclVv(Hi_D1, "Hi_D1"),
                mclVv(Lo_R1, "Lo_R1"),
                mclVv(Hi_R1, "Hi_R1"),
                mclVv(Lo_D2, "Lo_D2"),
                mclVv(Hi_D2, "Hi_D2"),
                mclVv(Lo_R2, "Lo_R2"),
                mclVv(Hi_R2, "Hi_R2"),
                NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mxDestroyArray(ans);
    mxDestroyArray(lr);
    mxDestroyArray(ld);
    mxDestroyArray(lmax);
    mxDestroyArray(Lo_D1);
    mxDestroyArray(Hi_D1);
    mxDestroyArray(Lo_R1);
    mxDestroyArray(Hi_R1);
    mxDestroyArray(Lo_D2);
    mxDestroyArray(Hi_D2);
    mxDestroyArray(Lo_R2);
    mxDestroyArray(Hi_R2);
    mxDestroyArray(in3);
    mxDestroyArray(Rf);
    mxDestroyArray(Df);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
