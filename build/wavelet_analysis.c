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
#include "wavelet_analysis.h"
#include "mwservices.h"
#include "detcoef.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wavedec.h"
#include "wcodemat.h"
#include "wden.h"
#include "wkeep.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

static mxChar _array4_[3] = { 'r', 'o', 'w' };
static mxArray * _mxarray3_;

static mxChar _array6_[8] = { 's', 'q', 't', 'w', 'o', 'l', 'o', 'g' };
static mxArray * _mxarray5_;

static mxChar _array8_[1] = { 's' };
static mxArray * _mxarray7_;

static mxChar _array10_[3] = { 's', 'l', 'n' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;

void InitializeModule_wavelet_analysis(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray2_ = mclInitializeDouble(128.0);
    _mxarray3_ = mclInitializeString(3, _array4_);
    _mxarray5_ = mclInitializeString(8, _array6_);
    _mxarray7_ = mclInitializeString(1, _array8_);
    _mxarray9_ = mclInitializeString(3, _array10_);
    _mxarray11_ = mclInitializeDouble(0.0);
}

void TerminateModule_wavelet_analysis(void) {
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwavelet_analysis(int nargout_,
                                   mxArray * wavelet_type,
                                   mxArray * signal,
                                   mxArray * level_analysis);

_mexLocalFunctionTable _local_function_table_wavelet_analysis
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfWavelet_analysis" contains the normal interface for the
 * "wavelet_analysis" M-function from file "./src/wavelet_analysis.m" (lines
 * 1-72). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfWavelet_analysis(mxArray * wavelet_type,
                              mxArray * signal,
                              mxArray * level_analysis) {
    int nargout = 1;
    mxArray * col_cfs = NULL;
    mlfEnterNewContext(0, 3, wavelet_type, signal, level_analysis);
    col_cfs = Mwavelet_analysis(nargout, wavelet_type, signal, level_analysis);
    mlfRestorePreviousContext(0, 3, wavelet_type, signal, level_analysis);
    return mlfReturnValue(col_cfs);
}

/*
 * The function "mlxWavelet_analysis" contains the feval interface for the
 * "wavelet_analysis" M-function from file "./src/wavelet_analysis.m" (lines
 * 1-72). The feval function calls the implementation version of
 * wavelet_analysis through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlxWavelet_analysis(int nlhs,
                         mxArray * plhs[],
                         int nrhs,
                         mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavelet_analysis Line: 1 Colum"
            "n: 1 The function \"wavelet_analysis\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavelet_analysis Line: 1 Colu"
            "mn: 1 The function \"wavelet_analysis\" was called "
            "with more than the declared number of inputs (3)."),
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
    mplhs[0] = Mwavelet_analysis(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwavelet_analysis" is the implementation version of the
 * "wavelet_analysis" M-function from file "./src/wavelet_analysis.m" (lines
 * 1-72). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis)
 */
static mxArray * Mwavelet_analysis(int nargout_,
                                   mxArray * wavelet_type,
                                   mxArray * signal,
                                   mxArray * level_analysis) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(
          &_local_function_table_wavelet_analysis);
    mxArray * col_cfs = NULL;
    mxArray * col_min = NULL;
    mxArray * nbcol = NULL;
    mxArray * nbrow = NULL;
    mxArray * nz_cfs = NULL;
    mxArray * lxd = NULL;
    mxArray * cxd = NULL;
    mxArray * xd = NULL;
    mxArray * ans = NULL;
    mxArray * x = NULL;
    mxArray * k = NULL;
    mxArray * orig_cfs = NULL;
    mxArray * sig_size = NULL;
    mxArray * l = NULL;
    mxArray * c = NULL;
    mclCopyArray(&wavelet_type);
    mclCopyArray(&signal);
    mclCopyArray(&level_analysis);
    /*
     * 
     * %
     * %
     * % Performs a single wavelet analysis of a signal
     * %
     * %
     * 
     * %
     * %
     * % Wavelet Decomposition
     * %
     * %
     * 
     * %fprintf('Performing Wavelet decomposition with %s\n',wavelet_type);
     * [c,l] = wavedec(signal,level_analysis,wavelet_type);
     */
    mlfAssign(
      &c,
      mlfNWavedec(
        2,
        &l,
        mclVa(signal, "signal"),
        mclVa(level_analysis, "level_analysis"),
        mclVa(wavelet_type, "wavelet_type"),
        NULL));
    /*
     * 
     * % rotate 90 degrees
     * c = rot90(c,+1);
     */
    mlfAssign(&c, mlfRot90(mclVv(c, "c"), _mxarray0_));
    /*
     * l = rot90(l,+1);
     */
    mlfAssign(&l, mlfRot90(mclVv(l, "l"), _mxarray0_));
    /*
     * sig_size = size(signal);
     */
    mlfAssign(
      &sig_size, mlfSize(mclValueVarargout(), mclVa(signal, "signal"), NULL));
    /*
     * sig_size = sig_size(1);
     */
    mlfAssign(&sig_size, mclIntArrayRef1(mclVv(sig_size, "sig_size"), 1));
    /*
     * 
     * % generate the coefficients into a matrix
     * orig_cfs = zeros(level_analysis,sig_size);
     */
    mlfAssign(
      &orig_cfs,
      mlfZeros(
        mclVa(level_analysis, "level_analysis"),
        mclVv(sig_size, "sig_size"),
        NULL));
    /*
     * 
     * % get the details
     * for k = 1:level_analysis
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(level_analysis, "level_analysis"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray1_);
        } else {
            /*
             * x = detcoef(c,l,k);
             * x = x(ones(1,2^k),:);
             * x = x(:)';
             * % orig_cfs(k,:) is equal to the center elements of x at a length of Sig_Siz
             * orig_cfs(k,:) = wkeep(x,sig_size); 
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &x,
                  mlfNDetcoef(
                    0,
                    mclValueVarargout(),
                    mclVv(c, "c"),
                    mclVv(l, "l"),
                    mlfScalar(v_),
                    NULL));
                mlfAssign(
                  &x,
                  mclArrayRef2(
                    mclVv(x, "x"),
                    mlfOnes(
                      _mxarray0_,
                      mlfScalar(svDoubleScalarPower(2.0, (double) v_)),
                      NULL),
                    mlfCreateColonIndex()));
                mlfAssign(
                  &x,
                  mlfCtranspose(
                    mclArrayRef1(mclVv(x, "x"), mlfCreateColonIndex())));
                mclArrayAssign2(
                  &orig_cfs,
                  mlfNWkeep(
                    1, mclVv(x, "x"), mclVv(sig_size, "sig_size"), NULL),
                  mlfScalar(v_),
                  mlfCreateColonIndex());
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    /*
     * clear x;
     */
    mlfClear(&x, NULL);
    /*
     * 
     * orig_cfs = wcodemat(orig_cfs,128,'row',1); % encoding of the matrix
     */
    mlfAssign(
      &orig_cfs,
      mlfNWcodemat(
        1, mclVv(orig_cfs, "orig_cfs"), _mxarray2_, _mxarray3_, _mxarray0_));
    /*
     * 
     * %
     * %
     * % Denoising
     * %
     * %
     * 
     * %fprintf('Performing Wavelet denoising with %s\n',wavelet_type);
     * [xd,cxd,lxd] = wden(c,l,'sqtwolog','s','sln',level_analysis,wavelet_type); % square root without logs
     */
    mlfAssign(
      &xd,
      mlfNWden(
        3,
        &cxd,
        &lxd,
        mclVv(c, "c"),
        mclVv(l, "l"),
        _mxarray5_,
        _mxarray7_,
        _mxarray9_,
        mclVa(level_analysis, "level_analysis"),
        mclVa(wavelet_type, "wavelet_type")));
    /*
     * 
     * %generate coefficients into a matrix
     * col_cfs = zeros(level_analysis,sig_size);
     */
    mlfAssign(
      &col_cfs,
      mlfZeros(
        mclVa(level_analysis, "level_analysis"),
        mclVv(sig_size, "sig_size"),
        NULL));
    /*
     * for k = 1:level_analysis
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(level_analysis, "level_analysis"));
        if (v_ > e_) {
            mlfAssign(&k, _mxarray1_);
        } else {
            /*
             * x = detcoef(cxd,lxd,k);		
             * x = x(ones(1,2^k),:);
             * x = x(:)';
             * % colcfs(k,:) is equal to the center elements of x at a length of Sig_Siz
             * col_cfs(k,:) = wkeep(x,sig_size);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &x,
                  mlfNDetcoef(
                    0,
                    mclValueVarargout(),
                    mclVv(cxd, "cxd"),
                    mclVv(lxd, "lxd"),
                    mlfScalar(v_),
                    NULL));
                mlfAssign(
                  &x,
                  mclArrayRef2(
                    mclVv(x, "x"),
                    mlfOnes(
                      _mxarray0_,
                      mlfScalar(svDoubleScalarPower(2.0, (double) v_)),
                      NULL),
                    mlfCreateColonIndex()));
                mlfAssign(
                  &x,
                  mlfCtranspose(
                    mclArrayRef1(mclVv(x, "x"), mlfCreateColonIndex())));
                mclArrayAssign2(
                  &col_cfs,
                  mlfNWkeep(
                    1, mclVv(x, "x"), mclVv(sig_size, "sig_size"), NULL),
                  mlfScalar(v_),
                  mlfCreateColonIndex());
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&k, mlfScalar(v_));
        }
    }
    /*
     * clear x;
     */
    mlfClear(&x, NULL);
    /*
     * 
     * %
     * %
     * % Find the nonzero coefficients
     * %
     * %
     * 
     * % find nonzero coefficients, denoising zeros weak coefficients
     * nz_cfs = find(col_cfs~=0);
     */
    mlfAssign(
      &nz_cfs,
      mlfFind(NULL, NULL, mclNe(mclVv(col_cfs, "col_cfs"), _mxarray11_)));
    /*
     * [nbrow,nbcol] = size(col_cfs);
     */
    mlfSize(
      mlfVarargout(&nbrow, &nbcol, NULL), mclVv(col_cfs, "col_cfs"), NULL);
    /*
     * col_min = 1;
     */
    mlfAssign(&col_min, _mxarray0_);
    /*
     * col_cfs = col_min*ones(nbrow,nbcol);
     */
    mlfAssign(
      &col_cfs,
      mclMtimes(
        mclVv(col_min, "col_min"),
        mlfOnes(mclVv(nbrow, "nbrow"), mclVv(nbcol, "nbcol"), NULL)));
    /*
     * col_cfs(nz_cfs) = orig_cfs(nz_cfs);
     */
    mclArrayAssign1(
      &col_cfs,
      mclArrayRef1(mclVv(orig_cfs, "orig_cfs"), mclVv(nz_cfs, "nz_cfs")),
      mclVv(nz_cfs, "nz_cfs"));
    mclValidateOutput(col_cfs, 1, nargout_, "col_cfs", "wavelet_analysis");
    mxDestroyArray(c);
    mxDestroyArray(l);
    mxDestroyArray(sig_size);
    mxDestroyArray(orig_cfs);
    mxDestroyArray(k);
    mxDestroyArray(x);
    mxDestroyArray(ans);
    mxDestroyArray(xd);
    mxDestroyArray(cxd);
    mxDestroyArray(lxd);
    mxDestroyArray(nz_cfs);
    mxDestroyArray(nbrow);
    mxDestroyArray(nbcol);
    mxDestroyArray(col_min);
    mxDestroyArray(level_analysis);
    mxDestroyArray(signal);
    mxDestroyArray(wavelet_type);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return col_cfs;
    /*
     * 
     */
}
