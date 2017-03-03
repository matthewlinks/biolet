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

#ifndef MLF_V2
#define MLF_V2 1
#endif

#include "libmatlb.h"
#include "wavelet.h"
#include "fasta_to_column_vector.h"
#include "gff_matrix_fast.h"
#include "wavelet_analysis.h"
#include "detcoef.h"
#include "wavedec.h"
#include "wcodemat.h"
#include "wden.h"
#include "wkeep.h"
#include "errargn.h"
#include "errargt.h"
#include "dwt.h"
#include "wfilters.h"
#include "thselect.h"
#include "waverec.h"
#include "wnoisest.h"
#include "wthresh.h"
#include "mextglob.h"
#include "dwtmode.h"
#include "dyaddown.h"
#include "wconv.h"
#include "wextend.h"
#include "biorfilt.h"
#include "biorwavf.h"
#include "cgauwavf.h"
#include "cmorwavf.h"
#include "coifwavf.h"
#include "dbwavf.h"
#include "deblankl.h"
#include "fbspwavf.h"
#include "gauswavf.h"
#include "orthfilt.h"
#include "rbiowavf.h"
#include "shanwavf.h"
#include "symwavf.h"
#include "wavemngr.h"
#include "appcoef.h"
#include "wmachdep.h"
#include "wtbxmngr.h"
#include "wwarndlg.h"
#include "wstr2num.h"
#include "dbaux.h"
#include "qmf.h"
#include "wrev.h"
#include "symaux.h"
#include "idwt.h"
#include "path.h"
#include "rmpath.h"
#include "wlagrang.h"
#include "upsaconv.h"
#include "dyadup.h"
#include "wshift.h"
#include "libmmfile.h"

extern _mex_information _main_info;

mxArray * DWT_Attribute = NULL;

mxArray * Def_WGlob_Struct = NULL;

mxArray * WTBX_Glob_Info = NULL;

mxArray * Wavelets_Info = NULL;

static mexGlobalTableEntry global_table[4]
  = { { "DWT_Attribute", &DWT_Attribute },
      { "Def_WGlob_Struct", &Def_WGlob_Struct },
      { "WTBX_Glob_Info", &WTBX_Glob_Info },
      { "Wavelets_Info", &Wavelets_Info } };

static mexFunctionTableEntry function_table[52]
  = { { "wavelet", mlxWavelet, 4, 1, &_local_function_table_wavelet },
      { "fasta_to_column_vector", mlxFasta_to_column_vector,
        1, 2, &_local_function_table_fasta_to_column_vector },
      { "gff_matrix_fast", mlxGff_matrix_fast, 7, 1,
        &_local_function_table_gff_matrix_fast },
      { "wavelet_analysis", mlxWavelet_analysis, 3, 1,
        &_local_function_table_wavelet_analysis },
      { "detcoef", mlxDetcoef, 4, -1, &_local_function_table_detcoef },
      { "wavedec", mlxWavedec, -3, 2, &_local_function_table_wavedec },
      { "wcodemat", mlxWcodemat, 4, 1, &_local_function_table_wcodemat },
      { "wden", mlxWden, 7, 3, &_local_function_table_wden },
      { "wkeep", mlxWkeep, -2, 1, &_local_function_table_wkeep },
      { "errargn", mlxErrargn, 5, 2, &_local_function_table_errargn },
      { "errargt", mlxErrargt, 4, 1, &_local_function_table_errargt },
      { "dwt", mlxDwt, -2, 2, &_local_function_table_dwt },
      { "wfilters", mlxWfilters, 2, -1, &_local_function_table_wfilters },
      { "thselect", mlxThselect, 2, 1, &_local_function_table_thselect },
      { "waverec", mlxWaverec, -3, 1, &_local_function_table_waverec },
      { "wnoisest", mlxWnoisest, -2, 1, &_local_function_table_wnoisest },
      { "wthresh", mlxWthresh, 3, 1, &_local_function_table_wthresh },
      { "mextglob", mlxMextglob, -2, -1, &_local_function_table_mextglob },
      { "dwtmode", mlxDwtmode, -2, -1, &_local_function_table_dwtmode },
      { "dyaddown", mlxDyaddown, -2, 1, &_local_function_table_dyaddown },
      { "wconv", mlxWconv, 3, 1, &_local_function_table_wconv },
      { "wextend", mlxWextend, 5, 1, &_local_function_table_wextend },
      { "biorfilt", mlxBiorfilt, 3, -1, &_local_function_table_biorfilt },
      { "biorwavf", mlxBiorwavf, 1, 2, &_local_function_table_biorwavf },
      { "cgauwavf", mlxCgauwavf, -1, 2, &_local_function_table_cgauwavf },
      { "cmorwavf", mlxCmorwavf, -1, 2, &_local_function_table_cmorwavf },
      { "coifwavf", mlxCoifwavf, 1, 1, &_local_function_table_coifwavf },
      { "dbwavf", mlxDbwavf, 1, 1, &_local_function_table_dbwavf },
      { "deblankl", mlxDeblankl, 1, 1, &_local_function_table_deblankl },
      { "fbspwavf", mlxFbspwavf, -1, 2, &_local_function_table_fbspwavf },
      { "gauswavf", mlxGauswavf, -1, 2, &_local_function_table_gauswavf },
      { "orthfilt", mlxOrthfilt, 2, 4, &_local_function_table_orthfilt },
      { "rbiowavf", mlxRbiowavf, 1, 2, &_local_function_table_rbiowavf },
      { "shanwavf", mlxShanwavf, -1, 2, &_local_function_table_shanwavf },
      { "symwavf", mlxSymwavf, 1, 1, &_local_function_table_symwavf },
      { "wavemngr", mlxWavemngr, -2, -1, &_local_function_table_wavemngr },
      { "appcoef", mlxAppcoef, -3, 1, &_local_function_table_appcoef },
      { "wmachdep", mlxWmachdep, -2, -1, &_local_function_table_wmachdep },
      { "wtbxmngr", mlxWtbxmngr, -2, -1, &_local_function_table_wtbxmngr },
      { "wwarndlg", mlxWwarndlg, 3, -1, &_local_function_table_wwarndlg },
      { "wstr2num", mlxWstr2num, 1, 1, &_local_function_table_wstr2num },
      { "dbaux", mlxDbaux, 2, 1, &_local_function_table_dbaux },
      { "qmf", mlxQmf, 2, 1, &_local_function_table_qmf },
      { "wrev", mlxWrev, 1, 1, &_local_function_table_wrev },
      { "symaux", mlxSymaux, 2, 1, &_local_function_table_symaux },
      { "idwt", mlxIdwt, -3, 1, &_local_function_table_idwt },
      { "path", mlxPath, 2, 1, &_local_function_table_path },
      { "rmpath", mlxRmpath, -1, 0, &_local_function_table_rmpath },
      { "wlagrang", mlxWlagrang, 1, 2, &_local_function_table_wlagrang },
      { "upsaconv", mlxUpsaconv, 6, 1, &_local_function_table_upsaconv },
      { "dyadup", mlxDyadup, -2, 1, &_local_function_table_dyadup },
      { "wshift", mlxWshift, 3, 1, &_local_function_table_wshift } };

static _mexInitTermTableEntry init_term_table[53]
  = { { libmmfileInitialize, libmmfileTerminate },
      { InitializeModule_wavelet, TerminateModule_wavelet },
      { InitializeModule_fasta_to_column_vector,
        TerminateModule_fasta_to_column_vector },
      { InitializeModule_gff_matrix_fast, TerminateModule_gff_matrix_fast },
      { InitializeModule_wavelet_analysis, TerminateModule_wavelet_analysis },
      { InitializeModule_detcoef, TerminateModule_detcoef },
      { InitializeModule_wavedec, TerminateModule_wavedec },
      { InitializeModule_wcodemat, TerminateModule_wcodemat },
      { InitializeModule_wden, TerminateModule_wden },
      { InitializeModule_wkeep, TerminateModule_wkeep },
      { InitializeModule_errargn, TerminateModule_errargn },
      { InitializeModule_errargt, TerminateModule_errargt },
      { InitializeModule_dwt, TerminateModule_dwt },
      { InitializeModule_wfilters, TerminateModule_wfilters },
      { InitializeModule_thselect, TerminateModule_thselect },
      { InitializeModule_waverec, TerminateModule_waverec },
      { InitializeModule_wnoisest, TerminateModule_wnoisest },
      { InitializeModule_wthresh, TerminateModule_wthresh },
      { InitializeModule_mextglob, TerminateModule_mextglob },
      { InitializeModule_dwtmode, TerminateModule_dwtmode },
      { InitializeModule_dyaddown, TerminateModule_dyaddown },
      { InitializeModule_wconv, TerminateModule_wconv },
      { InitializeModule_wextend, TerminateModule_wextend },
      { InitializeModule_biorfilt, TerminateModule_biorfilt },
      { InitializeModule_biorwavf, TerminateModule_biorwavf },
      { InitializeModule_cgauwavf, TerminateModule_cgauwavf },
      { InitializeModule_cmorwavf, TerminateModule_cmorwavf },
      { InitializeModule_coifwavf, TerminateModule_coifwavf },
      { InitializeModule_dbwavf, TerminateModule_dbwavf },
      { InitializeModule_deblankl, TerminateModule_deblankl },
      { InitializeModule_fbspwavf, TerminateModule_fbspwavf },
      { InitializeModule_gauswavf, TerminateModule_gauswavf },
      { InitializeModule_orthfilt, TerminateModule_orthfilt },
      { InitializeModule_rbiowavf, TerminateModule_rbiowavf },
      { InitializeModule_shanwavf, TerminateModule_shanwavf },
      { InitializeModule_symwavf, TerminateModule_symwavf },
      { InitializeModule_wavemngr, TerminateModule_wavemngr },
      { InitializeModule_appcoef, TerminateModule_appcoef },
      { InitializeModule_wmachdep, TerminateModule_wmachdep },
      { InitializeModule_wtbxmngr, TerminateModule_wtbxmngr },
      { InitializeModule_wwarndlg, TerminateModule_wwarndlg },
      { InitializeModule_wstr2num, TerminateModule_wstr2num },
      { InitializeModule_dbaux, TerminateModule_dbaux },
      { InitializeModule_qmf, TerminateModule_qmf },
      { InitializeModule_wrev, TerminateModule_wrev },
      { InitializeModule_symaux, TerminateModule_symaux },
      { InitializeModule_idwt, TerminateModule_idwt },
      { InitializeModule_path, TerminateModule_path },
      { InitializeModule_rmpath, TerminateModule_rmpath },
      { InitializeModule_wlagrang, TerminateModule_wlagrang },
      { InitializeModule_upsaconv, TerminateModule_upsaconv },
      { InitializeModule_dyadup, TerminateModule_dyadup },
      { InitializeModule_wshift, TerminateModule_wshift } };

_mex_information _main_info
  = { 1, 52, function_table, 4, global_table, 0, NULL, 53, init_term_table };

/*
 * The function "main" is a Compiler-generated main wrapper, suitable for
 * building a stand-alone application.  It calls a library function to perform
 * initialization, call the main function, and perform library termination.
 */
int main(int argc, const char * * argv) {
    return mclMain(argc, argv, mlxWavelet, 1, &_main_info);
}
