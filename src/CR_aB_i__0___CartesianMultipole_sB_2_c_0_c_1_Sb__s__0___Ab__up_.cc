/*
 *  Copyright (C) 2004-2019 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->BO_z[vi] * fp0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp1 + fp3;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp35, fp36);
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp37 + fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp99;
fp99 = fp42 * fp34;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp2;
target[((hsi*28+27)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp42 * fp33;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp6;
target[((hsi*28+26)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp42 * fp32;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp10;
target[((hsi*28+25)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp42 * fp31;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp14;
target[((hsi*28+24)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp42 * fp30;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp18;
target[((hsi*28+23)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp42 * fp29;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp22;
target[((hsi*28+22)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp42 * fp28;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp26;
target[((hsi*28+21)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp44, fp45);
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_x[vi] * fp45;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp46 + fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp113;
fp113 = fp51 * fp34;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp6;
target[((hsi*28+20)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp51 * fp33;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp10;
target[((hsi*28+19)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp51 * fp32;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp14;
target[((hsi*28+18)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp51 * fp31;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp18;
target[((hsi*28+17)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp51 * fp30;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp22;
target[((hsi*28+16)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp51 * fp29;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp26;
target[((hsi*28+15)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_x[vi], fp53, fp54);
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp55 + fp59;
LIBINT2_REALTYPE fp60;
fp60 = fp58 + fp61;
LIBINT2_REALTYPE fp125;
fp125 = fp60 * fp34;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp10;
target[((hsi*28+14)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp60 * fp33;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp14;
target[((hsi*28+13)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp60 * fp32;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp18;
target[((hsi*28+12)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp60 * fp31;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp22;
target[((hsi*28+11)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp60 * fp30;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp26;
target[((hsi*28+10)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp63);
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp64 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = fp67 + fp70;
LIBINT2_REALTYPE fp135;
fp135 = fp69 * fp34;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp14;
target[((hsi*28+9)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp69 * fp33;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp18;
target[((hsi*28+8)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp69 * fp32;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp22;
target[((hsi*28+7)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp69 * fp31;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp26;
target[((hsi*28+6)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp72);
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp72;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp73 + fp77;
LIBINT2_REALTYPE fp78;
fp78 = fp76 + fp79;
LIBINT2_REALTYPE fp143;
fp143 = fp78 * fp34;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp18;
target[((hsi*28+5)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp78 * fp33;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp22;
target[((hsi*28+4)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp78 * fp32;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp26;
target[((hsi*28+3)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_x[vi], fp80, fp81);
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_x[vi] * fp83;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp82 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp85 + fp88;
LIBINT2_REALTYPE fp149;
fp149 = fp87 * fp34;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp22;
target[((hsi*28+2)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp87 * fp33;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp26;
target[((hsi*28+1)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp90);
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp90;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp91 + fp95;
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp153;
fp153 = fp96 * fp34;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp26;
target[((hsi*28+0)*1+lsi)*1] = fp152;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 154 */
}

#ifdef __cplusplus
};
#endif
