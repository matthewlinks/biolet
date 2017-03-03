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
#include "waverec.h"
#include "appcoef.h"
#include "errargn.h"
#include "libmatlbm.h"

static double _array1_[2] = { 3.0, 4.0 };
static mxArray * _mxarray0_;

static double _array3_[2] = { 0.0, 1.0 };
static mxArray * _mxarray2_;

static mxChar _array5_[1] = { '*' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

void InitializeModule_waverec(void) {
    _mxarray0_ = mclInitializeDoubleVector(1, 2, _array1_);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
    _mxarray4_ = mclInitializeString(1, _array5_);
    _mxarray6_ = mclInitializeDouble(0.0);
}

void TerminateModule_waverec(void) {
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwaverec(int nargout_,
                          mxArray * c,
                          mxArray * l,
                          mxArray * varargin);

_mexLocalFunctionTable _local_function_table_waverec
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWaverec" contains the nargout interface for the "waverec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/waverec.m" (lines 1-26). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWaverec(int nargout, mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    mxArray * x = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    x = Mwaverec(nargout, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
    return mlfReturnValue(x);
}

/*
 * The function "mlfWaverec" contains the normal interface for the "waverec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/waverec.m" (lines 1-26). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWaverec(mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * x = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    x = Mwaverec(nargout, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
    return mlfReturnValue(x);
}

/*
 * The function "mlfVWaverec" contains the void interface for the "waverec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/waverec.m" (lines 1-26). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWaverec(mxArray * c, mxArray * l, ...) {
    mxArray * varargin = NULL;
    mxArray * x = NULL;
    mlfVarargin(&varargin, l, 0);
    mlfEnterNewContext(0, -3, c, l, varargin);
    x = Mwaverec(0, c, l, varargin);
    mlfRestorePreviousContext(0, 2, c, l);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWaverec" contains the feval interface for the "waverec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/waverec.m" (lines 1-26). The
 * feval function calls the implementation version of waverec through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWaverec(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: waverec Line: 1 Column: "
            "1 The function \"waverec\" was called with mor"
            "e than the declared number of outputs (1)."),
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
    mprhs[2] = NULL;
    mlfAssign(&mprhs[2], mclCreateVararginCell(nrhs - 2, prhs + 2));
    mplhs[0] = Mwaverec(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[2]);
}

/*
 * The function "Mwaverec" is the implementation version of the "waverec"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/waverec.m" (lines 1-26). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function x = waverec(c,l,varargin)
 */
static mxArray * Mwaverec(int nargout_,
                          mxArray * c,
                          mxArray * l,
                          mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_waverec);
    int nargin_ = mclNargin(-3, c, l, varargin, NULL);
    mxArray * x = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&c);
    mclCopyArray(&l);
    mclCopyArray(&varargin);
    /*
     * %WAVEREC Multilevel 1-D wavelet reconstruction.
     * %   WAVEREC performs a multilevel 1-D wavelet reconstruction
     * %   using either a specific wavelet ('wname', see WFILTERS) or
     * %   specific reconstruction filters (Lo_R and Hi_R).
     * %
     * %   X = WAVEREC(C,L,'wname') reconstructs the signal X
     * %   based on the multilevel wavelet decomposition structure
     * %   [C,L] (see WAVEDEC).
     * %
     * %   For X = WAVEREC(C,L,Lo_R,Hi_R),
     * %   Lo_R is the reconstruction low-pass filter and
     * %   Hi_R is the reconstruction high-pass filter.
     * %
     * %   See also APPCOEF, IDWT, WAVEDEC.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 16-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[3:4],nargout,[0:1]), error('*'), end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("waverec"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray2_))) {
        mlfError(_mxarray4_, NULL);
    }
    /*
     * 
     * x = appcoef(c,l,varargin{:},0);
     */
    mlfAssign(
      &x,
      mlfNAppcoef(
        1,
        mclVa(c, "c"),
        mclVa(l, "l"),
        mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
        _mxarray6_,
        NULL));
    mclValidateOutput(x, 1, nargout_, "x", "waverec");
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mxDestroyArray(l);
    mxDestroyArray(c);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return x;
}
