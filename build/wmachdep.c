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
#include "wmachdep.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[16] = { 'r', 'e', 'a', 'd', '_', 'd', 'e', 'f',
                               'a', 'u', 'l', 't', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

static mxChar _array5_[13] = { 't', 'e', 's', 't', '_', 'p', 'r',
                               'e', 'f', 'M', 'o', 'd', 'e' };
static mxArray * _mxarray4_;

static double _array7_[9] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 666.0 };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array10_[10] = { 'S', 'c', 'r', 'e', 'e',
                                'n', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray9_;

static mxChar _array12_[7] = { 'g', 'l', 'o', 'b', 'a', 'l', 's' };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;
static mxArray * _mxarray15_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;

static mxChar _array19_[3] = { 'P', 'C', 'W' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;

static mxChar _array22_[6] = { 'n', 'o', 'r', 'm', 'a', 'l' };
static mxArray * _mxarray21_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;

static mxChar _array26_[3] = { 'M', 'A', 'C' };
static mxArray * _mxarray25_;
static mxArray * _mxarray27_;
static mxArray * _mxarray28_;
static mxArray * _mxarray29_;
static mxArray * _mxarray30_;
static mxArray * _mxarray31_;
static mxArray * _mxarray32_;
static mxArray * _mxarray33_;
static mxArray * _mxarray34_;

static mxChar _array36_[4] = { 'b', 'o', 'l', 'd' };
static mxArray * _mxarray35_;
static mxArray * _mxarray37_;
static mxArray * _mxarray38_;
static mxArray * _mxarray39_;
static mxArray * _mxarray40_;

static mxChar _array42_[31] = { 'D', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'c', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray41_;
static mxArray * _mxarray43_;
static mxArray * _mxarray44_;
static mxArray * _mxarray45_;

static double _array47_[3] = { .7529, .7529, .7529 };
static mxArray * _mxarray46_;

static double _array49_[3] = { .6, .6, .6 };
static mxArray * _mxarray48_;

static double _array51_[3] = { .9, .9, .9 };
static mxArray * _mxarray50_;

static double _array53_[3] = { .77, .77, .77 };
static mxArray * _mxarray52_;

static mxChar _array55_[17] = { 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 'D',
                                'i', 'm', 'e', 'n', 's', 'i', 'o', 'n' };
static mxArray * _mxarray54_;

static double _array57_[3] = { 1.0, 1.0, 1.0 };
static mxArray * _mxarray56_;

static mxChar _array59_[4] = { 'p', 'i', 'n', 'k' };
static mxArray * _mxarray58_;

static mxChar _array61_[4] = { 'c', 'o', 'o', 'l' };
static mxArray * _mxarray60_;

static mxChar _array63_[4] = { 'g', 'r', 'a', 'y' };
static mxArray * _mxarray62_;

static mxChar _array65_[3] = { 'h', 'o', 't' };
static mxArray * _mxarray64_;

static mxChar _array67_[3] = { 'j', 'e', 't' };
static mxArray * _mxarray66_;

static mxChar _array69_[4] = { 'b', 'o', 'n', 'e' };
static mxArray * _mxarray68_;

static mxChar _array71_[6] = { 'c', 'o', 'p', 'p', 'e', 'r' };
static mxArray * _mxarray70_;

static mxChar _array73_[3] = { 'h', 's', 'v' };
static mxArray * _mxarray72_;

static mxChar _array75_[5] = { 'p', 'r', 'i', 's', 'm' };
static mxArray * _mxarray74_;

static mxChar _array77_[8] = { '1', ' ', '-', ' ', 'p', 'i', 'n', 'k' };
static mxArray * _mxarray76_;

static mxChar _array79_[8] = { '1', ' ', '-', ' ', 'c', 'o', 'o', 'l' };
static mxArray * _mxarray78_;

static mxChar _array81_[8] = { '1', ' ', '-', ' ', 'g', 'r', 'a', 'y' };
static mxArray * _mxarray80_;

static mxChar _array83_[7] = { '1', ' ', '-', ' ', 'h', 'o', 't' };
static mxArray * _mxarray82_;

static mxChar _array85_[7] = { '1', ' ', '-', ' ', 'j', 'e', 't' };
static mxArray * _mxarray84_;

static mxChar _array87_[8] = { '1', ' ', '-', ' ', 'b', 'o', 'n', 'e' };
static mxArray * _mxarray86_;

static mxChar _array89_[7] = { 'a', 'u', 't', 'u', 'm', 'n', ' ' };
static mxArray * _mxarray88_;

static mxChar _array91_[6] = { 's', 'p', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray90_;

static mxChar _array93_[6] = { 'w', 'i', 'n', 't', 'e', 'r' };
static mxArray * _mxarray92_;

static mxChar _array95_[6] = { 's', 'u', 'm', 'm', 'e', 'r' };
static mxArray * _mxarray94_;

static mxChar _array97_[6] = { 'c', 'o', 'l', 'o', 'r', 's' };
static mxArray * _mxarray96_;

static mxChar _array99_[5] = { 'w', 'h', 'i', 't', 'e' };
static mxArray * _mxarray98_;

static mxChar _array103_[5] = { 'b', 'l', 'a', 'c', 'k' };
static mxArray * _mxarray102_;

static mxChar _array105_[4] = { 'n', 'o', 'n', 'e' };
static mxArray * _mxarray104_;

static mxArray * _array101_[3] = { NULL /*_mxarray98_*/, NULL /*_mxarray102_*/,
                                   NULL /*_mxarray104_*/ };
static mxArray * _mxarray100_;

static mxArray * _array107_[5] = { NULL /*_mxarray2_*/, NULL /*_mxarray17_*/,
                                   NULL /*_mxarray3_*/, NULL /*_mxarray43_*/,
                                   NULL /*_mxarray34_*/ };
static mxArray * _mxarray106_;

static double _array109_[3] = { 0.0, 0.0, 0.0 };
static mxArray * _mxarray108_;

static double _array111_[3] = { .2, .3, .5 };
static mxArray * _mxarray110_;

static double _array113_[3] = { .5, .5, .5 };
static mxArray * _mxarray112_;

static double _array115_[3] = { .5, .3, .2 };
static mxArray * _mxarray114_;

static double _array117_[3] = { .3, .5, .2 };
static mxArray * _mxarray116_;

static mxChar _array119_[1] = { 'w' };
static mxArray * _mxarray118_;
static mxArray * _mxarray120_;
static mxArray * _mxarray121_;
static mxArray * _mxarray123_;
static mxArray * _mxarray122_;

static mxChar _array125_[1] = { 'k' };
static mxArray * _mxarray124_;

static double _array127_[3] = { .7, .7, .7 };
static mxArray * _mxarray126_;
static mxArray * _mxarray130_;

static mxArray * _array129_[3] = { NULL /*_mxarray39_*/, NULL /*_mxarray130_*/,
                                   NULL /*_mxarray20_*/ };
static mxArray * _mxarray128_;

static double _array132_[3] = { 1.0, .9, .8 };
static mxArray * _mxarray131_;

static double _array134_[3] = { .9, .9, 1.0 };
static mxArray * _mxarray133_;

static double _array136_[3] = { .9686274509803922, .9686274509803922,
                                .9686274509803922 };
static mxArray * _mxarray135_;

static mxChar _array138_[1] = { 'm' };
static mxArray * _mxarray137_;

static mxChar _array140_[18] = { 'D', 'e', 'f', 'a', 'u', 'l', 't', 'F', 'i',
                                 'g', 'u', 'r', 'e', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray139_;

static mxChar _array142_[8] = { 'f', 'o', 'n', 't', 's', 'i', 'z', 'e' };
static mxArray * _mxarray141_;
static mxArray * _mxarray143_;

static mxChar _array145_[5] = { 'w', 'i', 'n', 'f', 'o' };
static mxArray * _mxarray144_;

static mxChar _array149_[3] = { 'S', 'O', 'L' };
static mxArray * _mxarray148_;

static mxChar _array151_[3] = { 'S', 'U', 'N' };
static mxArray * _mxarray150_;

static mxArray * _array147_[2] = { NULL /*_mxarray148_*/,
                                   NULL /*_mxarray150_*/ };
static mxArray * _mxarray146_;
static mxArray * _mxarray152_;
static mxArray * _mxarray153_;
static mxArray * _mxarray154_;
static mxArray * _mxarray155_;

static mxChar _array157_[19] = { 'S', 'c', 'r', 'e', 'e', 'n', 'P',
                                 'i', 'x', 'e', 'l', 's', 'P', 'e',
                                 'r', 'I', 'n', 'c', 'h' };
static mxArray * _mxarray156_;
static mxArray * _mxarray158_;

static mxChar _array160_[10] = { 'c', 'e', 'n', 't', 'e',
                                 'r', '_', 't', 'x', 't' };
static mxArray * _mxarray159_;

static mxChar _array162_[6] = { 'C', 'e', 'n', 't', 'e', 'r' };
static mxArray * _mxarray161_;

static mxChar _array164_[6] = { ' ', ' ', 'O', 'n', ' ', ' ' };
static mxArray * _mxarray163_;

static mxChar _array166_[1] = { ' ' };
static mxArray * _mxarray165_;

static mxChar _array168_[9] = { 'C', 'e', 'n', 't', 'e', 'r', ' ', 'O', 'n' };
static mxArray * _mxarray167_;

static mxChar _array170_[11] = { 'b', 't', 'n', 'Z', 'o', 'o',
                                 'm', 'A', 'x', 'e', 's' };
static mxArray * _mxarray169_;
static mxArray * _mxarray171_;
static mxArray * _mxarray172_;

static mxChar _array174_[10] = { 'P', 'C', 'W', 'D', 'e',
                                 'p', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray173_;

static mxChar _array176_[10] = { 'm', 'a', 'r', 'k', 'e',
                                 'r', 's', 'i', 'z', 'e' };
static mxArray * _mxarray175_;

static mxArray * _array178_[2] = { NULL /*_mxarray150_*/,
                                   NULL /*_mxarray148_*/ };
static mxArray * _mxarray177_;
static mxArray * _mxarray179_;
static mxArray * _mxarray180_;

void InitializeModule_wmachdep(void) {
    _mxarray0_ = mclInitializeString(16, _array1_);
    _mxarray2_ = mclInitializeDouble(1.0);
    _mxarray3_ = mclInitializeDouble(3.0);
    _mxarray4_ = mclInitializeString(13, _array5_);
    _mxarray6_ = mclInitializeDoubleVector(1, 9, _array7_);
    _mxarray8_ = mclInitializeDouble(0.0);
    _mxarray9_ = mclInitializeString(10, _array10_);
    _mxarray11_ = mclInitializeString(7, _array12_);
    _mxarray13_ = mclInitializeDouble(600.0);
    _mxarray14_ = mclInitializeDouble(16.0);
    _mxarray15_ = mclInitializeDouble(60.0);
    _mxarray16_ = mclInitializeDouble(50.0);
    _mxarray17_ = mclInitializeDouble(2.0);
    _mxarray18_ = mclInitializeString(3, _array19_);
    _mxarray20_ = mclInitializeDouble(8.0);
    _mxarray21_ = mclInitializeString(6, _array22_);
    _mxarray23_ = mclInitializeDouble(.71);
    _mxarray24_ = mclInitializeDouble(700.0);
    _mxarray25_ = mclInitializeString(3, _array26_);
    _mxarray27_ = mclInitializeDouble(20.0);
    _mxarray28_ = mclInitializeDouble(18.0);
    _mxarray29_ = mclInitializeDouble(9.0);
    _mxarray30_ = mclInitializeDouble(.72);
    _mxarray31_ = mclInitializeDouble(1200.0);
    _mxarray32_ = mclInitializeDouble(22.0);
    _mxarray33_ = mclInitializeDouble(80.0);
    _mxarray34_ = mclInitializeDouble(5.0);
    _mxarray35_ = mclInitializeString(4, _array36_);
    _mxarray37_ = mclInitializeDouble(90.0);
    _mxarray38_ = mclInitializeDouble(70.0);
    _mxarray39_ = mclInitializeDouble(6.0);
    _mxarray40_ = mclInitializeDouble(.6666666666666666);
    _mxarray41_ = mclInitializeString(31, _array42_);
    _mxarray43_ = mclInitializeDouble(4.0);
    _mxarray44_ = mclInitializeDouble(40.0);
    _mxarray45_ = mclInitializeDouble(55.0);
    _mxarray46_ = mclInitializeDoubleVector(1, 3, _array47_);
    _mxarray48_ = mclInitializeDoubleVector(1, 3, _array49_);
    _mxarray50_ = mclInitializeDoubleVector(1, 3, _array51_);
    _mxarray52_ = mclInitializeDoubleVector(1, 3, _array53_);
    _mxarray54_ = mclInitializeString(17, _array55_);
    _mxarray56_ = mclInitializeDoubleVector(1, 3, _array57_);
    _mxarray58_ = mclInitializeString(4, _array59_);
    _mxarray60_ = mclInitializeString(4, _array61_);
    _mxarray62_ = mclInitializeString(4, _array63_);
    _mxarray64_ = mclInitializeString(3, _array65_);
    _mxarray66_ = mclInitializeString(3, _array67_);
    _mxarray68_ = mclInitializeString(4, _array69_);
    _mxarray70_ = mclInitializeString(6, _array71_);
    _mxarray72_ = mclInitializeString(3, _array73_);
    _mxarray74_ = mclInitializeString(5, _array75_);
    _mxarray76_ = mclInitializeString(8, _array77_);
    _mxarray78_ = mclInitializeString(8, _array79_);
    _mxarray80_ = mclInitializeString(8, _array81_);
    _mxarray82_ = mclInitializeString(7, _array83_);
    _mxarray84_ = mclInitializeString(7, _array85_);
    _mxarray86_ = mclInitializeString(8, _array87_);
    _mxarray88_ = mclInitializeString(7, _array89_);
    _mxarray90_ = mclInitializeString(6, _array91_);
    _mxarray92_ = mclInitializeString(6, _array93_);
    _mxarray94_ = mclInitializeString(6, _array95_);
    _mxarray96_ = mclInitializeString(6, _array97_);
    _mxarray98_ = mclInitializeString(5, _array99_);
    _array101_[0] = _mxarray98_;
    _mxarray102_ = mclInitializeString(5, _array103_);
    _array101_[1] = _mxarray102_;
    _mxarray104_ = mclInitializeString(4, _array105_);
    _array101_[2] = _mxarray104_;
    _mxarray100_ = mclInitializeCellVector(1, 3, _array101_);
    _array107_[0] = _mxarray2_;
    _array107_[1] = _mxarray17_;
    _array107_[2] = _mxarray3_;
    _array107_[3] = _mxarray43_;
    _array107_[4] = _mxarray34_;
    _mxarray106_ = mclInitializeCellVector(1, 5, _array107_);
    _mxarray108_ = mclInitializeDoubleVector(1, 3, _array109_);
    _mxarray110_ = mclInitializeDoubleVector(1, 3, _array111_);
    _mxarray112_ = mclInitializeDoubleVector(1, 3, _array113_);
    _mxarray114_ = mclInitializeDoubleVector(1, 3, _array115_);
    _mxarray116_ = mclInitializeDoubleVector(1, 3, _array117_);
    _mxarray118_ = mclInitializeString(1, _array119_);
    _mxarray120_ = mclInitializeDouble(.3);
    _mxarray121_ = mclInitializeDouble(.4);
    _mxarray123_ = mclInitializeDouble(666.0);
    _mxarray122_ = mclInitializeCell(_mxarray123_);
    _mxarray124_ = mclInitializeString(1, _array125_);
    _mxarray126_ = mclInitializeDoubleVector(1, 3, _array127_);
    _array129_[0] = _mxarray39_;
    _mxarray130_ = mclInitializeDouble(7.0);
    _array129_[1] = _mxarray130_;
    _array129_[2] = _mxarray20_;
    _mxarray128_ = mclInitializeCellVector(1, 3, _array129_);
    _mxarray131_ = mclInitializeDoubleVector(1, 3, _array132_);
    _mxarray133_ = mclInitializeDoubleVector(1, 3, _array134_);
    _mxarray135_ = mclInitializeDoubleVector(1, 3, _array136_);
    _mxarray137_ = mclInitializeString(1, _array138_);
    _mxarray139_ = mclInitializeString(18, _array140_);
    _mxarray141_ = mclInitializeString(8, _array142_);
    _mxarray143_ = mclInitializeDouble(800.0);
    _mxarray144_ = mclInitializeString(5, _array145_);
    _mxarray148_ = mclInitializeString(3, _array149_);
    _array147_[0] = _mxarray148_;
    _mxarray150_ = mclInitializeString(3, _array151_);
    _array147_[1] = _mxarray150_;
    _mxarray146_ = mclInitializeCellVector(1, 2, _array147_);
    _mxarray152_ = mclInitializeDouble(12.0);
    _mxarray153_ = mclInitializeCell(_mxarray18_);
    _mxarray154_ = mclInitializeDouble(500.0);
    _mxarray155_ = mclInitializeDouble(10.0);
    _mxarray156_ = mclInitializeString(19, _array157_);
    _mxarray158_ = mclInitializeDouble(72.0);
    _mxarray159_ = mclInitializeString(10, _array160_);
    _mxarray161_ = mclInitializeString(6, _array162_);
    _mxarray163_ = mclInitializeString(6, _array164_);
    _mxarray165_ = mclInitializeString(1, _array166_);
    _mxarray167_ = mclInitializeString(9, _array168_);
    _mxarray169_ = mclInitializeString(11, _array170_);
    _mxarray171_ = mclInitializeDouble(.5555555555555556);
    _mxarray172_ = mclInitializeDouble(.4166666666666667);
    _mxarray173_ = mclInitializeString(10, _array174_);
    _mxarray175_ = mclInitializeString(10, _array176_);
    _array178_[0] = _mxarray150_;
    _array178_[1] = _mxarray148_;
    _mxarray177_ = mclInitializeCellVector(1, 2, _array178_);
    _mxarray179_ = mclInitializeDouble(25.0);
    _mxarray180_ = mclInitializeDouble(24.0);
}

void TerminateModule_wmachdep(void) {
    mxDestroyArray(_mxarray180_);
    mxDestroyArray(_mxarray179_);
    mxDestroyArray(_mxarray177_);
    mxDestroyArray(_mxarray175_);
    mxDestroyArray(_mxarray173_);
    mxDestroyArray(_mxarray172_);
    mxDestroyArray(_mxarray171_);
    mxDestroyArray(_mxarray169_);
    mxDestroyArray(_mxarray167_);
    mxDestroyArray(_mxarray165_);
    mxDestroyArray(_mxarray163_);
    mxDestroyArray(_mxarray161_);
    mxDestroyArray(_mxarray159_);
    mxDestroyArray(_mxarray158_);
    mxDestroyArray(_mxarray156_);
    mxDestroyArray(_mxarray155_);
    mxDestroyArray(_mxarray154_);
    mxDestroyArray(_mxarray153_);
    mxDestroyArray(_mxarray152_);
    mxDestroyArray(_mxarray146_);
    mxDestroyArray(_mxarray150_);
    mxDestroyArray(_mxarray148_);
    mxDestroyArray(_mxarray144_);
    mxDestroyArray(_mxarray143_);
    mxDestroyArray(_mxarray141_);
    mxDestroyArray(_mxarray139_);
    mxDestroyArray(_mxarray137_);
    mxDestroyArray(_mxarray135_);
    mxDestroyArray(_mxarray133_);
    mxDestroyArray(_mxarray131_);
    mxDestroyArray(_mxarray128_);
    mxDestroyArray(_mxarray130_);
    mxDestroyArray(_mxarray126_);
    mxDestroyArray(_mxarray124_);
    mxDestroyArray(_mxarray122_);
    mxDestroyArray(_mxarray123_);
    mxDestroyArray(_mxarray121_);
    mxDestroyArray(_mxarray120_);
    mxDestroyArray(_mxarray118_);
    mxDestroyArray(_mxarray116_);
    mxDestroyArray(_mxarray114_);
    mxDestroyArray(_mxarray112_);
    mxDestroyArray(_mxarray110_);
    mxDestroyArray(_mxarray108_);
    mxDestroyArray(_mxarray106_);
    mxDestroyArray(_mxarray100_);
    mxDestroyArray(_mxarray104_);
    mxDestroyArray(_mxarray102_);
    mxDestroyArray(_mxarray98_);
    mxDestroyArray(_mxarray96_);
    mxDestroyArray(_mxarray94_);
    mxDestroyArray(_mxarray92_);
    mxDestroyArray(_mxarray90_);
    mxDestroyArray(_mxarray88_);
    mxDestroyArray(_mxarray86_);
    mxDestroyArray(_mxarray84_);
    mxDestroyArray(_mxarray82_);
    mxDestroyArray(_mxarray80_);
    mxDestroyArray(_mxarray78_);
    mxDestroyArray(_mxarray76_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray72_);
    mxDestroyArray(_mxarray70_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mwmachdep(int nargout_, mxArray * option, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_wmachdep
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfWmachdep" contains the normal interface for the "wmachdep"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wmachdep.m" (lines 1-273).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfWmachdep(mlfVarargoutList * varargout, mxArray * option, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, option, 0);
    mlfEnterNewContext(0, -2, option, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mwmachdep(nargout, option, varargin);
    mlfRestorePreviousContext(0, 1, option);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlxWmachdep" contains the feval interface for the "wmachdep"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wmachdep.m" (lines 1-273). The
 * feval function calls the implementation version of wmachdep through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxWmachdep(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
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
    mplhs[0] = Mwmachdep(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mwmachdep" is the implementation version of the "wmachdep"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/wmachdep.m" (lines 1-273). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = wmachdep(option,varargin)
 */
static mxArray * Mwmachdep(int nargout_, mxArray * option, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wmachdep);
    int nargin_ = mclNargin(-2, option, varargin, NULL);
    mxArray * varargout = NULL;
    mxArray * MSize = NULL;
    mxArray * ind = NULL;
    mxArray * RatScrPixPerInch = NULL;
    mxArray * StdScrPixPerInch = NULL;
    mxArray * CurScrPixPerInch = NULL;
    mxArray * siz = NULL;
    mxArray * txt_Color = NULL;
    mxArray * xyz_Color = NULL;
    mxArray * prefMode = NULL;
    mxArray * colors = NULL;
    mxArray * sizes = NULL;
    mxArray * machine = NULL;
    mxArray * scrSize = NULL;
    mxArray * allPrefMode = NULL;
    mclCopyArray(&option);
    mclCopyArray(&varargin);
    /*
     * %WMACHDEP Machine dependent values.
     * %   VARARGOUT = WMACHDEP(OPTION,VARARGIN)
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 15-Feb-1998.
     * %   Last Revision: 03-May-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $
     * 
     * switch option
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 'read_defaultMode'
             * varargout{1} = 3;  % Gray Figures.
             */
            mlfIndexAssign(&varargout, "{?}", _mxarray2_, _mxarray3_);
            /*
             * return
             */
            mxDestroyArray(v_);
            goto return_;
        /*
         * case 'test_prefMode'
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            /*
             * allPrefMode = [1:8 , 666];
             */
            mlfAssign(&allPrefMode, _mxarray6_);
            /*
             * if isempty(find(varargin{1}==allPrefMode))
             */
            if (mlfTobool(
                  mlfIsempty(
                    mlfFind(
                      NULL,
                      NULL,
                      mclFeval(
                        mclValueVarargout(),
                        mlxEq,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", _mxarray2_),
                        mclVv(allPrefMode, "allPrefMode"),
                        NULL))))) {
                /*
                 * varargout{1} = wmachdep('read_defaultMode');
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray2_,
                  mlfWmachdep(mclValueVarargout(), _mxarray0_, NULL));
            /*
             * else
             */
            } else {
                /*
                 * varargout{1} = varargin{1};
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray2_,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray2_));
            /*
             * end
             */
            }
            /*
             * return
             */
            mxDestroyArray(v_);
            goto return_;
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * scrSize = get(0,'ScreenSize');
     */
    mlfAssign(&scrSize, mlfNGet(1, _mxarray8_, _mxarray9_, NULL));
    /*
     * machine = computer;
     */
    mlfAssign(&machine, mlfComputer(NULL, NULL));
    /*
     * machine = machine(1:3);
     */
    mlfAssign(
      &machine,
      mclArrayRef1(
        mclVv(machine, "machine"), mlfColon(_mxarray2_, _mxarray3_, NULL)));
    /*
     * 
     * switch option   
     */
    {
        mxArray * v_ = mclInitialize(mclVa(option, "option"));
        if (mclSwitchCompare(v_, _mxarray11_)) {
            /*
             * case 'globals'
             * % Globals: Sizes and Colors
             * %---------------------------
             * if scrSize(4)<600
             */
            if (mclLtBool(
                  mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4), _mxarray13_)) {
                /*
                 * sizes.btnHeight = 16;
                 */
                mlfIndexAssign(&sizes, ".btnHeight", _mxarray14_);
                /*
                 * sizes.btnWidth  = 60;
                 */
                mlfIndexAssign(&sizes, ".btnWidth", _mxarray15_);
                /*
                 * sizes.popWidth  = 50;
                 */
                mlfIndexAssign(&sizes, ".popWidth", _mxarray16_);
                /*
                 * sizes.xSpacing  = 2;
                 */
                mlfIndexAssign(&sizes, ".xSpacing", _mxarray17_);
                /*
                 * sizes.ySpacing  = 2;
                 */
                mlfIndexAssign(&sizes, ".ySpacing", _mxarray17_);
                /*
                 * switch machine
                 */
                {
                    mxArray * v_0 = mclInitialize(mclVv(machine, "machine"));
                    if (mclSwitchCompare(v_0, _mxarray18_)) {
                        /*
                         * case 'PCW' , sizes.axeFontSize = 8; sizes.txtFontSize = 8;
                         */
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                    /*
                     * otherwise  , sizes.axeFontSize = 8; sizes.txtFontSize = 8;
                     */
                    } else {
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_0);
                }
                /*
                 * sizes.axeFontSize = 8;
                 */
                mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                /*
                 * sizes.txtFontSize = 8;
                 */
                mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                /*
                 * sizes.uicFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".uicFontWeight", _mxarray21_);
                /*
                 * sizes.axeFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".axeFontWeight", _mxarray21_);
                /*
                 * sizes.txtFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".txtFontWeight", _mxarray21_);
                /*
                 * sizes.xGraRatio   = 0.71;
                 */
                mlfIndexAssign(&sizes, ".xGraRatio", _mxarray23_);
            /*
             * 
             * elseif scrSize(4)<700
             */
            } else if (mclLtBool(
                         mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                         _mxarray24_)) {
                /*
                 * if strcmp(machine,'MAC')
                 */
                if (mlfTobool(
                      mlfStrcmp(mclVv(machine, "machine"), _mxarray25_))) {
                    /*
                     * sizes.btnHeight = 20;
                     */
                    mlfIndexAssign(&sizes, ".btnHeight", _mxarray27_);
                /*
                 * else
                 */
                } else {
                    /*
                     * sizes.btnHeight = 18;
                     */
                    mlfIndexAssign(&sizes, ".btnHeight", _mxarray28_);
                /*
                 * end
                 */
                }
                /*
                 * sizes.btnWidth = 60;
                 */
                mlfIndexAssign(&sizes, ".btnWidth", _mxarray15_);
                /*
                 * sizes.popWidth = 60;
                 */
                mlfIndexAssign(&sizes, ".popWidth", _mxarray15_);
                /*
                 * sizes.xSpacing = 3;
                 */
                mlfIndexAssign(&sizes, ".xSpacing", _mxarray3_);
                /*
                 * sizes.ySpacing = 3;
                 */
                mlfIndexAssign(&sizes, ".ySpacing", _mxarray3_);
                /*
                 * switch machine
                 */
                {
                    mxArray * v_1 = mclInitialize(mclVv(machine, "machine"));
                    if (mclSwitchCompare(v_1, _mxarray18_)) {
                        /*
                         * case 'PCW' , sizes.axeFontSize = 8; sizes.txtFontSize = 8;
                         */
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                    /*
                     * otherwise  , sizes.axeFontSize = 9; sizes.txtFontSize = 9;
                     */
                    } else {
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray29_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray29_);
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_1);
                }
                /*
                 * sizes.uicFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".uicFontWeight", _mxarray21_);
                /*
                 * sizes.axeFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".axeFontWeight", _mxarray21_);
                /*
                 * sizes.txtFontWeight = 'normal';
                 */
                mlfIndexAssign(&sizes, ".txtFontWeight", _mxarray21_);
                /*
                 * sizes.xGraRatio   = 0.72;
                 */
                mlfIndexAssign(&sizes, ".xGraRatio", _mxarray30_);
            /*
             * 
             * elseif scrSize(4)<1200
             */
            } else if (mclLtBool(
                         mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                         _mxarray31_)) {
                /*
                 * sizes.btnHeight = 22;
                 */
                mlfIndexAssign(&sizes, ".btnHeight", _mxarray32_);
                /*
                 * sizes.btnWidth  = 80;
                 */
                mlfIndexAssign(&sizes, ".btnWidth", _mxarray33_);
                /*
                 * sizes.popWidth  = 60;
                 */
                mlfIndexAssign(&sizes, ".popWidth", _mxarray15_);
                /*
                 * sizes.xSpacing  = 8;
                 */
                mlfIndexAssign(&sizes, ".xSpacing", _mxarray20_);
                /*
                 * sizes.ySpacing  = 5;
                 */
                mlfIndexAssign(&sizes, ".ySpacing", _mxarray34_);
                /*
                 * switch machine
                 */
                {
                    mxArray * v_2 = mclInitialize(mclVv(machine, "machine"));
                    if (mclSwitchCompare(v_2, _mxarray18_)) {
                        /*
                         * case 'PCW' , sizes.axeFontSize = 8; sizes.txtFontSize = 8;
                         */
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                    /*
                     * otherwise  , sizes.axeFontSize = 9; sizes.txtFontSize = 9;
                     */
                    } else {
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray29_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray29_);
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_2);
                }
                /*
                 * sizes.uicFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".uicFontWeight", _mxarray35_);
                /*
                 * sizes.axeFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".axeFontWeight", _mxarray35_);
                /*
                 * sizes.txtFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".txtFontWeight", _mxarray35_);
                /*
                 * sizes.xGraRatio   = 0.71;
                 */
                mlfIndexAssign(&sizes, ".xGraRatio", _mxarray23_);
            /*
             * 
             * else
             */
            } else {
                /*
                 * sizes.btnHeight = 22;
                 */
                mlfIndexAssign(&sizes, ".btnHeight", _mxarray32_);
                /*
                 * sizes.btnWidth  = 90;
                 */
                mlfIndexAssign(&sizes, ".btnWidth", _mxarray37_);
                /*
                 * sizes.popWidth  = 70;
                 */
                mlfIndexAssign(&sizes, ".popWidth", _mxarray38_);
                /*
                 * sizes.xSpacing  =  8;
                 */
                mlfIndexAssign(&sizes, ".xSpacing", _mxarray20_);
                /*
                 * sizes.ySpacing  =  6;
                 */
                mlfIndexAssign(&sizes, ".ySpacing", _mxarray39_);
                /*
                 * switch machine
                 */
                {
                    mxArray * v_3 = mclInitialize(mclVv(machine, "machine"));
                    if (mclSwitchCompare(v_3, _mxarray18_)) {
                        /*
                         * case 'PCW' , sizes.axeFontSize = 8; sizes.txtFontSize = 8;
                         */
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray20_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray20_);
                    /*
                     * otherwise  , sizes.axeFontSize = 9; sizes.txtFontSize = 9;
                     */
                    } else {
                        mlfIndexAssign(&sizes, ".axeFontSize", _mxarray29_);
                        mlfIndexAssign(&sizes, ".txtFontSize", _mxarray29_);
                    /*
                     * end
                     */
                    }
                    mxDestroyArray(v_3);
                }
                /*
                 * sizes.uicFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".uicFontWeight", _mxarray35_);
                /*
                 * sizes.axeFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".axeFontWeight", _mxarray35_);
                /*
                 * sizes.txtFontWeight = 'bold';
                 */
                mlfIndexAssign(&sizes, ".txtFontWeight", _mxarray35_);
                /*
                 * sizes.xGraRatio     = 0.71;
                 */
                mlfIndexAssign(&sizes, ".xGraRatio", _mxarray23_);
            /*
             * 
             * end
             */
            }
            /*
             * sizes.txtHeight   = 16;
             */
            mlfIndexAssign(&sizes, ".txtHeight", _mxarray14_);
            /*
             * sizes.sliYProp    = 2/3;
             */
            mlfIndexAssign(&sizes, ".sliYProp", _mxarray40_);
            /*
             * colors.uicBkColor = get(0,'DefaultUicontrolBackgroundcolor');
             */
            mlfIndexAssign(
              &colors,
              ".uicBkColor",
              mlfNGet(1, _mxarray8_, _mxarray41_, NULL));
            /*
             * switch machine
             */
            {
                mxArray * v_4 = mclInitialize(mclVv(machine, "machine"));
                if (mclSwitchCompare(v_4, _mxarray18_)) {
                    /*
                     * case 'PCW'
                     * sizes.termProp     = scrSize(3:4);
                     */
                    mlfIndexAssign(
                      &sizes,
                      ".termProp",
                      mclArrayRef1(
                        mclVv(scrSize, "scrSize"),
                        mlfColon(_mxarray3_, _mxarray43_, NULL)));
                    /*
                     * sizes.figShiftTop  = 40;
                     */
                    mlfIndexAssign(&sizes, ".figShiftTop", _mxarray44_);
                    /*
                     * if scrSize(4)>=1200 , sizes.figShiftTop  = 55; end
                     */
                    if (mclGeBool(
                          mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                          _mxarray31_)) {
                        mlfIndexAssign(&sizes, ".figShiftTop", _mxarray45_);
                    }
                    /*
                     * colors.uicBkColor = 0.7529*[1 1 1];
                     */
                    mlfIndexAssign(&colors, ".uicBkColor", _mxarray46_);
                    /*
                     * colors.txtBkColor = 0.6*[1 1 1];
                     */
                    mlfIndexAssign(&colors, ".txtBkColor", _mxarray48_);
                    /*
                     * colors.fraBkColor = colors.uicBkColor;
                     */
                    mlfIndexAssign(
                      &colors,
                      ".fraBkColor",
                      mlfIndexRef(mclVv(colors, "colors"), ".uicBkColor"));
                /*
                 * 
                 * case 'MAC'
                 */
                } else if (mclSwitchCompare(v_4, _mxarray25_)) {
                    /*
                     * sizes.termProp    = scrSize(3:4);
                     */
                    mlfIndexAssign(
                      &sizes,
                      ".termProp",
                      mclArrayRef1(
                        mclVv(scrSize, "scrSize"),
                        mlfColon(_mxarray3_, _mxarray43_, NULL)));
                    /*
                     * sizes.figShiftTop = 40;
                     */
                    mlfIndexAssign(&sizes, ".figShiftTop", _mxarray44_);
                    /*
                     * colors.txtBkColor = [0.90 0.90 0.90];
                     */
                    mlfIndexAssign(&colors, ".txtBkColor", _mxarray50_);
                    /*
                     * colors.fraBkColor = [0.77 0.77 0.77];
                     */
                    mlfIndexAssign(&colors, ".fraBkColor", _mxarray52_);
                /*
                 * 
                 * otherwise
                 */
                } else {
                    /*
                     * sizes.termProp    = get(0,'TerminalDimension');
                     */
                    mlfIndexAssign(
                      &sizes,
                      ".termProp",
                      mlfNGet(1, _mxarray8_, _mxarray54_, NULL));
                    /*
                     * sizes.figShiftTop = 55;
                     */
                    mlfIndexAssign(&sizes, ".figShiftTop", _mxarray45_);
                    /*
                     * colors.txtBkColor = [0.90 0.90 0.90];
                     */
                    mlfIndexAssign(&colors, ".txtBkColor", _mxarray50_);
                    /*
                     * colors.fraBkColor = colors.uicBkColor;
                     */
                    mlfIndexAssign(
                      &colors,
                      ".fraBkColor",
                      mlfIndexRef(mclVv(colors, "colors"), ".uicBkColor"));
                /*
                 * end
                 */
                }
                mxDestroyArray(v_4);
            }
            /*
             * colors.ediBkColor  = [1 1 1];
             */
            mlfIndexAssign(&colors, ".ediBkColor", _mxarray56_);
            /*
             * colors.lstColorMap = ...
             */
            mlfIndexAssign(
              &colors,
              ".lstColorMap",
              mlfStrvcat(
                _mxarray58_,
                _mxarray60_,
                _mxarray62_,
                _mxarray64_,
                _mxarray66_,
                _mxarray68_,
                _mxarray70_,
                _mxarray72_,
                _mxarray74_,
                _mxarray76_,
                _mxarray78_,
                _mxarray80_,
                _mxarray82_,
                _mxarray84_,
                _mxarray86_,
                _mxarray88_,
                _mxarray90_,
                _mxarray92_,
                _mxarray94_,
                NULL));
            /*
             * strvcat(...
             * 'pink','cool','gray','hot','jet','bone',      ...
             * 'copper','hsv','prism','1 - pink','1 - cool', ...
             * '1 - gray','1 - hot','1 - jet','1 - bone',    ...
             * 'autumn ','spring','winter','summer'          ...
             * );
             * varargout = {sizes , colors};
             */
            mlfAssign(
              &varargout,
              mlfCellhcat(
                mclVv(sizes, "sizes"), mclVv(colors, "colors"), NULL));
        /*
         * 
         * case 'colors'
         */
        } else if (mclSwitchCompare(v_, _mxarray96_)) {
            /*
             * % Globals: Colors
             * %-----------------
             * prefMode = varargin{1};
             */
            mlfAssign(
              &prefMode,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray2_));
            /*
             * colors   = varargin{2};
             */
            mlfAssign(
              &colors,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray17_));
            /*
             * colors.defColor = 'white';
             */
            mlfIndexAssign(&colors, ".defColor", _mxarray98_);
            /*
             * switch prefMode
             */
            {
                mxArray * v_5 = mclInitialize(mclVv(prefMode, "prefMode"));
                if (mclSwitchCompare(v_5, _mxarray100_)) {
                    /*
                     * case {'white','black','none'}
                     * colors.defColor = prefMode;
                     */
                    mlfIndexAssign(
                      &colors, ".defColor", mclVv(prefMode, "prefMode"));
                /*
                 * 
                 * case {1,2,3,4,5}
                 */
                } else if (mclSwitchCompare(v_5, _mxarray106_)) {
                    /*
                     * colors.defColor = 'black';
                     */
                    mlfIndexAssign(&colors, ".defColor", _mxarray102_);
                    /*
                     * switch prefMode
                     */
                    {
                        mxArray * v_6
                          = mclInitialize(mclVv(prefMode, "prefMode"));
                        if (mclSwitchCompare(v_6, _mxarray2_)) {
                            /*
                             * case 1   , colors.figColor = [0 0 0];
                             */
                            mlfIndexAssign(&colors, ".figColor", _mxarray108_);
                        /*
                         * case 2   , colors.figColor = [0.2 0.3 0.5];
                         */
                        } else if (mclSwitchCompare(v_6, _mxarray17_)) {
                            mlfIndexAssign(&colors, ".figColor", _mxarray110_);
                        /*
                         * case 3   , colors.figColor = [0.5 0.5 0.5];
                         */
                        } else if (mclSwitchCompare(v_6, _mxarray3_)) {
                            mlfIndexAssign(&colors, ".figColor", _mxarray112_);
                        /*
                         * case 4   , colors.figColor = [0.5 0.3 0.2];
                         */
                        } else if (mclSwitchCompare(v_6, _mxarray43_)) {
                            mlfIndexAssign(&colors, ".figColor", _mxarray114_);
                        /*
                         * case 5   , colors.figColor = [0.3 0.5 0.2];
                         */
                        } else if (mclSwitchCompare(v_6, _mxarray34_)) {
                            mlfIndexAssign(&colors, ".figColor", _mxarray116_);
                        /*
                         * end
                         */
                        }
                        mxDestroyArray(v_6);
                    }
                    /*
                     * xyz_Color = 'w';
                     */
                    mlfAssign(&xyz_Color, _mxarray118_);
                    /*
                     * if strcmp(machine,'PCW')
                     */
                    if (mlfTobool(
                          mlfStrcmp(mclVv(machine, "machine"), _mxarray18_))) {
                        /*
                         * colors.uicBkColor = 0.7529*[1 1 1];
                         */
                        mlfIndexAssign(&colors, ".uicBkColor", _mxarray46_);
                        /*
                         * colors.txtBkColor = 0.6*[1 1 1];
                         */
                        mlfIndexAssign(&colors, ".txtBkColor", _mxarray48_);
                        /*
                         * colors.fraBkColor = colors.uicBkColor;
                         */
                        mlfIndexAssign(
                          &colors,
                          ".fraBkColor",
                          mlfIndexRef(mclVv(colors, "colors"), ".uicBkColor"));
                    /*
                     * 
                     * elseif prefMode==1 | prefMode==3 | prefMode==9
                     */
                    } else {
                        mxArray * a_
                          = mclInitialize(
                              mclEq(mclVv(prefMode, "prefMode"), _mxarray2_));
                        if (mlfTobool(a_)) {
                            mlfAssign(&a_, mlfScalar(1));
                        } else {
                            mlfAssign(
                              &a_,
                              mclOr(
                                a_,
                                mclEq(
                                  mclVv(prefMode, "prefMode"), _mxarray3_)));
                        }
                        if (mlfTobool(a_)
                            || mlfTobool(
                                 mclOr(
                                   a_,
                                   mclEq(
                                     mclVv(prefMode, "prefMode"),
                                     _mxarray29_)))) {
                            mxDestroyArray(a_);
                            /*
                             * colors.txtBkColor = [0.90 0.90 0.90];
                             */
                            mlfIndexAssign(&colors, ".txtBkColor", _mxarray50_);
                            /*
                             * colors.fraBkColor = colors.uicBkColor;
                             */
                            mlfIndexAssign(
                              &colors,
                              ".fraBkColor",
                              mlfIndexRef(
                                mclVv(colors, "colors"), ".uicBkColor"));
                        /*
                         * 
                         * else
                         */
                        } else {
                            mxDestroyArray(a_);
                            /*
                             * colors.txtBkColor = colors.figColor.^0.3;
                             */
                            mlfIndexAssign(
                              &colors,
                              ".txtBkColor",
                              mclFeval(
                                mclValueVarargout(),
                                mlxPower,
                                mlfIndexRef(
                                  mclVv(colors, "colors"), ".figColor"),
                                _mxarray120_,
                                NULL));
                            /*
                             * colors.fraBkColor = colors.figColor.^0.4;
                             */
                            mlfIndexAssign(
                              &colors,
                              ".fraBkColor",
                              mclFeval(
                                mclValueVarargout(),
                                mlxPower,
                                mlfIndexRef(
                                  mclVv(colors, "colors"), ".figColor"),
                                _mxarray121_,
                                NULL));
                        }
                    /*
                     * end
                     */
                    }
                /*
                 * 
                 * case {666}
                 */
                } else if (mclSwitchCompare(v_5, _mxarray122_)) {
                    /*
                     * colors.defColor = 'white';
                     */
                    mlfIndexAssign(&colors, ".defColor", _mxarray98_);
                    /*
                     * colors.figColor = [0.6 0.6 0.6];
                     */
                    mlfIndexAssign(&colors, ".figColor", _mxarray48_);
                    /*
                     * xyz_Color = 'k';
                     */
                    mlfAssign(&xyz_Color, _mxarray124_);
                    /*
                     * colors.uicBkColor = 0.7529*[1 1 1];
                     */
                    mlfIndexAssign(&colors, ".uicBkColor", _mxarray46_);
                    /*
                     * colors.txtBkColor = 0.7*[1 1 1];
                     */
                    mlfIndexAssign(&colors, ".txtBkColor", _mxarray126_);
                    /*
                     * colors.fraBkColor = colors.uicBkColor;
                     */
                    mlfIndexAssign(
                      &colors,
                      ".fraBkColor",
                      mlfIndexRef(mclVv(colors, "colors"), ".uicBkColor"));
                /*
                 * 
                 * case {6,7,8}
                 */
                } else if (mclSwitchCompare(v_5, _mxarray128_)) {
                    /*
                     * colors.defColor = 'white';
                     */
                    mlfIndexAssign(&colors, ".defColor", _mxarray98_);
                    /*
                     * if     prefMode==6 , colors.figColor = 'w';
                     */
                    if (mclEqBool(mclVv(prefMode, "prefMode"), _mxarray39_)) {
                        mlfIndexAssign(&colors, ".figColor", _mxarray118_);
                    /*
                     * elseif prefMode==7 , colors.figColor = [1 0.9 0.8];
                     */
                    } else if (mclEqBool(
                                 mclVv(prefMode, "prefMode"), _mxarray130_)) {
                        mlfIndexAssign(&colors, ".figColor", _mxarray131_);
                    /*
                     * elseif prefMode==8 , colors.figColor = [0.9 0.9 1];
                     */
                    } else if (mclEqBool(
                                 mclVv(prefMode, "prefMode"), _mxarray20_)) {
                        mlfIndexAssign(&colors, ".figColor", _mxarray133_);
                    /*
                     * end
                     */
                    }
                    /*
                     * xyz_Color = 'k';
                     */
                    mlfAssign(&xyz_Color, _mxarray124_);
                    /*
                     * if strcmp(machine,'PCW')
                     */
                    if (mlfTobool(
                          mlfStrcmp(mclVv(machine, "machine"), _mxarray18_))) {
                        /*
                         * colors.txtBkColor = [247/255 247/255 247/255];
                         */
                        mlfIndexAssign(&colors, ".txtBkColor", _mxarray135_);
                        /*
                         * colors.fraBkColor = colors.uicBkColor;
                         */
                        mlfIndexAssign(
                          &colors,
                          ".fraBkColor",
                          mlfIndexRef(mclVv(colors, "colors"), ".uicBkColor"));
                    /*
                     * elseif prefMode==6
                     */
                    } else if (mclEqBool(
                                 mclVv(prefMode, "prefMode"), _mxarray39_)) {
                        /*
                         * colors.txtBkColor = [0.90 0.90 0.90];
                         */
                        mlfIndexAssign(&colors, ".txtBkColor", _mxarray50_);
                        /*
                         * colors.fraBkColor = [0.77 0.77 0.77];
                         */
                        mlfIndexAssign(&colors, ".fraBkColor", _mxarray52_);
                    /*
                     * else
                     */
                    } else {
                        /*
                         * colors.txtBkColor = colors.figColor.^4;
                         */
                        mlfIndexAssign(
                          &colors,
                          ".txtBkColor",
                          mclFeval(
                            mclValueVarargout(),
                            mlxPower,
                            mlfIndexRef(mclVv(colors, "colors"), ".figColor"),
                            _mxarray43_,
                            NULL));
                        /*
                         * colors.fraBkColor = colors.figColor.^3;
                         */
                        mlfIndexAssign(
                          &colors,
                          ".fraBkColor",
                          mclFeval(
                            mclValueVarargout(),
                            mlxPower,
                            mlfIndexRef(mclVv(colors, "colors"), ".figColor"),
                            _mxarray3_,
                            NULL));
                    /*
                     * end
                     */
                    }
                /*
                 * 
                 * case 'm'    % monochrome
                 */
                } else if (mclSwitchCompare(v_5, _mxarray137_)) {
                    /*
                     * colors.figColor = get(0,'DefaultFigureColor');
                     */
                    mlfIndexAssign(
                      &colors,
                      ".figColor",
                      mlfNGet(1, _mxarray8_, _mxarray139_, NULL));
                    /*
                     * xyz_Color = 'w';
                     */
                    mlfAssign(&xyz_Color, _mxarray118_);
                    /*
                     * colors.txtBkColor = [0.90 0.90 0.90];
                     */
                    mlfIndexAssign(&colors, ".txtBkColor", _mxarray50_);
                    /*
                     * colors.fraBkColor = [0.77 0.77 0.77];
                     */
                    mlfIndexAssign(&colors, ".fraBkColor", _mxarray52_);
                /*
                 * end
                 */
                }
                mxDestroyArray(v_5);
            }
            /*
             * txt_Color = xyz_Color;
             */
            mlfAssign(&txt_Color, mclVv(xyz_Color, "xyz_Color"));
            /*
             * colors.axeXColor = xyz_Color;
             */
            mlfIndexAssign(
              &colors, ".axeXColor", mclVv(xyz_Color, "xyz_Color"));
            /*
             * colors.axeYColor = xyz_Color;
             */
            mlfIndexAssign(
              &colors, ".axeYColor", mclVv(xyz_Color, "xyz_Color"));
            /*
             * colors.axeZColor = xyz_Color;
             */
            mlfIndexAssign(
              &colors, ".axeZColor", mclVv(xyz_Color, "xyz_Color"));
            /*
             * colors.txtColor  = txt_Color;
             */
            mlfIndexAssign(&colors, ".txtColor", mclVv(txt_Color, "txt_Color"));
            /*
             * varargout{1} = colors;
             */
            mlfIndexAssign(
              &varargout, "{?}", _mxarray2_, mclVv(colors, "colors"));
        /*
         * 
         * case 'fontsize'
         */
        } else if (mclSwitchCompare(v_, _mxarray141_)) {
            /*
             * switch varargin{1}
             */
            mxArray * v_7
              = mclInitialize(
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray2_));
            if (mclSwitchCompare(v_7, _mxarray21_)) {
                /*
                 * case 'normal'
                 * if     scrSize(4)<600 , siz = 16;
                 */
                if (mclLtBool(
                      mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                      _mxarray13_)) {
                    mlfAssign(&siz, _mxarray14_);
                /*
                 * elseif scrSize(4)<700 , siz = 18;
                 */
                } else if (mclLtBool(
                             mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                             _mxarray24_)) {
                    mlfAssign(&siz, _mxarray28_);
                /*
                 * elseif scrSize(4)<800 , siz = 20;
                 */
                } else if (mclLtBool(
                             mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                             _mxarray143_)) {
                    mlfAssign(&siz, _mxarray27_);
                /*
                 * else                  , siz = 20;
                 */
                } else {
                    mlfAssign(&siz, _mxarray27_);
                /*
                 * end
                 */
                }
                /*
                 * if nargin>2
                 */
                if (nargin_ > 2) {
                    /*
                     * % in3 = font threshold or value threshold
                     * % in4 = value (optional).
                     * %-----------------------------------------
                     * if nargin==3
                     */
                    if (nargin_ == 3) {
                        /*
                         * siz = min(siz,varargin{2});
                         */
                        mlfAssign(
                          &siz,
                          mclFeval(
                            mclValueVarargout(),
                            mlxMin,
                            mclVv(siz, "siz"),
                            mlfIndexRef(
                              mclVa(varargin, "varargin"), "{?}", _mxarray17_),
                            NULL));
                    /*
                     * elseif nargin==4
                     */
                    } else if (nargin_ == 4) {
                        /*
                         * if varargin{3}>varargin{2} , siz = siz-2; end
                         */
                        if (mlfTobool(
                              mclFeval(
                                mclValueVarargout(),
                                mlxGt,
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  _mxarray3_),
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  _mxarray17_),
                                NULL))) {
                            mlfAssign(
                              &siz, mclMinus(mclVv(siz, "siz"), _mxarray17_));
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
             * case 'winfo'
             */
            } else if (mclSwitchCompare(v_7, _mxarray144_)) {
                /*
                 * switch machine
                 */
                mxArray * v_8 = mclInitialize(mclVv(machine, "machine"));
                if (mclSwitchCompare(v_8, _mxarray146_)) {
                    /*
                     * case {'SOL','SUN'} ,        siz = 12;
                     */
                    mlfAssign(&siz, _mxarray152_);
                /*
                 * 
                 * case {'PCW'}
                 */
                } else if (mclSwitchCompare(v_8, _mxarray153_)) {
                    /*
                     * if     scrSize(4)<500 , siz =  8;
                     */
                    if (mclLtBool(
                          mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                          _mxarray154_)) {
                        mlfAssign(&siz, _mxarray20_);
                    /*
                     * elseif scrSize(4)<700 , siz =  9;
                     */
                    } else if (mclLtBool(
                                 mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4),
                                 _mxarray24_)) {
                        mlfAssign(&siz, _mxarray29_);
                    /*
                     * else                  , siz = 10;
                     */
                    } else {
                        mlfAssign(&siz, _mxarray155_);
                    /*
                     * end
                     */
                    }
                /*
                 * 
                 * otherwise ,                 siz = 10;
                 */
                } else {
                    mlfAssign(&siz, _mxarray155_);
                /*
                 * end
                 */
                }
                mxDestroyArray(v_8);
            /*
             * end
             */
            }
            mxDestroyArray(v_7);
            /*
             * CurScrPixPerInch = get(0,'ScreenPixelsPerInch');
             */
            mlfAssign(
              &CurScrPixPerInch, mlfNGet(1, _mxarray8_, _mxarray156_, NULL));
            /*
             * StdScrPixPerInch = 72;
             */
            mlfAssign(&StdScrPixPerInch, _mxarray158_);
            /*
             * RatScrPixPerInch = StdScrPixPerInch / CurScrPixPerInch;
             */
            mlfAssign(
              &RatScrPixPerInch,
              mclMrdivide(
                mclVv(StdScrPixPerInch, "StdScrPixPerInch"),
                mclVv(CurScrPixPerInch, "CurScrPixPerInch")));
            /*
             * varargout{1}     = floor(RatScrPixPerInch*siz);
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray2_,
              mlfFloor(
                mclMtimes(
                  mclVv(RatScrPixPerInch, "RatScrPixPerInch"),
                  mclVv(siz, "siz"))));
        /*
         * 
         * case 'center_txt'
         */
        } else if (mclSwitchCompare(v_, _mxarray159_)) {
            /*
             * if scrSize(4)<700
             */
            if (mclLtBool(
                  mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4), _mxarray24_)) {
                /*
                 * varargout{1} = strvcat('Center','  On  ');
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray2_,
                  mlfStrvcat(_mxarray161_, _mxarray163_, NULL));
            /*
             * else
             */
            } else {
                /*
                 * varargout{1} = strvcat(' ','Center On',' ');
                 */
                mlfIndexAssign(
                  &varargout,
                  "{?}",
                  _mxarray2_,
                  mlfStrvcat(_mxarray165_, _mxarray167_, _mxarray165_, NULL));
            /*
             * end
             */
            }
        /*
         * 
         * case 'btnZoomAxes'
         */
        } else if (mclSwitchCompare(v_, _mxarray169_)) {
            /*
             * if scrSize(4)>=1200
             */
            if (mclGeBool(
                  mclIntArrayRef1(mclVv(scrSize, "scrSize"), 4), _mxarray31_)) {
                /*
                 * varargout{1} = 20/36;
                 */
                mlfIndexAssign(&varargout, "{?}", _mxarray2_, _mxarray171_);
            /*
             * else
             */
            } else {
                /*
                 * varargout{1} = 15/36;
                 */
                mlfIndexAssign(&varargout, "{?}", _mxarray2_, _mxarray172_);
            /*
             * end
             */
            }
        /*
         * 
         * case 'PCWDepSize'
         */
        } else if (mclSwitchCompare(v_, _mxarray173_)) {
            /*
             * % in2 = [mulPCW mulOthers].
             * % in3 = vector of sizes.
             * %--------------------------
             * switch machine
             */
            mxArray * v_9 = mclInitialize(mclVv(machine, "machine"));
            if (mclSwitchCompare(v_9, _mxarray18_)) {
                /*
                 * case 'PCW' , ind = 1;
                 */
                mlfAssign(&ind, _mxarray2_);
            /*
             * otherwise  , ind = 2;
             */
            } else {
                mlfAssign(&ind, _mxarray17_);
            /*
             * end
             */
            }
            mxDestroyArray(v_9);
            /*
             * varargout{1} = varargin{1}(ind)*varargin{2};
             */
            mlfIndexAssign(
              &varargout,
              "{?}",
              _mxarray2_,
              mclFeval(
                mclValueVarargout(),
                mlxMtimes,
                mlfIndexRef(
                  mclVa(varargin, "varargin"),
                  "{?}(?)",
                  _mxarray2_,
                  mclVv(ind, "ind")),
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray17_),
                NULL));
        /*
         * 
         * case 'markersize'
         */
        } else if (mclSwitchCompare(v_, _mxarray175_)) {
            /*
             * switch machine
             */
            mxArray * v_00 = mclInitialize(mclVv(machine, "machine"));
            if (mclSwitchCompare(v_00, _mxarray177_)) {
                /*
                 * case {'SUN','SOL'} , MSize = 25;
                 */
                mlfAssign(&MSize, _mxarray179_);
            /*
             * otherwise , MSize = 24;
             */
            } else {
                mlfAssign(&MSize, _mxarray180_);
            /*
             * end
             */
            }
            mxDestroyArray(v_00);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    return_:
    mxDestroyArray(allPrefMode);
    mxDestroyArray(scrSize);
    mxDestroyArray(machine);
    mxDestroyArray(sizes);
    mxDestroyArray(colors);
    mxDestroyArray(prefMode);
    mxDestroyArray(xyz_Color);
    mxDestroyArray(txt_Color);
    mxDestroyArray(siz);
    mxDestroyArray(CurScrPixPerInch);
    mxDestroyArray(StdScrPixPerInch);
    mxDestroyArray(RatScrPixPerInch);
    mxDestroyArray(ind);
    mxDestroyArray(MSize);
    mxDestroyArray(varargin);
    mxDestroyArray(option);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
