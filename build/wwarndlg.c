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
#include "wwarndlg.h"
#include "libmatlbm.h"

static mxChar _array1_[4] = { 'w', 'a', 'r', 'n' };
static mxArray * _mxarray0_;

static mxChar _array3_[5] = { 'm', 'o', 'd', 'a', 'l' };
static mxArray * _mxarray2_;
static mxArray * _mxarray5_;
static mxArray * _mxarray4_;

void InitializeModule_wwarndlg(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(5, _array3_);
    _mxarray5_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray4_ = mclInitializeCell(_mxarray5_);
}

void TerminateModule_wwarndlg(void) {
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwwarndlg(int nargout_,
                           mxArray * WarnString,
                           mxArray * DlgName,
                           mxArray * bloc);

_mexLocalFunctionTable _local_function_table_wwarndlg
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNWwarndlg" contains the nargout interface for the
 * "wwarndlg" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wwarndlg.m" (lines 1-27). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWwarndlg(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * WarnString,
                       mxArray * DlgName,
                       mxArray * bloc) {
    mlfEnterNewContext(0, 3, WarnString, DlgName, bloc);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mwwarndlg(nargout, WarnString, DlgName, bloc);
    mlfRestorePreviousContext(0, 3, WarnString, DlgName, bloc);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfWwarndlg" contains the normal interface for the "wwarndlg"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wwarndlg.m" (lines 1-27). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWwarndlg(mlfVarargoutList * varargout,
                      mxArray * WarnString,
                      mxArray * DlgName,
                      mxArray * bloc) {
    int nargout = 0;
    mlfEnterNewContext(0, 3, WarnString, DlgName, bloc);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mwwarndlg(nargout, WarnString, DlgName, bloc);
    mlfRestorePreviousContext(0, 3, WarnString, DlgName, bloc);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVWwarndlg" contains the void interface for the "wwarndlg"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wwarndlg.m" (lines 1-27). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVWwarndlg(mxArray * WarnString, mxArray * DlgName, mxArray * bloc) {
    mxArray * varargout = NULL;
    mlfEnterNewContext(0, 3, WarnString, DlgName, bloc);
    varargout = Mwwarndlg(0, WarnString, DlgName, bloc);
    mlfRestorePreviousContext(0, 3, WarnString, DlgName, bloc);
    mxDestroyArray(varargout);
}

/*
 * The function "mlxWwarndlg" contains the feval interface for the "wwarndlg"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wwarndlg.m" (lines 1-27). The
 * feval function calls the implementation version of wwarndlg through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWwarndlg(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wwarndlg Line: 1 Column:"
            " 1 The function \"wwarndlg\" was called with m"
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
    mplhs[0] = Mwwarndlg(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "Mwwarndlg" is the implementation version of the "wwarndlg"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wwarndlg.m" (lines 1-27). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = wwarndlg(WarnString,DlgName,bloc)
 */
static mxArray * Mwwarndlg(int nargout_,
                           mxArray * WarnString,
                           mxArray * DlgName,
                           mxArray * bloc) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wwarndlg);
    int nargin_ = mclNargin(3, WarnString, DlgName, bloc, NULL);
    mxArray * varargout = NULL;
    mxArray * msgbox = NULL;
    mxArray * h = NULL;
    mxArray * warndlg = NULL;
    mclCopyArray(&WarnString);
    mclCopyArray(&DlgName);
    mclCopyArray(&bloc);
    /*
     * %WWARNDLG Display warning dialog box (and block execution).
     * %   HANDLE = WWARNDLG(WARNSTRING,DLGNAME) creates an warning dialog box
     * %   which displays WARNSTRING in a window named DLGNAME.  A pushbutton
     * %   labeled OK must be pressed to make the warning box disappear.
     * %
     * %   WWARNDLG(WARNSTRING,DLGNAME,arg) block execution.
     * % 
     * %   WARNSTRING may be any valid string format.  Cell arrays are
     * %   preferred.
     * % 
     * %   See also MSGBOX, HELPDLG, QUESTDLG, ERRORDLG.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-Oct-96.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * if nargin==2
     */
    if (nargin_ == 2) {
        /*
         * h = warndlg(WarnString,DlgName);
         */
        mlfAssign(
          &h,
          mclArrayRef2(
            mclVv(warndlg, "warndlg"),
            mclVa(WarnString, "WarnString"),
            mclVa(DlgName, "DlgName")));
    /*
     * else
     */
    } else {
        /*
         * h = msgbox(WarnString,DlgName,'warn','modal');
         */
        mlfAssign(
          &h,
          mlfIndexRef(
            mclVv(msgbox, "msgbox"),
            "(?,?,?,?)",
            mclVa(WarnString, "WarnString"),
            mclVa(DlgName, "DlgName"),
            _mxarray0_,
            _mxarray2_));
    /*
     * end
     */
    }
    /*
     * if nargout==1
     */
    if (nargout_ == 1) {
        /*
         * if nargin<3 , varargout(1) = {h}; else , varargout(1) = {[]}; end
         */
        if (nargin_ < 3) {
            mclIntArrayAssign1(&varargout, mlfCellhcat(mclVv(h, "h"), NULL), 1);
        } else {
            mclIntArrayAssign1(&varargout, _mxarray4_, 1);
        }
    /*
     * end
     */
    }
    mxDestroyArray(warndlg);
    mxDestroyArray(h);
    mxDestroyArray(msgbox);
    mxDestroyArray(bloc);
    mxDestroyArray(DlgName);
    mxDestroyArray(WarnString);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
