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
#include "gff_matrix_fast.h"
#include "libmatlbm.h"

static mxChar _array1_[1] = { 'w' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;

static mxChar _array4_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'o', 'p',
                               'e', 'n', 'i', 'n', 'g', ' ', '%', 's',
                               ' ', 'f', 'o', 'r', ' ', 'r', 'e', 'a',
                               'd', 'i', 'n', 'g', 0x005c, 'n' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static mxChar _array8_[34] = { '%', 's', 0x005c, 't', '%', 's', 0x005c,
                               't', '%', 's', ':', '%', 'i', 0x005c, 't',
                               '%', 'i', 0x005c, 't', '%', 'i', 0x005c,
                               't', '.', 0x005c, 't', '+', 0x005c, 't',
                               '.', 0x005c, 't', 0x005c, 'n' };
static mxArray * _mxarray7_;

static mxChar _array10_[34] = { '%', 's', 0x005c, 't', '%', 's', 0x005c,
                                't', '%', 's', ':', '%', 'i', 0x005c, 't',
                                '%', 'i', 0x005c, 't', '%', 'i', 0x005c,
                                't', '.', 0x005c, 't', '-', 0x005c, 't',
                                '.', 0x005c, 't', 0x005c, 'n' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;

static mxChar _array13_[21] = { 'P', 'r', 'o', 'b', 'l', 'e', 'm',
                                ' ', 'c', 'l', 'o', 's', 'i', 'n',
                                'g', ' ', '%', 's', ',', '%', 'i' };
static mxArray * _mxarray12_;

void InitializeModule_gff_matrix_fast(void) {
    _mxarray0_ = mclInitializeString(1, _array1_);
    _mxarray2_ = mclInitializeDouble(-1.0);
    _mxarray3_ = mclInitializeString(30, _array4_);
    _mxarray5_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeString(34, _array8_);
    _mxarray9_ = mclInitializeString(34, _array10_);
    _mxarray11_ = mclInitializeDouble(0.0);
    _mxarray12_ = mclInitializeString(21, _array13_);
}

void TerminateModule_gff_matrix_fast(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgff_matrix_fast(int nargout_,
                                  mxArray * filename,
                                  mxArray * seqname,
                                  mxArray * source,
                                  mxArray * feature_type,
                                  mxArray * strand,
                                  mxArray * len_sig,
                                  mxArray * col_cfs);

_mexLocalFunctionTable _local_function_table_gff_matrix_fast
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGff_matrix_fast" contains the normal interface for the
 * "gff_matrix_fast" M-function from file "./src/gff_matrix_fast.m" (lines
 * 1-70). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfGff_matrix_fast(mxArray * filename,
                             mxArray * seqname,
                             mxArray * source,
                             mxArray * feature_type,
                             mxArray * strand,
                             mxArray * len_sig,
                             mxArray * col_cfs) {
    int nargout = 1;
    mxArray * rval = NULL;
    mlfEnterNewContext(
      0, 7, filename, seqname, source, feature_type, strand, len_sig, col_cfs);
    rval
      = Mgff_matrix_fast(
          nargout,
          filename,
          seqname,
          source,
          feature_type,
          strand,
          len_sig,
          col_cfs);
    mlfRestorePreviousContext(
      0, 7, filename, seqname, source, feature_type, strand, len_sig, col_cfs);
    return mlfReturnValue(rval);
}

/*
 * The function "mlxGff_matrix_fast" contains the feval interface for the
 * "gff_matrix_fast" M-function from file "./src/gff_matrix_fast.m" (lines
 * 1-70). The feval function calls the implementation version of
 * gff_matrix_fast through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlxGff_matrix_fast(int nlhs,
                        mxArray * plhs[],
                        int nrhs,
                        mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: gff_matrix_fast Line: 1 Colum"
            "n: 1 The function \"gff_matrix_fast\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: gff_matrix_fast Line: 1 Colum"
            "n: 1 The function \"gff_matrix_fast\" was called wi"
            "th more than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mgff_matrix_fast(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mgff_matrix_fast" is the implementation version of the
 * "gff_matrix_fast" M-function from file "./src/gff_matrix_fast.m" (lines
 * 1-70). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [rval] = gff_matrix_fast(filename,seqname,source,feature_type,strand,len_sig,col_cfs)
 */
static mxArray * Mgff_matrix_fast(int nargout_,
                                  mxArray * filename,
                                  mxArray * seqname,
                                  mxArray * source,
                                  mxArray * feature_type,
                                  mxArray * strand,
                                  mxArray * len_sig,
                                  mxArray * col_cfs) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(
          &_local_function_table_gff_matrix_fast);
    mxArray * rval = NULL;
    mxArray * status = NULL;
    mxArray * stop = NULL;
    mxArray * start = NULL;
    mxArray * i = NULL;
    mxArray * non_ones = NULL;
    mxArray * cur = NULL;
    mxArray * level = NULL;
    mxArray * ans = NULL;
    mxArray * error_msg = NULL;
    mxArray * fid = NULL;
    mclCopyArray(&filename);
    mclCopyArray(&seqname);
    mclCopyArray(&source);
    mclCopyArray(&feature_type);
    mclCopyArray(&strand);
    mclCopyArray(&len_sig);
    mclCopyArray(&col_cfs);
    /*
     * 
     * %
     * %
     * % Open filename for writting 
     * %
     * %
     * 
     * [fid,error_msg] = fopen(filename,'w');
     */
    mlfAssign(
      &fid,
      mlfFopen(
        &error_msg, NULL, mclVa(filename, "filename"), _mxarray0_, NULL));
    /*
     * if fid == -1,error('Error opening %s for reading\n',filename),end
     */
    if (mclEqBool(mclVv(fid, "fid"), _mxarray2_)) {
        mlfError(_mxarray3_, mclVa(filename, "filename"), NULL);
    }
    /*
     * 
     * for level=1:length(col_cfs(:,1))
     */
    {
        int v_ = mclForIntStart(1);
        int e_
          = mclLengthInt(
              mclArrayRef2(
                mclVa(col_cfs, "col_cfs"), mlfCreateColonIndex(), _mxarray6_));
        if (v_ > e_) {
            mlfAssign(&level, _mxarray5_);
        } else {
            /*
             * cur = 1;
             * non_ones = zeros(length(col_cfs(level,:)),1);
             * for i=1:length(col_cfs(level,:))
             * if ~(col_cfs(level,i) == 1)
             * non_ones(cur,1) = i;
             * cur = cur + 1;
             * end
             * end
             * if cur > 1
             * % print loop
             * start = 1;
             * stop = 1;
             * for i = 2:(cur -1)
             * if non_ones(i,1) == ( non_ones(stop,1) + 1 )
             * % still continuous
             * stop = i;
             * else
             * % no longer continuous
             * if strand == 1
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
             * else
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
             * end
             * start = i;
             * stop = i;
             * end
             * end
             * 
             * % This will be true if there is only feature
             * if start == 1
             * if strand == 1
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
             * else
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
             * end
             * elseif stop == (cur - 1)
             * % this last feature of a multi-feature case
             * if strand == 1
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t+\t.\t\n',seqname,source,feature_type,level,non_ones(start,1),non_ones(stop,1) );
             * else
             * fprintf(fid,'%s\t%s\t%s:%i\t%i\t%i\t.\t-\t.\t\n',seqname,source,feature_type,level,(len_sig - non_ones(stop,1)) + 1,(len_sig - non_ones(start,1)) + 1);
             * end
             * end
             * end
             * clear non_ones;
             * end
             */
            for (; ; ) {
                mlfAssign(&cur, _mxarray6_);
                mlfAssign(
                  &non_ones,
                  mlfZeros(
                    mlfScalar(
                      mclLengthInt(
                        mclArrayRef2(
                          mclVa(col_cfs, "col_cfs"),
                          mlfScalar(v_),
                          mlfCreateColonIndex()))),
                    _mxarray6_,
                    NULL));
                {
                    int v_0 = mclForIntStart(1);
                    int e_0
                      = mclLengthInt(
                          mclArrayRef2(
                            mclVa(col_cfs, "col_cfs"),
                            mlfScalar(v_),
                            mlfCreateColonIndex()));
                    if (v_0 > e_0) {
                        mlfAssign(&i, _mxarray5_);
                    } else {
                        for (; ; ) {
                            if (mclNotBool(
                                  mclEq(
                                    mclIntArrayRef2(
                                      mclVa(col_cfs, "col_cfs"), v_, v_0),
                                    _mxarray6_))) {
                                mclArrayAssign2(
                                  &non_ones,
                                  mlfScalar(v_0),
                                  mclVv(cur, "cur"),
                                  _mxarray6_);
                                mlfAssign(
                                  &cur, mclPlus(mclVv(cur, "cur"), _mxarray6_));
                            }
                            if (v_0 == e_0) {
                                break;
                            }
                            ++v_0;
                        }
                        mlfAssign(&i, mlfScalar(v_0));
                    }
                }
                if (mclGtBool(mclVv(cur, "cur"), _mxarray6_)) {
                    mlfAssign(&start, _mxarray6_);
                    mlfAssign(&stop, _mxarray6_);
                    {
                        int v_1 = mclForIntStart(2);
                        int e_1
                          = mclForIntEnd(
                              mclMinus(mclVv(cur, "cur"), _mxarray6_));
                        if (v_1 > e_1) {
                            mlfAssign(&i, _mxarray5_);
                        } else {
                            for (; ; ) {
                                if (mclEqBool(
                                      mclIntArrayRef2(
                                        mclVv(non_ones, "non_ones"), v_1, 1),
                                      mclPlus(
                                        mclArrayRef2(
                                          mclVv(non_ones, "non_ones"),
                                          mclVv(stop, "stop"),
                                          _mxarray6_),
                                        _mxarray6_))) {
                                    mlfAssign(&stop, mlfScalar(v_1));
                                } else {
                                    if (mclEqBool(
                                          mclVa(strand, "strand"),
                                          _mxarray6_)) {
                                        mclAssignAns(
                                          &ans,
                                          mlfNFprintf(
                                            0,
                                            mclVv(fid, "fid"),
                                            _mxarray7_,
                                            mclVa(seqname, "seqname"),
                                            mclVa(source, "source"),
                                            mclVa(feature_type, "feature_type"),
                                            mlfScalar(v_),
                                            mclArrayRef2(
                                              mclVv(non_ones, "non_ones"),
                                              mclVv(start, "start"),
                                              _mxarray6_),
                                            mclArrayRef2(
                                              mclVv(non_ones, "non_ones"),
                                              mclVv(stop, "stop"),
                                              _mxarray6_),
                                            NULL));
                                    } else {
                                        mclAssignAns(
                                          &ans,
                                          mlfNFprintf(
                                            0,
                                            mclVv(fid, "fid"),
                                            _mxarray9_,
                                            mclVa(seqname, "seqname"),
                                            mclVa(source, "source"),
                                            mclVa(feature_type, "feature_type"),
                                            mlfScalar(v_),
                                            mclPlus(
                                              mclMinus(
                                                mclVa(len_sig, "len_sig"),
                                                mclArrayRef2(
                                                  mclVv(non_ones, "non_ones"),
                                                  mclVv(stop, "stop"),
                                                  _mxarray6_)),
                                              _mxarray6_),
                                            mclPlus(
                                              mclMinus(
                                                mclVa(len_sig, "len_sig"),
                                                mclArrayRef2(
                                                  mclVv(non_ones, "non_ones"),
                                                  mclVv(start, "start"),
                                                  _mxarray6_)),
                                              _mxarray6_),
                                            NULL));
                                    }
                                    mlfAssign(&start, mlfScalar(v_1));
                                    mlfAssign(&stop, mlfScalar(v_1));
                                }
                                if (v_1 == e_1) {
                                    break;
                                }
                                ++v_1;
                            }
                            mlfAssign(&i, mlfScalar(v_1));
                        }
                    }
                    if (mclEqBool(mclVv(start, "start"), _mxarray6_)) {
                        if (mclEqBool(mclVa(strand, "strand"), _mxarray6_)) {
                            mclAssignAns(
                              &ans,
                              mlfNFprintf(
                                0,
                                mclVv(fid, "fid"),
                                _mxarray7_,
                                mclVa(seqname, "seqname"),
                                mclVa(source, "source"),
                                mclVa(feature_type, "feature_type"),
                                mlfScalar(v_),
                                mclArrayRef2(
                                  mclVv(non_ones, "non_ones"),
                                  mclVv(start, "start"),
                                  _mxarray6_),
                                mclArrayRef2(
                                  mclVv(non_ones, "non_ones"),
                                  mclVv(stop, "stop"),
                                  _mxarray6_),
                                NULL));
                        } else {
                            mclAssignAns(
                              &ans,
                              mlfNFprintf(
                                0,
                                mclVv(fid, "fid"),
                                _mxarray9_,
                                mclVa(seqname, "seqname"),
                                mclVa(source, "source"),
                                mclVa(feature_type, "feature_type"),
                                mlfScalar(v_),
                                mclPlus(
                                  mclMinus(
                                    mclVa(len_sig, "len_sig"),
                                    mclArrayRef2(
                                      mclVv(non_ones, "non_ones"),
                                      mclVv(stop, "stop"),
                                      _mxarray6_)),
                                  _mxarray6_),
                                mclPlus(
                                  mclMinus(
                                    mclVa(len_sig, "len_sig"),
                                    mclArrayRef2(
                                      mclVv(non_ones, "non_ones"),
                                      mclVv(start, "start"),
                                      _mxarray6_)),
                                  _mxarray6_),
                                NULL));
                        }
                    } else if (mclEqBool(
                                 mclVv(stop, "stop"),
                                 mclMinus(mclVv(cur, "cur"), _mxarray6_))) {
                        if (mclEqBool(mclVa(strand, "strand"), _mxarray6_)) {
                            mclAssignAns(
                              &ans,
                              mlfNFprintf(
                                0,
                                mclVv(fid, "fid"),
                                _mxarray7_,
                                mclVa(seqname, "seqname"),
                                mclVa(source, "source"),
                                mclVa(feature_type, "feature_type"),
                                mlfScalar(v_),
                                mclArrayRef2(
                                  mclVv(non_ones, "non_ones"),
                                  mclVv(start, "start"),
                                  _mxarray6_),
                                mclArrayRef2(
                                  mclVv(non_ones, "non_ones"),
                                  mclVv(stop, "stop"),
                                  _mxarray6_),
                                NULL));
                        } else {
                            mclAssignAns(
                              &ans,
                              mlfNFprintf(
                                0,
                                mclVv(fid, "fid"),
                                _mxarray9_,
                                mclVa(seqname, "seqname"),
                                mclVa(source, "source"),
                                mclVa(feature_type, "feature_type"),
                                mlfScalar(v_),
                                mclPlus(
                                  mclMinus(
                                    mclVa(len_sig, "len_sig"),
                                    mclArrayRef2(
                                      mclVv(non_ones, "non_ones"),
                                      mclVv(stop, "stop"),
                                      _mxarray6_)),
                                  _mxarray6_),
                                mclPlus(
                                  mclMinus(
                                    mclVa(len_sig, "len_sig"),
                                    mclArrayRef2(
                                      mclVv(non_ones, "non_ones"),
                                      mclVv(start, "start"),
                                      _mxarray6_)),
                                  _mxarray6_),
                                NULL));
                        }
                    }
                }
                mlfClear(&non_ones, NULL);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&level, mlfScalar(v_));
        }
    }
    /*
     * 
     * %
     * %
     * % Close the File
     * %
     * %
     * 
     * [status] = fclose(fid);
     */
    mlfAssign(&status, mlfFclose(mclVv(fid, "fid")));
    /*
     * if status ~= 0,error('Problem closing %s,%i',filename,status),end
     */
    if (mclNeBool(mclVv(status, "status"), _mxarray11_)) {
        mlfError(
          _mxarray12_,
          mclVa(filename, "filename"),
          mclVv(status, "status"),
          NULL);
    }
    /*
     * 
     * rval = 0;
     */
    mlfAssign(&rval, _mxarray11_);
    mclValidateOutput(rval, 1, nargout_, "rval", "gff_matrix_fast");
    mxDestroyArray(fid);
    mxDestroyArray(error_msg);
    mxDestroyArray(ans);
    mxDestroyArray(level);
    mxDestroyArray(cur);
    mxDestroyArray(non_ones);
    mxDestroyArray(i);
    mxDestroyArray(start);
    mxDestroyArray(stop);
    mxDestroyArray(status);
    mxDestroyArray(col_cfs);
    mxDestroyArray(len_sig);
    mxDestroyArray(strand);
    mxDestroyArray(feature_type);
    mxDestroyArray(source);
    mxDestroyArray(seqname);
    mxDestroyArray(filename);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return rval;
}
