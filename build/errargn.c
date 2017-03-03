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
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

static mxChar _array3_[34] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'n',
                               'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ',
                               'i', 'n', 'p', 'u', 't', ' ', 'a', 'r', 'g',
                               'u', 'm', 'e', 'n', 't', 's', '.' };
static mxArray * _mxarray2_;

static mxChar _array5_[35] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'n',
                               'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ',
                               'o', 'u', 't', 'p', 'u', 't', ' ', 'a', 'r',
                               'g', 'u', 'm', 'e', 'n', 't', 's', '.' };
static mxArray * _mxarray4_;

static mxChar _array7_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray6_;

void InitializeModule_errargn(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray2_ = mclInitializeString(34, _array3_);
    _mxarray4_ = mclInitializeString(35, _array5_);
    _mxarray6_ = mclInitializeString(3, _array7_);
}

void TerminateModule_errargn(void) {
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Merrargn(mxArray * * msg,
                          int nargout_,
                          mxArray * ndfct,
                          mxArray * nbargin,
                          mxArray * argin,
                          mxArray * nbargout,
                          mxArray * argout);

_mexLocalFunctionTable _local_function_table_errargn
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNErrargn" contains the nargout interface for the "errargn"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargn.m" (lines 1-47). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNErrargn(int nargout,
                      mxArray * * msg,
                      mxArray * ndfct,
                      mxArray * nbargin,
                      mxArray * argin,
                      mxArray * nbargout,
                      mxArray * argout) {
    mxArray * err = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 5, msg, ndfct, nbargin, argin, nbargout, argout);
    err = Merrargn(&msg__, nargout, ndfct, nbargin, argin, nbargout, argout);
    mlfRestorePreviousContext(
      1, 5, msg, ndfct, nbargin, argin, nbargout, argout);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(err);
}

/*
 * The function "mlfErrargn" contains the normal interface for the "errargn"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargn.m" (lines 1-47). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfErrargn(mxArray * * msg,
                     mxArray * ndfct,
                     mxArray * nbargin,
                     mxArray * argin,
                     mxArray * nbargout,
                     mxArray * argout) {
    int nargout = 1;
    mxArray * err = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 5, msg, ndfct, nbargin, argin, nbargout, argout);
    if (msg != NULL) {
        ++nargout;
    }
    err = Merrargn(&msg__, nargout, ndfct, nbargin, argin, nbargout, argout);
    mlfRestorePreviousContext(
      1, 5, msg, ndfct, nbargin, argin, nbargout, argout);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(err);
}

/*
 * The function "mlfVErrargn" contains the void interface for the "errargn"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargn.m" (lines 1-47). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVErrargn(mxArray * ndfct,
                 mxArray * nbargin,
                 mxArray * argin,
                 mxArray * nbargout,
                 mxArray * argout) {
    mxArray * err = NULL;
    mxArray * msg = NULL;
    mlfEnterNewContext(0, 5, ndfct, nbargin, argin, nbargout, argout);
    err = Merrargn(&msg, 0, ndfct, nbargin, argin, nbargout, argout);
    mlfRestorePreviousContext(0, 5, ndfct, nbargin, argin, nbargout, argout);
    mxDestroyArray(err);
    mxDestroyArray(msg);
}

/*
 * The function "mlxErrargn" contains the feval interface for the "errargn"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargn.m" (lines 1-47). The
 * feval function calls the implementation version of errargn through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxErrargn(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: errargn Line: 1 Column: "
            "1 The function \"errargn\" was called with mor"
            "e than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: errargn Line: 1 Column:"
            " 1 The function \"errargn\" was called with m"
            "ore than the declared number of inputs (5)."),
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
      = Merrargn(
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
 * The function "Merrargn" is the implementation version of the "errargn"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/errargn.m" (lines 1-47). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [err,msg] = errargn(ndfct,nbargin,argin,nbargout,argout)
 */
static mxArray * Merrargn(mxArray * * msg,
                          int nargout_,
                          mxArray * ndfct,
                          mxArray * nbargin,
                          mxArray * argin,
                          mxArray * nbargout,
                          mxArray * argout) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_errargn);
    mxArray * err = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&ndfct);
    mclCopyArray(&nbargin);
    mclCopyArray(&argin);
    mclCopyArray(&nbargout);
    mclCopyArray(&argout);
    /*
     * %ERRARGN Check function arguments number.
     * %   ERR = ERRARGN('function',NUMARGIN,ARGIN,NUMARGOUT,ARGOUT) or 
     * %   [ERR,MSG] = ERRARGN('function',NUMARGIN,ARGIN,NUMARGOUT,ARGOUT) 
     * %   returns ERR = 1 if either the number of input ARGIN or 
     * %   output (ARGOUT) arguments of the specified function do not
     * %   belong to the vector of allowed values (NUMARGIN and
     * %   NUMARGOUT, respectively). In this case MSG contains an
     * %   appropriate error message.
     * %   Otherwise ERRARGN returns ERR = 0 and MSG = [].
     * %
     * %   See also ERRARGT.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-May-96.
     * %   Last Revision: 05-Oct-2001.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * % Special case:
     * % -------------
     * %  If ARGIN is not a numeric array, the number of input arguments
     * %  is not controlled. The same holds for ARGOUT.
     * %  example:
     * %    err = errargn('function',[0:2],'var',[1:4],2);
     * %    returns err = 0.
     * %    [err,msg] = errargn('function',[0:2],'var',[1:4],2);
     * %    returns err = 0 and msg = [].
     * 
     * err = 0; msg = [];
     */
    mlfAssign(&err, _mxarray0_);
    mlfAssign(msg, _mxarray1_);
    /*
     * if isnumeric(argin)
     */
    if (mlfTobool(mlfIsnumeric(mclVa(argin, "argin")))) {
        /*
         * msg = nargchk(min(argin),max(argin),nbargin);
         */
        mlfAssign(
          msg,
          mlfNargchk(
            mlfMin(NULL, mclVa(argin, "argin"), NULL, NULL),
            mlfMax(NULL, mclVa(argin, "argin"), NULL, NULL),
            mclVa(nbargin, "nbargin")));
        /*
         * err = ~isempty(msg);
         */
        mlfAssign(&err, mclNot(mlfIsempty(mclVv(*msg, "msg"))));
        /*
         * if ~err
         */
        if (mclNotBool(mclVv(err, "err"))) {
            /*
             * err = isempty(find(argin==nbargin));
             */
            mlfAssign(
              &err,
              mlfIsempty(
                mlfFind(
                  NULL,
                  NULL,
                  mclEq(mclVa(argin, "argin"), mclVa(nbargin, "nbargin")))));
            /*
             * if err , msg = 'Invalid number of input arguments.'; end
             */
            if (mlfTobool(mclVv(err, "err"))) {
                mlfAssign(msg, _mxarray2_);
            }
        /*
         * end    
         */
        }
    /*
     * end
     */
    }
    /*
     * if ~err & isnumeric(argout)
     */
    {
        mxArray * a_ = mclInitialize(mclNot(mclVv(err, "err")));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mlfIsnumeric(mclVa(argout, "argout"))))) {
            mxDestroyArray(a_);
            /*
             * msg = nargoutchk(min(argout),max(argout),argout);
             */
            mlfAssign(
              msg,
              mlfNargoutchk(
                mlfMin(NULL, mclVa(argout, "argout"), NULL, NULL),
                mlfMax(NULL, mclVa(argout, "argout"), NULL, NULL),
                mclVa(argout, "argout")));
            /*
             * err = ~isempty(msg);
             */
            mlfAssign(&err, mclNot(mlfIsempty(mclVv(*msg, "msg"))));
            /*
             * if ~err
             */
            if (mclNotBool(mclVv(err, "err"))) {
                /*
                 * err = isempty(find(argout==nbargout));
                 */
                mlfAssign(
                  &err,
                  mlfIsempty(
                    mlfFind(
                      NULL,
                      NULL,
                      mclEq(
                        mclVa(argout, "argout"),
                        mclVa(nbargout, "nbargout")))));
                /*
                 * if err , msg = 'Invalid number of output arguments.'; end
                 */
                if (mlfTobool(mclVv(err, "err"))) {
                    mlfAssign(msg, _mxarray4_);
                }
            /*
             * end    
             */
            }
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * if err & (nargout<2) , errargt(ndfct,msg,'msg'); end
     */
    {
        mxArray * a_ = mclInitialize(mclVv(err, "err"));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mclBoolToArray(nargout_ < 2)))) {
            mxDestroyArray(a_);
            mclAssignAns(
              &ans,
              mlfErrargt(
                mclVa(ndfct, "ndfct"), mclVv(*msg, "msg"), _mxarray6_, NULL));
        } else {
            mxDestroyArray(a_);
        }
    }
    mclValidateOutput(err, 1, nargout_, "err", "errargn");
    mclValidateOutput(*msg, 2, nargout_, "msg", "errargn");
    mxDestroyArray(ans);
    mxDestroyArray(argout);
    mxDestroyArray(nbargout);
    mxDestroyArray(argin);
    mxDestroyArray(nbargin);
    mxDestroyArray(ndfct);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return err;
}
