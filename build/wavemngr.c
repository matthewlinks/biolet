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
#include "wavemngr.h"
#include "deblankl.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wfilters.h"
#include "wstr2num.h"

extern mxArray * Wavelets_Info;

static mxChar _array1_[12] = { 'w', 'a', 'v', 'e', 'l', 'e',
                               't', 's', '.', 'b', 'i', 'n' };
static mxArray * _mxarray0_;

static mxChar _array3_[12] = { 'w', 'a', 'v', 'e', 'l', 'e',
                               't', 's', '.', 'i', 'n', 'i' };
static mxArray * _mxarray2_;

static mxChar _array5_[12] = { 'w', 'a', 'v', 'e', 'l', 'e',
                               't', 's', '.', 'i', 'n', 'f' };
static mxArray * _mxarray4_;

static mxChar _array7_[12] = { 'w', 'a', 'v', 'e', 'l', 'e',
                               't', 's', '.', 'a', 's', 'c' };
static mxArray * _mxarray6_;

static mxChar _array9_[12] = { 'w', 'a', 'v', 'e', 'l', 'e',
                               't', 's', '.', 'p', 'r', 'v' };
static mxArray * _mxarray8_;

static mxChar _array11_[6] = { 'c', 'r', 'e', 'a', 't', 'e' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;

static double _array15_[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
static mxArray * _mxarray14_;

static mxChar _array17_[4] = { 'l', 'o', 'a', 'd' };
static mxArray * _mxarray16_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;

static mxChar _array21_[1] = { ' ' };
static mxArray * _mxarray20_;

static mxChar _array23_[45] = { '-', '-', '-', '-', '-', '-', '-', '-', '-',
                                '-', '-', '-', '-', '-', '-', '-', '-', '-',
                                '-', '-', '-', '-', '-', '-', '-', '-', '-',
                                '-', '-', '-', '-', '-', '-', '-', '-', '-',
                                '-', '-', '-', '-', '-', '-', '-', '-', '-' };
static mxArray * _mxarray22_;

static mxChar _array25_[29] = { '*', '*', '*', ' ', 'F', 'i', 'l', 'e',
                                ' ', ':', ' ', '%', 's', ' ', 'n', 'o',
                                't', ' ', 'f', 'o', 'u', 'n', 'd', ' ',
                                '!', ' ', '*', '*', '*' };
static mxArray * _mxarray24_;

static mxChar _array27_[43] = { '*', '*', '*', ' ', ' ', ' ', ' ', ' ', 'U',
                                's', 'i', 'n', 'g', ' ', 'r', 'e', 's', 'c',
                                'u', 'e', ' ', 'r', 'e', 's', 'o', 'u', 'r',
                                'c', 'e', ' ', '.', '.', '.', ' ', '!', ' ',
                                ' ', ' ', ' ', ' ', '*', '*', '*' };
static mxArray * _mxarray26_;

static mxChar _array29_[6] = { 'r', 'e', 's', 'c', 'u', 'e' };
static mxArray * _mxarray28_;

static mxChar _array31_[5] = { 'c', 'l', 'e', 'a', 'r' };
static mxArray * _mxarray30_;

static mxChar _array33_[4] = { 'i', 'n', 'd', 'w' };
static mxArray * _mxarray32_;
static mxArray * _mxarray34_;

static mxChar _array36_[2] = { 'n', 'o' };
static mxArray * _mxarray35_;
static mxArray * _mxarray37_;

static mxChar _array39_[2] = { '*', '*' };
static mxArray * _mxarray38_;

static mxChar _array41_[7] = { 'i', 'n', 't', 'e', 'g', 'e', 'r' };
static mxArray * _mxarray40_;

static mxChar _array43_[4] = { 'r', 'e', 'a', 'l' };
static mxArray * _mxarray42_;

static mxChar _array45_[6] = { 's', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray44_;

static mxChar _array47_[25] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'w',
                                'a', 'v', 'e', 'l', 'e', 't', ' ', 'n', 'a',
                                'm', 'e', ' ', ':', ' ', '%', 's' };
static mxArray * _mxarray46_;

static mxChar _array49_[12] = { 'W', 'a', 'v', 'e', 'l', 'e',
                                't', ' ', 't', 'e', 's', 't' };
static mxArray * _mxarray48_;

static mxChar _array51_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray50_;

static mxChar _array53_[5] = { '*', '*', '*', ' ', ' ' };
static mxArray * _mxarray52_;

static mxChar _array55_[5] = { ' ', ' ', '*', '*', '*' };
static mxArray * _mxarray54_;

static mxChar _array57_[4] = { 'i', 'n', 'd', 'f' };
static mxArray * _mxarray56_;

static mxChar _array59_[4] = { 't', 'f', 's', 'n' };
static mxArray * _mxarray58_;

static mxChar _array61_[3] = { 'a', 'l', 'l' };
static mxArray * _mxarray60_;

static mxChar _array64_[3] = { 'd', 'w', 't' };
static mxArray * _mxarray63_;
static mxArray * _mxarray62_;
static mxArray * _mxarray65_;

static mxChar _array68_[3] = { 'c', 'w', 't' };
static mxArray * _mxarray67_;
static mxArray * _mxarray66_;
static mxArray * _mxarray69_;

static mxChar _array72_[3] = { 'o', 'w', 't' };
static mxArray * _mxarray71_;
static mxArray * _mxarray70_;

static mxChar _array75_[4] = { 'c', 'c', 'w', 't' };
static mxArray * _mxarray74_;
static mxArray * _mxarray73_;

static mxChar _array78_[3] = { '6', '6', '6' };
static mxArray * _mxarray77_;
static mxArray * _mxarray76_;

static mxChar _array80_[3] = { 't', 'f', 'n' };
static mxArray * _mxarray79_;

static mxChar _array82_[6] = { 'f', 'i', 'e', 'l', 'd', 's' };
static mxArray * _mxarray81_;

static mxChar _array84_[2] = { 'w', 'n' };
static mxArray * _mxarray83_;

static mxChar _array86_[3] = { 'i', 'n', 'd' };
static mxArray * _mxarray85_;

static mxChar _array88_[3] = { 'f', 's', 'n' };
static mxArray * _mxarray87_;

static mxChar _array90_[5] = { 'i', 'n', 'd', 'e', 'x' };
static mxArray * _mxarray89_;

static mxChar _array92_[2] = { 'f', 'n' };
static mxArray * _mxarray91_;

static mxChar _array94_[10] = { 'f', 'a', 'm', 'i', 'l',
                                'y', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray93_;

static mxChar _array96_[15] = { 'f', 'a', 'm', 'i', 'l', 'y', 'S', 'h',
                                'o', 'r', 't', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray95_;

static mxChar _array98_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray97_;

static mxChar _array100_[7] = { 't', 'a', 'b', 'N', 'u', 'm', 's' };
static mxArray * _mxarray99_;

static mxChar _array102_[7] = { 't', 'y', 'p', 'N', 'u', 'm', 's' };
static mxArray * _mxarray101_;

static mxChar _array104_[4] = { 'f', 'i', 'l', 'e' };
static mxArray * _mxarray103_;

static mxChar _array106_[6] = { 'b', 'o', 'u', 'n', 'd', 's' };
static mxArray * _mxarray105_;

static mxChar _array110_[7] = { 't', 'a', 'b', 'n', 'u', 'm', 's' };
static mxArray * _mxarray109_;

static mxArray * _array108_[2] = { NULL /*_mxarray109_*/,
                                   NULL /*_mxarray99_*/ };
static mxArray * _mxarray107_;
static mxArray * _mxarray111_;

static mxChar _array113_[6] = { 'i', 's', 'b', 'i', 'o', 'r' };
static mxArray * _mxarray112_;
static mxArray * _mxarray114_;

static mxChar _array116_[4] = { 'b', 'i', 'o', 'r' };
static mxArray * _mxarray115_;

static mxChar _array118_[4] = { 'r', 'b', 'i', 'o' };
static mxArray * _mxarray117_;

static mxChar _array120_[7] = { 'f', 'a', 'm', '_', 'n', 'u', 'm' };
static mxArray * _mxarray119_;

static mxChar _array122_[6] = { 'l', 'e', 'n', 'g', 't', 'h' };
static mxArray * _mxarray121_;

static mxArray * _array124_[2] = { NULL /*_mxarray19_*/, NULL /*_mxarray65_*/ };
static mxArray * _mxarray123_;
static mxArray * _mxarray127_;

static mxArray * _array126_[2] = { NULL /*_mxarray127_*/,
                                   NULL /*_mxarray114_*/ };
static mxArray * _mxarray125_;

static mxChar _array129_[16] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't' };
static mxArray * _mxarray128_;

static mxChar _array131_[1] = { '*' };
static mxArray * _mxarray130_;

static mxChar _array133_[14] = { 'F', 'a', 'm', 'i', 'l', 'y', ' ',
                                 'N', 'a', 'm', 'e', ' ', ':', ' ' };
static mxArray * _mxarray132_;
static mxArray * _mxarray134_;

static mxChar _array136_[1] = { 'w' };
static mxArray * _mxarray135_;

static mxChar _array138_[5] = { 's', 'a', 'v', 'e', ' ' };
static mxArray * _mxarray137_;

static mxChar _array140_[14] = { ' ', 'W', 'a', 'v', 'e', 'l', 'e',
                                 't', 's', '_', 'I', 'n', 'f', 'o' };
static mxArray * _mxarray139_;

static mxChar _array142_[8] = { 'e', 'r', 'r', ' ', '=', ' ', '1', ';' };
static mxArray * _mxarray141_;

static mxChar _array144_[33] = { 'C', 'h', 'a', 'n', 'g', 'i', 'n', 'g', ' ',
                                 'W', 'a', 'v', 'e', 'l', 'e', 't', 's', ' ',
                                 ':', ' ', 'S', 'a', 'v', 'e', ' ', 'F', 'A',
                                 'I', 'L', 'E', 'D', ' ', '!' };
static mxArray * _mxarray143_;

static mxChar _array146_[4] = { 'r', 'e', 'a', 'd' };
static mxArray * _mxarray145_;

static mxChar _array148_[1] = { '=' };
static mxArray * _mxarray147_;
static mxArray * _mxarray149_;

static mxChar _array151_[1] = { '-' };
static mxArray * _mxarray150_;
static mxArray * _mxarray152_;
static mxArray * _mxarray153_;

static mxChar _array155_[8] = { 'r', 'e', 'a', 'd', '_', 'a', 's', 'c' };
static mxArray * _mxarray154_;

static mxChar _array157_[11] = { 'r', 'e', 'a', 'd', '_', 's',
                                 't', 'r', 'u', 'c', 't' };
static mxArray * _mxarray156_;

static mxChar _array159_[3] = { 'a', 'd', 'd' };
static mxArray * _mxarray158_;

static mxChar _array161_[30] = { 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                 'F', 'a', 'm', 'i', 'l', 'y', ' ', 'N',
                                 'a', 'm', 'e', ' ', 'i', 's', ' ', 'e',
                                 'm', 'p', 't', 'y', ' ', '!' };
static mxArray * _mxarray160_;

static mxChar _array163_[41] = { 'T', 'h', 'e', ' ', 'W', 'a', 'v', 'e', 'l',
                                 'e', 't', ' ', 'F', 'a', 'm', 'i', 'l', 'y',
                                 ' ', 'N', 'a', 'm', 'e', ' ', 'i', 's', ' ',
                                 'a', 'l', 'r', 'e', 'a', 'd', 'y', ' ', 'u',
                                 's', 'e', 'd', ' ', '!' };
static mxArray * _mxarray162_;

static mxChar _array165_[36] = { 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ', 'F',
                                 'a', 'm', 'i', 'l', 'y', ' ', 'S', 'h', 'o',
                                 'r', 't', ' ', 'N', 'a', 'm', 'e', ' ', 'i',
                                 's', ' ', 'e', 'm', 'p', 't', 'y', ' ', '!' };
static mxArray * _mxarray164_;

static mxChar _array167_[47] = { 'T', 'h', 'e', ' ', 'W', 'a', 'v', 'e',
                                 'l', 'e', 't', ' ', 'F', 'a', 'm', 'i',
                                 'l', 'y', ' ', 'S', 'h', 'o', 'r', 't',
                                 ' ', 'N', 'a', 'm', 'e', ' ', 'i', 's',
                                 ' ', 'a', 'l', 'r', 'e', 'a', 'd', 'y',
                                 ' ', 'u', 's', 'e', 'd', ' ', '!' };
static mxArray * _mxarray166_;

static mxChar _array169_[22] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                 'T', 'y', 'p', 'e', ' ', '!' };
static mxArray * _mxarray168_;

static mxArray * _array171_[3] = { NULL /*_mxarray40_*/, NULL /*_mxarray42_*/,
                                   NULL /*_mxarray44_*/ };
static mxArray * _mxarray170_;

static mxChar _array173_[33] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'W',
                                 'a', 'v', 'e', 'l', 'e', 't', ' ', 't', 'y',
                                 'p', 'e', ' ', 'o', 'f', ' ', 'n', 'u', 'm',
                                 'b', 'e', 'r', 's', ' ', '!' };
static mxArray * _mxarray172_;

static mxChar _array175_[25] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'W',
                                 'a', 'v', 'e', 'l', 'e', 't', ' ', 'n', 'u',
                                 'm', 'b', 'e', 'r', 's', ' ', '!' };
static mxArray * _mxarray174_;

static mxChar _array177_[4] = { '.', 'm', 'a', 't' };
static mxArray * _mxarray176_;

static mxChar _array179_[2] = { '.', 'm' };
static mxArray * _mxarray178_;

static mxChar _array181_[27] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'W',
                                 'a', 'v', 'e', 'l', 'e', 't', ' ', 'F', 'i',
                                 'l', 'e', ' ', 'N', 'a', 'm', 'e', ' ', '!' };
static mxArray * _mxarray180_;
static mxArray * _mxarray182_;

static mxChar _array184_[29] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o',
                                 'f', ' ', 'a', 'r', 'g', 'u', 'm', 'e',
                                 'n', 't', 's', ' ', '!' };
static mxArray * _mxarray183_;

static mxChar _array186_[34] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'v',
                                 'a', 'l', 'u', 'e', ' ', 'f', 'o', 'r', ' ',
                                 'w', 'a', 'v', 'e', 'l', 'e', 't', ' ', 'b',
                                 'o', 'u', 'n', 'd', 's', ' ', '!' };
static mxArray * _mxarray185_;

static mxChar _array188_[25] = { 'A', 'd', 'd', ' ', 'N', 'e', 'w', ' ', 'W',
                                 'a', 'v', 'e', 'l', 'e', 't', ' ', 'F', 'A',
                                 'I', 'L', 'E', 'D', ' ', '!', '!' };
static mxArray * _mxarray187_;

static mxChar _array190_[4] = { 'c', 'h', 'a', 'r' };
static mxArray * _mxarray189_;

static mxChar _array192_[24] = { '-', '-', '-', '-', '-', '-', '-', '-',
                                 '-', '-', '-', '-', '-', '-', '-', '-',
                                 '-', '-', '-', '-', '-', '-', '-', '-' };
static mxArray * _mxarray191_;

static mxChar _array194_[4] = { '%', '.', '0', 'f' };
static mxArray * _mxarray193_;

static mxChar _array196_[3] = { 'd', 'e', 'l' };
static mxArray * _mxarray195_;

static mxChar _array198_[38] = { 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                 'F', 'a', 'm', 'i', 'l', 'y', ' ', '(',
                                 'S', 'h', 'o', 'r', 't', ')', ' ', 'N',
                                 'a', 'm', 'e', ' ', 'i', 's', ' ', 'e',
                                 'm', 'p', 't', 'y', ' ', '!' };
static mxArray * _mxarray197_;

static mxChar _array200_[37] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                 'W', 'a', 'v', 'e', 'l', 'e', 't', ' ',
                                 'F', 'a', 'm', 'i', 'l', 'y', ' ', '(',
                                 'S', 'h', 'o', 'r', 't', ')', ' ', 'N',
                                 'a', 'm', 'e', ' ', '!' };
static mxArray * _mxarray199_;

static mxChar _array202_[36] = { 'Y', 'o', 'u', ' ', 'c', 'a', 'n', 0x0027, 't',
                                 ' ', 'd', 'e', 'l', 'e', 't', 'e', ' ', '%',
                                 's', ' ', 'W', 'a', 'v', 'e', 'l', 'e', 't',
                                 ' ', 'F', 'a', 'm', 'i', 'l', 'y', ' ', '!' };
static mxArray * _mxarray201_;

static mxChar _array204_[7] = { 'r', 'e', 's', 't', 'o', 'r', 'e' };
static mxArray * _mxarray203_;
static mxArray * _mxarray207_;
static mxArray * _mxarray208_;

static mxChar _array210_[4] = { 'H', 'a', 'a', 'r' };
static mxArray * _mxarray209_;

static mxChar _array212_[10] = { 'D', 'a', 'u', 'b', 'e',
                                 'c', 'h', 'i', 'e', 's' };
static mxArray * _mxarray211_;

static mxChar _array214_[7] = { 'S', 'y', 'm', 'l', 'e', 't', 's' };
static mxArray * _mxarray213_;

static mxChar _array216_[8] = { 'C', 'o', 'i', 'f', 'l', 'e', 't', 's' };
static mxArray * _mxarray215_;

static mxChar _array218_[11] = { 'B', 'i', 'o', 'r', 'S', 'p',
                                 'l', 'i', 'n', 'e', 's' };
static mxArray * _mxarray217_;

static mxChar _array220_[11] = { 'R', 'e', 'v', 'e', 'r', 's',
                                 'e', 'B', 'i', 'o', 'r' };
static mxArray * _mxarray219_;

static mxChar _array222_[5] = { 'M', 'e', 'y', 'e', 'r' };
static mxArray * _mxarray221_;

static mxChar _array224_[6] = { 'D', 'M', 'e', 'y', 'e', 'r' };
static mxArray * _mxarray223_;

static mxChar _array226_[8] = { 'G', 'a', 'u', 's', 's', 'i', 'a', 'n' };
static mxArray * _mxarray225_;

static mxChar _array228_[11] = { 'M', 'e', 'x', 'i', 'c', 'a',
                                 'n', '_', 'h', 'a', 't' };
static mxArray * _mxarray227_;

static mxChar _array230_[6] = { 'M', 'o', 'r', 'l', 'e', 't' };
static mxArray * _mxarray229_;

static mxChar _array232_[16] = { 'C', 'o', 'm', 'p', 'l', 'e', 'x', ' ',
                                 'G', 'a', 'u', 's', 's', 'i', 'a', 'n' };
static mxArray * _mxarray231_;

static mxChar _array234_[7] = { 'S', 'h', 'a', 'n', 'n', 'o', 'n' };
static mxArray * _mxarray233_;

static mxChar _array236_[18] = { 'F', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y',
                                 ' ', 'B', '-', 'S', 'p', 'l', 'i', 'n', 'e' };
static mxArray * _mxarray235_;

static mxChar _array238_[14] = { 'C', 'o', 'm', 'p', 'l', 'e', 'x',
                                 ' ', 'M', 'o', 'r', 'l', 'e', 't' };
static mxArray * _mxarray237_;

static mxChar _array240_[4] = { 'h', 'a', 'a', 'r' };
static mxArray * _mxarray239_;

static mxChar _array242_[2] = { 'd', 'b' };
static mxArray * _mxarray241_;

static mxChar _array244_[3] = { 's', 'y', 'm' };
static mxArray * _mxarray243_;

static mxChar _array246_[4] = { 'c', 'o', 'i', 'f' };
static mxArray * _mxarray245_;

static mxChar _array248_[4] = { 'm', 'e', 'y', 'r' };
static mxArray * _mxarray247_;

static mxChar _array250_[4] = { 'd', 'm', 'e', 'y' };
static mxArray * _mxarray249_;

static mxChar _array252_[4] = { 'g', 'a', 'u', 's' };
static mxArray * _mxarray251_;

static mxChar _array254_[4] = { 'm', 'e', 'x', 'h' };
static mxArray * _mxarray253_;

static mxChar _array256_[4] = { 'm', 'o', 'r', 'l' };
static mxArray * _mxarray255_;

static mxChar _array258_[4] = { 'c', 'g', 'a', 'u' };
static mxArray * _mxarray257_;

static mxChar _array260_[4] = { 's', 'h', 'a', 'n' };
static mxArray * _mxarray259_;

static mxChar _array262_[4] = { 'f', 'b', 's', 'p' };
static mxArray * _mxarray261_;

static mxChar _array264_[4] = { 'c', 'm', 'o', 'r' };
static mxArray * _mxarray263_;

static mxArray * _array206_[60] = { NULL /*_mxarray19_*/, NULL /*_mxarray65_*/,
                                    NULL /*_mxarray127_*/,
                                    NULL /*_mxarray114_*/, NULL /*_mxarray69_*/,
                                    NULL /*_mxarray182_*/, NULL /*_mxarray12_*/,
                                    NULL /*_mxarray207_*/,
                                    NULL /*_mxarray153_*/,
                                    NULL /*_mxarray208_*/, NULL /*_mxarray13_*/,
                                    NULL /*_mxarray208_*/, NULL /*_mxarray13_*/,
                                    NULL /*_mxarray208_*/, NULL /*_mxarray13_*/,
                                    NULL /*_mxarray209_*/,
                                    NULL /*_mxarray211_*/,
                                    NULL /*_mxarray213_*/,
                                    NULL /*_mxarray215_*/,
                                    NULL /*_mxarray217_*/,
                                    NULL /*_mxarray219_*/,
                                    NULL /*_mxarray221_*/,
                                    NULL /*_mxarray223_*/,
                                    NULL /*_mxarray225_*/,
                                    NULL /*_mxarray227_*/,
                                    NULL /*_mxarray229_*/,
                                    NULL /*_mxarray231_*/,
                                    NULL /*_mxarray233_*/,
                                    NULL /*_mxarray235_*/,
                                    NULL /*_mxarray237_*/,
                                    NULL /*_mxarray239_*/,
                                    NULL /*_mxarray241_*/,
                                    NULL /*_mxarray243_*/,
                                    NULL /*_mxarray245_*/,
                                    NULL /*_mxarray115_*/,
                                    NULL /*_mxarray117_*/,
                                    NULL /*_mxarray247_*/,
                                    NULL /*_mxarray249_*/,
                                    NULL /*_mxarray251_*/,
                                    NULL /*_mxarray253_*/,
                                    NULL /*_mxarray255_*/,
                                    NULL /*_mxarray257_*/,
                                    NULL /*_mxarray259_*/,
                                    NULL /*_mxarray261_*/,
                                    NULL /*_mxarray263_*/, NULL /*_mxarray19_*/,
                                    NULL /*_mxarray19_*/, NULL /*_mxarray19_*/,
                                    NULL /*_mxarray19_*/, NULL /*_mxarray65_*/,
                                    NULL /*_mxarray65_*/, NULL /*_mxarray127_*/,
                                    NULL /*_mxarray19_*/, NULL /*_mxarray114_*/,
                                    NULL /*_mxarray114_*/,
                                    NULL /*_mxarray114_*/, NULL /*_mxarray69_*/,
                                    NULL /*_mxarray69_*/, NULL /*_mxarray69_*/,
                                    NULL /*_mxarray69_*/ };
static mxArray * _mxarray205_;

static mxChar _array268_[23] = { '1', ' ', '2', ' ', '3', ' ', '4', ' ',
                                 '5', ' ', '6', ' ', '7', ' ', '8', ' ',
                                 '9', ' ', '1', '0', ' ', '*', '*' };
static mxArray * _mxarray267_;

static mxChar _array270_[16] = { '2', ' ', '3', ' ', '4', ' ', '5', ' ',
                                 '6', ' ', '7', ' ', '8', ' ', '*', '*' };
static mxArray * _mxarray269_;

static mxChar _array272_[9] = { '1', ' ', '2', ' ', '3', ' ', '4', ' ', '5' };
static mxArray * _mxarray271_;

static mxChar _array274_[59] = { '1', '.', '1', ' ', '1', '.', '3', ' ', '1',
                                 '.', '5', ' ', '2', '.', '2', ' ', '2', '.',
                                 '4', ' ', '2', '.', '6', ' ', '2', '.', '8',
                                 ' ', '3', '.', '1', ' ', '3', '.', '3', ' ',
                                 '3', '.', '5', ' ', '3', '.', '7', ' ', '3',
                                 '.', '9', ' ', '4', '.', '4', ' ', '5', '.',
                                 '5', ' ', '6', '.', '8' };
static mxArray * _mxarray273_;

static mxChar _array276_[18] = { '1', ' ', '2', ' ', '3', ' ', '4', ' ', '5',
                                 ' ', '6', ' ', '7', ' ', '8', ' ', '*', '*' };
static mxArray * _mxarray275_;

static mxChar _array278_[12] = { '1', ' ', '2', ' ', '3', ' ',
                                 '4', ' ', '5', ' ', '*', '*' };
static mxArray * _mxarray277_;

static mxChar _array280_[28] = { '1', '-', '1', '.', '5', ' ', '1',
                                 '-', '1', ' ', '1', '-', '0', '.',
                                 '5', ' ', '1', '-', '0', '.', '1',
                                 ' ', '2', '-', '3', ' ', '*', '*' };
static mxArray * _mxarray279_;

static mxChar _array282_[46] = { '1', '-', '1', '-', '1', '.', '5', ' ',
                                 '1', '-', '1', '-', '1', ' ', '1', '-',
                                 '1', '-', '0', '.', '5', ' ', '2', '-',
                                 '1', '-', '1', ' ', '2', '-', '1', '-',
                                 '0', '.', '5', ' ', '2', '-', '1', '-',
                                 '0', '.', '1', ' ', '*', '*' };
static mxArray * _mxarray281_;

static mxChar _array284_[34] = { '1', '-', '1', '.', '5', ' ', '1', '-', '1',
                                 ' ', '1', '-', '0', '.', '5', ' ', '1', '-',
                                 '1', ' ', '1', '-', '0', '.', '5', ' ', '1',
                                 '-', '0', '.', '1', ' ', '*', '*' };
static mxArray * _mxarray283_;

static mxArray * _array266_[15] = { NULL /*_mxarray37_*/, NULL /*_mxarray267_*/,
                                    NULL /*_mxarray269_*/,
                                    NULL /*_mxarray271_*/,
                                    NULL /*_mxarray273_*/,
                                    NULL /*_mxarray273_*/, NULL /*_mxarray37_*/,
                                    NULL /*_mxarray37_*/, NULL /*_mxarray275_*/,
                                    NULL /*_mxarray37_*/, NULL /*_mxarray37_*/,
                                    NULL /*_mxarray277_*/,
                                    NULL /*_mxarray279_*/,
                                    NULL /*_mxarray281_*/,
                                    NULL /*_mxarray283_*/ };
static mxArray * _mxarray265_;

static mxArray * _array286_[15] = { NULL /*_mxarray35_*/, NULL /*_mxarray40_*/,
                                    NULL /*_mxarray40_*/, NULL /*_mxarray40_*/,
                                    NULL /*_mxarray42_*/, NULL /*_mxarray42_*/,
                                    NULL /*_mxarray35_*/, NULL /*_mxarray35_*/,
                                    NULL /*_mxarray40_*/, NULL /*_mxarray35_*/,
                                    NULL /*_mxarray35_*/, NULL /*_mxarray40_*/,
                                    NULL /*_mxarray44_*/, NULL /*_mxarray44_*/,
                                    NULL /*_mxarray44_*/ };
static mxArray * _mxarray285_;

static mxChar _array290_[6] = { 'd', 'b', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray289_;

static mxChar _array292_[7] = { 's', 'y', 'm', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray291_;

static mxChar _array294_[8] = { 'c', 'o', 'i', 'f', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray293_;

static mxChar _array296_[8] = { 'b', 'i', 'o', 'r', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray295_;

static mxChar _array298_[8] = { 'r', 'b', 'i', 'o', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray297_;

static mxChar _array300_[5] = { 'm', 'e', 'y', 'e', 'r' };
static mxArray * _mxarray299_;

static mxChar _array302_[8] = { 'd', 'm', 'e', 'y', '.', 'm', 'a', 't' };
static mxArray * _mxarray301_;

static mxChar _array304_[8] = { 'g', 'a', 'u', 's', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray303_;

static mxChar _array306_[7] = { 'm', 'e', 'x', 'i', 'h', 'a', 't' };
static mxArray * _mxarray305_;

static mxChar _array308_[6] = { 'm', 'o', 'r', 'l', 'e', 't' };
static mxArray * _mxarray307_;

static mxChar _array310_[8] = { 'c', 'g', 'a', 'u', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray309_;

static mxChar _array312_[8] = { 's', 'h', 'a', 'n', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray311_;

static mxChar _array314_[8] = { 'f', 'b', 's', 'p', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray313_;

static mxChar _array316_[8] = { 'c', 'm', 'o', 'r', 'w', 'a', 'v', 'f' };
static mxArray * _mxarray315_;

static mxArray * _array288_[15] = { NULL /*_mxarray289_*/,
                                    NULL /*_mxarray289_*/,
                                    NULL /*_mxarray291_*/,
                                    NULL /*_mxarray293_*/,
                                    NULL /*_mxarray295_*/,
                                    NULL /*_mxarray297_*/,
                                    NULL /*_mxarray299_*/,
                                    NULL /*_mxarray301_*/,
                                    NULL /*_mxarray303_*/,
                                    NULL /*_mxarray305_*/,
                                    NULL /*_mxarray307_*/,
                                    NULL /*_mxarray309_*/,
                                    NULL /*_mxarray311_*/,
                                    NULL /*_mxarray313_*/,
                                    NULL /*_mxarray315_*/ };
static mxArray * _mxarray287_;

static double _array320_[2] = { -8.0, 8.0 };
static mxArray * _mxarray319_;

static double _array322_[2] = { -5.0, 5.0 };
static mxArray * _mxarray321_;

static double _array324_[2] = { -20.0, 20.0 };
static mxArray * _mxarray323_;

static mxArray * _array318_[15] = { NULL /*_mxarray34_*/, NULL /*_mxarray34_*/,
                                    NULL /*_mxarray34_*/, NULL /*_mxarray34_*/,
                                    NULL /*_mxarray34_*/, NULL /*_mxarray34_*/,
                                    NULL /*_mxarray319_*/, NULL /*_mxarray34_*/,
                                    NULL /*_mxarray321_*/,
                                    NULL /*_mxarray319_*/,
                                    NULL /*_mxarray319_*/,
                                    NULL /*_mxarray321_*/,
                                    NULL /*_mxarray323_*/,
                                    NULL /*_mxarray323_*/,
                                    NULL /*_mxarray319_*/ };
static mxArray * _mxarray317_;

static mxChar _array326_[14] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n',
                                 ' ', 'O', 'p', 't', 'i', 'o', 'n' };
static mxArray * _mxarray325_;
static mxArray * _mxarray327_;

static double _array329_[2] = { 13.0, 10.0 };
static mxArray * _mxarray328_;

void InitializeModule_wavemngr(void) {
    _mxarray0_ = mclInitializeString(12, _array1_);
    _mxarray2_ = mclInitializeString(12, _array3_);
    _mxarray4_ = mclInitializeString(12, _array5_);
    _mxarray6_ = mclInitializeString(12, _array7_);
    _mxarray8_ = mclInitializeString(12, _array9_);
    _mxarray10_ = mclInitializeString(6, _array11_);
    _mxarray12_ = mclInitializeDouble(7.0);
    _mxarray13_ = mclInitializeDouble(11.0);
    _mxarray14_ = mclInitializeDoubleVector(1, 5, _array15_);
    _mxarray16_ = mclInitializeString(4, _array17_);
    _mxarray18_ = mclInitializeDouble(0.0);
    _mxarray19_ = mclInitializeDouble(1.0);
    _mxarray20_ = mclInitializeString(1, _array21_);
    _mxarray22_ = mclInitializeString(45, _array23_);
    _mxarray24_ = mclInitializeString(29, _array25_);
    _mxarray26_ = mclInitializeString(43, _array27_);
    _mxarray28_ = mclInitializeString(6, _array29_);
    _mxarray30_ = mclInitializeString(5, _array31_);
    _mxarray32_ = mclInitializeString(4, _array33_);
    _mxarray34_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray35_ = mclInitializeString(2, _array36_);
    _mxarray37_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray38_ = mclInitializeString(2, _array39_);
    _mxarray40_ = mclInitializeString(7, _array41_);
    _mxarray42_ = mclInitializeString(4, _array43_);
    _mxarray44_ = mclInitializeString(6, _array45_);
    _mxarray46_ = mclInitializeString(25, _array47_);
    _mxarray48_ = mclInitializeString(12, _array49_);
    _mxarray50_ = mclInitializeString(3, _array51_);
    _mxarray52_ = mclInitializeString(5, _array53_);
    _mxarray54_ = mclInitializeString(5, _array55_);
    _mxarray56_ = mclInitializeString(4, _array57_);
    _mxarray58_ = mclInitializeString(4, _array59_);
    _mxarray60_ = mclInitializeString(3, _array61_);
    _mxarray63_ = mclInitializeString(3, _array64_);
    _mxarray62_ = mclInitializeCell(_mxarray63_);
    _mxarray65_ = mclInitializeDouble(2.0);
    _mxarray67_ = mclInitializeString(3, _array68_);
    _mxarray66_ = mclInitializeCell(_mxarray67_);
    _mxarray69_ = mclInitializeDouble(5.0);
    _mxarray71_ = mclInitializeString(3, _array72_);
    _mxarray70_ = mclInitializeCell(_mxarray71_);
    _mxarray74_ = mclInitializeString(4, _array75_);
    _mxarray73_ = mclInitializeCell(_mxarray74_);
    _mxarray77_ = mclInitializeString(3, _array78_);
    _mxarray76_ = mclInitializeCell(_mxarray77_);
    _mxarray79_ = mclInitializeString(3, _array80_);
    _mxarray81_ = mclInitializeString(6, _array82_);
    _mxarray83_ = mclInitializeString(2, _array84_);
    _mxarray85_ = mclInitializeString(3, _array86_);
    _mxarray87_ = mclInitializeString(3, _array88_);
    _mxarray89_ = mclInitializeString(5, _array90_);
    _mxarray91_ = mclInitializeString(2, _array92_);
    _mxarray93_ = mclInitializeString(10, _array94_);
    _mxarray95_ = mclInitializeString(15, _array96_);
    _mxarray97_ = mclInitializeString(4, _array98_);
    _mxarray99_ = mclInitializeString(7, _array100_);
    _mxarray101_ = mclInitializeString(7, _array102_);
    _mxarray103_ = mclInitializeString(4, _array104_);
    _mxarray105_ = mclInitializeString(6, _array106_);
    _mxarray109_ = mclInitializeString(7, _array110_);
    _array108_[0] = _mxarray109_;
    _array108_[1] = _mxarray99_;
    _mxarray107_ = mclInitializeCellVector(1, 2, _array108_);
    _mxarray111_ = mclInitializeCell(_mxarray101_);
    _mxarray112_ = mclInitializeString(6, _array113_);
    _mxarray114_ = mclInitializeDouble(4.0);
    _mxarray115_ = mclInitializeString(4, _array116_);
    _mxarray117_ = mclInitializeString(4, _array118_);
    _mxarray119_ = mclInitializeString(7, _array120_);
    _mxarray121_ = mclInitializeString(6, _array122_);
    _array124_[0] = _mxarray19_;
    _array124_[1] = _mxarray65_;
    _mxarray123_ = mclInitializeCellVector(1, 2, _array124_);
    _mxarray127_ = mclInitializeDouble(3.0);
    _array126_[0] = _mxarray127_;
    _array126_[1] = _mxarray114_;
    _mxarray125_ = mclInitializeCellVector(1, 2, _array126_);
    _mxarray128_ = mclInitializeString(16, _array129_);
    _mxarray130_ = mclInitializeString(1, _array131_);
    _mxarray132_ = mclInitializeString(14, _array133_);
    _mxarray134_ = mclInitializeDouble(-1.0);
    _mxarray135_ = mclInitializeString(1, _array136_);
    _mxarray137_ = mclInitializeString(5, _array138_);
    _mxarray139_ = mclInitializeString(14, _array140_);
    _mxarray141_ = mclInitializeString(8, _array142_);
    _mxarray143_ = mclInitializeString(33, _array144_);
    _mxarray145_ = mclInitializeString(4, _array146_);
    _mxarray147_ = mclInitializeString(1, _array148_);
    _mxarray149_ = mclInitializeDouble(35.0);
    _mxarray150_ = mclInitializeString(1, _array151_);
    _mxarray152_ = mclInitializeDouble(30.0);
    _mxarray153_ = mclInitializeDouble(9.0);
    _mxarray154_ = mclInitializeString(8, _array155_);
    _mxarray156_ = mclInitializeString(11, _array157_);
    _mxarray158_ = mclInitializeString(3, _array159_);
    _mxarray160_ = mclInitializeString(30, _array161_);
    _mxarray162_ = mclInitializeString(41, _array163_);
    _mxarray164_ = mclInitializeString(36, _array165_);
    _mxarray166_ = mclInitializeString(47, _array167_);
    _mxarray168_ = mclInitializeString(22, _array169_);
    _array171_[0] = _mxarray40_;
    _array171_[1] = _mxarray42_;
    _array171_[2] = _mxarray44_;
    _mxarray170_ = mclInitializeCellVector(1, 3, _array171_);
    _mxarray172_ = mclInitializeString(33, _array173_);
    _mxarray174_ = mclInitializeString(25, _array175_);
    _mxarray176_ = mclInitializeString(4, _array177_);
    _mxarray178_ = mclInitializeString(2, _array179_);
    _mxarray180_ = mclInitializeString(27, _array181_);
    _mxarray182_ = mclInitializeDouble(6.0);
    _mxarray183_ = mclInitializeString(29, _array184_);
    _mxarray185_ = mclInitializeString(34, _array186_);
    _mxarray187_ = mclInitializeString(25, _array188_);
    _mxarray189_ = mclInitializeString(4, _array190_);
    _mxarray191_ = mclInitializeString(24, _array192_);
    _mxarray193_ = mclInitializeString(4, _array194_);
    _mxarray195_ = mclInitializeString(3, _array196_);
    _mxarray197_ = mclInitializeString(38, _array198_);
    _mxarray199_ = mclInitializeString(37, _array200_);
    _mxarray201_ = mclInitializeString(36, _array202_);
    _mxarray203_ = mclInitializeString(7, _array204_);
    _array206_[0] = _mxarray19_;
    _array206_[1] = _mxarray65_;
    _array206_[2] = _mxarray127_;
    _array206_[3] = _mxarray114_;
    _array206_[4] = _mxarray69_;
    _array206_[5] = _mxarray182_;
    _array206_[6] = _mxarray12_;
    _mxarray207_ = mclInitializeDouble(8.0);
    _array206_[7] = _mxarray207_;
    _array206_[8] = _mxarray153_;
    _mxarray208_ = mclInitializeDouble(10.0);
    _array206_[9] = _mxarray208_;
    _array206_[10] = _mxarray13_;
    _array206_[11] = _mxarray208_;
    _array206_[12] = _mxarray13_;
    _array206_[13] = _mxarray208_;
    _array206_[14] = _mxarray13_;
    _mxarray209_ = mclInitializeString(4, _array210_);
    _array206_[15] = _mxarray209_;
    _mxarray211_ = mclInitializeString(10, _array212_);
    _array206_[16] = _mxarray211_;
    _mxarray213_ = mclInitializeString(7, _array214_);
    _array206_[17] = _mxarray213_;
    _mxarray215_ = mclInitializeString(8, _array216_);
    _array206_[18] = _mxarray215_;
    _mxarray217_ = mclInitializeString(11, _array218_);
    _array206_[19] = _mxarray217_;
    _mxarray219_ = mclInitializeString(11, _array220_);
    _array206_[20] = _mxarray219_;
    _mxarray221_ = mclInitializeString(5, _array222_);
    _array206_[21] = _mxarray221_;
    _mxarray223_ = mclInitializeString(6, _array224_);
    _array206_[22] = _mxarray223_;
    _mxarray225_ = mclInitializeString(8, _array226_);
    _array206_[23] = _mxarray225_;
    _mxarray227_ = mclInitializeString(11, _array228_);
    _array206_[24] = _mxarray227_;
    _mxarray229_ = mclInitializeString(6, _array230_);
    _array206_[25] = _mxarray229_;
    _mxarray231_ = mclInitializeString(16, _array232_);
    _array206_[26] = _mxarray231_;
    _mxarray233_ = mclInitializeString(7, _array234_);
    _array206_[27] = _mxarray233_;
    _mxarray235_ = mclInitializeString(18, _array236_);
    _array206_[28] = _mxarray235_;
    _mxarray237_ = mclInitializeString(14, _array238_);
    _array206_[29] = _mxarray237_;
    _mxarray239_ = mclInitializeString(4, _array240_);
    _array206_[30] = _mxarray239_;
    _mxarray241_ = mclInitializeString(2, _array242_);
    _array206_[31] = _mxarray241_;
    _mxarray243_ = mclInitializeString(3, _array244_);
    _array206_[32] = _mxarray243_;
    _mxarray245_ = mclInitializeString(4, _array246_);
    _array206_[33] = _mxarray245_;
    _array206_[34] = _mxarray115_;
    _array206_[35] = _mxarray117_;
    _mxarray247_ = mclInitializeString(4, _array248_);
    _array206_[36] = _mxarray247_;
    _mxarray249_ = mclInitializeString(4, _array250_);
    _array206_[37] = _mxarray249_;
    _mxarray251_ = mclInitializeString(4, _array252_);
    _array206_[38] = _mxarray251_;
    _mxarray253_ = mclInitializeString(4, _array254_);
    _array206_[39] = _mxarray253_;
    _mxarray255_ = mclInitializeString(4, _array256_);
    _array206_[40] = _mxarray255_;
    _mxarray257_ = mclInitializeString(4, _array258_);
    _array206_[41] = _mxarray257_;
    _mxarray259_ = mclInitializeString(4, _array260_);
    _array206_[42] = _mxarray259_;
    _mxarray261_ = mclInitializeString(4, _array262_);
    _array206_[43] = _mxarray261_;
    _mxarray263_ = mclInitializeString(4, _array264_);
    _array206_[44] = _mxarray263_;
    _array206_[45] = _mxarray19_;
    _array206_[46] = _mxarray19_;
    _array206_[47] = _mxarray19_;
    _array206_[48] = _mxarray19_;
    _array206_[49] = _mxarray65_;
    _array206_[50] = _mxarray65_;
    _array206_[51] = _mxarray127_;
    _array206_[52] = _mxarray19_;
    _array206_[53] = _mxarray114_;
    _array206_[54] = _mxarray114_;
    _array206_[55] = _mxarray114_;
    _array206_[56] = _mxarray69_;
    _array206_[57] = _mxarray69_;
    _array206_[58] = _mxarray69_;
    _array206_[59] = _mxarray69_;
    _mxarray205_ = mclInitializeCellVector(15, 4, _array206_);
    _array266_[0] = _mxarray37_;
    _mxarray267_ = mclInitializeString(23, _array268_);
    _array266_[1] = _mxarray267_;
    _mxarray269_ = mclInitializeString(16, _array270_);
    _array266_[2] = _mxarray269_;
    _mxarray271_ = mclInitializeString(9, _array272_);
    _array266_[3] = _mxarray271_;
    _mxarray273_ = mclInitializeString(59, _array274_);
    _array266_[4] = _mxarray273_;
    _array266_[5] = _mxarray273_;
    _array266_[6] = _mxarray37_;
    _array266_[7] = _mxarray37_;
    _mxarray275_ = mclInitializeString(18, _array276_);
    _array266_[8] = _mxarray275_;
    _array266_[9] = _mxarray37_;
    _array266_[10] = _mxarray37_;
    _mxarray277_ = mclInitializeString(12, _array278_);
    _array266_[11] = _mxarray277_;
    _mxarray279_ = mclInitializeString(28, _array280_);
    _array266_[12] = _mxarray279_;
    _mxarray281_ = mclInitializeString(46, _array282_);
    _array266_[13] = _mxarray281_;
    _mxarray283_ = mclInitializeString(34, _array284_);
    _array266_[14] = _mxarray283_;
    _mxarray265_ = mclInitializeCellVector(15, 1, _array266_);
    _array286_[0] = _mxarray35_;
    _array286_[1] = _mxarray40_;
    _array286_[2] = _mxarray40_;
    _array286_[3] = _mxarray40_;
    _array286_[4] = _mxarray42_;
    _array286_[5] = _mxarray42_;
    _array286_[6] = _mxarray35_;
    _array286_[7] = _mxarray35_;
    _array286_[8] = _mxarray40_;
    _array286_[9] = _mxarray35_;
    _array286_[10] = _mxarray35_;
    _array286_[11] = _mxarray40_;
    _array286_[12] = _mxarray44_;
    _array286_[13] = _mxarray44_;
    _array286_[14] = _mxarray44_;
    _mxarray285_ = mclInitializeCellVector(15, 1, _array286_);
    _mxarray289_ = mclInitializeString(6, _array290_);
    _array288_[0] = _mxarray289_;
    _array288_[1] = _mxarray289_;
    _mxarray291_ = mclInitializeString(7, _array292_);
    _array288_[2] = _mxarray291_;
    _mxarray293_ = mclInitializeString(8, _array294_);
    _array288_[3] = _mxarray293_;
    _mxarray295_ = mclInitializeString(8, _array296_);
    _array288_[4] = _mxarray295_;
    _mxarray297_ = mclInitializeString(8, _array298_);
    _array288_[5] = _mxarray297_;
    _mxarray299_ = mclInitializeString(5, _array300_);
    _array288_[6] = _mxarray299_;
    _mxarray301_ = mclInitializeString(8, _array302_);
    _array288_[7] = _mxarray301_;
    _mxarray303_ = mclInitializeString(8, _array304_);
    _array288_[8] = _mxarray303_;
    _mxarray305_ = mclInitializeString(7, _array306_);
    _array288_[9] = _mxarray305_;
    _mxarray307_ = mclInitializeString(6, _array308_);
    _array288_[10] = _mxarray307_;
    _mxarray309_ = mclInitializeString(8, _array310_);
    _array288_[11] = _mxarray309_;
    _mxarray311_ = mclInitializeString(8, _array312_);
    _array288_[12] = _mxarray311_;
    _mxarray313_ = mclInitializeString(8, _array314_);
    _array288_[13] = _mxarray313_;
    _mxarray315_ = mclInitializeString(8, _array316_);
    _array288_[14] = _mxarray315_;
    _mxarray287_ = mclInitializeCellVector(15, 1, _array288_);
    _array318_[0] = _mxarray34_;
    _array318_[1] = _mxarray34_;
    _array318_[2] = _mxarray34_;
    _array318_[3] = _mxarray34_;
    _array318_[4] = _mxarray34_;
    _array318_[5] = _mxarray34_;
    _mxarray319_ = mclInitializeDoubleVector(1, 2, _array320_);
    _array318_[6] = _mxarray319_;
    _array318_[7] = _mxarray34_;
    _mxarray321_ = mclInitializeDoubleVector(1, 2, _array322_);
    _array318_[8] = _mxarray321_;
    _array318_[9] = _mxarray319_;
    _array318_[10] = _mxarray319_;
    _array318_[11] = _mxarray321_;
    _mxarray323_ = mclInitializeDoubleVector(1, 2, _array324_);
    _array318_[12] = _mxarray323_;
    _array318_[13] = _mxarray323_;
    _array318_[14] = _mxarray319_;
    _mxarray317_ = mclInitializeCellVector(15, 1, _array318_);
    _mxarray325_ = mclInitializeString(14, _array326_);
    _mxarray327_ = mclInitializeDouble(13.0);
    _mxarray328_ = mclInitializeDoubleVector(2, 1, _array329_);
}

void TerminateModule_wavemngr(void) {
    mxDestroyArray(_mxarray328_);
    mxDestroyArray(_mxarray327_);
    mxDestroyArray(_mxarray325_);
    mxDestroyArray(_mxarray317_);
    mxDestroyArray(_mxarray323_);
    mxDestroyArray(_mxarray321_);
    mxDestroyArray(_mxarray319_);
    mxDestroyArray(_mxarray287_);
    mxDestroyArray(_mxarray315_);
    mxDestroyArray(_mxarray313_);
    mxDestroyArray(_mxarray311_);
    mxDestroyArray(_mxarray309_);
    mxDestroyArray(_mxarray307_);
    mxDestroyArray(_mxarray305_);
    mxDestroyArray(_mxarray303_);
    mxDestroyArray(_mxarray301_);
    mxDestroyArray(_mxarray299_);
    mxDestroyArray(_mxarray297_);
    mxDestroyArray(_mxarray295_);
    mxDestroyArray(_mxarray293_);
    mxDestroyArray(_mxarray291_);
    mxDestroyArray(_mxarray289_);
    mxDestroyArray(_mxarray285_);
    mxDestroyArray(_mxarray265_);
    mxDestroyArray(_mxarray283_);
    mxDestroyArray(_mxarray281_);
    mxDestroyArray(_mxarray279_);
    mxDestroyArray(_mxarray277_);
    mxDestroyArray(_mxarray275_);
    mxDestroyArray(_mxarray273_);
    mxDestroyArray(_mxarray271_);
    mxDestroyArray(_mxarray269_);
    mxDestroyArray(_mxarray267_);
    mxDestroyArray(_mxarray205_);
    mxDestroyArray(_mxarray263_);
    mxDestroyArray(_mxarray261_);
    mxDestroyArray(_mxarray259_);
    mxDestroyArray(_mxarray257_);
    mxDestroyArray(_mxarray255_);
    mxDestroyArray(_mxarray253_);
    mxDestroyArray(_mxarray251_);
    mxDestroyArray(_mxarray249_);
    mxDestroyArray(_mxarray247_);
    mxDestroyArray(_mxarray245_);
    mxDestroyArray(_mxarray243_);
    mxDestroyArray(_mxarray241_);
    mxDestroyArray(_mxarray239_);
    mxDestroyArray(_mxarray237_);
    mxDestroyArray(_mxarray235_);
    mxDestroyArray(_mxarray233_);
    mxDestroyArray(_mxarray231_);
    mxDestroyArray(_mxarray229_);
    mxDestroyArray(_mxarray227_);
    mxDestroyArray(_mxarray225_);
    mxDestroyArray(_mxarray223_);
    mxDestroyArray(_mxarray221_);
    mxDestroyArray(_mxarray219_);
    mxDestroyArray(_mxarray217_);
    mxDestroyArray(_mxarray215_);
    mxDestroyArray(_mxarray213_);
    mxDestroyArray(_mxarray211_);
    mxDestroyArray(_mxarray209_);
    mxDestroyArray(_mxarray208_);
    mxDestroyArray(_mxarray207_);
    mxDestroyArray(_mxarray203_);
    mxDestroyArray(_mxarray201_);
    mxDestroyArray(_mxarray199_);
    mxDestroyArray(_mxarray197_);
    mxDestroyArray(_mxarray195_);
    mxDestroyArray(_mxarray193_);
    mxDestroyArray(_mxarray191_);
    mxDestroyArray(_mxarray189_);
    mxDestroyArray(_mxarray187_);
    mxDestroyArray(_mxarray185_);
    mxDestroyArray(_mxarray183_);
    mxDestroyArray(_mxarray182_);
    mxDestroyArray(_mxarray180_);
    mxDestroyArray(_mxarray178_);
    mxDestroyArray(_mxarray176_);
    mxDestroyArray(_mxarray174_);
    mxDestroyArray(_mxarray172_);
    mxDestroyArray(_mxarray170_);
    mxDestroyArray(_mxarray168_);
    mxDestroyArray(_mxarray166_);
    mxDestroyArray(_mxarray164_);
    mxDestroyArray(_mxarray162_);
    mxDestroyArray(_mxarray160_);
    mxDestroyArray(_mxarray158_);
    mxDestroyArray(_mxarray156_);
    mxDestroyArray(_mxarray154_);
    mxDestroyArray(_mxarray153_);
    mxDestroyArray(_mxarray152_);
    mxDestroyArray(_mxarray150_);
    mxDestroyArray(_mxarray149_);
    mxDestroyArray(_mxarray147_);
    mxDestroyArray(_mxarray145_);
    mxDestroyArray(_mxarray143_);
    mxDestroyArray(_mxarray141_);
    mxDestroyArray(_mxarray139_);
    mxDestroyArray(_mxarray137_);
    mxDestroyArray(_mxarray135_);
    mxDestroyArray(_mxarray134_);
    mxDestroyArray(_mxarray132_);
    mxDestroyArray(_mxarray130_);
    mxDestroyArray(_mxarray128_);
    mxDestroyArray(_mxarray125_);
    mxDestroyArray(_mxarray127_);
    mxDestroyArray(_mxarray123_);
    mxDestroyArray(_mxarray121_);
    mxDestroyArray(_mxarray119_);
    mxDestroyArray(_mxarray117_);
    mxDestroyArray(_mxarray115_);
    mxDestroyArray(_mxarray114_);
    mxDestroyArray(_mxarray112_);
    mxDestroyArray(_mxarray111_);
    mxDestroyArray(_mxarray107_);
    mxDestroyArray(_mxarray109_);
    mxDestroyArray(_mxarray105_);
    mxDestroyArray(_mxarray103_);
    mxDestroyArray(_mxarray101_);
    mxDestroyArray(_mxarray99_);
    mxDestroyArray(_mxarray97_);
    mxDestroyArray(_mxarray95_);
    mxDestroyArray(_mxarray93_);
    mxDestroyArray(_mxarray91_);
    mxDestroyArray(_mxarray89_);
    mxDestroyArray(_mxarray87_);
    mxDestroyArray(_mxarray85_);
    mxDestroyArray(_mxarray83_);
    mxDestroyArray(_mxarray81_);
    mxDestroyArray(_mxarray79_);
    mxDestroyArray(_mxarray76_);
    mxDestroyArray(_mxarray77_);
    mxDestroyArray(_mxarray73_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray70_);
    mxDestroyArray(_mxarray71_);
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfWavemngr_findNL(mxArray * opt, mxArray * txt);
static void mlxWavemngr_findNL(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]);
static mxArray * mlfWavemngr_noblank(mxArray * x);
static void mlxWavemngr_noblank(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);
static mxArray * Mwavemngr(int nargout_, mxArray * option, mxArray * varargin);
static mxArray * Mwavemngr_findNL(int nargout_, mxArray * opt, mxArray * txt);
static mxArray * Mwavemngr_noblank(int nargout_, mxArray * x);

static mexFunctionTableEntry local_function_table_[2]
  = { { "findNL", mlxWavemngr_findNL, 2, 1, NULL },
      { "noblank", mlxWavemngr_noblank, 1, 1, NULL } };

_mexLocalFunctionTable _local_function_table_wavemngr
  = { 2, local_function_table_ };

/*
 * The function "mlfNWavemngr" contains the nargout interface for the
 * "wavemngr" M-function from file "./src/wavemngr.m" (lines 1-923). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNWavemngr(int nargout,
                       mlfVarargoutList * varargout,
                       mxArray * option,
                       ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwavemngr(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfWavemngr" contains the normal interface for the "wavemngr"
 * M-function from file "./src/wavemngr.m" (lines 1-923). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfWavemngr(mlfVarargoutList * varargout, mxArray * option, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwavemngr(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVWavemngr" contains the void interface for the "wavemngr"
 * M-function from file "./src/wavemngr.m" (lines 1-923). The void interface is
 * only produced if the M-function uses the special variable "nargout", and has
 * at least one output. The void interface function specifies zero output
 * arguments to the implementation version of the function, and in the event
 * that the implementation version still returns an output (which, in MATLAB,
 * would be assigned to the "ans" variable), it deallocates the output. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlfVWavemngr(mxArray * option, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    varargout = Mwavemngr(0, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxWavemngr" contains the feval interface for the "wavemngr"
 * M-function from file "./src/wavemngr.m" (lines 1-923). The feval function
 * calls the implementation version of wavemngr through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxWavemngr(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
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
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mwavemngr(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfWavemngr_findNL" contains the normal interface for the
 * "wavemngr/findNL" M-function from file "./src/wavemngr.m" (lines 923-940).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWavemngr_findNL(mxArray * opt, mxArray * txt) {
    int nargout = 1;
    mxArray * nl = NULL;
    mlfEnterNewContext(0, 2, opt, txt);
    nl = Mwavemngr_findNL(nargout, opt, txt);
    mlfRestorePreviousContext(0, 2, opt, txt);
    return mlfReturnValue(nl);
}

/*
 * The function "mlxWavemngr_findNL" contains the feval interface for the
 * "wavemngr/findNL" M-function from file "./src/wavemngr.m" (lines 923-940).
 * The feval function calls the implementation version of wavemngr/findNL
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWavemngr_findNL(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavemngr/findNL Line: 923 Colu"
            "mn: 1 The function \"wavemngr/findNL\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavemngr/findNL Line: 923 Col"
            "umn: 1 The function \"wavemngr/findNL\" was called "
            "with more than the declared number of inputs (2)."),
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
    mplhs[0] = Mwavemngr_findNL(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWavemngr_noblank" contains the normal interface for the
 * "wavemngr/noblank" M-function from file "./src/wavemngr.m" (lines 940-949).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfWavemngr_noblank(mxArray * x) {
    int nargout = 1;
    mxArray * s = NULL;
    mlfEnterNewContext(0, 1, x);
    s = Mwavemngr_noblank(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(s);
}

/*
 * The function "mlxWavemngr_noblank" contains the feval interface for the
 * "wavemngr/noblank" M-function from file "./src/wavemngr.m" (lines 940-949).
 * The feval function calls the implementation version of wavemngr/noblank
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxWavemngr_noblank(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavemngr/noblank Line: 940 Col"
            "umn: 1 The function \"wavemngr/noblank\" was called "
            "with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavemngr/noblank Line: 940 Col"
            "umn: 1 The function \"wavemngr/noblank\" was called "
            "with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwavemngr_noblank(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwavemngr" is the implementation version of the "wavemngr"
 * M-function from file "./src/wavemngr.m" (lines 1-923). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function varargout = wavemngr(option,varargin)
 */
static mxArray * Mwavemngr(int nargout_, mxArray * option, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavemngr);
    int nargin_ = mclNargin(-2, option, varargin, NULL);
    mxArray * _mat = NULL;
    mxArray * varargout = NULL;
    mxArray * ss = NULL;
    mxArray * i_end = NULL;
    mxArray * i_beg = NULL;
    mxArray * I = NULL;
    mxArray * s = NULL;
    mxArray * nbfam = NULL;
    mxArray * files = NULL;
    mxArray * famtype = NULL;
    mxArray * last = NULL;
    mxArray * str_winfo = NULL;
    mxArray * fn = NULL;
    mxArray * name = NULL;
    mxArray * Chrline = NULL;
    mxArray * wavelet_Bounds = NULL;
    mxArray * nbArgIN = NULL;
    mxArray * wavelet_File = NULL;
    mxArray * wavelet_typNums = NULL;
    mxArray * wavelet_tabNums = NULL;
    mxArray * wavelet_Type = NULL;
    mxArray * fsnIn = NULL;
    mxArray * family_Short_Name = NULL;
    mxArray * tmpCell = NULL;
    mxArray * fnIn = NULL;
    mxArray * family_Name = NULL;
    mxArray * tmp = NULL;
    mxArray * indfam = NULL;
    mxArray * wnames = NULL;
    mxArray * sfname = NULL;
    mxArray * famTAB = NULL;
    mxArray * famSName = NULL;
    mxArray * tabtab = NULL;
    mxArray * families = NULL;
    mxArray * tab = NULL;
    mxArray * sep_num = NULL;
    mxArray * sep_fam = NULL;
    mxArray * p = NULL;
    mxArray * nb_num = NULL;
    mxArray * lnum = NULL;
    mxArray * fnum = NULL;
    mxArray * indnum = NULL;
    mxArray * k1 = NULL;
    mxArray * k0 = NULL;
    mxArray * index1 = NULL;
    mxArray * lnot = NULL;
    mxArray * notspace = NULL;
    mxArray * fname = NULL;
    mxArray * nums = NULL;
    mxArray * sname = NULL;
    mxArray * indexs = NULL;
    mxArray * j = NULL;
    mxArray * first = NULL;
    mxArray * ind_NL = NULL;
    mxArray * lennewl = NULL;
    mxArray * str_NL = NULL;
    mxArray * winfo = NULL;
    mxArray * fid = NULL;
    mxArray * beg_fam = NULL;
    mxArray * Lo_D = NULL;
    mxArray * bounds = NULL;
    mxArray * _T1_ = NULL;
    mxArray * _T0_ = NULL;
    mxArray * nul = NULL;
    mxArray * field = NULL;
    mxArray * k = NULL;
    mxArray * nb = NULL;
    mxArray * arg = NULL;
    mxArray * in_type = NULL;
    mxArray * fnCell = NULL;
    mxArray * ind = NULL;
    mxArray * tab_type = NULL;
    mxArray * wtype = NULL;
    mxArray * fsnInput = NULL;
    mxArray * fsnCell = NULL;
    mxArray * msg = NULL;
    mxArray * num = NULL;
    mxArray * typNums = NULL;
    mxArray * add_num = NULL;
    mxArray * num_str = NULL;
    mxArray * i_num = NULL;
    mxArray * tabNums = NULL;
    mxArray * ok_wave = NULL;
    mxArray * len = NULL;
    mxArray * fam = NULL;
    mxArray * i_fam = NULL;
    mxArray * lwna = NULL;
    mxArray * wname = NULL;
    mxArray * nb_fam = NULL;
    mxArray * err = NULL;
    mxArray * WaveTypePOS = NULL;
    mxArray * NB_FamInWTB = NULL;
    mxArray * nb_InfoByWave = NULL;
    mxArray * sav_file = NULL;
    mxArray * asc_file = NULL;
    mxArray * bin_file = NULL;
    mxArray * asc_ini_file = NULL;
    mxArray * bin_ini_file = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&option);
    mclCopyArray(&varargin);
    /*
     * %WAVEMNGR Wavelet manager.
     * %   WAVEMNGR is a wavelet manager used to add, delete, restore
     * %   or read wavelets.
     * %
     * %   WAVEMNGR('add',FN,FSN,WT,NUMS,FILE) or
     * %   WAVEMNGR('add',FN,FSN,WT,NUMS,FILE,B) or 
     * %   WAVEMNGR('add',FN,FSN,WT,{NUMS,TYPNUMS},FILE) or
     * %   WAVEMNGR('add',FN,FSN,WT,{NUMS,TYPNUMS},FILE,B)
     * %   adds a new wavelet family.
     * %     FN  = family name (string).
     * %     FSN = family short name (string).
     * %
     * %     WT defines the wavelet type: 
     * %     WT = 1 for orthogonal wavelets.
     * %     WT = 2 for biorthogonal wavelets.
     * %     WT = 3 for wavelet with scale function.
     * %     WT = 4 for wavelet without scale function.
     * %     WT = 5 for complex wavelet without scale function.
     * %
     * %     If the wavelet is a single one, NUMS = ''.
     * %       examples: mexh, morl.
     * %     If the wavelet is part of a finite family of wavelets, NUMS
     * %       is a string containing a blank separated list of items
     * %       representing wavelet parameters.
     * %       example: bior, NUMS = '1.1 1.3 ... 4.4 5.5 6.8'.
     * %     If the wavelet is part of an infinite family of wavelets, 
     * %       NUMS is a string containing a blank separated list of 
     * %       items representing wavelet parameters, terminated by the 
     * %       special sequence **.
     * %       examples: 
     * %         db,    NUMS = '1 2 3 4 5 6 7 8 9 10 **'.
     * %         shan,  NUMS = '1-1.5 1-1 1-0.5 1-0.1 2-3 **'
     * %     In these last two cases, TYPNUMS specifies the wavelet parameter 
     * %       input format: 'integer' or 'real' or 'string'; the default 
     * %       value is 'integer'.
     * %       examples: db,   TYPNUMS = 'integer'
     * %                 bior, TYPNUMS = 'real'
     * %                 shan, TYPNUMS = 'string'
     * %
     * %     FILE  = MAT-file or M-file name (string).
     * %
     * %     B = [lb ub] specifies lower and upper bounds of
     * %     effective support for wavelets of type = 3, 4 or 5.
     * %
     * %   WAVEMNGR('del',N), deletes a wavelet or a wavelet family where
     * %     N is the wavelet name or the family short name.
     * %
     * %   WAVEMNGR('restore') restores the previous 
     * %     wavelets.asc ASCII-file.
     * %   WAVEMNGR('restore',IN2) restores the initial 
     * %     wavelets.asc ASCII-file.
     * %
     * %   OUT1 = WAVEMNGR('read') returns all wavelets family names.
     * % 
     * %   OUT1 = WAVEMNGR('read',IN2) returns all wavelet names.
     * %
     * %   OUT1 = WAVEMNGR('read_asc') returns all wavelets information
     * %   retrieved from wavelets.asc ASCII-file.
     * 
     * %----------------------
     * %   INTERNAL OPTIONS.
     * %----------------------
     * %   WAVEMNGR('create')
     * %   creates wavelets.inf MAT-file using wavelets.asc ASCII-file.
     * %
     * %   OUT1 = WAVEMNGR('load') or WAVEMNGR('load')
     * %   loads Wavelets_Info from wavelets.inf matfile,
     * %   and puts it in the global variable: Wavelets_Info.
     * %
     * %   WAVEMNGR('clear') clear the global Wavelets_Info.
     * %
     * %   [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6] = WAVEMNGR('indw',W)
     * %   returns:
     * %   family indice, number indice,
     * %   family, number for the wavelet W.
     * %   OUT5 is the family table of number.
     * %   OUT6 is a flag for GUI.
     * %
     * %   OUT1 = WAVEMNGR('indf',F) returns indice
     * %   for wavelet family F (short name).
     * %
     * %   varargout = wavemngr('fields',varargin) see below.
     * %
     * %   OUT1 = WAVEMNGR('read_struct')
     * %   OUT1 gives all wavelets structures.
     * % 
     * %   OUT1 = WAVEMNGR('read_struct',NUMS)
     * %   OUT1 gives the wavelets structures.
     * %   specified by NUMS.
     * %
     * %   OUT1 = WAVEMNGR('tfsn') or WAVEMNGR('tfsn',T)
     * %   returns shortname-table (of type = T : 'dwt' or 'cwt' or 'owt' or 'ccwt').
     * %
     * %   OUT1 = WAVEMNGR('tfn') or out1 = WAVEMNGR('tfn',T)
     * %   returns name-table (of type = T : 'dwt' or 'cwt' or 'owt' or 'ccwt').
     * %
     * %   OUT1 = WAVEMNGR('isbior',W)
     * %   returns 1 for biorthogonal wavelets.
     * %
     * %   [FAM,NUM] = WAVEMNGR('fam_num',W) returns
     * %   family and number for the wavelet W.
     * %
     * %   LEN = WAVEMNGR('length',W) returns the
     * %   length of the support of the wavelet W.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 02-Aug-2000.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * % $Revision: 1.1.1.1 $
     * 
     * %fprintf(2,'Using modified wavemngr.m\n');
     * 
     * global Wavelets_Info
     * 
     * %----------------------%
     * % Wavelets Structures. %
     * %--------------------------------------------------------%
     * % Wavelets_Info is a  structure array with size [nb_fam 1]
     * %
     * % Wavelet_Struct =
     * %   struct(...
     * %     'index'           integer
     * %     'familyName'      string
     * %     'familyShortName' string
     * %     'type'            integer
     * %     'tabNums'         matrix of string
     * %     'typNums'         string
     * %     'file'            string
     * %     'bounds'          string
     * %     );
     * %---------------------------------------------------------%
     * 
     * % Files Names.
     * %--------------
     * bin_ini_file = 'wavelets.bin';
     */
    mlfAssign(&bin_ini_file, _mxarray0_);
    /*
     * asc_ini_file = 'wavelets.ini';
     */
    mlfAssign(&asc_ini_file, _mxarray2_);
    /*
     * bin_file = 'wavelets.inf';
     */
    mlfAssign(&bin_file, _mxarray4_);
    /*
     * asc_file = 'wavelets.asc';
     */
    mlfAssign(&asc_file, _mxarray6_);
    /*
     * sav_file = 'wavelets.prv';
     */
    mlfAssign(&sav_file, _mxarray8_);
    /*
     * 
     * if nargin==0 , option = 'create' ; end
     */
    if (nargin_ == 0) {
        mlfAssign(&option, _mxarray10_);
    }
    /*
     * 
     * % Miscellaneous Values.
     * %----------------------
     * nb_InfoByWave =  7;
     */
    mlfAssign(&nb_InfoByWave, _mxarray12_);
    /*
     * NB_FamInWTB   = 11;
     */
    mlfAssign(&NB_FamInWTB, _mxarray13_);
    /*
     * WaveTypePOS   = [1:5];
     */
    mlfAssign(&WaveTypePOS, _mxarray14_);
    /*
     * 
     * switch option
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray16_)) {
            /*
             * case 'load'
             * if isempty(Wavelets_Info)
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                /*
                 * err = 0;
                 */
                mlfAssign(&err, _mxarray18_);
                /*
                 * %          eval(['load ' bin_file ' -mat'],'err = 1;');
                 * load(bin_file,'-mat','Wavelets_Info');
                 */
                mlfLoad(
                  mclVv(bin_file, "bin_file"),
                  "-mat",
                  &_mat,
                  "Wavelets_Info",
                  mclPrepareGlobal(&Wavelets_Info),
                  NULL);
                /*
                 * if isempty(Wavelets_Info)
                 */
                if (mlfTobool(
                      mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                    /*
                     * err = 1
                     */
                    mlfAssign(&err, _mxarray19_);
                    mclPrintArray(mclVv(err, "err"), "err");
                /*
                 * end
                 */
                }
                /*
                 * if err
                 */
                if (mlfTobool(mclVv(err, "err"))) {
                    /*
                     * err = 0;
                     */
                    mlfAssign(&err, _mxarray18_);
                    /*
                     * %              eval(['load ' bin_ini_file ' -mat'],'err = 1;');
                     * %		Wavelets_Info = my_load(bin_ini_file,'-mat','err = 1');
                     * %		err = load (bin_ini_file,'-mat','Wavelets_Info');
                     * load(bin_ini_file,'-mat','Wavelets_Info');
                     */
                    mlfLoad(
                      mclVv(bin_ini_file, "bin_ini_file"),
                      "-mat",
                      &_mat,
                      "Wavelets_Info",
                      mclPrepareGlobal(&Wavelets_Info),
                      NULL);
                    /*
                     * if isempty(Wavelets_Info)
                     */
                    if (mlfTobool(
                          mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                        /*
                         * err = 1
                         */
                        mlfAssign(&err, _mxarray19_);
                        mclPrintArray(mclVv(err, "err"), "err");
                    /*
                     * end
                     */
                    }
                    /*
                     * if err
                     */
                    if (mlfTobool(mclVv(err, "err"))) {
                        /*
                         * clc
                         */
                        mlfClc();
                        /*
                         * disp(' ');
                         */
                        mlfDisp(_mxarray20_);
                        /*
                         * disp('---------------------------------------------');
                         */
                        mlfDisp(_mxarray22_);
                        /*
                         * sprintf('*** File : %s not found ! ***', bin_ini_file);
                         */
                        mclAssignAns(
                          &ans,
                          mlfSprintf(
                            NULL,
                            _mxarray24_,
                            mclVv(bin_ini_file, "bin_ini_file"),
                            NULL));
                        /*
                         * disp(['***     Using rescue resource ... !     ***']);
                         */
                        mlfDisp(_mxarray26_);
                        /*
                         * disp('---------------------------------------------');
                         */
                        mlfDisp(_mxarray22_);
                        /*
                         * disp(' ');
                         */
                        mlfDisp(_mxarray20_);
                        /*
                         * Wavelets_Info  = wavemngr('rescue');
                         */
                        mlfAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          mlfNWavemngr(
                            0, mclValueVarargout(), _mxarray28_, NULL));
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
             * if nargout>0 , varargout{1} = Wavelets_Info; end
             */
            if (nargout_ > 0) {
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mclVg(&Wavelets_Info, "Wavelets_Info"));
            }
        /*
         * 
         * case 'clear' , clear global Wavelets_Info 
         */
        } else if (mclSwitchCompare(v_, _mxarray30_)) {
            mlfClear(mclPrepareGlobal(&Wavelets_Info), NULL);
        /*
         * 
         * case 'indw'
         */
        } else if (mclSwitchCompare(v_, _mxarray32_)) {
            /*
             * % in2 : wavelet name
             * %-------------------
             * % out1 = i_fam
             * % out2 = i_num
             * % out3 = fam
             * % out4 = num_str
             * % out5 = tabNums
             * % out6 = flag '**' (for GUI)
             * %---------------------------
             * 
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * 
             * nb_fam = size(Wavelets_Info,1);
             */
            mlfAssign(
              &nb_fam,
              mlfSize(
                mclValueVarargout(),
                mclVg(&Wavelets_Info, "Wavelets_Info"),
                _mxarray19_));
            /*
             * wname  = deblankl(varargin{1});
             */
            mlfAssign(
              &wname,
              mclFeval(
                mclValueVarargout(),
                mlxDeblankl,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * lwna   = length(wname);
             */
            mlfAssign(&lwna, mlfScalar(mclLengthInt(mclVv(wname, "wname"))));
            /*
             * 
             * for i_fam=1:nb_fam
             */
            {
                int v_0 = mclForIntStart(1);
                int e_ = mclForIntEnd(mclVv(nb_fam, "nb_fam"));
                if (v_0 > e_) {
                    mlfAssign(&i_fam, _mxarray34_);
                } else {
                    /*
                     * fam = Wavelets_Info(i_fam).familyShortName;
                     * len = length(fam);
                     * ok_wave = 0;
                     * if lwna>=len
                     * if fam==wname(1:len)
                     * tabNums = Wavelets_Info(i_fam).tabNums;
                     * for i_num = 1:size(tabNums,1)
                     * num_str = noblank(tabNums(i_num,:));
                     * if strcmp(num_str,'no') , num_str = '' ; end
                     * if strcmp([fam num_str],wname)
                     * ok_wave = 1; add_num = 0; break;
                     * end
                     * end
                     * 
                     * % test for ** number
                     * %------------------
                     * if ok_wave==0 & strcmp(num_str,'**') & (lwna>len)
                     * typNums = Wavelets_Info(i_fam).typNums;
                     * num_str = wname(len+1:lwna);
                     * switch typNums
                     * case 'integer'
                     * num = wstr2num(num_str);
                     * if ~isempty(num) & (num==fix(num)) & (0<num)
                     * ok_wave = 1; add_num = 1;
                     * end
                     * 
                     * case 'real'
                     * num = wstr2num(num_str);
                     * if ~isempty(num)
                     * ok_wave = 1; add_num = 1;
                     * end
                     * 
                     * case 'string'
                     * ok_wave = 1; add_num = 1;
                     * end                        
                     * end
                     * 
                     * end
                     * end
                     * if ok_wave , break; end
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(
                          &fam,
                          mlfIndexRef(
                            mclVg(&Wavelets_Info, "Wavelets_Info"),
                            "(?).familyShortName",
                            mlfScalar(v_0)));
                        mlfAssign(
                          &len, mlfScalar(mclLengthInt(mclVv(fam, "fam"))));
                        mlfAssign(&ok_wave, _mxarray18_);
                        if (mclGeBool(mclVv(lwna, "lwna"), mclVv(len, "len"))) {
                            if (mclEqBool(
                                  mclVv(fam, "fam"),
                                  mclArrayRef1(
                                    mclVv(wname, "wname"),
                                    mlfColon(
                                      _mxarray19_, mclVv(len, "len"), NULL)))) {
                                mlfAssign(
                                  &tabNums,
                                  mlfIndexRef(
                                    mclVg(&Wavelets_Info, "Wavelets_Info"),
                                    "(?).tabNums",
                                    mlfScalar(v_0)));
                                {
                                    int v_1 = mclForIntStart(1);
                                    int e_0
                                      = mclForIntEnd(
                                          mlfSize(
                                            mclValueVarargout(),
                                            mclVv(tabNums, "tabNums"),
                                            _mxarray19_));
                                    if (v_1 > e_0) {
                                        mlfAssign(&i_num, _mxarray34_);
                                    } else {
                                        for (; ; ) {
                                            mlfAssign(
                                              &num_str,
                                              mlfWavemngr_noblank(
                                                mclArrayRef2(
                                                  mclVv(tabNums, "tabNums"),
                                                  mlfScalar(v_1),
                                                  mlfCreateColonIndex())));
                                            if (mlfTobool(
                                                  mlfStrcmp(
                                                    mclVv(num_str, "num_str"),
                                                    _mxarray35_))) {
                                                mlfAssign(
                                                  &num_str, _mxarray37_);
                                            }
                                            if (mlfTobool(
                                                  mlfStrcmp(
                                                    mlfHorzcat(
                                                      mclVv(fam, "fam"),
                                                      mclVv(num_str, "num_str"),
                                                      NULL),
                                                    mclVv(wname, "wname")))) {
                                                mlfAssign(
                                                  &ok_wave, _mxarray19_);
                                                mlfAssign(
                                                  &add_num, _mxarray18_);
                                                break;
                                            }
                                            if (v_1 == e_0) {
                                                break;
                                            }
                                            ++v_1;
                                        }
                                        mlfAssign(&i_num, mlfScalar(v_1));
                                    }
                                }
                                {
                                    mxArray * a_
                                      = mclInitialize(
                                          mclEq(
                                            mclVv(ok_wave, "ok_wave"),
                                            _mxarray18_));
                                    if (mlfTobool(a_)) {
                                        mlfAssign(
                                          &a_,
                                          mclAnd(
                                            a_,
                                            mlfStrcmp(
                                              mclVv(num_str, "num_str"),
                                              _mxarray38_)));
                                    } else {
                                        mlfAssign(&a_, mlfScalar(0));
                                    }
                                    if (mlfTobool(a_)
                                        && mlfTobool(
                                             mclAnd(
                                               a_,
                                               mclGt(
                                                 mclVv(lwna, "lwna"),
                                                 mclVv(len, "len"))))) {
                                        mxDestroyArray(a_);
                                        mlfAssign(
                                          &typNums,
                                          mlfIndexRef(
                                            mclVg(
                                              &Wavelets_Info, "Wavelets_Info"),
                                            "(?).typNums",
                                            mlfScalar(v_0)));
                                        mlfAssign(
                                          &num_str,
                                          mclArrayRef1(
                                            mclVv(wname, "wname"),
                                            mlfColon(
                                              mclPlus(
                                                mclVv(len, "len"), _mxarray19_),
                                              mclVv(lwna, "lwna"),
                                              NULL)));
                                        {
                                            mxArray * v_2
                                              = mclInitialize(
                                                  mclVv(typNums, "typNums"));
                                            if (mclSwitchCompare(
                                                  v_2, _mxarray40_)) {
                                                mlfAssign(
                                                  &num,
                                                  mlfWstr2num(
                                                    mclVv(num_str, "num_str")));
                                                {
                                                    mxArray * a_0
                                                      = mclInitialize(
                                                          mclNot(
                                                            mlfIsempty(
                                                              mclVv(
                                                                num, "num"))));
                                                    if (mlfTobool(a_0)) {
                                                        mlfAssign(
                                                          &a_0,
                                                          mclAnd(
                                                            a_0,
                                                            mclEq(
                                                              mclVv(num, "num"),
                                                              mlfFix(
                                                                mclVv(
                                                                  num,
                                                                  "num")))));
                                                    } else {
                                                        mlfAssign(
                                                          &a_0, mlfScalar(0));
                                                    }
                                                    if (mlfTobool(a_0)
                                                        && mlfTobool(
                                                             mclAnd(
                                                               a_0,
                                                               mclLt(
                                                                 _mxarray18_,
                                                                 mclVv(
                                                                   num,
                                                                   "num"))))) {
                                                        mxDestroyArray(a_0);
                                                        mlfAssign(
                                                          &ok_wave,
                                                          _mxarray19_);
                                                        mlfAssign(
                                                          &add_num,
                                                          _mxarray19_);
                                                    } else {
                                                        mxDestroyArray(a_0);
                                                    }
                                                }
                                            } else if (mclSwitchCompare(
                                                         v_2, _mxarray42_)) {
                                                mlfAssign(
                                                  &num,
                                                  mlfWstr2num(
                                                    mclVv(num_str, "num_str")));
                                                if (mclNotBool(
                                                      mlfIsempty(
                                                        mclVv(num, "num")))) {
                                                    mlfAssign(
                                                      &ok_wave, _mxarray19_);
                                                    mlfAssign(
                                                      &add_num, _mxarray19_);
                                                }
                                            } else if (mclSwitchCompare(
                                                         v_2, _mxarray44_)) {
                                                mlfAssign(
                                                  &ok_wave, _mxarray19_);
                                                mlfAssign(
                                                  &add_num, _mxarray19_);
                                            }
                                            mxDestroyArray(v_2);
                                        }
                                    } else {
                                        mxDestroyArray(a_);
                                    }
                                }
                            }
                        }
                        if (mlfTobool(mclVv(ok_wave, "ok_wave"))) {
                            break;
                        }
                        if (v_0 == e_) {
                            break;
                        }
                        ++v_0;
                    }
                    mlfAssign(&i_fam, mlfScalar(v_0));
                }
            }
            /*
             * 
             * 
             * if ok_wave
             */
            if (mlfTobool(mclVv(ok_wave, "ok_wave"))) {
                /*
                 * varargout = {i_fam,i_num};
                 */
                mlfAssign(
                  &varargout,
                  mlfCellhcat(
                    mclVv(i_fam, "i_fam"), mclVv(i_num, "i_num"), NULL));
                /*
                 * if nargout<3 , return; end
                 */
                if (nargout_ < 3) {
                    mxDestroyArray(v_);
                    goto return_;
                }
                /*
                 * varargout = {varargout{:},fam,num_str,tabNums,add_num};
                 */
                mlfAssign(
                  &varargout,
                  mlfCellhcat(
                    mlfIndexRef(
                      mclVv(varargout, "varargout"),
                      "{?}",
                      mlfCreateColonIndex()),
                    mclVv(fam, "fam"),
                    mclVv(num_str, "num_str"),
                    mclVv(tabNums, "tabNums"),
                    mclVv(add_num, "add_num"),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * msg = sprintf('Invalid wavelet name : %s', wname);
                 */
                mlfAssign(
                  &msg,
                  mlfSprintf(NULL, _mxarray46_, mclVv(wname, "wname"), NULL));
                /*
                 * errargt('Wavelet test',msg,'msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    _mxarray48_, mclVv(msg, "msg"), _mxarray50_, NULL));
                /*
                 * error(['***  ' msg '  ***']);
                 */
                mlfError(
                  mlfHorzcat(_mxarray52_, mclVv(msg, "msg"), _mxarray54_, NULL),
                  NULL);
            /*
             * end
             */
            }
        /*
         * 
         * case 'indf'
         */
        } else if (mclSwitchCompare(v_, _mxarray56_)) {
            /*
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * fsnCell  = {Wavelets_Info(:).familyShortName}';
             */
            mlfAssign(
              &fsnCell,
              mlfCtranspose(
                mlfCellhcat(
                  mlfIndexRef(
                    mclVg(&Wavelets_Info, "Wavelets_Info"),
                    "(?).familyShortName",
                    mlfCreateColonIndex()),
                  NULL)));
            /*
             * fsnInput = deblankl(varargin{1});
             */
            mlfAssign(
              &fsnInput,
              mclFeval(
                mclValueVarargout(),
                mlxDeblankl,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = find(strcmp(fsnInput,fsnCell)==1);
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfFind(
                NULL,
                NULL,
                mclEq(
                  mlfStrcmp(
                    mclVv(fsnInput, "fsnInput"), mclVv(fsnCell, "fsnCell")),
                  _mxarray19_)));
        /*
         * 
         * case 'tfsn'
         */
        } else if (mclSwitchCompare(v_, _mxarray58_)) {
            /*
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * fsnCell = {Wavelets_Info(:).familyShortName}';
             */
            mlfAssign(
              &fsnCell,
              mlfCtranspose(
                mlfCellhcat(
                  mlfIndexRef(
                    mclVg(&Wavelets_Info, "Wavelets_Info"),
                    "(?).familyShortName",
                    mlfCreateColonIndex()),
                  NULL)));
            /*
             * varargout{1} = strvcat(fsnCell{:});
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfStrvcat(
                mlfIndexRef(
                  mclVv(fsnCell, "fsnCell"), "{?}", mlfCreateColonIndex()),
                NULL));
            /*
             * if nargin==2
             */
            if (nargin_ == 2) {
                /*
                 * wtype = lower(varargin{1});
                 */
                mlfAssign(
                  &wtype,
                  mclFeval(
                    mclValueVarargout(),
                    mlxLower,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                    NULL));
                /*
                 * if isequal(wtype,'all') , return; end
                 */
                if (mlfTobool(
                      mlfIsequal(mclVv(wtype, "wtype"), _mxarray60_, NULL))) {
                    mxDestroyArray(v_);
                    goto return_;
                }
                /*
                 * tab_type = {Wavelets_Info(:).type}';
                 */
                mlfAssign(
                  &tab_type,
                  mlfCtranspose(
                    mlfCellhcat(
                      mlfIndexRef(
                        mclVg(&Wavelets_Info, "Wavelets_Info"),
                        "(?).type",
                        mlfCreateColonIndex()),
                      NULL)));
                /*
                 * tab_type = cat(1,tab_type{:});
                 */
                mlfAssign(
                  &tab_type,
                  mlfCat(
                    _mxarray19_,
                    mlfIndexRef(
                      mclVv(tab_type, "tab_type"),
                      "{?}",
                      mlfCreateColonIndex()),
                    NULL));
                /*
                 * switch wtype
                 */
                {
                    mxArray * v_3 = mclInitialize(mclVv(wtype, "wtype"));
                    if (mclSwitchCompare(v_3, _mxarray62_)) {
                        /*
                         * case {'dwt'}  , ind = find(tab_type==1 | tab_type==2);
                         */
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclOr(
                              mclEq(mclVv(tab_type, "tab_type"), _mxarray19_),
                              mclEq(
                                mclVv(tab_type, "tab_type"), _mxarray65_))));
                    /*
                     * case {'cwt'}  , ind = find(tab_type>0 & tab_type<5);
                     */
                    } else if (mclSwitchCompare(v_3, _mxarray66_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclAnd(
                              mclGt(mclVv(tab_type, "tab_type"), _mxarray18_),
                              mclLt(
                                mclVv(tab_type, "tab_type"), _mxarray69_))));
                    /*
                     * case {'owt'}  , ind = find(tab_type==1);
                     */
                    } else if (mclSwitchCompare(v_3, _mxarray70_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(tab_type, "tab_type"), _mxarray19_)));
                    /*
                     * case {'ccwt'} , ind = find(tab_type==5);
                     */
                    } else if (mclSwitchCompare(v_3, _mxarray73_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(tab_type, "tab_type"), _mxarray69_)));
                    /*
                     * case {'666'}
                     */
                    } else if (mclSwitchCompare(v_3, _mxarray76_)) {
                        /*
                         * ind = [find(tab_type==5) ; find(tab_type>0 & tab_type<5)];
                         */
                        mlfAssign(
                          &ind,
                          mlfVertcat(
                            mlfFind(
                              NULL,
                              NULL,
                              mclEq(mclVv(tab_type, "tab_type"), _mxarray69_)),
                            mlfFind(
                              NULL,
                              NULL,
                              mclAnd(
                                mclGt(mclVv(tab_type, "tab_type"), _mxarray18_),
                                mclLt(
                                  mclVv(tab_type, "tab_type"), _mxarray69_))),
                            NULL));
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_3);
                }
                /*
                 * varargout{1} = varargout{1}(ind,:);
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mlfIndexRef(
                    mclVv(varargout, "varargout"),
                    "{?}(?,?)",
                    _mxarray19_,
                    mclVv(ind, "ind"),
                    mlfCreateColonIndex()));
            /*
             * end
             */
            }
        /*
         * 
         * case 'tfn'
         */
        } else if (mclSwitchCompare(v_, _mxarray79_)) {
            /*
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * fnCell = {Wavelets_Info(:).familyName}';
             */
            mlfAssign(
              &fnCell,
              mlfCtranspose(
                mlfCellhcat(
                  mlfIndexRef(
                    mclVg(&Wavelets_Info, "Wavelets_Info"),
                    "(?).familyName",
                    mlfCreateColonIndex()),
                  NULL)));
            /*
             * varargout{1} = strvcat(fnCell{:});
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfStrvcat(
                mlfIndexRef(
                  mclVv(fnCell, "fnCell"), "{?}", mlfCreateColonIndex()),
                NULL));
            /*
             * if nargin==2
             */
            if (nargin_ == 2) {
                /*
                 * wtype = lower(varargin{1});
                 */
                mlfAssign(
                  &wtype,
                  mclFeval(
                    mclValueVarargout(),
                    mlxLower,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                    NULL));
                /*
                 * if isequal(wtype,'all') , return; end
                 */
                if (mlfTobool(
                      mlfIsequal(mclVv(wtype, "wtype"), _mxarray60_, NULL))) {
                    mxDestroyArray(v_);
                    goto return_;
                }
                /*
                 * tab_type = {Wavelets_Info(:).type}';
                 */
                mlfAssign(
                  &tab_type,
                  mlfCtranspose(
                    mlfCellhcat(
                      mlfIndexRef(
                        mclVg(&Wavelets_Info, "Wavelets_Info"),
                        "(?).type",
                        mlfCreateColonIndex()),
                      NULL)));
                /*
                 * tab_type = cat(1,tab_type{:});
                 */
                mlfAssign(
                  &tab_type,
                  mlfCat(
                    _mxarray19_,
                    mlfIndexRef(
                      mclVv(tab_type, "tab_type"),
                      "{?}",
                      mlfCreateColonIndex()),
                    NULL));
                /*
                 * switch wtype
                 */
                {
                    mxArray * v_4 = mclInitialize(mclVv(wtype, "wtype"));
                    if (mclSwitchCompare(v_4, _mxarray62_)) {
                        /*
                         * case {'dwt'}  , ind = find(tab_type==1 | tab_type==2);
                         */
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclOr(
                              mclEq(mclVv(tab_type, "tab_type"), _mxarray19_),
                              mclEq(
                                mclVv(tab_type, "tab_type"), _mxarray65_))));
                    /*
                     * case {'cwt'}  , ind = find(tab_type>0 & tab_type<5);
                     */
                    } else if (mclSwitchCompare(v_4, _mxarray66_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclAnd(
                              mclGt(mclVv(tab_type, "tab_type"), _mxarray18_),
                              mclLt(
                                mclVv(tab_type, "tab_type"), _mxarray69_))));
                    /*
                     * case {'owt'}  , ind = find(tab_type==1);
                     */
                    } else if (mclSwitchCompare(v_4, _mxarray70_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(tab_type, "tab_type"), _mxarray19_)));
                    /*
                     * case {'ccwt'} , ind = find(tab_type==5);
                     */
                    } else if (mclSwitchCompare(v_4, _mxarray73_)) {
                        mlfAssign(
                          &ind,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(tab_type, "tab_type"), _mxarray69_)));
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_4);
                }
                /*
                 * varargout{1} = varargout{1}(ind,:);
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mlfIndexRef(
                    mclVv(varargout, "varargout"),
                    "{?}(?,?)",
                    _mxarray19_,
                    mclVv(ind, "ind"),
                    mlfCreateColonIndex()));
            /*
             * end
             */
            }
        /*
         * 
         * case 'fields'
         */
        } else if (mclSwitchCompare(v_, _mxarray81_)) {
            /*
             * 
             * 
             * % in2 = {'ind', wavelet index} or
             * % in2 = {'fsn', family shortname} or
             * % in2 = {'wn' , wavelet name}
             * % or
             * % in2 = wavelet name
             * %----------------------------
             * % in3  ... = field(s) name(s)
             * %----------------------------
             * % out1 ... = field(s) value(s)
             * %-----------------------------
             * if iscell(varargin{1})
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxIscell,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                    NULL))) {
                /*
                 * in_type = varargin{1}{1};
                 */
                mlfAssign(
                  &in_type,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}{?}",
                    _mxarray19_,
                    _mxarray19_));
                /*
                 * arg = varargin{1}{2};
                 */
                mlfAssign(
                  &arg,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}{?}",
                    _mxarray19_,
                    _mxarray65_));
            /*
             * else
             */
            } else {
                /*
                 * in_type = 'wn';
                 */
                mlfAssign(&in_type, _mxarray83_);
                /*
                 * arg = varargin{1};
                 */
                mlfAssign(
                  &arg,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_));
            /*
             * end
             */
            }
            /*
             * switch in_type
             */
            {
                mxArray * v_5 = mclInitialize(mclVv(in_type, "in_type"));
                if (mclSwitchCompare(v_5, _mxarray85_)) {
                    /*
                     * case 'ind'
                     * if isempty(Wavelets_Info) , wavemngr('load'); end
                     */
                    if (mlfTobool(
                          mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                        mclAssignAns(
                          &ans,
                          mlfNWavemngr(
                            0, mclAnsVarargout(), _mxarray16_, NULL));
                    }
                    /*
                     * i_fam = arg;
                     */
                    mlfAssign(&i_fam, mclVv(arg, "arg"));
                /*
                 * 
                 * case 'fsn' , i_fam = wavemngr('indf',arg);
                 */
                } else if (mclSwitchCompare(v_5, _mxarray87_)) {
                    mlfAssign(
                      &i_fam,
                      mlfNWavemngr(
                        0,
                        mclValueVarargout(),
                        _mxarray56_,
                        mclVv(arg, "arg"),
                        NULL));
                /*
                 * case 'wn'  , i_fam = wavemngr('indw',arg);
                 */
                } else if (mclSwitchCompare(v_5, _mxarray83_)) {
                    mlfAssign(
                      &i_fam,
                      mlfNWavemngr(
                        0,
                        mclValueVarargout(),
                        _mxarray32_,
                        mclVv(arg, "arg"),
                        NULL));
                /*
                 * end
                 */
                }
                mxDestroyArray(v_5);
            }
            /*
             * 
             * nb = nargin-2;
             */
            mlfAssign(&nb, mlfScalar(nargin_ - 2));
            /*
             * if nb==0
             */
            if (mclEqBool(mclVv(nb, "nb"), _mxarray18_)) {
                /*
                 * varargout{1} = getfield(Wavelets_Info(varargin{1}));
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mlfGetfield(
                    mclArrayRef1(
                      mclVg(&Wavelets_Info, "Wavelets_Info"),
                      mlfIndexRef(
                        mclVa(varargin, "varargin"), "{?}", _mxarray19_)),
                    NULL));
                /*
                 * return;
                 */
                mxDestroyArray(v_);
                goto return_;
            /*
             * end
             */
            }
            /*
             * for k=1:nb
             */
            {
                int v_6 = mclForIntStart(1);
                int e_ = mclForIntEnd(mclVv(nb, "nb"));
                if (v_6 > e_) {
                    mlfAssign(&k, _mxarray34_);
                } else {
                    /*
                     * switch varargin{k+1}
                     * case 'ind'     , field = 'index';
                     * case 'fn'      , field = 'familyName';
                     * case 'fsn'     , field = 'familyShortName';
                     * case 'type'    , field = 'type';
                     * case 'tabNums' , field = 'tabNums';
                     * case 'typNums' , field = 'typNums';
                     * case 'file'    , field = 'file';
                     * case 'bounds'  , field = 'bounds';
                     * otherwise      , field = '';
                     * end
                     * if ~isempty(field)
                     * varargout{k} = getfield(Wavelets_Info(i_fam),field);
                     * else
                     * varargout{k} = Wavelets_Info(i_fam);
                     * end
                     * end
                     */
                    for (; ; ) {
                        mxArray * v_7
                          = mclInitialize(
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                mlfScalar(v_6 + 1)));
                        if (mclSwitchCompare(v_7, _mxarray85_)) {
                            mlfAssign(&field, _mxarray89_);
                        } else if (mclSwitchCompare(v_7, _mxarray91_)) {
                            mlfAssign(&field, _mxarray93_);
                        } else if (mclSwitchCompare(v_7, _mxarray87_)) {
                            mlfAssign(&field, _mxarray95_);
                        } else if (mclSwitchCompare(v_7, _mxarray97_)) {
                            mlfAssign(&field, _mxarray97_);
                        } else if (mclSwitchCompare(v_7, _mxarray99_)) {
                            mlfAssign(&field, _mxarray99_);
                        } else if (mclSwitchCompare(v_7, _mxarray101_)) {
                            mlfAssign(&field, _mxarray101_);
                        } else if (mclSwitchCompare(v_7, _mxarray103_)) {
                            mlfAssign(&field, _mxarray103_);
                        } else if (mclSwitchCompare(v_7, _mxarray105_)) {
                            mlfAssign(&field, _mxarray105_);
                        } else {
                            mlfAssign(&field, _mxarray37_);
                        }
                        mxDestroyArray(v_7);
                        if (mclNotBool(mlfIsempty(mclVv(field, "field")))) {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_6),
                              mlfGetfield(
                                mclArrayRef1(
                                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                                  mclVv(i_fam, "i_fam")),
                                mclVv(field, "field"), NULL));
                        } else {
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              mlfScalar(v_6),
                              mclArrayRef1(
                                mclVg(&Wavelets_Info, "Wavelets_Info"),
                                mclVv(i_fam, "i_fam")));
                        }
                        if (v_6 == e_) {
                            break;
                        }
                        ++v_6;
                    }
                    mlfAssign(&k, mlfScalar(v_6));
                }
            }
        /*
         * 
         * case 'type'
         */
        } else if (mclSwitchCompare(v_, _mxarray97_)) {
            /*
             * i_fam = wavemngr('indw',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray32_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'type');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray97_, NULL));
        /*
         * 
         * case 'file'
         */
        } else if (mclSwitchCompare(v_, _mxarray103_)) {
            /*
             * i_fam = wavemngr('indw',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray32_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'file');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray103_, NULL));
        /*
         * 
         * case 'fn'
         */
        } else if (mclSwitchCompare(v_, _mxarray91_)) {
            /*
             * i_fam = wavemngr('indw',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray32_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'familyName');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray93_, NULL));
        /*
         * 
         * case 'fsn'
         */
        } else if (mclSwitchCompare(v_, _mxarray87_)) {
            /*
             * i_fam = wavemngr('indw',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray32_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'familyShortName');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray95_, NULL));
        /*
         * 
         * case {'tabnums','tabNums'}
         */
        } else if (mclSwitchCompare(v_, _mxarray107_)) {
            /*
             * i_fam = wavemngr('indf',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray56_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'tabNums');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray99_, NULL));
        /*
         * 
         * case {'typNums'}
         */
        } else if (mclSwitchCompare(v_, _mxarray111_)) {
            /*
             * i_fam = wavemngr('indf',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray56_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'typNums');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray101_, NULL));
        /*
         * 
         * case 'bounds'
         */
        } else if (mclSwitchCompare(v_, _mxarray105_)) {
            /*
             * i_fam = wavemngr('indw',varargin{1});
             */
            mlfAssign(
              &i_fam,
              mlfNWavemngr(
                0,
                mclValueVarargout(),
                _mxarray32_,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                NULL));
            /*
             * varargout{1} = getfield(Wavelets_Info(i_fam),'bounds');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfGetfield(
                mclArrayRef1(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  mclVv(i_fam, "i_fam")),
                _mxarray105_, NULL));
        /*
         * 
         * case 'isbior'
         */
        } else if (mclSwitchCompare(v_, _mxarray112_)) {
            /*
             * wname = varargin{1};
             */
            mlfAssign(
              &wname,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_));
            /*
             * if length(wname)>3,
             */
            if (mclLengthInt(mclVv(wname, "wname")) > 3) {
                /*
                 * wname = wname(1:4);
                 */
                mlfAssign(
                  &wname,
                  mclArrayRef1(
                    mclVv(wname, "wname"),
                    mlfColon(_mxarray19_, _mxarray114_, NULL)));
                /*
                 * varargout{1} = isequal(wname,'bior') | isequal(wname,'rbio');
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mclOr(
                    mlfIsequal(mclVv(wname, "wname"), _mxarray115_, NULL),
                    mlfIsequal(mclVv(wname, "wname"), _mxarray117_, NULL)));
            /*
             * else
             */
            } else {
                /*
                 * varargout{1} = 0;
                 */
                mlfIndexAssign(&varargout, "{?}", _mxarray19_, _mxarray18_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'fam_num'
         */
        } else if (mclSwitchCompare(v_, _mxarray119_)) {
            mlfAssign(&_T0_, _mxarray19_);
            mlfAssign(&_T1_, _mxarray65_);
            /*
             * [nul,nul,varargout{1},varargout{2}] = wavemngr('indw',varargin{1});
             */
            mlfNWavemngr(
              0,
              mlfIndexVarargout(
                &nul, "",
                &nul, "",
                &varargout, "{?}", _T0_,
                &varargout, "{?}", _T1_,
                NULL),
              _mxarray32_,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_),
              NULL);
        /*
         * 
         * case 'length'
         */
        } else if (mclSwitchCompare(v_, _mxarray121_)) {
            /*
             * wname = varargin{1};
             */
            mlfAssign(
              &wname,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_));
            /*
             * [wtype,bounds] = wavemngr('fields',{'wn',wname},'type','bounds');
             */
            mlfNWavemngr(
              0,
              mlfVarargout(&wtype, &bounds, NULL),
              _mxarray81_,
              mlfCellhcat(_mxarray83_, mclVv(wname, "wname"), NULL),
              _mxarray97_,
              _mxarray105_,
              NULL);
            /*
             * switch wtype
             */
            {
                mxArray * v_8 = mclInitialize(mclVv(wtype, "wtype"));
                if (mclSwitchCompare(v_8, _mxarray123_)) {
                    /*
                     * case {1,2}
                     * Lo_D = wfilters(wname);
                     */
                    mlfAssign(
                      &Lo_D,
                      mlfNWfilters(
                        0, mclValueVarargout(), mclVv(wname, "wname"), NULL));
                    /*
                     * varargout{1} = length(Lo_D);
                     */
                    mlfIndexAssign(
                      &varargout,
                      "{?}",
                      _mxarray19_,
                      mlfScalar(mclLengthInt(mclVv(Lo_D, "Lo_D"))));
                /*
                 * case {3,4}
                 */
                } else if (mclSwitchCompare(v_8, _mxarray125_)) {
                    /*
                     * varargout{1} = bounds(2)-bounds(1)+1;
                     */
                    mlfIndexAssign(
                      &varargout,
                      "{?}",
                      _mxarray19_,
                      mclPlus(
                        mclMinus(
                          mclIntArrayRef1(mclVv(bounds, "bounds"), 2),
                          mclIntArrayRef1(mclVv(bounds, "bounds"), 1)),
                        _mxarray19_));
                /*
                 * otherwise
                 */
                } else {
                    /*
                     * errargt(mfilename,'invalid argument','msg'); error('*');
                     */
                    mclAssignAns(
                      &ans,
                      mlfErrargt(
                        mxCreateString("wavemngr"),
                        _mxarray128_,
                        _mxarray50_,
                        NULL));
                    mlfError(_mxarray130_, NULL);
                /*
                 * end
                 */
                }
                mxDestroyArray(v_8);
            }
        /*
         * 
         * case 'create'
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            /*
             * wavemngr('clear')
             */
            mclPrintAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray30_, NULL));
            /*
             * beg_fam = 'Family Name : ';
             */
            mlfAssign(&beg_fam, _mxarray132_);
            /*
             * fid = fopen(asc_file);
             */
            mlfAssign(
              &fid,
              mlfFopen(NULL, NULL, mclVv(asc_file, "asc_file"), NULL, NULL));
            /*
             * if fid==-1
             */
            if (mclEqBool(mclVv(fid, "fid"), _mxarray134_)) {
                /*
                 * fid   = fopen(asc_ini_file); 
                 */
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_ini_file, "asc_ini_file"),
                    NULL,
                    NULL));
                /*
                 * winfo = fread(fid);
                 */
                mlfAssign(
                  &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
                /*
                 * fclose(fid);
                 */
                mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
                /*
                 * fid   = fopen(asc_file,'w');
                 */
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_file, "asc_file"),
                    _mxarray135_,
                    NULL));
                /*
                 * fwrite(fid,winfo); 
                 */
                mclAssignAns(
                  &ans,
                  mlfFwrite(
                    mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
                /*
                 * fclose(fid);
                 */
                mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * else
             */
            } else {
                /*
                 * winfo = fread(fid);
                 */
                mlfAssign(
                  &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
                /*
                 * fclose(fid);
                 */
                mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * end
             */
            }
            /*
             * winfo   = setstr(winfo');
             */
            mlfAssign(&winfo, mlfSetstr(mlfCtranspose(mclVv(winfo, "winfo"))));
            /*
             * str_NL  = findNL('string',winfo);
             */
            mlfAssign(
              &str_NL, mlfWavemngr_findNL(_mxarray44_, mclVv(winfo, "winfo")));
            /*
             * lennewl = length(str_NL);
             */
            mlfAssign(
              &lennewl, mlfScalar(mclLengthInt(mclVv(str_NL, "str_NL"))));
            /*
             * ind_NL  = findstr(str_NL,winfo);
             */
            mlfAssign(
              &ind_NL,
              mlfFindstr(mclVv(str_NL, "str_NL"), mclVv(winfo, "winfo")));
            /*
             * first   = findstr(beg_fam,winfo)+length(beg_fam);
             */
            mlfAssign(
              &first,
              mclPlus(
                mlfFindstr(mclVv(beg_fam, "beg_fam"), mclVv(winfo, "winfo")),
                mlfScalar(mclLengthInt(mclVv(beg_fam, "beg_fam")))));
            /*
             * nb_fam  = length(first);
             */
            mlfAssign(&nb_fam, mlfScalar(mclLengthInt(mclVv(first, "first"))));
            /*
             * 
             * %------------------------------%
             * % Building Wavelets Structure. %
             * %------------------------------%
             * nul = cell(nb_fam,1);
             */
            mlfAssign(
              &nul, mlfCell(mclVv(nb_fam, "nb_fam"), _mxarray19_, NULL));
            /*
             * Wavelets_Info = struct(...
             */
            mlfAssign(
              mclPrepareGlobal(&Wavelets_Info),
              mlfStruct(
                _mxarray89_,
                mclVv(nul, "nul"),
                _mxarray93_,
                mclVv(nul, "nul"),
                _mxarray95_,
                mclVv(nul, "nul"),
                _mxarray97_,
                mclVv(nul, "nul"),
                _mxarray99_,
                mclVv(nul, "nul"),
                _mxarray101_,
                mclVv(nul, "nul"),
                _mxarray103_,
                mclVv(nul, "nul"),
                _mxarray105_,
                mclVv(nul, "nul"),
                NULL));
            /*
             * 'index',nul,           ...
             * 'familyName',nul,      ...
             * 'familyShortName',nul, ...
             * 'type',nul,            ...
             * 'tabNums',nul,         ...
             * 'typNums',nul,         ...
             * 'file',nul,            ...
             * 'bounds',nul           ...
             * );
             * 
             * for j = 1:nb_fam
             */
            {
                int v_9 = mclForIntStart(1);
                int e_ = mclForIntEnd(mclVv(nb_fam, "nb_fam"));
                if (v_9 > e_) {
                    mlfAssign(&j, _mxarray34_);
                } else {
                    /*
                     * i_fam   = first(j);
                     * indexs  = find(ind_NL>i_fam);
                     * indexs  = ind_NL(indexs(1:nb_InfoByWave));
                     * fam     = winfo(i_fam:indexs(1)-1);
                     * sname   = winfo(indexs(1)+lennewl:indexs(2)-1);
                     * wtype   = winfo(indexs(2)+lennewl:indexs(3)-1);
                     * nums    = winfo(indexs(3)+lennewl:indexs(4)-1);
                     * typNums = winfo(indexs(4)+lennewl:indexs(5)-1);                  
                     * fname   = winfo(indexs(5)+lennewl:indexs(6)-1);
                     * bounds  = winfo(indexs(6)+lennewl:indexs(7)-1);
                     * 
                     * notspace = ~isspace(nums);
                     * lnot     = length(notspace);
                     * index1   = find(notspace==1);
                     * k0       = index1(1);
                     * k1       = index1(length(index1));
                     * indnum   = diff(notspace);
                     * fnum     = find(indnum==1)+1;
                     * lnum     = find(indnum==-1);
                     * if k0==1    , fnum = [1 fnum];  end
                     * if k1==lnot , lnum = [lnum k1]; end
                     * nb_num   = length(fnum);
                     * tabNums  = '';
                     * for p = 1:nb_num
                     * tabNums = strvcat(tabNums,nums(fnum(p):lnum(p)));
                     * end
                     * 
                     * Wavelets_Info(j).index = j;
                     * Wavelets_Info(j).familyName = fam;
                     * Wavelets_Info(j).familyShortName = sname;
                     * Wavelets_Info(j).type = wstr2num(wtype);
                     * Wavelets_Info(j).tabNums = tabNums;
                     * Wavelets_Info(j).typNums = typNums;
                     * Wavelets_Info(j).file = fname;
                     * Wavelets_Info(j).bounds = wstr2num(bounds);
                     * end
                     */
                    for (; ; ) {
                        mlfAssign(
                          &i_fam, mclIntArrayRef1(mclVv(first, "first"), v_9));
                        mlfAssign(
                          &indexs,
                          mlfFind(
                            NULL,
                            NULL,
                            mclGt(
                              mclVv(ind_NL, "ind_NL"), mclVv(i_fam, "i_fam"))));
                        mlfAssign(
                          &indexs,
                          mclArrayRef1(
                            mclVv(ind_NL, "ind_NL"),
                            mclArrayRef1(
                              mclVv(indexs, "indexs"),
                              mlfColon(
                                _mxarray19_,
                                mclVv(nb_InfoByWave, "nb_InfoByWave"),
                                NULL))));
                        mlfAssign(
                          &fam,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclVv(i_fam, "i_fam"),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 1),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &sname,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 1),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 2),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &wtype,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 2),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 3),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &nums,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 3),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 4),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &typNums,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 4),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 5),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &fname,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 5),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 6),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &bounds,
                          mclArrayRef1(
                            mclVv(winfo, "winfo"),
                            mlfColon(
                              mclPlus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 6),
                                mclVv(lennewl, "lennewl")),
                              mclMinus(
                                mclIntArrayRef1(mclVv(indexs, "indexs"), 7),
                                _mxarray19_),
                              NULL)));
                        mlfAssign(
                          &notspace, mclNot(mlfIsspace(mclVv(nums, "nums"))));
                        mlfAssign(
                          &lnot,
                          mlfScalar(mclLengthInt(mclVv(notspace, "notspace"))));
                        mlfAssign(
                          &index1,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(notspace, "notspace"), _mxarray19_)));
                        mlfAssign(
                          &k0, mclIntArrayRef1(mclVv(index1, "index1"), 1));
                        mlfAssign(
                          &k1,
                          mclIntArrayRef1(
                            mclVv(index1, "index1"),
                            mclLengthInt(mclVv(index1, "index1"))));
                        mlfAssign(
                          &indnum,
                          mlfDiff(mclVv(notspace, "notspace"), NULL, NULL));
                        mlfAssign(
                          &fnum,
                          mclPlus(
                            mlfFind(
                              NULL,
                              NULL,
                              mclEq(mclVv(indnum, "indnum"), _mxarray19_)),
                            _mxarray19_));
                        mlfAssign(
                          &lnum,
                          mlfFind(
                            NULL,
                            NULL,
                            mclEq(mclVv(indnum, "indnum"), _mxarray134_)));
                        if (mclEqBool(mclVv(k0, "k0"), _mxarray19_)) {
                            mlfAssign(
                              &fnum,
                              mlfHorzcat(
                                _mxarray19_, mclVv(fnum, "fnum"), NULL));
                        }
                        if (mclEqBool(mclVv(k1, "k1"), mclVv(lnot, "lnot"))) {
                            mlfAssign(
                              &lnum,
                              mlfHorzcat(
                                mclVv(lnum, "lnum"), mclVv(k1, "k1"), NULL));
                        }
                        mlfAssign(
                          &nb_num,
                          mlfScalar(mclLengthInt(mclVv(fnum, "fnum"))));
                        mlfAssign(&tabNums, _mxarray37_);
                        {
                            int v_00 = mclForIntStart(1);
                            int e_1 = mclForIntEnd(mclVv(nb_num, "nb_num"));
                            if (v_00 > e_1) {
                                mlfAssign(&p, _mxarray34_);
                            } else {
                                for (; ; ) {
                                    mlfAssign(
                                      &tabNums,
                                      mlfStrvcat(
                                        mclVv(tabNums, "tabNums"),
                                        mclArrayRef1(
                                          mclVv(nums, "nums"),
                                          mlfColon(
                                            mclIntArrayRef1(
                                              mclVv(fnum, "fnum"), v_00),
                                            mclIntArrayRef1(
                                              mclVv(lnum, "lnum"), v_00),
                                            NULL)),
                                        NULL));
                                    if (v_00 == e_1) {
                                        break;
                                    }
                                    ++v_00;
                                }
                                mlfAssign(&p, mlfScalar(v_00));
                            }
                        }
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).index",
                          mlfScalar(v_9),
                          mlfScalar(v_9));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).familyName",
                          mlfScalar(v_9),
                          mclVv(fam, "fam"));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).familyShortName",
                          mlfScalar(v_9),
                          mclVv(sname, "sname"));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).type",
                          mlfScalar(v_9),
                          mlfWstr2num(mclVv(wtype, "wtype")));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).tabNums",
                          mlfScalar(v_9),
                          mclVv(tabNums, "tabNums"));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).typNums",
                          mlfScalar(v_9),
                          mclVv(typNums, "typNums"));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).file",
                          mlfScalar(v_9),
                          mclVv(fname, "fname"));
                        mlfIndexAssign(
                          mclPrepareGlobal(&Wavelets_Info),
                          "(?).bounds",
                          mlfScalar(v_9),
                          mlfWstr2num(mclVv(bounds, "bounds")));
                        if (v_9 == e_) {
                            break;
                        }
                        ++v_9;
                    }
                    mlfAssign(&j, mlfScalar(v_9));
                }
            }
            /*
             * 
             * err = 0;
             */
            mlfAssign(&err, _mxarray18_);
            /*
             * eval(['save ' bin_file ' Wavelets_Info'],'err = 1;');
             */
            mclAssignAns(
              &ans,
              mlfEval(
                mclAnsVarargout(),
                mlfHorzcat(
                  _mxarray137_,
                  mclVv(bin_file, "bin_file"),
                  _mxarray139_,
                  NULL),
                _mxarray141_));
            /*
             * if err
             */
            if (mlfTobool(mclVv(err, "err"))) {
                /*
                 * errargt(mfilename,'Changing Wavelets : Save FAILED !','msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("wavemngr"),
                    _mxarray143_,
                    _mxarray50_,
                    NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 'read'
         */
        } else if (mclSwitchCompare(v_, _mxarray145_)) {
            /*
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * nb_fam  = size(Wavelets_Info,1);
             */
            mlfAssign(
              &nb_fam,
              mlfSize(
                mclValueVarargout(),
                mclVg(&Wavelets_Info, "Wavelets_Info"),
                _mxarray19_));
            /*
             * sep_fam = '=';
             */
            mlfAssign(&sep_fam, _mxarray147_);
            /*
             * sep_fam = sep_fam(:,ones(1,35));
             */
            mlfAssign(
              &sep_fam,
              mclArrayRef2(
                mclVv(sep_fam, "sep_fam"),
                mlfCreateColonIndex(),
                mlfOnes(_mxarray19_, _mxarray149_, NULL)));
            /*
             * sep_num = '-';
             */
            mlfAssign(&sep_num, _mxarray150_);
            /*
             * sep_num = sep_num(:,ones(1,30));
             */
            mlfAssign(
              &sep_num,
              mclArrayRef2(
                mclVv(sep_num, "sep_num"),
                mlfCreateColonIndex(),
                mlfOnes(_mxarray19_, _mxarray152_, NULL)));
            /*
             * varargout{1} = sep_fam; 
             */
            mlfIndexAssign(
              &varargout, "{?}", _mxarray19_, mclVv(sep_fam, "sep_fam"));
            /*
             * tab     = setstr(9);
             */
            mlfAssign(&tab, mlfSetstr(_mxarray153_));
            /*
             * 
             * families = strvcat(Wavelets_Info(:).familyName);
             */
            mlfAssign(
              &families,
              mlfStrvcat(
                mlfIndexRef(
                  mclVg(&Wavelets_Info, "Wavelets_Info"),
                  "(?).familyName",
                  mlfCreateColonIndex()),
                NULL));
            /*
             * tabtab   = tab(ones(1,nb_fam),ones(1,2));
             */
            mlfAssign(
              &tabtab,
              mclArrayRef2(
                mclVv(tab, "tab"),
                mlfOnes(_mxarray19_, mclVv(nb_fam, "nb_fam"), NULL),
                mlfOnes(_mxarray19_, _mxarray65_, NULL)));
            /*
             * 
             * if  nargin==1
             */
            if (nargin_ == 1) {
                /*
                 * famSName    = strvcat(Wavelets_Info(:).familyShortName);
                 */
                mlfAssign(
                  &famSName,
                  mlfStrvcat(
                    mlfIndexRef(
                      mclVg(&Wavelets_Info, "Wavelets_Info"),
                      "(?).familyShortName",
                      mlfCreateColonIndex()),
                    NULL));
                /*
                 * famTAB      = [families tabtab famSName];
                 */
                mlfAssign(
                  &famTAB,
                  mlfHorzcat(
                    mclVv(families, "families"),
                    mclVv(tabtab, "tabtab"),
                    mclVv(famSName, "famSName"),
                    NULL));
                /*
                 * varargout{1}= strvcat(varargout{1},famTAB,sep_fam);
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray19_,
                  mlfStrvcat(
                    mlfIndexRef(
                      mclVv(varargout, "varargout"), "{?}", _mxarray19_),
                    mclVv(famTAB, "famTAB"),
                    mclVv(sep_fam, "sep_fam"),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * famTAB = [families tabtab];
                 */
                mlfAssign(
                  &famTAB,
                  mlfHorzcat(
                    mclVv(families, "families"),
                    mclVv(tabtab, "tabtab"),
                    NULL));
                /*
                 * for k =1:nb_fam
                 */
                {
                    int v_01 = mclForIntStart(1);
                    int e_ = mclForIntEnd(mclVv(nb_fam, "nb_fam"));
                    if (v_01 > e_) {
                        mlfAssign(&k, _mxarray34_);
                    } else {
                        /*
                         * sfname = Wavelets_Info(k).familyShortName;
                         * varargout{1} = strvcat(varargout{1},[famTAB(k,:) sfname]);
                         * nb     = 0;
                         * wnames = [];
                         * tabNums = Wavelets_Info(k).tabNums;
                         * if size(tabNums,1)>1
                         * varargout{1} = strvcat(varargout{1},sep_num);
                         * end
                         * for j = 1:size(tabNums,1)
                         * num_str = noblank(tabNums(j,:));
                         * if ~strcmp(num_str,'no')
                         * wnames = [wnames sfname noblank(tabNums(j,:)) tab];
                         * end
                         * if nb<3
                         * nb = nb+1;
                         * else
                         * if ~isempty(wnames)
                         * varargout{1} = strvcat(varargout{1},wnames);
                         * end
                         * nb  = 0;
                         * wnames = [];
                         * end
                         * end
                         * if nb>0 & ~isempty(wnames)
                         * varargout{1} = strvcat(varargout{1},wnames);
                         * end
                         * varargout{1} = strvcat(varargout{1},sep_fam);
                         * end
                         */
                        for (; ; ) {
                            mlfAssign(
                              &sfname,
                              mlfIndexRef(
                                mclVg(&Wavelets_Info, "Wavelets_Info"),
                                "(?).familyShortName",
                                mlfScalar(v_01)));
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              _mxarray19_,
                              mlfStrvcat(
                                mlfIndexRef(
                                  mclVv(varargout, "varargout"),
                                  "{?}",
                                  _mxarray19_),
                                mlfHorzcat(
                                  mclArrayRef2(
                                    mclVv(famTAB, "famTAB"),
                                    mlfScalar(v_01),
                                    mlfCreateColonIndex()),
                                  mclVv(sfname, "sfname"),
                                  NULL),
                                NULL));
                            mlfAssign(&nb, _mxarray18_);
                            mlfAssign(&wnames, _mxarray34_);
                            mlfAssign(
                              &tabNums,
                              mlfIndexRef(
                                mclVg(&Wavelets_Info, "Wavelets_Info"),
                                "(?).tabNums",
                                mlfScalar(v_01)));
                            if (mclGtBool(
                                  mlfSize(
                                    mclValueVarargout(),
                                    mclVv(tabNums, "tabNums"),
                                    _mxarray19_),
                                  _mxarray19_)) {
                                mlfIndexAssign(
                                  &varargout,
                                  "{?}",
                                  _mxarray19_,
                                  mlfStrvcat(
                                    mlfIndexRef(
                                      mclVv(varargout, "varargout"),
                                      "{?}",
                                      _mxarray19_),
                                    mclVv(sep_num, "sep_num"),
                                    NULL));
                            }
                            {
                                int v_02 = mclForIntStart(1);
                                int e_2
                                  = mclForIntEnd(
                                      mlfSize(
                                        mclValueVarargout(),
                                        mclVv(tabNums, "tabNums"),
                                        _mxarray19_));
                                if (v_02 > e_2) {
                                    mlfAssign(&j, _mxarray34_);
                                } else {
                                    for (; ; ) {
                                        mlfAssign(
                                          &num_str,
                                          mlfWavemngr_noblank(
                                            mclArrayRef2(
                                              mclVv(tabNums, "tabNums"),
                                              mlfScalar(v_02),
                                              mlfCreateColonIndex())));
                                        if (mclNotBool(
                                              mlfStrcmp(
                                                mclVv(num_str, "num_str"),
                                                _mxarray35_))) {
                                            mlfAssign(
                                              &wnames,
                                              mlfHorzcat(
                                                mclVv(wnames, "wnames"),
                                                mclVv(sfname, "sfname"),
                                                mlfWavemngr_noblank(
                                                  mclArrayRef2(
                                                    mclVv(tabNums, "tabNums"),
                                                    mlfScalar(v_02),
                                                    mlfCreateColonIndex())),
                                                mclVv(tab, "tab"),
                                                NULL));
                                        }
                                        if (mclLtBool(
                                              mclVv(nb, "nb"), _mxarray127_)) {
                                            mlfAssign(
                                              &nb,
                                              mclPlus(
                                                mclVv(nb, "nb"), _mxarray19_));
                                        } else {
                                            if (mclNotBool(
                                                  mlfIsempty(
                                                    mclVv(wnames, "wnames")))) {
                                                mlfIndexAssign(
                                                  &varargout,
                                                  "{?}",
                                                  _mxarray19_,
                                                  mlfStrvcat(
                                                    mlfIndexRef(
                                                      mclVv(
                                                        varargout, "varargout"),
                                                      "{?}",
                                                      _mxarray19_),
                                                    mclVv(wnames, "wnames"),
                                                    NULL));
                                            }
                                            mlfAssign(&nb, _mxarray18_);
                                            mlfAssign(&wnames, _mxarray34_);
                                        }
                                        if (v_02 == e_2) {
                                            break;
                                        }
                                        ++v_02;
                                    }
                                    mlfAssign(&j, mlfScalar(v_02));
                                }
                            }
                            {
                                mxArray * a_
                                  = mclInitialize(
                                      mclGt(mclVv(nb, "nb"), _mxarray18_));
                                if (mlfTobool(a_)
                                    && mlfTobool(
                                         mclAnd(
                                           a_,
                                           mclNot(
                                             mlfIsempty(
                                               mclVv(wnames, "wnames")))))) {
                                    mxDestroyArray(a_);
                                    mlfIndexAssign(
                                      &varargout,
                                      "{?}",
                                      _mxarray19_,
                                      mlfStrvcat(
                                        mlfIndexRef(
                                          mclVv(varargout, "varargout"),
                                          "{?}",
                                          _mxarray19_),
                                        mclVv(wnames, "wnames"),
                                        NULL));
                                } else {
                                    mxDestroyArray(a_);
                                }
                            }
                            mlfIndexAssign(
                              &varargout,
                              "{?}",
                              _mxarray19_,
                              mlfStrvcat(
                                mlfIndexRef(
                                  mclVv(varargout, "varargout"),
                                  "{?}",
                                  _mxarray19_),
                                mclVv(sep_fam, "sep_fam"),
                                NULL));
                            if (v_01 == e_) {
                                break;
                            }
                            ++v_01;
                        }
                        mlfAssign(&k, mlfScalar(v_01));
                    }
                }
            /*
             * end
             */
            }
        /*
         * 
         * case 'read_asc'
         */
        } else if (mclSwitchCompare(v_, _mxarray154_)) {
            /*
             * fid = fopen(asc_file);
             */
            mlfAssign(
              &fid,
              mlfFopen(NULL, NULL, mclVv(asc_file, "asc_file"), NULL, NULL));
            /*
             * if fid==-1 , fid = fopen(asc_ini_file); end
             */
            if (mclEqBool(mclVv(fid, "fid"), _mxarray134_)) {
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_ini_file, "asc_ini_file"),
                    NULL,
                    NULL));
            }
            /*
             * winfo = fread(fid);
             */
            mlfAssign(
              &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * varargout{1} = setstr(winfo');
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfSetstr(mlfCtranspose(mclVv(winfo, "winfo"))));
        /*
         * 
         * case 'read_struct'
         */
        } else if (mclSwitchCompare(v_, _mxarray156_)) {
            /*
             * if isempty(Wavelets_Info) , wavemngr('load'); end
             */
            if (mlfTobool(mlfIsempty(mclVg(&Wavelets_Info, "Wavelets_Info")))) {
                mclAssignAns(
                  &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray16_, NULL));
            }
            /*
             * if nargin==2
             */
            if (nargin_ == 2) {
                /*
                 * indfam = varargin{1};
                 */
                mlfAssign(
                  &indfam,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_));
            /*
             * else
             */
            } else {
                /*
                 * nb_fam = size(Wavelets_Info,1);
                 */
                mlfAssign(
                  &nb_fam,
                  mlfSize(
                    mclValueVarargout(),
                    mclVg(&Wavelets_Info, "Wavelets_Info"),
                    _mxarray19_));
                /*
                 * indfam = [1:nb_fam];
                 */
                mlfAssign(
                  &indfam,
                  mlfColon(_mxarray19_, mclVv(nb_fam, "nb_fam"), NULL));
            /*
             * end
             */
            }
            /*
             * if nargout==0
             */
            if (nargout_ == 0) {
                /*
                 * sep_fam = '*';
                 */
                mlfAssign(&sep_fam, _mxarray130_);
                /*
                 * sep_fam = sep_fam(:,ones(1,35));
                 */
                mlfAssign(
                  &sep_fam,
                  mclArrayRef2(
                    mclVv(sep_fam, "sep_fam"),
                    mlfCreateColonIndex(),
                    mlfOnes(_mxarray19_, _mxarray149_, NULL)));
                /*
                 * disp(' '); disp(' '); disp(' ');
                 */
                mlfDisp(_mxarray20_);
                mlfDisp(_mxarray20_);
                mlfDisp(_mxarray20_);
                /*
                 * disp(sep_fam);
                 */
                mlfDisp(mclVv(sep_fam, "sep_fam"));
            /*
             * end
             */
            }
            /*
             * for k =1:length(indfam)
             */
            {
                int v_03 = mclForIntStart(1);
                int e_ = mclLengthInt(mclVv(indfam, "indfam"));
                if (v_03 > e_) {
                    mlfAssign(&k, _mxarray34_);
                } else {
                    /*
                     * tmp{k} = Wavelets_Info(indfam(k));
                     * if nargout==0
                     * disp(tmp{k}); disp(sep_fam);
                     * end
                     * end
                     */
                    for (; ; ) {
                        mlfIndexAssign(
                          &tmp,
                          "{?}",
                          mlfScalar(v_03),
                          mclArrayRef1(
                            mclVg(&Wavelets_Info, "Wavelets_Info"),
                            mclIntArrayRef1(mclVv(indfam, "indfam"), v_03)));
                        if (nargout_ == 0) {
                            mclFeval(
                              mclAnsVarargout(),
                              mlxDisp,
                              mlfIndexRef(
                                mclVv(tmp, "tmp"), "{?}", mlfScalar(v_03)),
                              NULL);
                            mlfDisp(mclVv(sep_fam, "sep_fam"));
                        }
                        if (v_03 == e_) {
                            break;
                        }
                        ++v_03;
                    }
                    mlfAssign(&k, mlfScalar(v_03));
                }
            }
            /*
             * if nargout>0 , varargout = tmp; end
             */
            if (nargout_ > 0) {
                mlfAssign(&varargout, mclVv(tmp, "tmp"));
            }
        /*
         * 
         * case 'add'
         */
        } else if (mclSwitchCompare(v_, _mxarray158_)) {
            /*
             * wavemngr('clear')
             */
            mclPrintAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray30_, NULL));
            /*
             * Wavelets_Info = wavemngr('load');
             */
            mlfAssign(
              mclPrepareGlobal(&Wavelets_Info),
              mlfNWavemngr(0, mclValueVarargout(), _mxarray16_, NULL));
            /*
             * nb_fam = size(Wavelets_Info,1);
             */
            mlfAssign(
              &nb_fam,
              mlfSize(
                mclValueVarargout(),
                mclVg(&Wavelets_Info, "Wavelets_Info"),
                _mxarray19_));
            /*
             * err = 0;
             */
            mlfAssign(&err, _mxarray18_);
            /*
             * family_Name = varargin{1};        
             */
            mlfAssign(
              &family_Name,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray19_));
            /*
             * if isempty(family_Name)
             */
            if (mlfTobool(mlfIsempty(mclVv(family_Name, "family_Name")))) {
                /*
                 * err = 1; 
                 */
                mlfAssign(&err, _mxarray19_);
                /*
                 * msg = 'Wavelet Family Name is empty !';
                 */
                mlfAssign(&msg, _mxarray160_);
            /*
             * else
             */
            } else {
                /*
                 * fnIn  = noblank(family_Name);
                 */
                mlfAssign(
                  &fnIn,
                  mlfWavemngr_noblank(mclVv(family_Name, "family_Name")));
                /*
                 * tmpCell = {Wavelets_Info(:).familyName}';
                 */
                mlfAssign(
                  &tmpCell,
                  mlfCtranspose(
                    mlfCellhcat(
                      mlfIndexRef(
                        mclVg(&Wavelets_Info, "Wavelets_Info"),
                        "(?).familyName",
                        mlfCreateColonIndex()),
                      NULL)));
                /*
                 * ind   = find(strcmp(fnIn,tmpCell)==1);
                 */
                mlfAssign(
                  &ind,
                  mlfFind(
                    NULL,
                    NULL,
                    mclEq(
                      mlfStrcmp(mclVv(fnIn, "fnIn"), mclVv(tmpCell, "tmpCell")),
                      _mxarray19_)));
                /*
                 * err   = ~isempty(ind);
                 */
                mlfAssign(&err, mclNot(mlfIsempty(mclVv(ind, "ind"))));
                /*
                 * if err , msg = 'The Wavelet Family Name is already used !'; end
                 */
                if (mlfTobool(mclVv(err, "err"))) {
                    mlfAssign(&msg, _mxarray162_);
                }
            /*
             * end
             */
            }
            /*
             * 
             * if err==0
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * family_Short_Name = varargin{2};
                 */
                mlfAssign(
                  &family_Short_Name,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray65_));
                /*
                 * if isempty(family_Short_Name)
                 */
                if (mlfTobool(
                      mlfIsempty(
                        mclVv(family_Short_Name, "family_Short_Name")))) {
                    /*
                     * err = 1; 
                     */
                    mlfAssign(&err, _mxarray19_);
                    /*
                     * msg = 'Wavelet Family Short Name is empty !';
                     */
                    mlfAssign(&msg, _mxarray164_);
                /*
                 * else
                 */
                } else {
                    /*
                     * fsnIn   = deblankl(family_Short_Name);
                     */
                    mlfAssign(
                      &fsnIn,
                      mlfDeblankl(
                        mclVv(family_Short_Name, "family_Short_Name")));
                    /*
                     * tmpCell = {Wavelets_Info(:).familyShortName}';
                     */
                    mlfAssign(
                      &tmpCell,
                      mlfCtranspose(
                        mlfCellhcat(
                          mlfIndexRef(
                            mclVg(&Wavelets_Info, "Wavelets_Info"),
                            "(?).familyShortName",
                            mlfCreateColonIndex()),
                          NULL)));
                    /*
                     * ind     = find(strcmp(fsnIn,tmpCell)==1);
                     */
                    mlfAssign(
                      &ind,
                      mlfFind(
                        NULL,
                        NULL,
                        mclEq(
                          mlfStrcmp(
                            mclVv(fsnIn, "fsnIn"), mclVv(tmpCell, "tmpCell")),
                          _mxarray19_)));
                    /*
                     * err     = ~isempty(ind);
                     */
                    mlfAssign(&err, mclNot(mlfIsempty(mclVv(ind, "ind"))));
                    /*
                     * if err
                     */
                    if (mlfTobool(mclVv(err, "err"))) {
                        /*
                         * msg = 'The Wavelet Family Short Name is already used !';
                         */
                        mlfAssign(&msg, _mxarray166_);
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
             * if err==0
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * wavelet_Type = varargin{3};
                 */
                mlfAssign(
                  &wavelet_Type,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"), "{?}", _mxarray127_));
                /*
                 * if isempty(find(wavelet_Type==WaveTypePOS))
                 */
                if (mlfTobool(
                      mlfIsempty(
                        mlfFind(
                          NULL,
                          NULL,
                          mclEq(
                            mclVv(wavelet_Type, "wavelet_Type"),
                            mclVv(WaveTypePOS, "WaveTypePOS")))))) {
                    /*
                     * err = 1;
                     */
                    mlfAssign(&err, _mxarray19_);
                    /*
                     * msg = 'Invalid Wavelet Type !';
                     */
                    mlfAssign(&msg, _mxarray168_);
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
             * if err==0            
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * if isempty(varargin{4})
                 */
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIsempty,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray114_),
                        NULL))) {
                    /*
                     * wavelet_tabNums = 'no';
                     */
                    mlfAssign(&wavelet_tabNums, _mxarray35_);
                    /*
                     * wavelet_typNums = 'no';
                     */
                    mlfAssign(&wavelet_typNums, _mxarray35_);
                /*
                 * elseif ischar(varargin{4})
                 */
                } else if (mlfTobool(
                             mclFeval(
                               mclValueVarargout(),
                               mlxIschar,
                               mlfIndexRef(
                                 mclVa(varargin, "varargin"),
                                 "{?}",
                                 _mxarray114_),
                               NULL))) {
                    /*
                     * wavelet_tabNums = deblank(varargin{4});
                     */
                    mlfAssign(
                      &wavelet_tabNums,
                      mclFeval(
                        mclValueVarargout(),
                        mlxDeblank,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray114_),
                        NULL));
                    /*
                     * wavelet_typNums = 'integer';
                     */
                    mlfAssign(&wavelet_typNums, _mxarray40_);
                /*
                 * elseif iscell(varargin{4})
                 */
                } else if (mlfTobool(
                             mclFeval(
                               mclValueVarargout(),
                               mlxIscell,
                               mlfIndexRef(
                                 mclVa(varargin, "varargin"),
                                 "{?}",
                                 _mxarray114_),
                               NULL))) {
                    /*
                     * wavelet_tabNums = deblank(varargin{4}{1});
                     */
                    mlfAssign(
                      &wavelet_tabNums,
                      mclFeval(
                        mclValueVarargout(),
                        mlxDeblank,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"),
                          "{?}{?}",
                          _mxarray114_,
                          _mxarray19_),
                        NULL));
                    /*
                     * wavelet_typNums = deblank(varargin{4}{2});
                     */
                    mlfAssign(
                      &wavelet_typNums,
                      mclFeval(
                        mclValueVarargout(),
                        mlxDeblank,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"),
                          "{?}{?}",
                          _mxarray114_,
                          _mxarray65_),
                        NULL));
                    /*
                     * if ischar(wavelet_typNums)
                     */
                    if (mlfTobool(
                          mlfIschar(
                            mclVv(wavelet_typNums, "wavelet_typNums")))) {
                        /*
                         * switch wavelet_typNums
                         */
                        mxArray * v_04
                          = mclInitialize(
                              mclVv(wavelet_typNums, "wavelet_typNums"));
                        if (mclSwitchCompare(v_04, _mxarray170_)) {
                        /*
                         * case {'integer','real','string'}
                         * otherwise
                         */
                        } else {
                            /*
                             * err = 1;
                             */
                            mlfAssign(&err, _mxarray19_);
                            /*
                             * msg = 'Invalid Wavelet type of numbers !';
                             */
                            mlfAssign(&msg, _mxarray172_);
                        /*
                         * end                 
                         */
                        }
                        mxDestroyArray(v_04);
                    /*
                     * else
                     */
                    } else {
                        /*
                         * err = 1;
                         */
                        mlfAssign(&err, _mxarray19_);
                        /*
                         * msg = 'Invalid Wavelet type of numbers !';
                         */
                        mlfAssign(&msg, _mxarray172_);
                    /*
                     * end
                     */
                    }
                /*
                 * 
                 * else
                 */
                } else {
                    /*
                     * err = 1;
                     */
                    mlfAssign(&err, _mxarray19_);
                    /*
                     * msg = 'Invalid Wavelet numbers !';
                     */
                    mlfAssign(&msg, _mxarray174_);
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
             * if err==0
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * wavelet_File = varargin{5};
                 */
                mlfAssign(
                  &wavelet_File,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray69_));
                /*
                 * if isempty(wavelet_File)
                 */
                if (mlfTobool(
                      mlfIsempty(mclVv(wavelet_File, "wavelet_File")))) {
                    /*
                     * err = 1;
                     */
                    mlfAssign(&err, _mxarray19_);
                /*
                 * elseif findstr('.mat',wavelet_File)
                 */
                } else if (mlfTobool(
                             mlfFindstr(
                               _mxarray176_,
                               mclVv(wavelet_File, "wavelet_File")))) {
                /*
                 * 
                 * else 
                 */
                } else {
                    /*
                     * wavelet_File = deblankl(wavelet_File);
                     */
                    mlfAssign(
                      &wavelet_File,
                      mlfDeblankl(mclVv(wavelet_File, "wavelet_File")));
                    /*
                     * ind = findstr('.m',wavelet_File);
                     */
                    mlfAssign(
                      &ind,
                      mlfFindstr(
                        _mxarray178_, mclVv(wavelet_File, "wavelet_File")));
                    /*
                     * if ind>0 , wavelet_File = wavelet_File(1:ind-1); end
                     */
                    if (mclGtBool(mclVv(ind, "ind"), _mxarray18_)) {
                        mlfAssign(
                          &wavelet_File,
                          mclArrayRef1(
                            mclVv(wavelet_File, "wavelet_File"),
                            mlfColon(
                              _mxarray19_,
                              mclMinus(mclVv(ind, "ind"), _mxarray19_),
                              NULL)));
                    }
                    /*
                     * if isempty(wavelet_File) , err = 1; end
                     */
                    if (mlfTobool(
                          mlfIsempty(mclVv(wavelet_File, "wavelet_File")))) {
                        mlfAssign(&err, _mxarray19_);
                    }
                /*
                 * end
                 */
                }
                /*
                 * if err==1
                 */
                if (mclEqBool(mclVv(err, "err"), _mxarray19_)) {
                    /*
                     * msg = 'Invalid Wavelet File Name !';
                     */
                    mlfAssign(&msg, _mxarray180_);
                /*
                 * end
                 */
                }
            /*
             * end
             */
            }
            /*
             * if err==0
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * nbArgIN = length(varargin);
                 */
                mlfAssign(
                  &nbArgIN,
                  mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
                /*
                 * switch wavelet_Type
                 */
                {
                    mxArray * v_05
                      = mclInitialize(mclVv(wavelet_Type, "wavelet_Type"));
                    if (mclSwitchCompare(v_05, _mxarray123_)) {
                        /*
                         * case {1,2}
                         * if nbArgIN<6 , wavelet_Bounds = ''; end
                         */
                        if (mclLtBool(
                              mclVv(nbArgIN, "nbArgIN"), _mxarray182_)) {
                            mlfAssign(&wavelet_Bounds, _mxarray37_);
                        }
                    /*
                     * 
                     * otherwise  
                     */
                    } else {
                        /*
                         * if nbArgIN<6
                         */
                        if (mclLtBool(
                              mclVv(nbArgIN, "nbArgIN"), _mxarray182_)) {
                            /*
                             * err = 1;
                             */
                            mlfAssign(&err, _mxarray19_);
                            /*
                             * msg = 'Invalid number of arguments !';
                             */
                            mlfAssign(&msg, _mxarray183_);
                        /*
                         * else
                         */
                        } else {
                            /*
                             * wavelet_Bounds = varargin{6};
                             */
                            mlfAssign(
                              &wavelet_Bounds,
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                _mxarray182_));
                            /*
                             * if length(wavelet_Bounds)~=2,               err = 1;
                             */
                            if (mclLengthInt(
                                  mclVv(wavelet_Bounds, "wavelet_Bounds"))
                                != 2) {
                                mlfAssign(&err, _mxarray19_);
                            /*
                             * elseif wavelet_Bounds(1)>wavelet_Bounds(2), err = 1;
                             */
                            } else if (mclGtBool(
                                         mclIntArrayRef1(
                                           mclVv(
                                             wavelet_Bounds, "wavelet_Bounds"),
                                           1),
                                         mclIntArrayRef1(
                                           mclVv(
                                             wavelet_Bounds, "wavelet_Bounds"),
                                           2))) {
                                mlfAssign(&err, _mxarray19_);
                            /*
                             * end
                             */
                            }
                            /*
                             * if err==1
                             */
                            if (mclEqBool(mclVv(err, "err"), _mxarray19_)) {
                                /*
                                 * msg = 'Invalid value for wavelet bounds !';
                                 */
                                mlfAssign(&msg, _mxarray185_);
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
                    mxDestroyArray(v_05);
                }
            /*
             * end
             */
            }
            /*
             * if err
             */
            if (mlfTobool(mclVv(err, "err"))) {
                /*
                 * msg = strvcat('Add New Wavelet FAILED !!',msg);
                 */
                mlfAssign(
                  &msg, mlfStrvcat(_mxarray187_, mclVv(msg, "msg"), NULL));
                /*
                 * errargt(mfilename,msg,'msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("wavemngr"),
                    mclVv(msg, "msg"),
                    _mxarray50_,
                    NULL));
                /*
                 * return
                 */
                mxDestroyArray(v_);
                goto return_;
            /*
             * end
             */
            }
            /*
             * 
             * fid = fopen(asc_file);
             */
            mlfAssign(
              &fid,
              mlfFopen(NULL, NULL, mclVv(asc_file, "asc_file"), NULL, NULL));
            /*
             * if fid==-1 , fid = fopen(asc_ini_file); end
             */
            if (mclEqBool(mclVv(fid, "fid"), _mxarray134_)) {
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_ini_file, "asc_ini_file"),
                    NULL,
                    NULL));
            }
            /*
             * winfo = fread(fid);
             */
            mlfAssign(
              &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * fid = fopen(sav_file,'w');
             */
            mlfAssign(
              &fid,
              mlfFopen(
                NULL, NULL, mclVv(sav_file, "sav_file"), _mxarray135_, NULL));
            /*
             * fwrite(fid,winfo);
             */
            mclAssignAns(
              &ans,
              mlfFwrite(mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * 
             * Chrline = findNL('char',winfo);
             */
            mlfAssign(
              &Chrline,
              mlfWavemngr_findNL(_mxarray189_, mclVv(winfo, "winfo")));
            /*
             * beg_fam = 'Family Name : ';
             */
            mlfAssign(&beg_fam, _mxarray132_);
            /*
             * sep_fam = '------------------------';
             */
            mlfAssign(&sep_fam, _mxarray191_);
            /*
             * 
             * wavelet_Type = sprintf('%.0f',wavelet_Type);
             */
            mlfAssign(
              &wavelet_Type,
              mlfSprintf(
                NULL, _mxarray193_, mclVv(wavelet_Type, "wavelet_Type"), NULL));
            /*
             * if ~isempty(wavelet_Bounds)
             */
            if (mclNotBool(
                  mlfIsempty(mclVv(wavelet_Bounds, "wavelet_Bounds")))) {
                /*
                 * wavelet_Bounds = [num2str(wavelet_Bounds(1)) ' ' ...
                 */
                mlfAssign(
                  &wavelet_Bounds,
                  mlfHorzcat(
                    mlfNum2str(
                      mclIntArrayRef1(
                        mclVv(wavelet_Bounds, "wavelet_Bounds"), 1),
                      NULL),
                    _mxarray20_,
                    mlfNum2str(
                      mclIntArrayRef1(
                        mclVv(wavelet_Bounds, "wavelet_Bounds"), 2),
                      NULL),
                    NULL));
            /*
             * num2str(wavelet_Bounds(2))];
             * end
             */
            }
            /*
             * 
             * winfo = [winfo(1:end-1);           Chrline;  ...
             */
            mlfAssign(
              &winfo,
              mlfVertcat(
                mclArrayRef1(
                  mclVv(winfo, "winfo"),
                  mlfColon(
                    _mxarray19_,
                    mclMinus(
                      mlfEnd(mclVv(winfo, "winfo"), _mxarray19_, _mxarray19_),
                      _mxarray19_),
                    NULL)),
                mclVv(Chrline, "Chrline"),
                mlfAbs(mlfCtranspose(mclVv(beg_fam, "beg_fam"))),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(family_Name, "family_Name"), mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(family_Short_Name, "family_Short_Name"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(wavelet_Type, "wavelet_Type"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(wavelet_tabNums, "wavelet_tabNums"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(wavelet_typNums, "wavelet_typNums"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(wavelet_File, "wavelet_File"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(
                  mclArrayRef1(
                    mclVv(wavelet_Bounds, "wavelet_Bounds"),
                    mlfCreateColonIndex())),
                mclVv(Chrline, "Chrline"),
                mlfAbs(mlfCtranspose(mclVv(sep_fam, "sep_fam"))),
                mclVv(Chrline, "Chrline"),
                NULL));
            /*
             * abs(beg_fam'); ...
             * abs(family_Name(:));       Chrline;  ...
             * abs(family_Short_Name(:)); Chrline;  ...
             * abs(wavelet_Type(:));      Chrline;  ...
             * abs(wavelet_tabNums(:));   Chrline;  ...
             * abs(wavelet_typNums(:));   Chrline;  ...
             * abs(wavelet_File(:));      Chrline;  ...
             * abs(wavelet_Bounds(:));    Chrline;  ...
             * abs(sep_fam');             Chrline   ...
             * ];
             * 
             * fid = fopen(asc_file,'w');
             */
            mlfAssign(
              &fid,
              mlfFopen(
                NULL, NULL, mclVv(asc_file, "asc_file"), _mxarray135_, NULL));
            /*
             * fwrite(fid,winfo);
             */
            mclAssignAns(
              &ans,
              mlfFwrite(mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * wavemngr('create');
             */
            mclAssignAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray10_, NULL));
        /*
         * 
         * case 'del'
         */
        } else if (mclSwitchCompare(v_, _mxarray195_)) {
            /*
             * wavemngr('clear')
             */
            mclPrintAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray30_, NULL));
            /*
             * Wavelets_Info = wavemngr('load');
             */
            mlfAssign(
              mclPrepareGlobal(&Wavelets_Info),
              mlfNWavemngr(0, mclValueVarargout(), _mxarray16_, NULL));
            /*
             * err   = 0;
             */
            mlfAssign(&err, _mxarray18_);
            /*
             * i_fam = [];
             */
            mlfAssign(&i_fam, _mxarray34_);
            /*
             * if isempty(varargin{1})
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxIsempty,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                    NULL))) {
                /*
                 * err = 1; 
                 */
                mlfAssign(&err, _mxarray19_);
                /*
                 * msg = 'Wavelet Family (Short) Name is empty !';       
                 */
                mlfAssign(&msg, _mxarray197_);
            /*
             * else
             */
            } else {
                /*
                 * name = noblank(varargin{1});
                 */
                mlfAssign(
                  &name,
                  mclFeval(
                    mclValueVarargout(),
                    mlxWavemngr_noblank,
                    mlfIndexRef(
                      mclVa(varargin, "varargin"), "{?}", _mxarray19_),
                    NULL));
                /*
                 * tmpCell = {Wavelets_Info(:).familyName}';
                 */
                mlfAssign(
                  &tmpCell,
                  mlfCtranspose(
                    mlfCellhcat(
                      mlfIndexRef(
                        mclVg(&Wavelets_Info, "Wavelets_Info"),
                        "(?).familyName",
                        mlfCreateColonIndex()),
                      NULL)));
                /*
                 * i_fam = find(strcmp(name,tmpCell)==1);
                 */
                mlfAssign(
                  &i_fam,
                  mlfFind(
                    NULL,
                    NULL,
                    mclEq(
                      mlfStrcmp(mclVv(name, "name"), mclVv(tmpCell, "tmpCell")),
                      _mxarray19_)));
                /*
                 * if isempty(i_fam)
                 */
                if (mlfTobool(mlfIsempty(mclVv(i_fam, "i_fam")))) {
                    /*
                     * tmpCell = {Wavelets_Info(:).familyShortName}';
                     */
                    mlfAssign(
                      &tmpCell,
                      mlfCtranspose(
                        mlfCellhcat(
                          mlfIndexRef(
                            mclVg(&Wavelets_Info, "Wavelets_Info"),
                            "(?).familyShortName",
                            mlfCreateColonIndex()),
                          NULL)));
                    /*
                     * i_fam = find(strcmp(name,tmpCell)==1);
                     */
                    mlfAssign(
                      &i_fam,
                      mlfFind(
                        NULL,
                        NULL,
                        mclEq(
                          mlfStrcmp(
                            mclVv(name, "name"), mclVv(tmpCell, "tmpCell")),
                          _mxarray19_)));
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
             * if err==0
             */
            if (mclEqBool(mclVv(err, "err"), _mxarray18_)) {
                /*
                 * if isempty(i_fam)
                 */
                if (mlfTobool(mlfIsempty(mclVv(i_fam, "i_fam")))) {
                    /*
                     * err = 1;
                     */
                    mlfAssign(&err, _mxarray19_);
                    /*
                     * msg = 'Invalid Wavelet Family (Short) Name !';
                     */
                    mlfAssign(&msg, _mxarray199_);
                /*
                 * elseif i_fam<=NB_FamInWTB
                 */
                } else if (mclLeBool(
                             mclVv(i_fam, "i_fam"),
                             mclVv(NB_FamInWTB, "NB_FamInWTB"))) {
                    /*
                     * err = 1;
                     */
                    mlfAssign(&err, _mxarray19_);
                    /*
                     * fn  = Wavelets_Info(i_fam).familyName;
                     */
                    mlfAssign(
                      &fn,
                      mlfIndexRef(
                        mclVg(&Wavelets_Info, "Wavelets_Info"),
                        "(?).familyName",
                        mclVv(i_fam, "i_fam")));
                    /*
                     * msg = sprintf('You can''t delete %s Wavelet Family !',fn);
                     */
                    mlfAssign(
                      &msg,
                      mlfSprintf(NULL, _mxarray201_, mclVv(fn, "fn"), NULL));
                /*
                 * end
                 */
                }
            /*
             * end
             */
            }
            /*
             * if err
             */
            if (mlfTobool(mclVv(err, "err"))) {
                /*
                 * errargt(mfilename,msg,'msg');
                 */
                mclAssignAns(
                  &ans,
                  mlfErrargt(
                    mxCreateString("wavemngr"),
                    mclVv(msg, "msg"),
                    _mxarray50_,
                    NULL));
                /*
                 * return 
                 */
                mxDestroyArray(v_);
                goto return_;
            /*
             * end
             */
            }
            /*
             * 
             * fid = fopen(asc_file);
             */
            mlfAssign(
              &fid,
              mlfFopen(NULL, NULL, mclVv(asc_file, "asc_file"), NULL, NULL));
            /*
             * if fid==-1 , fid = fopen(asc_ini_file); end
             */
            if (mclEqBool(mclVv(fid, "fid"), _mxarray134_)) {
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_ini_file, "asc_ini_file"),
                    NULL,
                    NULL));
            }
            /*
             * winfo = fread(fid);
             */
            mlfAssign(
              &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * fid = fopen(sav_file,'w');
             */
            mlfAssign(
              &fid,
              mlfFopen(
                NULL, NULL, mclVv(sav_file, "sav_file"), _mxarray135_, NULL));
            /*
             * fwrite(fid,winfo);
             */
            mclAssignAns(
              &ans,
              mlfFwrite(mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * 
             * str_winfo = setstr(winfo');
             */
            mlfAssign(
              &str_winfo, mlfSetstr(mlfCtranspose(mclVv(winfo, "winfo"))));
            /*
             * str_NL    = findNL('string',winfo);
             */
            mlfAssign(
              &str_NL, mlfWavemngr_findNL(_mxarray44_, mclVv(winfo, "winfo")));
            /*
             * beg_fam   = 'Family Name : ';
             */
            mlfAssign(&beg_fam, _mxarray132_);
            /*
             * first     = findstr(beg_fam,str_winfo);
             */
            mlfAssign(
              &first,
              mlfFindstr(
                mclVv(beg_fam, "beg_fam"), mclVv(str_winfo, "str_winfo")));
            /*
             * first     = first(i_fam);
             */
            mlfAssign(
              &first,
              mclArrayRef1(mclVv(first, "first"), mclVv(i_fam, "i_fam")));
            /*
             * ind_NL    = findstr(str_NL',str_winfo);
             */
            mlfAssign(
              &ind_NL,
              mlfFindstr(
                mlfCtranspose(mclVv(str_NL, "str_NL")),
                mclVv(str_winfo, "str_winfo")));
            /*
             * indexs    = find(ind_NL>first);
             */
            mlfAssign(
              &indexs,
              mlfFind(
                NULL,
                NULL,
                mclGt(mclVv(ind_NL, "ind_NL"), mclVv(first, "first"))));
            /*
             * indexs    = ind_NL(indexs(1:nb_InfoByWave+1));
             */
            mlfAssign(
              &indexs,
              mclArrayRef1(
                mclVv(ind_NL, "ind_NL"),
                mclArrayRef1(
                  mclVv(indexs, "indexs"),
                  mlfColon(
                    _mxarray19_,
                    mclPlus(mclVv(nb_InfoByWave, "nb_InfoByWave"), _mxarray19_),
                    NULL))));
            /*
             * last      = indexs(nb_InfoByWave+1)+length(str_NL)-1;
             */
            mlfAssign(
              &last,
              mclMinus(
                mclPlus(
                  mclArrayRef1(
                    mclVv(indexs, "indexs"),
                    mclPlus(
                      mclVv(nb_InfoByWave, "nb_InfoByWave"), _mxarray19_)),
                  mlfScalar(mclLengthInt(mclVv(str_NL, "str_NL")))),
                _mxarray19_));
            /*
             * 
             * winfo(first:last) = [];
             */
            mlfIndexDelete(
              &winfo,
              "(?)",
              mlfColon(mclVv(first, "first"), mclVv(last, "last"), NULL));
            /*
             * fid = fopen(asc_file,'w');
             */
            mlfAssign(
              &fid,
              mlfFopen(
                NULL, NULL, mclVv(asc_file, "asc_file"), _mxarray135_, NULL));
            /*
             * fwrite(fid,winfo);
             */
            mclAssignAns(
              &ans,
              mlfFwrite(mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * wavemngr('create');
             */
            mclAssignAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray10_, NULL));
        /*
         * 
         * case 'restore'
         */
        } else if (mclSwitchCompare(v_, _mxarray203_)) {
            /*
             * wavemngr('clear')
             */
            mclPrintAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray30_, NULL));
            /*
             * if nargin==1
             */
            if (nargin_ == 1) {
                /*
                 * fid = fopen(sav_file);
                 */
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL, NULL, mclVv(sav_file, "sav_file"), NULL, NULL));
                /*
                 * if fid==-1 , fid = fopen(asc_ini_file); end
                 */
                if (mclEqBool(mclVv(fid, "fid"), _mxarray134_)) {
                    mlfAssign(
                      &fid,
                      mlfFopen(
                        NULL,
                        NULL,
                        mclVv(asc_ini_file, "asc_ini_file"),
                        NULL,
                        NULL));
                }
            /*
             * else
             */
            } else {
                /*
                 * fid = fopen(asc_ini_file);
                 */
                mlfAssign(
                  &fid,
                  mlfFopen(
                    NULL,
                    NULL,
                    mclVv(asc_ini_file, "asc_ini_file"),
                    NULL,
                    NULL));
            /*
             * end
             */
            }
            /*
             * winfo = fread(fid);
             */
            mlfAssign(
              &winfo, mlfFread(NULL, mclVv(fid, "fid"), NULL, NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * fid = fopen(asc_file,'w');
             */
            mlfAssign(
              &fid,
              mlfFopen(
                NULL, NULL, mclVv(asc_file, "asc_file"), _mxarray135_, NULL));
            /*
             * fwrite(fid,winfo);
             */
            mclAssignAns(
              &ans,
              mlfFwrite(mclVv(fid, "fid"), mclVv(winfo, "winfo"), NULL, NULL));
            /*
             * fclose(fid);
             */
            mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
            /*
             * wavemngr('create');
             */
            mclAssignAns(
              &ans, mlfNWavemngr(0, mclAnsVarargout(), _mxarray10_, NULL));
        /*
         * 
         * case 'rescue'
         */
        } else if (mclSwitchCompare(v_, _mxarray28_)) {
            /*
             * famtype = ...
             */
            mlfAssign(&famtype, _mxarray205_);
            /*
             * {...
             * 1, 'Haar',         'haar',  1;
             * 2, 'Daubechies',   'db',    1;
             * 3, 'Symlets',      'sym',   1;
             * 4, 'Coiflets',     'coif',  1;
             * 5, 'BiorSplines',  'bior',  2;
             * 6, 'ReverseBior',  'rbio',  2;
             * 7, 'Meyer',        'meyr',  3;
             * 8, 'DMeyer',       'dmey',  1;
             * 9, 'Gaussian',     'gaus',  4;
             * 10, 'Mexican_hat',  'mexh',  4;
             * 11, 'Morlet',       'morl',  4;
             * 10, 'Complex Gaussian',   'cgau',  5;
             * 11, 'Shannon',            'shan',  5;
             * 10, 'Frequency B-Spline', 'fbsp',  5;
             * 11, 'Complex Morlet',     'cmor',  5
             * 
             * };
             * 
             * nums = ...
             */
            mlfAssign(&nums, _mxarray265_);
            /*
             * {...
             * '';
             * '1 2 3 4 5 6 7 8 9 10 **';
             * '2 3 4 5 6 7 8 **';
             * '1 2 3 4 5';
             * '1.1 1.3 1.5 2.2 2.4 2.6 2.8 3.1 3.3 3.5 3.7 3.9 4.4 5.5 6.8';
             * '1.1 1.3 1.5 2.2 2.4 2.6 2.8 3.1 3.3 3.5 3.7 3.9 4.4 5.5 6.8';
             * '';
             * '';
             * '1 2 3 4 5 6 7 8 **';
             * '';
             * '';
             * '1 2 3 4 5 **';
             * '1-1.5 1-1 1-0.5 1-0.1 2-3 **';
             * '1-1-1.5 1-1-1 1-1-0.5 2-1-1 2-1-0.5 2-1-0.1 **';
             * '1-1.5 1-1 1-0.5 1-1 1-0.5 1-0.1 **'
             * };
             * 
             * typNums = ...
             */
            mlfAssign(&typNums, _mxarray285_);
            /*
             * {...
             * 'no';
             * 'integer';
             * 'integer';
             * 'integer';
             * 'real';
             * 'real';
             * 'no';
             * 'no';
             * 'integer';
             * 'no';
             * 'no';
             * 'integer';
             * 'string';
             * 'string';
             * 'string'
             * };
             * 
             * files = ...
             */
            mlfAssign(&files, _mxarray287_);
            /*
             * {...
             * 'dbwavf';
             * 'dbwavf';
             * 'symwavf';
             * 'coifwavf';
             * 'biorwavf';
             * 'rbiowavf';
             * 'meyer';
             * 'dmey.mat';
             * 'gauswavf';
             * 'mexihat';
             * 'morlet'
             * 'cgauwavf';
             * 'shanwavf';
             * 'fbspwavf';
             * 'cmorwavf'
             * };
             * 
             * bounds = ...
             */
            mlfAssign(&bounds, _mxarray317_);
            /*
             * {...
             * [];
             * [];
             * [];
             * [];
             * [];
             * [];
             * [-8 8];
             * [];
             * [-5 5];
             * [-8 8];
             * [-8 8];
             * [-5 5];
             * [-20 20];
             * [-20 20];
             * [-8 8]
             * };
             * 
             * nbfam   = size(famtype,1); 
             */
            mlfAssign(
              &nbfam,
              mlfSize(
                mclValueVarargout(), mclVv(famtype, "famtype"), _mxarray19_));
            /*
             * tabNums = cell(nbfam,1);
             */
            mlfAssign(
              &tabNums, mlfCell(mclVv(nbfam, "nbfam"), _mxarray19_, NULL));
            /*
             * for k = 1:nbfam
             */
            {
                int v_06 = mclForIntStart(1);
                int e_ = mclForIntEnd(mclVv(nbfam, "nbfam"));
                if (v_06 > e_) {
                    mlfAssign(&k, _mxarray34_);
                } else {
                    /*
                     * tabNums{k} = '';
                     * s = deblank(nums{k});
                     * if ~isempty(s)
                     * I = find(isspace(s));
                     * i_beg = 1;
                     * for j = 1:length(I)
                     * i_end = I(j)-1;
                     * ss = deblank(s(i_beg:i_end));
                     * if ~isempty(ss)
                     * tabNums{k} = strvcat(tabNums{k},ss);
                     * end
                     * i_beg = i_end+2;
                     * end
                     * ss = deblank(s(i_beg:end));
                     * tabNums{k} = strvcat(tabNums{k},ss);
                     * end
                     * if isempty(tabNums{k}) , tabNums{k} = 'no'; end
                     * end
                     */
                    for (; ; ) {
                        mlfIndexAssign(
                          &tabNums, "{?}", mlfScalar(v_06), _mxarray37_);
                        mlfAssign(
                          &s,
                          mclFeval(
                            mclValueVarargout(),
                            mlxDeblank,
                            mlfIndexRef(
                              mclVv(nums, "nums"), "{?}", mlfScalar(v_06)),
                            NULL));
                        if (mclNotBool(mlfIsempty(mclVv(s, "s")))) {
                            mlfAssign(
                              &I,
                              mlfFind(NULL, NULL, mlfIsspace(mclVv(s, "s"))));
                            mlfAssign(&i_beg, _mxarray19_);
                            {
                                int v_07 = mclForIntStart(1);
                                int e_3 = mclLengthInt(mclVv(I, "I"));
                                if (v_07 > e_3) {
                                    mlfAssign(&j, _mxarray34_);
                                } else {
                                    for (; ; ) {
                                        mlfAssign(
                                          &i_end,
                                          mclMinus(
                                            mclIntArrayRef1(
                                              mclVv(I, "I"), v_07),
                                            _mxarray19_));
                                        mlfAssign(
                                          &ss,
                                          mlfDeblank(
                                            mclArrayRef1(
                                              mclVv(s, "s"),
                                              mlfColon(
                                                mclVv(i_beg, "i_beg"),
                                                mclVv(i_end, "i_end"),
                                                NULL))));
                                        if (mclNotBool(
                                              mlfIsempty(mclVv(ss, "ss")))) {
                                            mlfIndexAssign(
                                              &tabNums,
                                              "{?}",
                                              mlfScalar(v_06),
                                              mlfStrvcat(
                                                mlfIndexRef(
                                                  mclVv(tabNums, "tabNums"),
                                                  "{?}",
                                                  mlfScalar(v_06)),
                                                mclVv(ss, "ss"),
                                                NULL));
                                        }
                                        mlfAssign(
                                          &i_beg,
                                          mclPlus(
                                            mclVv(i_end, "i_end"),
                                            _mxarray65_));
                                        if (v_07 == e_3) {
                                            break;
                                        }
                                        ++v_07;
                                    }
                                    mlfAssign(&j, mlfScalar(v_07));
                                }
                            }
                            mlfAssign(
                              &ss,
                              mlfDeblank(
                                mclArrayRef1(
                                  mclVv(s, "s"),
                                  mlfColon(
                                    mclVv(i_beg, "i_beg"),
                                    mlfEnd(
                                      mclVv(s, "s"), _mxarray19_, _mxarray19_),
                                    NULL))));
                            mlfIndexAssign(
                              &tabNums,
                              "{?}",
                              mlfScalar(v_06),
                              mlfStrvcat(
                                mlfIndexRef(
                                  mclVv(tabNums, "tabNums"),
                                  "{?}",
                                  mlfScalar(v_06)),
                                mclVv(ss, "ss"),
                                NULL));
                        }
                        if (mlfTobool(
                              mclFeval(
                                mclValueVarargout(),
                                mlxIsempty,
                                mlfIndexRef(
                                  mclVv(tabNums, "tabNums"),
                                  "{?}",
                                  mlfScalar(v_06)),
                                NULL))) {
                            mlfIndexAssign(
                              &tabNums, "{?}", mlfScalar(v_06), _mxarray35_);
                        }
                        if (v_06 == e_) {
                            break;
                        }
                        ++v_06;
                    }
                    mlfAssign(&k, mlfScalar(v_06));
                }
            }
            /*
             * 
             * varargout{1} = ...
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray19_,
              mlfStruct(
                _mxarray89_,
                mclArrayRef2(
                  mclVv(famtype, "famtype"),
                  mlfCreateColonIndex(),
                  _mxarray19_),
                _mxarray93_,
                mclArrayRef2(
                  mclVv(famtype, "famtype"),
                  mlfCreateColonIndex(),
                  _mxarray65_),
                _mxarray95_,
                mclArrayRef2(
                  mclVv(famtype, "famtype"),
                  mlfCreateColonIndex(),
                  _mxarray127_),
                _mxarray97_,
                mclArrayRef2(
                  mclVv(famtype, "famtype"),
                  mlfCreateColonIndex(),
                  _mxarray114_),
                _mxarray99_,
                mclVv(tabNums, "tabNums"),
                _mxarray101_,
                mclVv(typNums, "typNums"),
                _mxarray103_,
                mclVv(files, "files"),
                _mxarray105_,
                mclVv(bounds, "bounds"),
                NULL));
        /*
         * struct(...
         * 'index',           famtype(:,1), ...
         * 'familyName',      famtype(:,2), ...
         * 'familyShortName', famtype(:,3), ...
         * 'type',            famtype(:,4), ...
         * 'tabNums',         tabNums,      ...
         * 'typNums',         typNums,      ...
         * 'file',            files,        ...
         * 'bounds',          bounds        ...
         * );
         * 
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'Unknown Option','msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("wavemngr"), _mxarray325_, _mxarray50_, NULL));
            /*
             * error('*');
             */
            mlfError(_mxarray130_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * %----------------------------------%
     * % Internal Function(s)             %
     * %----------------------------------%
     */
    return_:
    mxDestroyArray(ans);
    mxDestroyArray(bin_ini_file);
    mxDestroyArray(asc_ini_file);
    mxDestroyArray(bin_file);
    mxDestroyArray(asc_file);
    mxDestroyArray(sav_file);
    mxDestroyArray(nb_InfoByWave);
    mxDestroyArray(NB_FamInWTB);
    mxDestroyArray(WaveTypePOS);
    mxDestroyArray(err);
    mxDestroyArray(nb_fam);
    mxDestroyArray(wname);
    mxDestroyArray(lwna);
    mxDestroyArray(i_fam);
    mxDestroyArray(fam);
    mxDestroyArray(len);
    mxDestroyArray(ok_wave);
    mxDestroyArray(tabNums);
    mxDestroyArray(i_num);
    mxDestroyArray(num_str);
    mxDestroyArray(add_num);
    mxDestroyArray(typNums);
    mxDestroyArray(num);
    mxDestroyArray(msg);
    mxDestroyArray(fsnCell);
    mxDestroyArray(fsnInput);
    mxDestroyArray(wtype);
    mxDestroyArray(tab_type);
    mxDestroyArray(ind);
    mxDestroyArray(fnCell);
    mxDestroyArray(in_type);
    mxDestroyArray(arg);
    mxDestroyArray(nb);
    mxDestroyArray(k);
    mxDestroyArray(field);
    mxDestroyArray(nul);
    mxDestroyArray(_T0_);
    mxDestroyArray(_T1_);
    mxDestroyArray(bounds);
    mxDestroyArray(Lo_D);
    mxDestroyArray(beg_fam);
    mxDestroyArray(fid);
    mxDestroyArray(winfo);
    mxDestroyArray(str_NL);
    mxDestroyArray(lennewl);
    mxDestroyArray(ind_NL);
    mxDestroyArray(first);
    mxDestroyArray(j);
    mxDestroyArray(indexs);
    mxDestroyArray(sname);
    mxDestroyArray(nums);
    mxDestroyArray(fname);
    mxDestroyArray(notspace);
    mxDestroyArray(lnot);
    mxDestroyArray(index1);
    mxDestroyArray(k0);
    mxDestroyArray(k1);
    mxDestroyArray(indnum);
    mxDestroyArray(fnum);
    mxDestroyArray(lnum);
    mxDestroyArray(nb_num);
    mxDestroyArray(p);
    mxDestroyArray(sep_fam);
    mxDestroyArray(sep_num);
    mxDestroyArray(tab);
    mxDestroyArray(families);
    mxDestroyArray(tabtab);
    mxDestroyArray(famSName);
    mxDestroyArray(famTAB);
    mxDestroyArray(sfname);
    mxDestroyArray(wnames);
    mxDestroyArray(indfam);
    mxDestroyArray(tmp);
    mxDestroyArray(family_Name);
    mxDestroyArray(fnIn);
    mxDestroyArray(tmpCell);
    mxDestroyArray(family_Short_Name);
    mxDestroyArray(fsnIn);
    mxDestroyArray(wavelet_Type);
    mxDestroyArray(wavelet_tabNums);
    mxDestroyArray(wavelet_typNums);
    mxDestroyArray(wavelet_File);
    mxDestroyArray(nbArgIN);
    mxDestroyArray(wavelet_Bounds);
    mxDestroyArray(Chrline);
    mxDestroyArray(name);
    mxDestroyArray(fn);
    mxDestroyArray(str_winfo);
    mxDestroyArray(last);
    mxDestroyArray(famtype);
    mxDestroyArray(files);
    mxDestroyArray(nbfam);
    mxDestroyArray(s);
    mxDestroyArray(I);
    mxDestroyArray(i_beg);
    mxDestroyArray(i_end);
    mxDestroyArray(ss);
    mxDestroyArray(varargin);
    mxDestroyArray(option);
    mxDestroyArray(_mat);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}

/*
 * The function "Mwavemngr_findNL" is the implementation version of the
 * "wavemngr/findNL" M-function from file "./src/wavemngr.m" (lines 923-940).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function nl = findNL(opt,txt)
 */
static mxArray * Mwavemngr_findNL(int nargout_, mxArray * opt, mxArray * txt) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavemngr);
    mxArray * nl = NULL;
    mxArray * ind13 = NULL;
    mxArray * ind10 = NULL;
    mclCopyArray(&opt);
    mclCopyArray(&txt);
    /*
     * %FINDNL Find New Line char or string.
     * 
     * ind10 = find(txt==10);
     */
    mlfAssign(
      &ind10, mlfFind(NULL, NULL, mclEq(mclVa(txt, "txt"), _mxarray208_)));
    /*
     * ind13 = find(txt==13);
     */
    mlfAssign(
      &ind13, mlfFind(NULL, NULL, mclEq(mclVa(txt, "txt"), _mxarray327_)));
    /*
     * if isempty(ind13) ,
     */
    if (mlfTobool(mlfIsempty(mclVv(ind13, "ind13")))) {
        /*
         * nl = 10;
         */
        mlfAssign(&nl, _mxarray208_);
    /*
     * elseif isempty(ind10)
     */
    } else if (mlfTobool(mlfIsempty(mclVv(ind10, "ind10")))) {
        /*
         * nl = 13;
         */
        mlfAssign(&nl, _mxarray327_);
    /*
     * else
     */
    } else {
        /*
         * nl = [13;10];
         */
        mlfAssign(&nl, _mxarray328_);
    /*
     * end
     */
    }
    /*
     * if isequal(opt,'string')
     */
    if (mlfTobool(mlfIsequal(mclVa(opt, "opt"), _mxarray44_, NULL))) {
        /*
         * nl = setstr(nl);
         */
        mlfAssign(&nl, mlfSetstr(mclVv(nl, "nl")));
    /*
     * end
     */
    }
    /*
     * if size(txt,2)>1 , nl = nl'; end
     */
    if (mclGtBool(
          mlfSize(mclValueVarargout(), mclVa(txt, "txt"), _mxarray65_),
          _mxarray19_)) {
        mlfAssign(&nl, mlfCtranspose(mclVv(nl, "nl")));
    }
    mclValidateOutput(nl, 1, nargout_, "nl", "wavemngr/findNL");
    mxDestroyArray(ind10);
    mxDestroyArray(ind13);
    mxDestroyArray(txt);
    mxDestroyArray(opt);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return nl;
    /*
     * %----------------------------------%
     */
}

/*
 * The function "Mwavemngr_noblank" is the implementation version of the
 * "wavemngr/noblank" M-function from file "./src/wavemngr.m" (lines 940-949).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function s = noblank(x)
 */
static mxArray * Mwavemngr_noblank(int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavemngr);
    mxArray * s = NULL;
    mclCopyArray(&x);
    /*
     * %NOBLANK Removes blanks in a string.
     * 
     * if ~isempty(x)
     */
    if (mclNotBool(mlfIsempty(mclVa(x, "x")))) {
        /*
         * s = x(find(x~=' ' & x~=0));
         */
        mlfAssign(
          &s,
          mclArrayRef1(
            mclVa(x, "x"),
            mlfFind(
              NULL,
              NULL,
              mclAnd(
                mclNe(mclVa(x, "x"), _mxarray20_),
                mclNe(mclVa(x, "x"), _mxarray18_)))));
    /*
     * else
     */
    } else {
        /*
         * s = '';
         */
        mlfAssign(&s, _mxarray37_);
    /*
     * end
     */
    }
    mclValidateOutput(s, 1, nargout_, "s", "wavemngr/noblank");
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return s;
    /*
     * %----------------------------------%
     */
}
