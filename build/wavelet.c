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
#include "wavelet.h"
#include "fasta_to_column_vector.h"
#include "gff_matrix_fast.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wavelet_analysis.h"
static mxArray * _mxarray0_;

static mxChar _array2_[5] = { '_', 'o', 'u', 't', '_' };
static mxArray * _mxarray1_;

static mxChar _array4_[8] = { '_', 'r', 'e', 'v', '_', 'o', 'u', 't' };
static mxArray * _mxarray3_;

static mxChar _array6_[2] = { 'd', 'b' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;

static mxChar _array9_[6] = { 'd', 'b', '_', 'a', 'l', 'l' };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;

static mxChar _array13_[4] = { 'd', 'b', '%', 'i' };
static mxArray * _mxarray12_;

static mxChar _array15_[30] = { 'P', 'e', 'r', 'f', 'o', 'r', 'm', 'a',
                                'i', 'n', 'g', ' ', 'a', 'n', 'a', 'l',
                                'y', 's', 'i', 's', ' ', 'w', 'i', 't',
                                'h', ' ', '%', 's', 0x005c, 'n' };
static mxArray * _mxarray14_;

static mxChar _array17_[10] = { '%', 's', '%', 's', '%',
                                's', '.', 'g', 'f', 'f' };
static mxArray * _mxarray16_;

static mxChar _array19_[7] = { 'W', 'a', 'v', 'e', 'l', 'e', 't' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;

static mxChar _array22_[37] = { 'E', 'r', 'r', 'o', 'r', ' ', 'w', 'a',
                                'v', 'e', 'l', 'e', 't', ' ', 't', 'y',
                                'p', 'e', ' ', '%', 's', ' ', 'n', 'o',
                                't', ' ', 's', 'u', 'p', 'p', 'o', 'r',
                                't', 'e', 'd', 0x005c, 'n' };
static mxArray * _mxarray21_;

void InitializeModule_wavelet(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(5, _array2_);
    _mxarray3_ = mclInitializeString(8, _array4_);
    _mxarray5_ = mclInitializeString(2, _array6_);
    _mxarray7_ = mclInitializeDouble(2.0);
    _mxarray8_ = mclInitializeString(6, _array9_);
    _mxarray10_ = mclInitializeDouble(6.0);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeString(4, _array13_);
    _mxarray14_ = mclInitializeString(30, _array15_);
    _mxarray16_ = mclInitializeString(10, _array17_);
    _mxarray18_ = mclInitializeString(7, _array19_);
    _mxarray20_ = mclInitializeDouble(10.0);
    _mxarray21_ = mclInitializeString(37, _array22_);
}

void TerminateModule_wavelet(void) {
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwavelet(int nargout_,
                          mxArray * filename,
                          mxArray * wavelet_type,
                          mxArray * level_analysis,
                          mxArray * strand);

_mexLocalFunctionTable _local_function_table_wavelet
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfWavelet" contains the normal interface for the "wavelet"
 * M-function from file "./src/wavelet.m" (lines 1-78). This function processes
 * any input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfWavelet(mxArray * filename,
                     mxArray * wavelet_type,
                     mxArray * level_analysis,
                     mxArray * strand) {
    int nargout = 1;
    mxArray * rval = NULL;
    mlfEnterNewContext(0, 4, filename, wavelet_type, level_analysis, strand);
    rval = Mwavelet(nargout, filename, wavelet_type, level_analysis, strand);
    mlfRestorePreviousContext(
      0, 4, filename, wavelet_type, level_analysis, strand);
    return mlfReturnValue(rval);
}

/*
 * The function "mlxWavelet" contains the feval interface for the "wavelet"
 * M-function from file "./src/wavelet.m" (lines 1-78). The feval function
 * calls the implementation version of wavelet through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxWavelet(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavelet Line: 1 Column: "
            "1 The function \"wavelet\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavelet Line: 1 Column:"
            " 1 The function \"wavelet\" was called with m"
            "ore than the declared number of inputs (4)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mplhs[0] = Mwavelet(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwavelet" is the implementation version of the "wavelet"
 * M-function from file "./src/wavelet.m" (lines 1-78). It contains the actual
 * compiled code for that M-function. It is a static function and must only be
 * called from one of the interface functions, appearing below.
 */
/*
 * function [rval] = wavelet(filename,wavelet_type,level_analysis,strand)
 */
static mxArray * Mwavelet(int nargout_,
                          mxArray * filename,
                          mxArray * wavelet_type,
                          mxArray * level_analysis,
                          mxArray * strand) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavelet);
    mxArray * rval = NULL;
    mxArray * gff_filename = NULL;
    mxArray * col_cfs = NULL;
    mxArray * ans = NULL;
    mxArray * wavelet = NULL;
    mxArray * suffix = NULL;
    mxArray * display_id = NULL;
    mxArray * signal = NULL;
    mclCopyArray(&filename);
    mclCopyArray(&wavelet_type);
    mclCopyArray(&level_analysis);
    mclCopyArray(&strand);
    /*
     * 
     * %
     * %
     * % Matlab function that will take a FASTA formated sequence file and performa wavelet analysis on it
     * %
     * %
     * 
     * level_analysis = str2num(level_analysis);
     */
    mlfAssign(
      &level_analysis,
      mlfStr2num(NULL, mclVa(level_analysis, "level_analysis")));
    /*
     * strand = str2num(strand);
     */
    mlfAssign(&strand, mlfStr2num(NULL, mclVa(strand, "strand")));
    /*
     * 
     * %
     * %
     * % Encode DNA to [2,1,0,-1,-2]
     * %
     * %
     * 
     * [signal,display_id] = fasta_to_column_vector(filename);
     */
    mlfAssign(
      &signal,
      mlfFasta_to_column_vector(&display_id, mclVa(filename, "filename")));
    /*
     * 
     * %
     * %
     * % Setup the output file extension based on which strand we're working on
     * %
     * %
     * 
     * if strand == 1
     */
    if (mclEqBool(mclVa(strand, "strand"), _mxarray0_)) {
        /*
         * suffix = sprintf('_out_');
         */
        mlfAssign(&suffix, mlfSprintf(NULL, _mxarray1_, NULL));
    /*
     * else
     */
    } else {
        /*
         * suffix = sprintf('_rev_out');
         */
        mlfAssign(&suffix, mlfSprintf(NULL, _mxarray3_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * %
     * %
     * % If the request was for a specific wavelet then do that one otherwise do all wavelets
     * %
     * %
     * 
     * if strncmp('db',wavelet_type,2)
     */
    if (mlfTobool(
          mlfStrncmp(
            _mxarray5_, mclVa(wavelet_type, "wavelet_type"), _mxarray7_))) {
        /*
         * if strncmp('db_all',wavelet_type,6)
         */
        if (mlfTobool(
              mlfStrncmp(
                _mxarray8_,
                mclVa(wavelet_type, "wavelet_type"),
                _mxarray10_))) {
            /*
             * % do all of the db family of wavelets
             * for wavelet=1:1:10
             */
            int v_ = mclForIntStart(1);
            int i_ = 1;
            int e_ = mclForIntIntEnd(v_, i_, _mxarray20_);
            if (e_ == mclIntMin()) {
                mlfAssign(&wavelet, _mxarray11_);
            } else {
                /*
                 * wavelet_type = sprintf('db%i',wavelet);
                 * fprintf('Performaing analysis with %s\n',wavelet_type);
                 * 
                 * %single wavelet case
                 * %			fprintf('Calling wavelet_analysis\n');
                 * [col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis);
                 * 
                 * %generate the gff
                 * %			fprintf('Generating Gff output\n');
                 * 
                 * gff_filename = sprintf('%s%s%s.gff',filename,suffix,wavelet_type);
                 * %			gff_matrix(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
                 * gff_matrix_fast(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
                 * clear col_cfs;
                 * end
                 */
                for (; ; ) {
                    mlfAssign(
                      &wavelet_type,
                      mlfSprintf(NULL, _mxarray12_, mlfScalar(v_), NULL));
                    mclAssignAns(
                      &ans,
                      mlfNFprintf(
                        0,
                        _mxarray14_,
                        mclVa(wavelet_type, "wavelet_type"),
                        NULL));
                    mlfAssign(
                      &col_cfs,
                      mlfWavelet_analysis(
                        mclVa(wavelet_type, "wavelet_type"),
                        mclVv(signal, "signal"),
                        mclVa(level_analysis, "level_analysis")));
                    mlfAssign(
                      &gff_filename,
                      mlfSprintf(
                        NULL,
                        _mxarray16_,
                        mclVa(filename, "filename"),
                        mclVv(suffix, "suffix"),
                        mclVa(wavelet_type, "wavelet_type"),
                        NULL));
                    mclAssignAns(
                      &ans,
                      mlfGff_matrix_fast(
                        mclVv(gff_filename, "gff_filename"),
                        mclVv(display_id, "display_id"),
                        _mxarray18_,
                        mclVa(wavelet_type, "wavelet_type"),
                        mclVa(strand, "strand"),
                        mlfScalar(mclLengthInt(mclVv(signal, "signal"))),
                        mclVv(col_cfs, "col_cfs")));
                    mlfClear(&col_cfs, NULL);
                    if (v_ == e_) {
                        break;
                    }
                    v_ += i_;
                }
                mlfAssign(&wavelet, mlfScalar(v_));
            }
        /*
         * else
         */
        } else {
            /*
             * %single wavelet case
             * %		fprintf('Calling wavelet_analysis\n');
             * [col_cfs] = wavelet_analysis(wavelet_type,signal,level_analysis);
             */
            mlfAssign(
              &col_cfs,
              mlfWavelet_analysis(
                mclVa(wavelet_type, "wavelet_type"),
                mclVv(signal, "signal"),
                mclVa(level_analysis, "level_analysis")));
            /*
             * 
             * %generate the gff
             * %		fprintf('Generating Gff output\n');
             * 
             * gff_filename = sprintf('%s%s%s.gff',filename,suffix,wavelet_type);
             */
            mlfAssign(
              &gff_filename,
              mlfSprintf(
                NULL,
                _mxarray16_,
                mclVa(filename, "filename"),
                mclVv(suffix, "suffix"),
                mclVa(wavelet_type, "wavelet_type"),
                NULL));
            /*
             * %		gff_matrix(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
             * gff_matrix_fast(gff_filename,display_id,'Wavelet',wavelet_type,strand,length(signal),col_cfs);
             */
            mclAssignAns(
              &ans,
              mlfGff_matrix_fast(
                mclVv(gff_filename, "gff_filename"),
                mclVv(display_id, "display_id"),
                _mxarray18_,
                mclVa(wavelet_type, "wavelet_type"),
                mclVa(strand, "strand"),
                mlfScalar(mclLengthInt(mclVv(signal, "signal"))),
                mclVv(col_cfs, "col_cfs")));
            /*
             * clear col_cfs;
             */
            mlfClear(&col_cfs, NULL);
        /*
         * end
         */
        }
    /*
     * else
     */
    } else {
        /*
         * fprintf('Error wavelet type %s not supported\n',wavelet_type);
         */
        mclAssignAns(
          &ans,
          mlfNFprintf(
            0, _mxarray21_, mclVa(wavelet_type, "wavelet_type"), NULL));
        /*
         * exit;
         */
        mlfExit();
    /*
     * end
     */
    }
    /*
     * 
     * clear;
     */
    mlfClear(
      &ans,
      &col_cfs,
      &display_id,
      &filename,
      &gff_filename,
      &level_analysis,
      &rval,
      &signal,
      &strand,
      &suffix,
      &wavelet,
      &wavelet_type,
      NULL);
    /*
     * 
     * exit;
     */
    mlfExit();
    mclValidateOutput(rval, 1, nargout_, "rval", "wavelet");
    mxDestroyArray(signal);
    mxDestroyArray(display_id);
    mxDestroyArray(suffix);
    mxDestroyArray(wavelet);
    mxDestroyArray(ans);
    mxDestroyArray(col_cfs);
    mxDestroyArray(gff_filename);
    mxDestroyArray(strand);
    mxDestroyArray(level_analysis);
    mxDestroyArray(wavelet_type);
    mxDestroyArray(filename);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return rval;
}
