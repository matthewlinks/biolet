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
#include "rmpath.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;

static mxChar _array2_[26] = { 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's',
                               ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                               's', 't', 'r', 'i', 'n', 'g', 's', '.' };
static mxArray * _mxarray1_;

static mxChar _array4_[2] = { 'P', 'C' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

static mxChar _array7_[1] = { '/' };
static mxArray * _mxarray6_;

static mxChar _array9_[1] = { 0x005c };
static mxArray * _mxarray8_;

static mxChar _array11_[1] = { ' ' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;

static mxChar _array14_[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'm',
                                'p', 'a', 't', 'h', ':', 'D', 'i', 'r', 'N',
                                'o', 't', 'F', 'o', 'u', 'n', 'd' };
static mxArray * _mxarray13_;

static mxChar _array16_[23] = { 0x0027, '%', 's', 0x0027, ' ', 'n', 'o',
                                't', ' ', 'f', 'o', 'u', 'n', 'd', ' ',
                                'i', 'n', ' ', 'p', 'a', 't', 'h', '.' };
static mxArray * _mxarray15_;

void InitializeModule_rmpath(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeString(26, _array2_);
    _mxarray3_ = mclInitializeString(2, _array4_);
    _mxarray5_ = mclInitializeDouble(2.0);
    _mxarray6_ = mclInitializeString(1, _array7_);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeString(1, _array11_);
    _mxarray12_ = mclInitializeDouble(1.0);
    _mxarray13_ = mclInitializeString(25, _array14_);
    _mxarray15_ = mclInitializeString(23, _array16_);
}

void TerminateModule_rmpath(void) {
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static void Mrmpath(mxArray * varargin);

_mexLocalFunctionTable _local_function_table_rmpath
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfRmpath" contains the normal interface for the "rmpath"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/rmpath.m"
 * (lines 1-81). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
void mlfRmpath(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    Mrmpath(varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxRmpath" contains the feval interface for the "rmpath"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/rmpath.m"
 * (lines 1-81). The feval function calls the implementation version of rmpath
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxRmpath(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: rmpath Line: 1 Column: "
            "1 The function \"rmpath\" was called with mor"
            "e than the declared number of outputs (0)."),
          NULL);
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    Mrmpath(mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mrmpath" is the implementation version of the "rmpath"
 * M-function from file "/usr/local/matlab6p5/toolbox/matlab/general/rmpath.m"
 * (lines 1-81). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function rmpath(varargin);
 */
static void Mrmpath(mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_rmpath);
    mxArray * k2 = NULL;
    mxArray * r = NULL;
    mxArray * k1 = NULL;
    mxArray * len = NULL;
    mxArray * next2 = NULL;
    mxArray * next1 = NULL;
    mxArray * k = NULL;
    mxArray * ans = NULL;
    mxArray * next = NULL;
    mxArray * i = NULL;
    mxArray * m = NULL;
    mxArray * pathsep = NULL;
    mxArray * casesen = NULL;
    mclCopyArray(&varargin);
    /*
     * %RMPATH Remove directory from search path.
     * %   RMPATH DIRNAME  removes the specified directory from the
     * %   current matlabpath.
     * %
     * %   RMPATH DIR1 DIR2 DIR3  removes all the specified directories
     * %   from the path.
     * %
     * %   Use the functional form of RMPATH, such as RMPATH('dir1','dir2',...),
     * %   when the directory specification is stored in a string.
     * %
     * %   Examples
     * %       rmpath c:\matlab\work
     * %       rmpath /home/user/matlab
     * %
     * %   See also ADDPATH, PATH, REHASH.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Only do case sensitive search on UNIX and VMS
     * casesen = isunix; 
     */
    mlfAssign(&casesen, mlfIsunix());
    /*
     * m = [pathsep matlabpath pathsep];
     */
    mlfAssign(
      &m,
      mlfHorzcat(
        mclVv(pathsep, "pathsep"),
        mlfNMatlabpath(0, mclValueVarargout(), NULL),
        mclVv(pathsep, "pathsep"),
        NULL));
    /*
     * for i=1:length(varargin)
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVa(varargin, "varargin"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * next = varargin{i};
             * if ~isempty(deblank(next))
             * if ~isstr(next), error('Arguments must be strings.'); end
             * if ~casesen, next = lower(next); end
             * if strncmp(computer,'PC',2),
             * next = strrep(next,'/','\'); % Convert '/' to '\'
             * end
             * 
             * % Remove leading and trailing blanks.
             * k = find(next ~= ' ');
             * next = next(min(k):max(k)); 
             * 
             * % Be robust to a trailing file separator: Check both with and
             * % without the trailing filesep.
             * if next(end)==filesep,
             * next1 = next;
             * next2 = next(1:end-1);
             * else
             * next1 = [next filesep];
             * next2 = next;
             * end
             * 
             * if length(m) > length(next2)
             * % Check with the trailing filesep.
             * len=length(next1);
             * if casesen,
             * k1 = findstr([pathsep next1 pathsep],m);
             * else
             * k1 = findstr([pathsep next1 pathsep],lower(m));
             * end
             * for r=fliplr(k1),
             * m(r:r+len) = [];
             * end
             * 
             * % Check without the trailing filesep.
             * len=length(next2);
             * if casesen,
             * k2 = findstr([pathsep next2 pathsep],m);
             * else
             * k2 = findstr([pathsep next2 pathsep],lower(m));
             * end
             * for r=fliplr(k2),
             * m(r:r+len) = [];
             * end
             * 
             * if isempty(k1) & isempty(k2), 
             * warning('MATLAB:rmpath:DirNotFound','''%s'' not found in path.',next);
             * end
             * else
             * warning('MATLAB:rmpath:DirNotFound','''%s'' not found in path.',next);
             * end
             * end
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &next,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)));
                if (mclNotBool(mlfIsempty(mlfDeblank(mclVv(next, "next"))))) {
                    if (mclNotBool(mlfIsstr(mclVv(next, "next")))) {
                        mlfError(_mxarray1_, NULL);
                    }
                    if (mclNotBool(mclVv(casesen, "casesen"))) {
                        mlfAssign(&next, mlfLower(mclVv(next, "next")));
                    }
                    if (mlfTobool(
                          mlfStrncmp(
                            mlfComputer(NULL, NULL), _mxarray3_, _mxarray5_))) {
                        mlfAssign(
                          &next,
                          mlfStrrep(
                            mclVv(next, "next"), _mxarray6_, _mxarray8_));
                    }
                    mlfAssign(
                      &k,
                      mlfFind(
                        NULL, NULL, mclNe(mclVv(next, "next"), _mxarray10_)));
                    mlfAssign(
                      &next,
                      mclArrayRef1(
                        mclVv(next, "next"),
                        mlfColon(
                          mlfMin(NULL, mclVv(k, "k"), NULL, NULL),
                          mlfMax(NULL, mclVv(k, "k"), NULL, NULL),
                          NULL)));
                    if (mclEqBool(
                          mclArrayRef1(
                            mclVv(next, "next"),
                            mlfEnd(
                              mclVv(next, "next"), _mxarray12_, _mxarray12_)),
                          mlfFilesep())) {
                        mlfAssign(&next1, mclVv(next, "next"));
                        mlfAssign(
                          &next2,
                          mclArrayRef1(
                            mclVv(next, "next"),
                            mlfColon(
                              _mxarray12_,
                              mclMinus(
                                mlfEnd(
                                  mclVv(next, "next"),
                                  _mxarray12_,
                                  _mxarray12_),
                                _mxarray12_),
                              NULL)));
                    } else {
                        mlfAssign(
                          &next1,
                          mlfHorzcat(mclVv(next, "next"), mlfFilesep(), NULL));
                        mlfAssign(&next2, mclVv(next, "next"));
                    }
                    if (mclLengthInt(mclVv(m, "m"))
                        > mclLengthInt(mclVv(next2, "next2"))) {
                        mlfAssign(
                          &len, mlfScalar(mclLengthInt(mclVv(next1, "next1"))));
                        if (mlfTobool(mclVv(casesen, "casesen"))) {
                            mlfAssign(
                              &k1,
                              mlfFindstr(
                                mlfHorzcat(
                                  mclVv(pathsep, "pathsep"),
                                  mclVv(next1, "next1"),
                                  mclVv(pathsep, "pathsep"),
                                  NULL),
                                mclVv(m, "m")));
                        } else {
                            mlfAssign(
                              &k1,
                              mlfFindstr(
                                mlfHorzcat(
                                  mclVv(pathsep, "pathsep"),
                                  mclVv(next1, "next1"),
                                  mclVv(pathsep, "pathsep"),
                                  NULL),
                                mlfLower(mclVv(m, "m"))));
                        }
                        {
                            mclForLoopIterator viter__;
                            for (mclForStart(
                                   &viter__,
                                   mlfFliplr(mclVv(k1, "k1")),
                                   NULL,
                                   NULL);
                                 mclForNext(&viter__, &r);
                                 ) {
                                mlfIndexDelete(
                                  &m,
                                  "(?)",
                                  mlfColon(
                                    mclVv(r, "r"),
                                    mclPlus(mclVv(r, "r"), mclVv(len, "len")),
                                    NULL));
                            }
                            mclDestroyForLoopIterator(viter__);
                        }
                        mlfAssign(
                          &len, mlfScalar(mclLengthInt(mclVv(next2, "next2"))));
                        if (mlfTobool(mclVv(casesen, "casesen"))) {
                            mlfAssign(
                              &k2,
                              mlfFindstr(
                                mlfHorzcat(
                                  mclVv(pathsep, "pathsep"),
                                  mclVv(next2, "next2"),
                                  mclVv(pathsep, "pathsep"),
                                  NULL),
                                mclVv(m, "m")));
                        } else {
                            mlfAssign(
                              &k2,
                              mlfFindstr(
                                mlfHorzcat(
                                  mclVv(pathsep, "pathsep"),
                                  mclVv(next2, "next2"),
                                  mclVv(pathsep, "pathsep"),
                                  NULL),
                                mlfLower(mclVv(m, "m"))));
                        }
                        {
                            mclForLoopIterator viter__;
                            for (mclForStart(
                                   &viter__,
                                   mlfFliplr(mclVv(k2, "k2")),
                                   NULL,
                                   NULL);
                                 mclForNext(&viter__, &r);
                                 ) {
                                mlfIndexDelete(
                                  &m,
                                  "(?)",
                                  mlfColon(
                                    mclVv(r, "r"),
                                    mclPlus(mclVv(r, "r"), mclVv(len, "len")),
                                    NULL));
                            }
                            mclDestroyForLoopIterator(viter__);
                        }
                        {
                            mxArray * a_
                              = mclInitialize(mlfIsempty(mclVv(k1, "k1")));
                            if (mlfTobool(a_)
                                && mlfTobool(
                                     mclAnd(
                                       a_, mlfIsempty(mclVv(k2, "k2"))))) {
                                mxDestroyArray(a_);
                                mclAssignAns(
                                  &ans,
                                  mlfNWarning(
                                    0,
                                    NULL,
                                    _mxarray13_,
                                    _mxarray15_,
                                    mclVv(next, "next"),
                                    NULL));
                            } else {
                                mxDestroyArray(a_);
                            }
                        }
                    } else {
                        mclAssignAns(
                          &ans,
                          mlfNWarning(
                            0,
                            NULL,
                            _mxarray13_,
                            _mxarray15_,
                            mclVv(next, "next"),
                            NULL));
                    }
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * matlabpath(m(2:end-1))
     */
    mclPrintAns(
      &ans,
      mlfNMatlabpath(
        0,
        mclAnsVarargout(),
        mclArrayRef1(
          mclVv(m, "m"),
          mlfColon(
            _mxarray5_,
            mclMinus(
              mlfEnd(mclVv(m, "m"), _mxarray12_, _mxarray12_), _mxarray12_),
            NULL)),
        NULL));
    mxDestroyArray(casesen);
    mxDestroyArray(pathsep);
    mxDestroyArray(m);
    mxDestroyArray(i);
    mxDestroyArray(next);
    mxDestroyArray(ans);
    mxDestroyArray(k);
    mxDestroyArray(next1);
    mxDestroyArray(next2);
    mxDestroyArray(len);
    mxDestroyArray(k1);
    mxDestroyArray(r);
    mxDestroyArray(k2);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     */
}
