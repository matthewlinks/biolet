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
#include "fasta_to_column_vector.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

static mxChar _array3_[1] = { 'r' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;

static mxChar _array6_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'o', 'p',
                               'e', 'n', 'i', 'n', 'g', ' ', '%', 's',
                               ' ', 'f', 'o', 'r', ' ', 'r', 'e', 'a',
                               'd', 'i', 'n', 'g', 0x005c, 'n' };
static mxArray * _mxarray5_;

static mxChar _array8_[33] = { 'R', 'e', 'a', 'd', ' ', 'a', ' ', 'n', 'o',
                               'n', '-', 'c', 'h', 'a', 'r', 'a', 'c', 't',
                               'e', 'r', ' ', 'l', 'i', 'n', 'e', ' ', 'f',
                               'r', 'o', 'm', ' ', '%', 's' };
static mxArray * _mxarray7_;

static mxChar _array10_[1] = { '>' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;

static mxChar _array13_[48] = { 'T', 'h', 'e', ' ', 'f', 'i', 'r', 's',
                                't', ' ', 'l', 'i', 'n', 'e', ' ', 'o',
                                'f', ' ', 't', 'h', 'e', ' ', 'f', 'i',
                                'l', 'e', ' ', 'd', 'o', 'e', 's', ' ',
                                'n', 'o', 't', ' ', 'b', 'e', 'g', 'i',
                                'n', ' ', 'w', 'i', 't', 'h', ' ', '>' };
static mxArray * _mxarray12_;

static mxChar _array15_[3] = { '%', 's', '*' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;

static mxChar _array19_[83] = { 'M', 'u', 'l', 't', 'i', 'p', 'l', 'e', ' ',
                                's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', ' ',
                                'f', 'i', 'l', 'e', 's', ' ', 'a', 'r', 'e',
                                ' ', 'n', 'o', 't', ' ', 'y', 'e', 't', ' ',
                                's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
                                '.', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's',
                                'i', 'n', 'g', ' ', 'o', 'n', 'l', 'y', ' ',
                                't', 'h', 'e', ' ', 'f', 'i', 'r', 's', 't',
                                ' ', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e',
                                0x005c, 'n' };
static mxArray * _mxarray18_;

static mxChar _array23_[1] = { 'A' };
static mxArray * _mxarray22_;

static mxChar _array25_[1] = { 'a' };
static mxArray * _mxarray24_;

static mxArray * _array21_[2] = { NULL /*_mxarray22_*/, NULL /*_mxarray24_*/ };
static mxArray * _mxarray20_;

static mxChar _array29_[1] = { 'T' };
static mxArray * _mxarray28_;

static mxChar _array31_[1] = { 't' };
static mxArray * _mxarray30_;

static mxArray * _array27_[2] = { NULL /*_mxarray28_*/, NULL /*_mxarray30_*/ };
static mxArray * _mxarray26_;

static mxChar _array35_[1] = { 'C' };
static mxArray * _mxarray34_;

static mxChar _array37_[1] = { 'c' };
static mxArray * _mxarray36_;

static mxArray * _array33_[2] = { NULL /*_mxarray34_*/, NULL /*_mxarray36_*/ };
static mxArray * _mxarray32_;
static mxArray * _mxarray38_;

static mxChar _array42_[1] = { 'G' };
static mxArray * _mxarray41_;

static mxChar _array44_[1] = { 'g' };
static mxArray * _mxarray43_;

static mxArray * _array40_[2] = { NULL /*_mxarray41_*/, NULL /*_mxarray43_*/ };
static mxArray * _mxarray39_;

static mxChar _array46_[120] = { 0x005c, 't', 'W', 'a', 'r', 'n', 'i', 'n',
                                 'g', ' ', 't', 'h', 'e', ' ', 's', 'i', 'g',
                                 'n', 'a', 'l', ' ', 'h', 'a', 's', ' ', 'g',
                                 'r', 'o', 'w', 'n', ' ', 'b', 'e', 'y', 'o',
                                 'n', 'd', ' ', 't', 'h', 'e', ' ', 'm', 'a',
                                 'x', '_', 's', 'e', 'q', '_', 'l', 'e', 'n',
                                 ' ', '(', '%', 'i', ')', 0x005c, 'n',
                                 0x005c, 't', 'T', 'h', 'i', 's', ' ', 'i',
                                 's', ' ', 'n', 'o', 'n', '-', 'f', 'a', 't',
                                 'a', 'l', ' ', 'b', 'u', 't', ' ', 'm', 'a',
                                 'y', ' ', 'c', 'a', 'u', 's', 'e', ' ', 't',
                                 'h', 'e', ' ', 's', 'p', 'e', 'e', 'd', ' ',
                                 't', 'o', ' ', 'd', 'e', 't', 'e', 'r', 'i',
                                 'o', 'r', 'a', 't', 'e', 0x005c, 'n' };
static mxArray * _mxarray45_;

static mxChar _array48_[21] = { 'P', 'r', 'o', 'b', 'l', 'e', 'm',
                                ' ', 'c', 'l', 'o', 's', 'i', 'n',
                                'g', ' ', '%', 's', ',', '%', 'i' };
static mxArray * _mxarray47_;

void InitializeModule_fasta_to_column_vector(void) {
    _mxarray0_ = mclInitializeDouble(1e+06);
    _mxarray1_ = mclInitializeDouble(0.0);
    _mxarray2_ = mclInitializeString(1, _array3_);
    _mxarray4_ = mclInitializeDouble(-1.0);
    _mxarray5_ = mclInitializeString(30, _array6_);
    _mxarray7_ = mclInitializeString(33, _array8_);
    _mxarray9_ = mclInitializeString(1, _array10_);
    _mxarray11_ = mclInitializeDouble(1.0);
    _mxarray12_ = mclInitializeString(48, _array13_);
    _mxarray14_ = mclInitializeString(3, _array15_);
    _mxarray16_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray17_ = mclInitializeDouble(2.0);
    _mxarray18_ = mclInitializeString(83, _array19_);
    _mxarray22_ = mclInitializeString(1, _array23_);
    _array21_[0] = _mxarray22_;
    _mxarray24_ = mclInitializeString(1, _array25_);
    _array21_[1] = _mxarray24_;
    _mxarray20_ = mclInitializeCellVector(1, 2, _array21_);
    _mxarray28_ = mclInitializeString(1, _array29_);
    _array27_[0] = _mxarray28_;
    _mxarray30_ = mclInitializeString(1, _array31_);
    _array27_[1] = _mxarray30_;
    _mxarray26_ = mclInitializeCellVector(1, 2, _array27_);
    _mxarray34_ = mclInitializeString(1, _array35_);
    _array33_[0] = _mxarray34_;
    _mxarray36_ = mclInitializeString(1, _array37_);
    _array33_[1] = _mxarray36_;
    _mxarray32_ = mclInitializeCellVector(1, 2, _array33_);
    _mxarray38_ = mclInitializeDouble(-2.0);
    _mxarray41_ = mclInitializeString(1, _array42_);
    _array40_[0] = _mxarray41_;
    _mxarray43_ = mclInitializeString(1, _array44_);
    _array40_[1] = _mxarray43_;
    _mxarray39_ = mclInitializeCellVector(1, 2, _array40_);
    _mxarray45_ = mclInitializeString(120, _array46_);
    _mxarray47_ = mclInitializeString(21, _array48_);
}

void TerminateModule_fasta_to_column_vector(void) {
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mfasta_to_column_vector(mxArray * * display_id,
                                         int nargout_,
                                         mxArray * fasta_input);

_mexLocalFunctionTable _local_function_table_fasta_to_column_vector
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfFasta_to_column_vector" contains the normal interface for
 * the "fasta_to_column_vector" M-function from file
 * "./src/fasta_to_column_vector.m" (lines 1-89). This function processes any
 * input arguments and passes them to the implementation version of the
 * function, appearing above.
 */
mxArray * mlfFasta_to_column_vector(mxArray * * display_id,
                                    mxArray * fasta_input) {
    int nargout = 1;
    mxArray * signal = NULL;
    mxArray * display_id__ = NULL;
    mlfEnterNewContext(1, 1, display_id, fasta_input);
    if (display_id != NULL) {
        ++nargout;
    }
    signal = Mfasta_to_column_vector(&display_id__, nargout, fasta_input);
    mlfRestorePreviousContext(1, 1, display_id, fasta_input);
    if (display_id != NULL) {
        mclCopyOutputArg(display_id, display_id__);
    } else {
        mxDestroyArray(display_id__);
    }
    return mlfReturnValue(signal);
}

/*
 * The function "mlxFasta_to_column_vector" contains the feval interface for
 * the "fasta_to_column_vector" M-function from file
 * "./src/fasta_to_column_vector.m" (lines 1-89). The feval function calls the
 * implementation version of fasta_to_column_vector through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxFasta_to_column_vector(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: fasta_to_column_vector Line: 1 Col"
            "umn: 1 The function \"fasta_to_column_vector\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: fasta_to_column_vector Line: 1 Co"
            "lumn: 1 The function \"fasta_to_column_vector\" was cal"
            "led with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mfasta_to_column_vector(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mfasta_to_column_vector" is the implementation version of the
 * "fasta_to_column_vector" M-function from file
 * "./src/fasta_to_column_vector.m" (lines 1-89). It contains the actual
 * compiled code for that M-function. It is a static function and must only be
 * called from one of the interface functions, appearing below.
 */
/*
 * function [signal,display_id] = fasta_to_column_vector(fasta_input)
 */
static mxArray * Mfasta_to_column_vector(mxArray * * display_id,
                                         int nargout_,
                                         mxArray * fasta_input) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(
          &_local_function_table_fasta_to_column_vector);
    mxArray * signal = NULL;
    mxArray * status = NULL;
    mxArray * n = NULL;
    mxArray * line = NULL;
    mxArray * tmp_signal = NULL;
    mxArray * i = NULL;
    mxArray * tmp = NULL;
    mxArray * header = NULL;
    mxArray * ans = NULL;
    mxArray * error_msg = NULL;
    mxArray * input_fid = NULL;
    mxArray * cur = NULL;
    mxArray * max_seq_len = NULL;
    mclCopyArray(&fasta_input);
    /*
     * 
     * max_seq_len = 1000000;	% to initially reserve memory
     */
    mlfAssign(&max_seq_len, _mxarray0_);
    /*
     * cur = 0;		% this is just the index to the last character of the signal/sequence
     */
    mlfAssign(&cur, _mxarray1_);
    /*
     * 
     * %
     * %
     * % Open the file for reading
     * %
     * %
     * 
     * [input_fid,error_msg] = fopen(fasta_input,'r');
     */
    mlfAssign(
      &input_fid,
      mlfFopen(
        &error_msg, NULL, mclVa(fasta_input, "fasta_input"), _mxarray2_, NULL));
    /*
     * if input_fid == -1,error('Error opening %s for reading\n',fasta_input),end
     */
    if (mclEqBool(mclVv(input_fid, "input_fid"), _mxarray4_)) {
        mlfError(_mxarray5_, mclVa(fasta_input, "fasta_input"), NULL);
    }
    /*
     * 
     * %
     * %
     * % Parse in the FASTA file and encode it into a signal
     * %
     * %
     * 
     * header = fgetl(input_fid);
     */
    mlfAssign(&header, mlfFgetl(mclVv(input_fid, "input_fid")));
    /*
     * % die if this is not a character string
     * if ~ischar(header),error('Read a non-character line from %s',fasta_input),end
     */
    if (mclNotBool(mlfIschar(mclVv(header, "header")))) {
        mlfError(_mxarray7_, mclVa(fasta_input, "fasta_input"), NULL);
    }
    /*
     * if ~strncmp(header,'>',1),error('The first line of the file does not begin with >'),end
     */
    if (mclNotBool(
          mlfStrncmp(mclVv(header, "header"), _mxarray9_, _mxarray11_))) {
        mlfError(_mxarray12_, NULL);
    }
    /*
     * 
     * %
     * %
     * % Parse the display_id from the header
     * %
     * %
     * tmp = sscanf(header,'%s*');
     */
    mlfAssign(
      &tmp,
      mlfSscanf(NULL, NULL, NULL, mclVv(header, "header"), _mxarray14_, NULL));
    /*
     * for i=2:length(tmp)
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclLengthInt(mclVv(tmp, "tmp"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray16_);
        } else {
            /*
             * display_id(i-1) = tmp(i);
             * end
             */
            for (; ; ) {
                mclIntArrayAssign1(
                  display_id, mclIntArrayRef1(mclVv(tmp, "tmp"), v_), v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * clear tmp
     */
    mlfClear(&tmp, NULL);
    /*
     * 
     * % reserve the space for the sequence to speed up the loading
     * tmp_signal = zeros(max_seq_len,1);
     */
    mlfAssign(
      &tmp_signal,
      mlfZeros(mclVv(max_seq_len, "max_seq_len"), _mxarray11_, NULL));
    /*
     * 
     * while 1
     */
    for (;;) {
        /*
         * line = fgetl(input_fid);
         */
        mlfAssign(&line, mlfFgetl(mclVv(input_fid, "input_fid")));
        /*
         * % If we're at a non charecter string them we're done
         * if ~ischar(line),break,end
         */
        if (mclNotBool(mlfIschar(mclVv(line, "line")))) {
            break;
        }
        /*
         * if strncmp(line,'>',1)
         */
        if (mlfTobool(
              mlfStrncmp(mclVv(line, "line"), _mxarray9_, _mxarray11_))) {
            /*
             * fprintf(2,'Multiple sequence files are not yet supported. Processing only the first sequence\n');
             */
            mclAssignAns(&ans, mlfNFprintf(0, _mxarray17_, _mxarray18_, NULL));
            /*
             * break;
             */
            break;
        /*
         * else
         */
        } else {
            /*
             * % add this line to the signal
             * for i = 1:length(line)
             */
            int v_ = mclForIntStart(1);
            int e_ = mclLengthInt(mclVv(line, "line"));
            if (v_ > e_) {
                mlfAssign(&i, _mxarray16_);
            } else {
                /*
                 * cur = cur + 1;
                 * switch line(i)
                 * case {'A','a'}
                 * n = 1;
                 * case {'T','t'}
                 * n = -1;
                 * case {'C','c'}
                 * n = -2;
                 * case {'G','g'}
                 * n = 2;
                 * %				case {'N','n'}
                 * %					n = 0;
                 * otherwise
                 * n = 0;
                 * %					error('Error handling character (%c)\n',line(i));
                 * end
                 * tmp_signal(cur,1) = n;
                 * end
                 */
                for (; ; ) {
                    mlfAssign(&cur, mclPlus(mclVv(cur, "cur"), _mxarray11_));
                    {
                        mxArray * v_0
                          = mclInitialize(
                              mclIntArrayRef1(mclVv(line, "line"), v_));
                        if (mclSwitchCompare(v_0, _mxarray20_)) {
                            mlfAssign(&n, _mxarray11_);
                        } else if (mclSwitchCompare(v_0, _mxarray26_)) {
                            mlfAssign(&n, _mxarray4_);
                        } else if (mclSwitchCompare(v_0, _mxarray32_)) {
                            mlfAssign(&n, _mxarray38_);
                        } else if (mclSwitchCompare(v_0, _mxarray39_)) {
                            mlfAssign(&n, _mxarray17_);
                        } else {
                            mlfAssign(&n, _mxarray1_);
                        }
                        mxDestroyArray(v_0);
                    }
                    mclArrayAssign2(
                      &tmp_signal,
                      mclVv(n, "n"),
                      mclVv(cur, "cur"),
                      _mxarray11_);
                    if (v_ == e_) {
                        break;
                    }
                    ++v_;
                }
                mlfAssign(&i, mlfScalar(v_));
            }
        /*
         * end
         */
        }
        /*
         * if length(tmp_signal) > max_seq_len
         */
        if (mclGtBool(
              mlfScalar(mclLengthInt(mclVv(tmp_signal, "tmp_signal"))),
              mclVv(max_seq_len, "max_seq_len"))) {
            /*
             * fprintf(2,'\tWarning the signal has grown beyond the max_seq_len (%i)\n\tThis is non-fatal but may cause the speed to deteriorate\n',max_seq_len);
             */
            mclAssignAns(
              &ans,
              mlfNFprintf(
                0,
                _mxarray17_,
                _mxarray45_,
                mclVv(max_seq_len, "max_seq_len"),
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
     * 
     * % make the svelt signal
     * signal = zeros(cur,1);
     */
    mlfAssign(&signal, mlfZeros(mclVv(cur, "cur"), _mxarray11_, NULL));
    /*
     * for i = 1:cur
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(cur, "cur"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray16_);
        } else {
            /*
             * signal(i,1) = tmp_signal(i,1);
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(
                  &signal,
                  mclIntArrayRef2(mclVv(tmp_signal, "tmp_signal"), v_, 1),
                  v_,
                  1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * 
     * clear tmp_signal;
     */
    mlfClear(&tmp_signal, NULL);
    /*
     * 
     * %
     * %
     * % Close the file
     * %
     * %
     * [status] = fclose(input_fid);
     */
    mlfAssign(&status, mlfFclose(mclVv(input_fid, "input_fid")));
    /*
     * if status ~= 0,error('Problem closing %s,%i',fasta_input,status),end
     */
    if (mclNeBool(mclVv(status, "status"), _mxarray1_)) {
        mlfError(
          _mxarray47_,
          mclVa(fasta_input, "fasta_input"),
          mclVv(status, "status"),
          NULL);
    }
    mclValidateOutput(signal, 1, nargout_, "signal", "fasta_to_column_vector");
    mclValidateOutput(
      *display_id, 2, nargout_, "display_id", "fasta_to_column_vector");
    mxDestroyArray(max_seq_len);
    mxDestroyArray(cur);
    mxDestroyArray(input_fid);
    mxDestroyArray(error_msg);
    mxDestroyArray(ans);
    mxDestroyArray(header);
    mxDestroyArray(tmp);
    mxDestroyArray(i);
    mxDestroyArray(tmp_signal);
    mxDestroyArray(line);
    mxDestroyArray(n);
    mxDestroyArray(status);
    mxDestroyArray(fasta_input);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return signal;
}
