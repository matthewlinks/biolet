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
#include "wstr2num.h"
#include "libmatlbm.h"
#include "libmmfile.h"

void InitializeModule_wstr2num(void) {
}

void TerminateModule_wstr2num(void) {
}

static mxArray * Mwstr2num(int nargout_, mxArray * s);

_mexLocalFunctionTable _local_function_table_wstr2num
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfWstr2num" contains the normal interface for the "wstr2num"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wstr2num.m" (lines 1-33). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWstr2num(mxArray * s) {
    int nargout = 1;
    mxArray * x = NULL;
    mlfEnterNewContext(0, 1, s);
    x = Mwstr2num(nargout, s);
    mlfRestorePreviousContext(0, 1, s);
    return mlfReturnValue(x);
}

/*
 * The function "mlxWstr2num" contains the feval interface for the "wstr2num"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wstr2num.m" (lines 1-33). The
 * feval function calls the implementation version of wstr2num through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWstr2num(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wstr2num Line: 1 Column:"
            " 1 The function \"wstr2num\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wstr2num Line: 1 Column:"
            " 1 The function \"wstr2num\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mwstr2num(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwstr2num" is the implementation version of the "wstr2num"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wstr2num.m" (lines 1-33). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function x = wstr2num(s)
 */
static mxArray * Mwstr2num(int nargout_, mxArray * s) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wstr2num);
    mxArray * x = NULL;
    mclCopyArray(&s);
    /*
     * %WSTR2NUM Convert string to number.
     * %   X = WSTR2NUM(S) converts the string S, which should be an
     * %   ASCII character representation of a numeric value, to MATLAB's
     * %   numeric representation.  The string may contain digits, a decimal
     * %   point, a leading + or - sign, an 'e' preceding a power of 10 scale
     * %   factor, and an 'i' for a complex unit.  
     * %
     * %   WSTR2NUM converts a character array representation of a matrix of
     * %   numbers to a numeric matrix. For example,
     * %       
     * %        A = ['1 2'         wstr2num(A) => [1 2;3 4]
     * %             '3 4']
     * %
     * %   If the string S does not represent a valid number or matrix,
     * %   WSTR2NUM(S) returns the empty matrix.
     * %
     * %   Spaces can be significant. For instance, 
     * %      wstr2num('1+2i') and wstr2num('1 + 2i') 
     * %   produce x = 1+2i while 
     * %      wstr2num('1 +2i') 
     * %   produces x = [1 2i].
     * %    
     * %   See also NUM2STR, HEX2NUM, CHAR.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 16-Apr-98.
     * %   Last Revision: 01-May-1998.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Mask for str2num (later we use str2double).
     * x = str2num(s);
     */
    mlfAssign(&x, mlfStr2num(NULL, mclVa(s, "s")));
    mclValidateOutput(x, 1, nargout_, "x", "wstr2num");
    mxDestroyArray(s);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return x;
}
