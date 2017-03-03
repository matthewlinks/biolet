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
#include "coifwavf.h"
#include "errargn.h"
#include "errargt.h"
#include "libmatlbm.h"
#include "wstr2num.h"
static mxArray * _mxarray0_;

static double _array2_[2] = { 0.0, 1.0 };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '*' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static double _array8_[6] = { -.051429728471, .238929728471, .602859456942,
                              .272140543058, -.051429728471, -.011070271529 };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;

static double _array11_[12] = { .011587596739, -.02932013798, -.04763959031,
                                .273021046535, .574682393857, .294867193696,
                                -.054085607092, -.042026480461, .016744410163,
                                .003967883613, -.001289203356, -.000509505399 };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;

static double _array14_[18] = { -.002682418671, .005503126709, .016583560479,
                                -.046507764479, -.04322076356, .286503335274,
                                .56128525687, .302983571773, -.050770140755,
                                -.058196250762, .024434094321, .011229240962,
                                -.006369601011, -.001820458916, .000790205101,
                                .000329665174, -5.0192775e-05, -2.4465734e-05 };
static mxArray * _mxarray13_;
static mxArray * _mxarray15_;

static double _array17_[24] = { .000630961046, -.001152224852, -.005194524026,
                                .011362459244, .018867235378, -.057464234429,
                                -.039652648517, .293667390895, .553126452562,
                                .307157326198, -.047112738865, -.068038127051,
                                .027813640153, .017735837438, -.010756318517,
                                -.004001012886, .002652665946, .000895594529,
                                -.000416500571, -.000183829769, 4.4080354e-05,
                                2.2082857e-05, -2.304942e-06, -1.262175e-06 };
static mxArray * _mxarray16_;
static mxArray * _mxarray18_;

static double _array20_[30] = { -.0001499638, .0002535612, .0015402457,
                                -.0029411108, -.0071637819, .0165520664,
                                .0199178043, -.0649972628, -.0368000736,
                                .2980923235, .5475054294, .309706849,
                                -.0438660508, -.0746522389, .0291958795,
                                .023110777, -.0139736879, -.00648009,
                                .0047830014, .0017206547, -.0011758222,
                                -.000451227, .0002137298, 9.93776e-05,
                                -2.92321e-05, -1.5072e-05, 2.6408e-06,
                                1.4593e-06, -1.184e-07, -6.73e-08 };
static mxArray * _mxarray19_;

static mxChar _array22_[15] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'c', 'o', 'i', 'f', 'l', 'e', 't' };
static mxArray * _mxarray21_;

static mxChar _array24_[3] = { 'm', 's', 'g' };
static mxArray * _mxarray23_;

void InitializeModule_coifwavf(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDoubleVector(1, 2, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeDouble(47.0);
    _mxarray6_ = mclInitializeDouble(58.0);
    _mxarray7_ = mclInitializeDoubleVector(1, 6, _array8_);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeDoubleVector(1, 12, _array11_);
    _mxarray12_ = mclInitializeDouble(3.0);
    _mxarray13_ = mclInitializeDoubleVector(1, 18, _array14_);
    _mxarray15_ = mclInitializeDouble(4.0);
    _mxarray16_ = mclInitializeDoubleVector(1, 24, _array17_);
    _mxarray18_ = mclInitializeDouble(5.0);
    _mxarray19_ = mclInitializeDoubleVector(1, 30, _array20_);
    _mxarray21_ = mclInitializeString(15, _array22_);
    _mxarray23_ = mclInitializeString(3, _array24_);
}

void TerminateModule_coifwavf(void) {
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mcoifwavf(int nargout_, mxArray * wname);

_mexLocalFunctionTable _local_function_table_coifwavf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNCoifwavf" contains the nargout interface for the
 * "coifwavf" M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/coifwavf.m" (lines 1-72). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNCoifwavf(int nargout, mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mcoifwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfCoifwavf" contains the normal interface for the "coifwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/coifwavf.m" (lines 1-72). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfCoifwavf(mxArray * wname) {
    int nargout = 1;
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mcoifwavf(nargout, wname);
    mlfRestorePreviousContext(0, 1, wname);
    return mlfReturnValue(F);
}

/*
 * The function "mlfVCoifwavf" contains the void interface for the "coifwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/coifwavf.m" (lines 1-72). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCoifwavf(mxArray * wname) {
    mxArray * F = NULL;
    mlfEnterNewContext(0, 1, wname);
    F = Mcoifwavf(0, wname);
    mlfRestorePreviousContext(0, 1, wname);
    mxDestroyArray(F);
}

/*
 * The function "mlxCoifwavf" contains the feval interface for the "coifwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/coifwavf.m" (lines 1-72). The
 * feval function calls the implementation version of coifwavf through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxCoifwavf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: coifwavf Line: 1 Column:"
            " 1 The function \"coifwavf\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: coifwavf Line: 1 Column:"
            " 1 The function \"coifwavf\" was called with m"
            "ore than the declared number of inputs (1)."),
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
    mplhs[0] = Mcoifwavf(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mcoifwavf" is the implementation version of the "coifwavf"
 * M-function from file
 * "/usr/local/matlab6p5/toolbox/wavelet/wavelet/coifwavf.m" (lines 1-72). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function F = coifwavf(wname)
 */
static mxArray * Mcoifwavf(int nargout_, mxArray * wname) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_coifwavf);
    int nargin_ = mclNargin(1, wname, NULL);
    mxArray * F = NULL;
    mxArray * num = NULL;
    mxArray * ii = NULL;
    mxArray * ab = NULL;
    mxArray * lw = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&wname);
    /*
     * %COIFWAVF Coiflet wavelet filter.
     * %   F = COIFWAVF(W) returns the scaling filter
     * %   associated with the coiflet wavelet specified
     * %   by the string W where W = 'coifN'.
     * %   Possible values for N are:
     * %      N = 1, 2, 3, 4 or 5.
     * %
     * %   See also WAVEINFO.
     * 
     * %   M. Misiti, Y. Misiti, G. Oppenheim, J.M. Poggi 12-Mar-96.
     * %   Last Revision: 26-Oct-1999.
     * %   Copyright 1995-2002 The MathWorks, Inc.
     * %   $Revision: 1.1.1.1 $  $Date: 2007/05/03 16:15:45 $ 
     * 
     * % Check arguments.
     * if errargn(mfilename,nargin,[1],nargout,[0:1]), error('*'); end
     */
    if (mlfTobool(
          mlfNErrargn(
            1,
            NULL,
            mxCreateString("coifwavf"),
            mlfScalar(nargin_),
            _mxarray0_,
            mlfScalar(nargout_),
            _mxarray1_))) {
        mlfError(_mxarray3_, NULL);
    }
    /*
     * 
     * lw = length(wname); ab = abs(wname);
     */
    mlfAssign(&lw, mlfScalar(mclLengthInt(mclVa(wname, "wname"))));
    mlfAssign(&ab, mlfAbs(mclVa(wname, "wname")));
    /*
     * ii = lw+1; 
     */
    mlfAssign(&ii, mclPlus(mclVv(lw, "lw"), _mxarray0_));
    /*
     * while (ii>1) & (47<ab(ii-1)) & (ab(ii-1)<58) , ii = ii-1; end
     */
    for (;;) {
        mxArray * a_ = mclInitialize(mclGt(mclVv(ii, "ii"), _mxarray0_));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclLt(
                  _mxarray5_,
                  mclArrayRef1(
                    mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray0_)))));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclLt(
                     mclArrayRef1(
                       mclVv(ab, "ab"), mclMinus(mclVv(ii, "ii"), _mxarray0_)),
                     _mxarray6_)))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        mlfAssign(&ii, mclMinus(mclVv(ii, "ii"), _mxarray0_));
    }
    /*
     * num = wstr2num(wname(ii:lw));
     */
    mlfAssign(
      &num,
      mlfWstr2num(
        mclArrayRef1(
          mclVa(wname, "wname"),
          mlfColon(mclVv(ii, "ii"), mclVv(lw, "lw"), NULL))));
    /*
     * 
     * switch num
     */
    {
        mxArray * v_ = mclInitialize(mclVv(num, "num"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 1
             * F = [...
             */
            mlfAssign(&F, _mxarray7_);
        /*
         * -0.05142972847100   0.23892972847100   0.60285945694200   0.27214054305800 ...
         * -0.05142972847100  -0.01107027152900                                       ...
         * ];
         * 
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray9_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray10_);
        /*
         * 0.01158759673900  -0.02932013798000  -0.04763959031000   0.27302104653500 ...
         * 0.57468239385700   0.29486719369600  -0.05408560709200  -0.04202648046100 ...
         * 0.01674441016300   0.00396788361300  -0.00128920335600  -0.00050950539900 ...
         * ];
         * 
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray12_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray13_);
        /*
         * -0.00268241867100   0.00550312670900   0.01658356047900  -0.04650776447900 ...
         * -0.04322076356000   0.28650333527400   0.56128525687000   0.30298357177300 ...
         * -0.05077014075500  -0.05819625076200   0.02443409432100   0.01122924096200 ...
         * -0.00636960101100  -0.00182045891600   0.00079020510100   0.00032966517400 ...
         * -0.00005019277500  -0.00002446573400
         * ];
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray15_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray16_);
        /*
         * 0.00063096104600  -0.00115222485200  -0.00519452402600   0.01136245924400 ...
         * 0.01886723537800  -0.05746423442900  -0.03965264851700   0.29366739089500 ...
         * 0.55312645256200   0.30715732619800  -0.04711273886500  -0.06803812705100 ...
         * 0.02781364015300   0.01773583743800  -0.01075631851700  -0.00400101288600 ...
         * 0.00265266594600   0.00089559452900  -0.00041650057100  -0.00018382976900 ...
         * 0.00004408035400   0.00002208285700  -0.00000230494200  -0.00000126217500 ...
         * ];
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray18_)) {
            /*
             * F = [...
             */
            mlfAssign(&F, _mxarray19_);
        /*
         * -0.00014996380000   0.00025356120000   0.00154024570000  -0.00294111080000 ...
         * -0.00716378190000   0.01655206640000   0.01991780430000  -0.06499726280000 ...
         * -0.03680007360000   0.29809232350000   0.54750542940000   0.30970684900000 ...
         * -0.04386605080000  -0.07465223890000   0.02919587950000   0.02311077700000 ...
         * -0.01397368790000  -0.00648009000000   0.00478300140000   0.00172065470000 ...
         * -0.00117582220000  -0.00045122700000   0.00021372980000   0.00009937760000 ...
         * -0.00002923210000  -0.00001507200000   0.00000264080000   0.00000145930000 ...
         * -0.00000011840000  -0.00000006730000
         * ];
         * otherwise
         */
        } else {
            /*
             * errargt(mfilename,'Invalid coiflet','msg');
             */
            mclAssignAns(
              &ans,
              mlfErrargt(
                mxCreateString("coifwavf"), _mxarray21_, _mxarray23_, NULL));
            /*
             * error('*');
             */
            mlfError(_mxarray3_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    mclValidateOutput(F, 1, nargout_, "F", "coifwavf");
    mxDestroyArray(ans);
    mxDestroyArray(lw);
    mxDestroyArray(ab);
    mxDestroyArray(ii);
    mxDestroyArray(num);
    mxDestroyArray(wname);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return F;
}
