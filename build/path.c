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
#include "path.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[26] = { 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's',
                               ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                               's', 't', 'r', 'i', 'n', 'g', 's', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[2] = { 'P', 'C' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;

static mxChar _array6_[1] = { '/' };
static mxArray * _mxarray5_;

static mxChar _array8_[1] = { 0x005c };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;

void InitializeModule_path(void) {
    _mxarray0_ = mclInitializeString(26, _array1_);
    _mxarray2_ = mclInitializeString(2, _array3_);
    _mxarray4_ = mclInitializeDouble(2.0);
    _mxarray5_ = mclInitializeString(1, _array6_);
    _mxarray7_ = mclInitializeString(1, _array8_);
    _mxarray9_ = mclInitializeDouble(1.0);
    _mxarray10_ = mclInitializeDouble(0.0);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_path(void) {
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mpath(int nargout_, mxArray * a, mxArray * b);

_mexLocalFunctionTable _local_function_table_path
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNPath" contains the nargout interface for the "path"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/path.m"
 * (lines 1-122). This interface is only produced if the M-function uses the
 * special variable "nargout". The nargout interface allows the number of
 * requested outputs to be specified via the nargout argument, as opposed to
 * the normal interface which dynamically calculates the number of outputs
 * based on the number of non-NULL inputs it receives. This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfNPath(int nargout, mxArray * a, mxArray * b) {
    mxArray * p = NULL;
    mlfEnterNewContext(0, 2, a, b);
    p = Mpath(nargout, a, b);
    mlfRestorePreviousContext(0, 2, a, b);
    return mlfReturnValue(p);
}

/*
 * The function "mlfPath" contains the normal interface for the "path"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/path.m"
 * (lines 1-122). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
mxArray * mlfPath(mxArray * a, mxArray * b) {
    int nargout = 1;
    mxArray * p = NULL;
    mlfEnterNewContext(0, 2, a, b);
    p = Mpath(nargout, a, b);
    mlfRestorePreviousContext(0, 2, a, b);
    return mlfReturnValue(p);
}

/*
 * The function "mlfVPath" contains the void interface for the "path"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/path.m"
 * (lines 1-122). The void interface is only produced if the M-function uses
 * the special variable "nargout", and has at least one output. The void
 * interface function specifies zero output arguments to the implementation
 * version of the function, and in the event that the implementation version
 * still returns an output (which, in MATLAB, would be assigned to the "ans"
 * variable), it deallocates the output. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlfVPath(mxArray * a, mxArray * b) {
    mxArray * p = NULL;
    mlfEnterNewContext(0, 2, a, b);
    p = Mpath(0, a, b);
    mlfRestorePreviousContext(0, 2, a, b);
    mxDestroyArray(p);
}

/*
 * The function "mlxPath" contains the feval interface for the "path"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/path.m"
 * (lines 1-122). The feval function calls the implementation version of path
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxPath(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: path Line: 1 Column: 1 The function \"path\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: path Line: 1 Column: 1 The function \"path"
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
    mplhs[0] = Mpath(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mpath" is the implementation version of the "path" M-function
 * from file "/usr/local/matlab6p5/toolbox/matlab/general/path.m" (lines
 * 1-122). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function p = path(a,b)
 */
static mxArray * Mpath(int nargout_, mxArray * a, mxArray * b) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_path);
    int nargin_ = mclNargin(2, a, b, NULL);
    mxArray * p = NULL;
    mxArray * bb = NULL;
    mxArray * j = NULL;
    mxArray * aa = NULL;
    mxArray * i = NULL;
    mxArray * bke = NULL;
    mxArray * ake = NULL;
    mxArray * bk = NULL;
    mxArray * ak = NULL;
    mxArray * pathsep = NULL;
    mxArray * append = NULL;
    mxArray * pp = NULL;
    mxArray * ans = NULL;
    mxArray * casesen = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    /*
     * %PATH Get/set search path.
     * %   PATH, by itself, prettyprints MATLAB's current search path. The
     * %   initial search path list is set by PATHDEF, and is perhaps
     * %   individualized by STARTUP.
     * %
     * %   P = PATH returns a string containing the path in P.
     * %   PATH(P) changes the path to P.  PATH(PATH) refreshes MATLAB's
     * %   view of the directories on the path, ensuring that any changes
     * %   to non-toolbox directories are visible.
     * %
     * %   PATH(P1,P2) changes the path to the concatenation of the two path
     * %   strings P1 and P2.  Thus PATH(PATH,P) appends a new directory to
     * %   the current path and PATH(P,PATH) prepends a new path.  If P1 or
     * %   P2 are already on the path, they are not added.
     * %
     * %   For example, the following statements add another directory
     * %   to MATLAB's search path on various operating systems:
     * %
     * %     Unix:     path(path,'/home/myfriend/goodstuff')
     * %     Windows:  path(path,'c:\tools\goodstuff')
     * %
     * %   See also WHAT, CD, DIR, ADDPATH, RMPATH, GENPATH, REHASH.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * casesen = isunix; % Only do case sensitive search on UNIX and VMS
     */
    mlfAssign(&casesen, mlfIsunix());
    /*
     * 
     * if nargin == 0  % pretty-print
     */
    if (nargin_ == 0) {
        /*
         * if nargout == 0
         */
        if (nargout_ == 0) {
            /*
             * matlabpath
             */
            mclPrintAns(&ans, mlfNMatlabpath(0, mclAnsVarargout(), NULL));
        /*
         * end
         */
        }
    /*
     * elseif nargin == 1
     */
    } else if (nargin_ == 1) {
        /*
         * if ~isstr(a)
         */
        if (mclNotBool(mlfIsstr(mclVa(a, "a")))) {
            /*
             * error('Arguments must be strings.')
             */
            mlfError(_mxarray0_, NULL);
        /*
         * end
         */
        }
        /*
         * if strncmp(computer,'PC',2),
         */
        if (mlfTobool(
              mlfStrncmp(mlfComputer(NULL, NULL), _mxarray2_, _mxarray4_))) {
            /*
             * a = strrep(a,'/','\'); % Convert '/' to '\'
             */
            mlfAssign(&a, mlfStrrep(mclVa(a, "a"), _mxarray5_, _mxarray7_));
        /*
         * end
         */
        }
        /*
         * matlabpath(a)
         */
        mclPrintAns(
          &ans, mlfNMatlabpath(0, mclAnsVarargout(), mclVa(a, "a"), NULL));
    /*
     * elseif nargin == 2
     */
    } else if (nargin_ == 2) {
        /*
         * if ~isstr(a) | ~isstr(b)
         */
        mxArray * a_ = mclInitialize(mclNot(mlfIsstr(mclVa(a, "a"))));
        if (mlfTobool(a_)
            || mlfTobool(mclOr(a_, mclNot(mlfIsstr(mclVa(b, "b")))))) {
            mxDestroyArray(a_);
            /*
             * error('Arguments must be strings.')
             */
            mlfError(_mxarray0_, NULL);
        } else {
            mxDestroyArray(a_);
        }
        /*
         * end
         * 
         * % look to see if a is contained in b or vice versa - if so, don't add it
         * pp = matlabpath;
         */
        mlfAssign(&pp, mlfNMatlabpath(0, mclValueVarargout(), NULL));
        /*
         * 
         * if strncmp(computer,'PC',2),
         */
        if (mlfTobool(
              mlfStrncmp(mlfComputer(NULL, NULL), _mxarray2_, _mxarray4_))) {
            /*
             * a = strrep(a,'/','\'); % Convert '/' to '\'
             */
            mlfAssign(&a, mlfStrrep(mclVa(a, "a"), _mxarray5_, _mxarray7_));
            /*
             * b = strrep(b,'/','\'); % Convert '/' to '\'
             */
            mlfAssign(&b, mlfStrrep(mclVa(b, "b"), _mxarray5_, _mxarray7_));
        /*
         * end
         */
        }
        /*
         * if isempty(a)
         */
        if (mlfTobool(mlfIsempty(mclVa(a, "a")))) {
            /*
             * if ~strcmp(pp,b), matlabpath(b), end
             */
            if (mclNotBool(mlfStrcmp(mclVv(pp, "pp"), mclVa(b, "b")))) {
                mclPrintAns(
                  &ans,
                  mlfNMatlabpath(0, mclAnsVarargout(), mclVa(b, "b"), NULL));
            }
        /*
         * elseif isempty(b)
         */
        } else if (mlfTobool(mlfIsempty(mclVa(b, "b")))) {
            /*
             * if ~strcmp(pp,a), matlabpath(a), end
             */
            if (mclNotBool(mlfStrcmp(mclVv(pp, "pp"), mclVa(a, "a")))) {
                mclPrintAns(
                  &ans,
                  mlfNMatlabpath(0, mclAnsVarargout(), mclVa(a, "a"), NULL));
            }
        /*
         * else
         */
        } else {
            /*
             * % Check for special cases path(a,path) or path(path,b)
             * if strcmp(pp,a), append = 1; else append = 0; end
             */
            if (mlfTobool(mlfStrcmp(mclVv(pp, "pp"), mclVa(a, "a")))) {
                mlfAssign(&append, _mxarray9_);
            } else {
                mlfAssign(&append, _mxarray10_);
            }
            /*
             * 
             * % Add pathseparator to a and b
             * if ~isempty(a) & a(end)~=pathsep, a = [a pathsep]; end
             */
            {
                mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(a, "a"))));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(
                           a_,
                           mclNe(
                             mclArrayRef1(
                               mclVa(a, "a"),
                               mlfEnd(mclVa(a, "a"), _mxarray9_, _mxarray9_)),
                             mclVv(pathsep, "pathsep"))))) {
                    mxDestroyArray(a_);
                    mlfAssign(
                      &a,
                      mlfHorzcat(
                        mclVa(a, "a"), mclVv(pathsep, "pathsep"), NULL));
                } else {
                    mxDestroyArray(a_);
                }
            }
            /*
             * if ~isempty(b) & b(end)~=pathsep, b = [b pathsep]; end
             */
            {
                mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(b, "b"))));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(
                           a_,
                           mclNe(
                             mclArrayRef1(
                               mclVa(b, "b"),
                               mlfEnd(mclVa(b, "b"), _mxarray9_, _mxarray9_)),
                             mclVv(pathsep, "pathsep"))))) {
                    mxDestroyArray(a_);
                    mlfAssign(
                      &b,
                      mlfHorzcat(
                        mclVa(b, "b"), mclVv(pathsep, "pathsep"), NULL));
                } else {
                    mxDestroyArray(a_);
                }
            }
            /*
             * 
             * %
             * % Check to see if any directories in b are in a.
             * %
             * ak = [0 find(a==pathsep)]; % Beginning of each path
             */
            mlfAssign(
              &ak,
              mlfHorzcat(
                _mxarray10_,
                mlfFind(
                  NULL, NULL, mclEq(mclVa(a, "a"), mclVv(pathsep, "pathsep"))),
                NULL));
            /*
             * bk = [0 find(b==pathsep)]; % Beginning of each path
             */
            mlfAssign(
              &bk,
              mlfHorzcat(
                _mxarray10_,
                mlfFind(
                  NULL, NULL, mclEq(mclVa(b, "b"), mclVv(pathsep, "pathsep"))),
                NULL));
            /*
             * 
             * % End of each path (ignoring trailing fileseps).
             * ake = ak(2:end)-(a(ak(2:end)-1)==filesep);
             */
            mlfAssign(
              &ake,
              mclMinus(
                mclArrayRef1(
                  mclVv(ak, "ak"),
                  mlfColon(
                    _mxarray4_,
                    mlfEnd(mclVv(ak, "ak"), _mxarray9_, _mxarray9_),
                    NULL)),
                mclEq(
                  mclArrayRef1(
                    mclVa(a, "a"),
                    mclMinus(
                      mclArrayRef1(
                        mclVv(ak, "ak"),
                        mlfColon(
                          _mxarray4_,
                          mlfEnd(mclVv(ak, "ak"), _mxarray9_, _mxarray9_),
                          NULL)),
                      _mxarray9_)),
                  mlfFilesep())));
            /*
             * bke = bk(2:end)-(b(bk(2:end)-1)==filesep);
             */
            mlfAssign(
              &bke,
              mclMinus(
                mclArrayRef1(
                  mclVv(bk, "bk"),
                  mlfColon(
                    _mxarray4_,
                    mlfEnd(mclVv(bk, "bk"), _mxarray9_, _mxarray9_),
                    NULL)),
                mclEq(
                  mclArrayRef1(
                    mclVa(b, "b"),
                    mclMinus(
                      mclArrayRef1(
                        mclVv(bk, "bk"),
                        mlfColon(
                          _mxarray4_,
                          mlfEnd(mclVv(bk, "bk"), _mxarray9_, _mxarray9_),
                          NULL)),
                      _mxarray9_)),
                  mlfFilesep())));
            /*
             * 
             * if append,
             */
            if (mlfTobool(mclVv(append, "append"))) {
                /*
                 * % Find and remove matching directories
                 * for i=length(ak)-1:-1:1
                 */
                int v_ = mclForIntStart(mclLengthInt(mclVv(ak, "ak")) - 1);
                int i_ = -1;
                int e_ = mclForIntIntEnd(v_, i_, _mxarray9_);
                if (e_ == mclIntMin()) {
                    mlfAssign(&i, _mxarray11_);
                } else {
                    /*
                     * aa = a(ak(i)+1:ake(i)-1);
                     * for j=1:length(bk)-1
                     * bb = b(bk(j)+1:bke(j)-1);
                     * if ~casesen, aa = lower(aa); end
                     * if ~casesen, bb = lower(bb); end
                     * if strcmp(aa,bb), 
                     * a(ak(i)+1:ak(i+1)) = [];
                     * ak(i+1) = ak(i); % Update next value before deleting
                     * ak(i) = [];
                     * ake(i) = [];
                     * end
                     * end
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(
                          &aa,
                          mclArrayRef1(
                            mclVa(a, "a"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(ak, "ak"), v_),
                                _mxarray9_),
                              mclMinus(
                                mclIntArrayRef1(mclVv(ake, "ake"), v_),
                                _mxarray9_),
                              NULL)));
                        {
                            int v_0 = mclForIntStart(1);
                            int e_0 = mclLengthInt(mclVv(bk, "bk")) - 1;
                            if (v_0 > e_0) {
                                mlfAssign(&j, _mxarray11_);
                            } else {
                                for (; ; ) {
                                    mlfAssign(
                                      &bb,
                                      mclArrayRef1(
                                        mclVa(b, "b"),
                                        mlfColon(
                                          mclPlus(
                                            mclIntArrayRef1(
                                              mclVv(bk, "bk"), v_0),
                                            _mxarray9_),
                                          mclMinus(
                                            mclIntArrayRef1(
                                              mclVv(bke, "bke"), v_0),
                                            _mxarray9_),
                                          NULL)));
                                    if (mclNotBool(mclVv(casesen, "casesen"))) {
                                        mlfAssign(
                                          &aa, mlfLower(mclVv(aa, "aa")));
                                    }
                                    if (mclNotBool(mclVv(casesen, "casesen"))) {
                                        mlfAssign(
                                          &bb, mlfLower(mclVv(bb, "bb")));
                                    }
                                    if (mlfTobool(
                                          mlfStrcmp(
                                            mclVv(aa, "aa"),
                                            mclVv(bb, "bb")))) {
                                        mlfIndexDelete(
                                          &a,
                                          "(?)",
                                          mlfColon(
                                            mclPlus(
                                              mclIntArrayRef1(
                                                mclVv(ak, "ak"), v_),
                                              _mxarray9_),
                                            mclIntArrayRef1(
                                              mclVv(ak, "ak"), v_ + 1),
                                            NULL));
                                        mclIntArrayAssign1(
                                          &ak,
                                          mclIntArrayRef1(mclVv(ak, "ak"), v_),
                                          v_ + 1);
                                        mlfIndexDelete(
                                          &ak, "(?)", mlfScalar(v_));
                                        mlfIndexDelete(
                                          &ake, "(?)", mlfScalar(v_));
                                    }
                                    if (v_0 == e_0) {
                                        break;
                                    }
                                    ++v_0;
                                }
                                mlfAssign(&j, mlfScalar(v_0));
                            }
                        }
                        if (v_ == e_) {
                            break;
                        }
                        v_ += i_;
                    }
                    mlfAssign(&i, mlfScalar(v_));
                }
            /*
             * 
             * else
             */
            } else {
                /*
                 * % Find and remove matching directories
                 * for j=length(bk)-1:-1:1
                 */
                int v_ = mclForIntStart(mclLengthInt(mclVv(bk, "bk")) - 1);
                int i_ = -1;
                int e_ = mclForIntIntEnd(v_, i_, _mxarray9_);
                if (e_ == mclIntMin()) {
                    mlfAssign(&j, _mxarray11_);
                } else {
                    /*
                     * bb = b(bk(j)+1:bke(j)-1);
                     * for i=1:length(ak)-1,
                     * aa = a(ak(i)+1:ake(i)-1);
                     * if ~casesen, aa = lower(aa); end
                     * if ~casesen, bb = lower(bb); end
                     * if strcmp(aa,bb), 
                     * b(bk(j)+1:bk(j+1)) = [];
                     * bk(j+1) = bk(j); % Update next value before deleting
                     * bk(j) = [];
                     * bke(j) = [];
                     * end
                     * end
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(
                          &bb,
                          mclArrayRef1(
                            mclVa(b, "b"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(bk, "bk"), v_),
                                _mxarray9_),
                              mclMinus(
                                mclIntArrayRef1(mclVv(bke, "bke"), v_),
                                _mxarray9_),
                              NULL)));
                        {
                            int v_1 = mclForIntStart(1);
                            int e_1 = mclLengthInt(mclVv(ak, "ak")) - 1;
                            if (v_1 > e_1) {
                                mlfAssign(&i, _mxarray11_);
                            } else {
                                for (; ; ) {
                                    mlfAssign(
                                      &aa,
                                      mclArrayRef1(
                                        mclVa(a, "a"),
                                        mlfColon(
                                          mclPlus(
                                            mclIntArrayRef1(
                                              mclVv(ak, "ak"), v_1),
                                            _mxarray9_),
                                          mclMinus(
                                            mclIntArrayRef1(
                                              mclVv(ake, "ake"), v_1),
                                            _mxarray9_),
                                          NULL)));
                                    if (mclNotBool(mclVv(casesen, "casesen"))) {
                                        mlfAssign(
                                          &aa, mlfLower(mclVv(aa, "aa")));
                                    }
                                    if (mclNotBool(mclVv(casesen, "casesen"))) {
                                        mlfAssign(
                                          &bb, mlfLower(mclVv(bb, "bb")));
                                    }
                                    if (mlfTobool(
                                          mlfStrcmp(
                                            mclVv(aa, "aa"),
                                            mclVv(bb, "bb")))) {
                                        mlfIndexDelete(
                                          &b,
                                          "(?)",
                                          mlfColon(
                                            mclPlus(
                                              mclIntArrayRef1(
                                                mclVv(bk, "bk"), v_),
                                              _mxarray9_),
                                            mclIntArrayRef1(
                                              mclVv(bk, "bk"), v_ + 1),
                                            NULL));
                                        mclIntArrayAssign1(
                                          &bk,
                                          mclIntArrayRef1(mclVv(bk, "bk"), v_),
                                          v_ + 1);
                                        mlfIndexDelete(
                                          &bk, "(?)", mlfScalar(v_));
                                        mlfIndexDelete(
                                          &bke, "(?)", mlfScalar(v_));
                                    }
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
                        v_ += i_;
                    }
                    mlfAssign(&j, mlfScalar(v_));
                }
            /*
             * 
             * end
             */
            }
            /*
             * if isempty(b),
             */
            if (mlfTobool(mlfIsempty(mclVa(b, "b")))) {
                /*
                 * matlabpath(a(1:end-1));
                 */
                mclAssignAns(
                  &ans,
                  mlfNMatlabpath(
                    0,
                    mclAnsVarargout(),
                    mclArrayRef1(
                      mclVa(a, "a"),
                      mlfColon(
                        _mxarray9_,
                        mclMinus(
                          mlfEnd(mclVa(a, "a"), _mxarray9_, _mxarray9_),
                          _mxarray9_),
                        NULL)),
                    NULL));
            /*
             * elseif isempty(a)
             */
            } else if (mlfTobool(mlfIsempty(mclVa(a, "a")))) {
                /*
                 * matlabpath(b(1:end-1));
                 */
                mclAssignAns(
                  &ans,
                  mlfNMatlabpath(
                    0,
                    mclAnsVarargout(),
                    mclArrayRef1(
                      mclVa(b, "b"),
                      mlfColon(
                        _mxarray9_,
                        mclMinus(
                          mlfEnd(mclVa(b, "b"), _mxarray9_, _mxarray9_),
                          _mxarray9_),
                        NULL)),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * matlabpath([a b(1:end-1)]);
                 */
                mclAssignAns(
                  &ans,
                  mlfNMatlabpath(
                    0,
                    mclAnsVarargout(),
                    mlfHorzcat(
                      mclVa(a, "a"),
                      mclArrayRef1(
                        mclVa(b, "b"),
                        mlfColon(
                          _mxarray9_,
                          mclMinus(
                            mlfEnd(mclVa(b, "b"), _mxarray9_, _mxarray9_),
                            _mxarray9_),
                          NULL)),
                      NULL),
                    NULL));
            /*
             * end
             */
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
     * 
     * if nargout==1, p = matlabpath; end
     */
    if (nargout_ == 1) {
        mlfAssign(&p, mlfNMatlabpath(0, mclValueVarargout(), NULL));
    }
    mclValidateOutput(p, 1, nargout_, "p", "path");
    mxDestroyArray(casesen);
    mxDestroyArray(ans);
    mxDestroyArray(pp);
    mxDestroyArray(append);
    mxDestroyArray(pathsep);
    mxDestroyArray(ak);
    mxDestroyArray(bk);
    mxDestroyArray(ake);
    mxDestroyArray(bke);
    mxDestroyArray(i);
    mxDestroyArray(aa);
    mxDestroyArray(j);
    mxDestroyArray(bb);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return p;
}
