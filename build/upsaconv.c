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
#include "upsaconv.h"
#include "dwtmode.h"
#include "dyadup.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wconv.h"
#include "wextend.h"
#include "wkeep.h"
#include "wshift.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

static mxChar _array3_[3] = { 'g', 'e', 't' };
static mxArray * _mxarray2_;

static mxChar _array5_[3] = { 'p', 'e', 'r' };
static mxArray * _mxarray4_;

static mxChar _array9_[1] = { '1' };
static mxArray * _mxarray8_;

static mxChar _array11_[2] = { '1', 'd' };
static mxArray * _mxarray10_;

static mxChar _array13_[2] = { '1', 'D' };
static mxArray * _mxarray12_;

static mxArray * _array7_[4] = { NULL /*_mxarray1_*/, NULL /*_mxarray8_*/,
                                 NULL /*_mxarray10_*/, NULL /*_mxarray12_*/ };
static mxArray * _mxarray6_;
static mxArray * _mxarray14_;

static mxChar _array16_[1] = { 'c' };
static mxArray * _mxarray15_;

static mxChar _array20_[1] = { '2' };
static mxArray * _mxarray19_;

static mxChar _array22_[2] = { '2', 'd' };
static mxArray * _mxarray21_;

static mxChar _array24_[2] = { '2', 'D' };
static mxArray * _mxarray23_;

static mxArray * _array18_[4] = { NULL /*_mxarray14_*/, NULL /*_mxarray19_*/,
                                  NULL /*_mxarray21_*/, NULL /*_mxarray23_*/ };
static mxArray * _mxarray17_;

static double _array26_[2] = { 0.0, 0.0 };
static mxArray * _mxarray25_;

static mxChar _array28_[3] = { 'c', 'o', 'l' };
static mxArray * _mxarray27_;

static mxChar _array30_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray29_;

static mxChar _array32_[3] = { 'm', 'a', 't' };
static mxArray * _mxarray31_;

static double _array34_[2] = { 1.0, 1.0 };
static mxArray * _mxarray33_;

void InitializeModule_upsaconv(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeString(3, _array3_);
    _mxarray4_ = mclInitializeString(3, _array5_);
    _array7_[0] = _mxarray1_;
    _mxarray8_ = mclInitializeString(1, _array9_);
    _array7_[1] = _mxarray8_;
    _mxarray10_ = mclInitializeString(2, _array11_);
    _array7_[2] = _mxarray10_;
    _mxarray12_ = mclInitializeString(2, _array13_);
    _array7_[3] = _mxarray12_;
    _mxarray6_ = mclInitializeCellVector(1, 4, _array7_);
    _mxarray14_ = mclInitializeDouble(2.0);
    _mxarray15_ = mclInitializeString(1, _array16_);
    _array18_[0] = _mxarray14_;
    _mxarray19_ = mclInitializeString(1, _array20_);
    _array18_[1] = _mxarray19_;
    _mxarray21_ = mclInitializeString(2, _array22_);
    _array18_[2] = _mxarray21_;
    _mxarray23_ = mclInitializeString(2, _array24_);
    _array18_[3] = _mxarray23_;
    _mxarray17_ = mclInitializeCellVector(1, 4, _array18_);
    _mxarray25_ = mclInitializeDoubleVector(1, 2, _array26_);
    _mxarray27_ = mclInitializeString(3, _array28_);
    _mxarray29_ = mclInitializeString(3, _array30_);
    _mxarray31_ = mclInitializeString(3, _array32_);
    _mxarray33_ = mclInitializeDoubleVector(1, 2, _array34_);
}

void TerminateModule_upsaconv(void) {
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mupsaconv(int nargout_,
                           mxArray * type,
                           mxArray * x,
                           mxArray * f,
                           mxArray * s,
                           mxArray * dwtATTR,
                           mxArray * shiFLAG);

_mexLocalFunctionTable _local_function_table_upsaconv
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfUpsaconv" contains the normal interface for the "upsaconv"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/upsaconv.m" (lines 1-97). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfUpsaconv(mxArray * type,
                      mxArray * x,
                      mxArray * f,
                      mxArray * s,
                      mxArray * dwtATTR,
                      mxArray * shiFLAG) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 6, type, x, f, s, dwtATTR, shiFLAG);
    y = Mupsaconv(nargout, type, x, f, s, dwtATTR, shiFLAG);
    mlfRestorePreviousContext(0, 6, type, x, f, s, dwtATTR, shiFLAG);
    return mlfReturnValue(y);
}

/*
 * The function "mlxUpsaconv" contains the feval interface for the "upsaconv"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/upsaconv.m" (lines 1-97). The
 * feval function calls the implementation version of upsaconv through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxUpsaconv(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[6];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: upsaconv Line: 1 Column:"
            " 1 The function \"upsaconv\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 6) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: upsaconv Line: 1 Column:"
            " 1 The function \"upsaconv\" was called with m"
            "ore than the declared number of inputs (6)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 6 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 6; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0, 6, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4], mprhs[5]);
    mplhs[0]
      = Mupsaconv(
          nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4], mprhs[5]);
    mlfRestorePreviousContext(
      0, 6, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4], mprhs[5]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mupsaconv" is the implementation version of the "upsaconv"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/upsaconv.m" (lines 1-97). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function y = upsaconv(type,x,f,s,dwtATTR,shiFLAG)
 */
static mxArray * Mupsaconv(int nargout_,
                           mxArray * type,
                           mxArray * x,
                           mxArray * f,
                           mxArray * s,
                           mxArray * dwtATTR,
                           mxArray * shiFLAG) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_upsaconv);
    int nargin_ = mclNargin(6, type, x, f, s, dwtATTR, shiFLAG, NULL);
    mxArray * y = NULL;
    mxArray * sy = NULL;
    mxArray * shift = NULL;
    mxArray * lf = NULL;
    mxArray * ly = NULL;
    mxArray * perFLAG = NULL;
    mxArray * dumFLAG = NULL;
    mxArray * sizFLAG = NULL;
    mclCopyArray(&type);
    mclCopyArray(&x);
    mclCopyArray(&f);
    mclCopyArray(&s);
    mclCopyArray(&dwtATTR);
    mclCopyArray(&shiFLAG);
    /*
     * %UPSACONV Upsample and convolution.
     * %
     * %   Y = UPSACONV('1D',X,F_R) returns the one step dyadic
     * %   interpolation (upsample and convolution) of vector X
     * %   using filter F_R.
     * %
     * %   Y = UPSACONV('1D',X,F_R,L) returns the length-L central 
     * %   portion of the result obtained using Y = UPSACONV('1D',X,F_R).
     * %
     * %   Y = UPSACONV('2D',X,{F1_R,F2_R}) returns the one step dyadic 
     * %   interpolation (upsample and convolution) of matrix X
     * %   using filter F1_R for rows and filter F2_R for columns.
     * %
     * %   Y = UPSACONV('2D',X,{F1_R,F2_R},S) returns the size-S
     * %   central portion of the result obtained 
     * %   using Y = UPSACONV('2D',X,{F1_R,F2_R})
     * % 
     * %   Y = UPSACONV('1D',X,F_R,DWTATTR) returns the one step
     * %   interpolation of vector X using filter F_R where the upsample 
     * %   and convolution attributes are described by DWTATTR.
     * %
     * %   Y = UPSACONV('1D',X,F_R,L,DWTATTR) combines the two 
     * %   other usages.
     * %
     * %   Y = UPSACONV('2D',X,{F1_R,F2_R},DWTATTR) returns the one step
     * %   interpolation of matrix X using filters F1_R and F2_R where  
     * %   the upsample and convolution attributes are described by DWTATTR.
     * % 
     * %   Y = UPSACONV('2D',X,{F1_R,F2_R},S,DWTATTR) combines the 
     * %   other usages.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 01-Nov-97.
     * %   Last Revision: 06-Sep-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * % Special case.
     * if isempty(x) , y = 0; return; end
     */
    if (mlfTobool(mlfIsempty(mclVa(x, "x")))) {
        mlfAssign(&y, _mxarray0_);
        goto return_;
    }
    /*
     * 
     * % Check arguments.
     * % if errargn(mfilename,nargin,[3:6],nargout,[0:1]), error('*'), end
     * 
     * y = x;
     */
    mlfAssign(&y, mclVa(x, "x"));
    /*
     * if nargin<4 , sizFLAG = 1; else , sizFLAG = isempty(s); end
     */
    if (nargin_ < 4) {
        mlfAssign(&sizFLAG, _mxarray1_);
    } else {
        mlfAssign(&sizFLAG, mlfIsempty(mclVa(s, "s")));
    }
    /*
     * if nargin<5 , dwtATTR = dwtmode('get'); end
     */
    if (nargin_ < 5) {
        mlfAssign(
          &dwtATTR, mlfNDwtmode(0, mclValueVarargout(), _mxarray2_, NULL));
    }
    /*
     * if nargin<6 , shiFLAG = 1; end
     */
    if (nargin_ < 6) {
        mlfAssign(&shiFLAG, _mxarray1_);
    }
    /*
     * dumFLAG = ~isstruct(dwtATTR);
     */
    mlfAssign(&dumFLAG, mclNot(mlfIsstruct(mclVa(dwtATTR, "dwtATTR"))));
    /*
     * if ~dumFLAG , perFLAG = isequal(dwtATTR.extMode,'per'); else , perFLAG = 0; end
     */
    if (mclNotBool(mclVv(dumFLAG, "dumFLAG"))) {
        mlfAssign(
          &perFLAG,
          mclFeval(
            mclValueVarargout(),
            mlxIsequal,
            mlfIndexRef(mclVa(dwtATTR, "dwtATTR"), ".extMode"),
            _mxarray4_,
            NULL));
    } else {
        mlfAssign(&perFLAG, _mxarray0_);
    }
    /*
     * shiFLAG = shiFLAG & ~dumFLAG;
     */
    mlfAssign(
      &shiFLAG,
      mclAnd(mclVa(shiFLAG, "shiFLAG"), mclNot(mclVv(dumFLAG, "dumFLAG"))));
    /*
     * 
     * switch type
     */
    {
        mxArray * v_ = mclInitialize(mclVa(type, "type"));
        if (mclSwitchCompare(v_, _mxarray6_)) {
            /*
             * case {1,'1','1d','1D'}
             * ly = length(y);
             */
            mlfAssign(&ly, mlfScalar(mclLengthInt(mclVv(y, "y"))));
            /*
             * lf = length(f);
             */
            mlfAssign(&lf, mlfScalar(mclLengthInt(mclVa(f, "f"))));
            /*
             * if sizFLAG
             */
            if (mlfTobool(mclVv(sizFLAG, "sizFLAG"))) {
                /*
                 * if ~perFLAG , s = 2*ly-lf+2; else , s = 2*ly; end
                 */
                if (mclNotBool(mclVv(perFLAG, "perFLAG"))) {
                    mlfAssign(
                      &s,
                      mclPlus(
                        mclMinus(
                          mclMtimes(_mxarray14_, mclVv(ly, "ly")),
                          mclVv(lf, "lf")),
                        _mxarray14_));
                } else {
                    mlfAssign(&s, mclMtimes(_mxarray14_, mclVv(ly, "ly")));
                }
            /*
             * end
             */
            }
            /*
             * if shiFLAG , shift = dwtATTR.shift1D; else , shift = 0; end
             */
            if (mlfTobool(mclVa(shiFLAG, "shiFLAG"))) {
                mlfAssign(
                  &shift, mlfIndexRef(mclVa(dwtATTR, "dwtATTR"), ".shift1D"));
            } else {
                mlfAssign(&shift, _mxarray0_);
            }
            /*
             * shift = mod(shift,2);
             */
            mlfAssign(&shift, mlfMod(mclVv(shift, "shift"), _mxarray14_));
            /*
             * if ~perFLAG
             */
            if (mclNotBool(mclVv(perFLAG, "perFLAG"))) {
                /*
                 * if sizFLAG , s = 2*ly-lf+2; end
                 */
                if (mlfTobool(mclVv(sizFLAG, "sizFLAG"))) {
                    mlfAssign(
                      &s,
                      mclPlus(
                        mclMinus(
                          mclMtimes(_mxarray14_, mclVv(ly, "ly")),
                          mclVv(lf, "lf")),
                        _mxarray14_));
                }
                /*
                 * y = wconv('1D',dyadup(y,0),f);
                 */
                mlfAssign(
                  &y,
                  mlfNWconv(
                    1,
                    _mxarray12_,
                    mlfNDyadup(1, mclVv(y, "y"), _mxarray0_, NULL),
                    mclVa(f, "f")));
                /*
                 * y = wkeep(y,s,'c',shift);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(
                    1,
                    mclVv(y, "y"),
                    mclVa(s, "s"), _mxarray15_, mclVv(shift, "shift"), NULL));
            /*
             * else
             */
            } else {
                /*
                 * if sizFLAG , s = 2*ly; end
                 */
                if (mlfTobool(mclVv(sizFLAG, "sizFLAG"))) {
                    mlfAssign(&s, mclMtimes(_mxarray14_, mclVv(ly, "ly")));
                }
                /*
                 * y = dyadup(y,0,1);
                 */
                mlfAssign(
                  &y,
                  mlfNDyadup(1, mclVv(y, "y"), _mxarray0_, _mxarray1_, NULL));
                /*
                 * y = wextend('1D','per',y,lf/2);
                 */
                mlfAssign(
                  &y,
                  mlfWextend(
                    _mxarray12_,
                    _mxarray4_,
                    mclVv(y, "y"),
                    mclMrdivide(mclVv(lf, "lf"), _mxarray14_),
                    NULL));
                /*
                 * y = wconv('1D',y,f);
                 */
                mlfAssign(
                  &y, mlfNWconv(1, _mxarray12_, mclVv(y, "y"), mclVa(f, "f")));
                /*
                 * y = wkeep(y,2*ly,lf);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(
                    1,
                    mclVv(y, "y"),
                    mclMtimes(_mxarray14_, mclVv(ly, "ly")),
                    mclVv(lf, "lf"),
                    NULL));
                /*
                 * y = wshift('1D',y,shift);
                 */
                mlfAssign(
                  &y,
                  mlfWshift(_mxarray12_, mclVv(y, "y"), mclVv(shift, "shift")));
                /*
                 * y = wkeep(y,s,1);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(1, mclVv(y, "y"), mclVa(s, "s"), _mxarray1_, NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case {2,'2','2d','2D'}
         */
        } else if (mclSwitchCompare(v_, _mxarray17_)) {
            /*
             * sy = size(y);
             */
            mlfAssign(&sy, mlfSize(mclValueVarargout(), mclVv(y, "y"), NULL));
            /*
             * lf = length(f{1});
             */
            mlfAssign(
              &lf,
              mclFeval(
                mclValueVarargout(),
                mlxLength,
                mlfIndexRef(mclVa(f, "f"), "{?}", _mxarray1_),
                NULL));
            /*
             * if sizFLAG
             */
            if (mlfTobool(mclVv(sizFLAG, "sizFLAG"))) {
                /*
                 * if ~perFLAG , s = 2*sy-lf+2; else , s = 2*sy; end
                 */
                if (mclNotBool(mclVv(perFLAG, "perFLAG"))) {
                    mlfAssign(
                      &s,
                      mclPlus(
                        mclMinus(
                          mclMtimes(_mxarray14_, mclVv(sy, "sy")),
                          mclVv(lf, "lf")),
                        _mxarray14_));
                } else {
                    mlfAssign(&s, mclMtimes(_mxarray14_, mclVv(sy, "sy")));
                }
            /*
             * end
             */
            }
            /*
             * if shiFLAG , shift = dwtATTR.shift2D; else , shift = [0 0]; end
             */
            if (mlfTobool(mclVa(shiFLAG, "shiFLAG"))) {
                mlfAssign(
                  &shift, mlfIndexRef(mclVa(dwtATTR, "dwtATTR"), ".shift2D"));
            } else {
                mlfAssign(&shift, _mxarray25_);
            }
            /*
             * shift = mod(shift,2);
             */
            mlfAssign(&shift, mlfMod(mclVv(shift, "shift"), _mxarray14_));
            /*
             * if ~perFLAG
             */
            if (mclNotBool(mclVv(perFLAG, "perFLAG"))) {
                /*
                 * y = wconv('col',dyadup(y,'row',0),f{1});
                 */
                mlfAssign(
                  &y,
                  mclFeval(
                    mclValueVarargout(),
                    mlxWconv,
                    _mxarray27_,
                    mlfNDyadup(1, mclVv(y, "y"), _mxarray29_, _mxarray0_, NULL),
                    mlfIndexRef(mclVa(f, "f"), "{?}", _mxarray1_),
                    NULL));
                /*
                 * y = wconv('row',dyadup(y,'col',0),f{2});
                 */
                mlfAssign(
                  &y,
                  mclFeval(
                    mclValueVarargout(),
                    mlxWconv,
                    _mxarray29_,
                    mlfNDyadup(1, mclVv(y, "y"), _mxarray27_, _mxarray0_, NULL),
                    mlfIndexRef(mclVa(f, "f"), "{?}", _mxarray14_),
                    NULL));
                /*
                 * y = wkeep(y,s,'c',shift);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(
                    1,
                    mclVv(y, "y"),
                    mclVa(s, "s"), _mxarray15_, mclVv(shift, "shift"), NULL));
            /*
             * else
             */
            } else {
                /*
                 * y = dyadup(y,'mat',0,1);
                 */
                mlfAssign(
                  &y,
                  mlfNDyadup(
                    1,
                    mclVv(y, "y"),
                    _mxarray31_, _mxarray0_, _mxarray1_, NULL));
                /*
                 * y = wextend('2D','per',y,[lf/2,lf/2]);
                 */
                mlfAssign(
                  &y,
                  mlfWextend(
                    _mxarray23_,
                    _mxarray4_,
                    mclVv(y, "y"),
                    mlfHorzcat(
                      mclMrdivide(mclVv(lf, "lf"), _mxarray14_),
                      mclMrdivide(mclVv(lf, "lf"), _mxarray14_),
                      NULL),
                    NULL));
                /*
                 * y = wconv('col',y,f{1});
                 */
                mlfAssign(
                  &y,
                  mclFeval(
                    mclValueVarargout(),
                    mlxWconv,
                    _mxarray27_,
                    mclVv(y, "y"),
                    mlfIndexRef(mclVa(f, "f"), "{?}", _mxarray1_),
                    NULL));
                /*
                 * y = wconv('row',y,f{2});
                 */
                mlfAssign(
                  &y,
                  mclFeval(
                    mclValueVarargout(),
                    mlxWconv,
                    _mxarray29_,
                    mclVv(y, "y"),
                    mlfIndexRef(mclVa(f, "f"), "{?}", _mxarray14_),
                    NULL));
                /*
                 * y = wkeep(y,2*sy,[lf lf]);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(
                    1,
                    mclVv(y, "y"),
                    mclMtimes(_mxarray14_, mclVv(sy, "sy")),
                    mlfHorzcat(mclVv(lf, "lf"), mclVv(lf, "lf"), NULL),
                    NULL));
                /*
                 * y = wshift('2D',y,shift);
                 */
                mlfAssign(
                  &y,
                  mlfWshift(_mxarray23_, mclVv(y, "y"), mclVv(shift, "shift")));
                /*
                 * y = wkeep(y,s,[1,1]);
                 */
                mlfAssign(
                  &y,
                  mlfNWkeep(
                    1, mclVv(y, "y"), mclVa(s, "s"), _mxarray33_, NULL));
            /*
             * end
             */
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mclValidateOutput(y, 1, nargout_, "y", "upsaconv");
    mxDestroyArray(sizFLAG);
    mxDestroyArray(dumFLAG);
    mxDestroyArray(perFLAG);
    mxDestroyArray(ly);
    mxDestroyArray(lf);
    mxDestroyArray(shift);
    mxDestroyArray(sy);
    mxDestroyArray(shiFLAG);
    mxDestroyArray(dwtATTR);
    mxDestroyArray(s);
    mxDestroyArray(f);
    mxDestroyArray(x);
    mxDestroyArray(type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
