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
void CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*30+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PB_y[vi] * target[((hsi*30+0)*1+lsi)*1];
target[((hsi*30+1)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp154;
fp154 = fp155 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*30+1)*1+lsi)*1], fp154);
target[((hsi*30+2)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp151;
fp151 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*30+2)*1+lsi)*1], fp150);
target[((hsi*30+3)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_y[vi] * target[((hsi*30+0)*1+lsi)*1];
target[((hsi*30+5)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+1)*1+lsi)*1], fp141);
target[((hsi*30+6)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp138;
fp138 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+2)*1+lsi)*1], fp137);
target[((hsi*30+7)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * target[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+3)*1+lsi)*1], fp133);
target[((hsi*30+8)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp126;
fp126 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+5)*1+lsi)*1], fp125);
target[((hsi*30+10)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * target[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+6)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*30+11)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp112;
fp112 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * target[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+7)*1+lsi)*1], fp114);
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
target[((hsi*30+12)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp73;
fp73 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * target[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * target[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+8)*1+lsi)*1], fp107);
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
target[((hsi*30+13)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+13)*1+lsi)*1], fp75);
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
target[((hsi*30+18)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp80;
fp80 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * target[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+12)*1+lsi)*1], fp82);
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*30+17)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * target[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+11)*1+lsi)*1], fp89);
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
target[((hsi*30+16)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp94;
fp94 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+10)*1+lsi)*1], fp93);
target[((hsi*30+15)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp98;
fp98 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * target[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*30+3)*1+lsi)*1], fp146);
target[((hsi*30+4)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * target[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+4)*1+lsi)*1], fp129);
target[((hsi*30+9)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+9)*1+lsi)*1], fp100);
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
target[((hsi*30+14)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp66;
fp66 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * target[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+14)*1+lsi)*1], fp68);
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
target[((hsi*30+19)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp62;
fp62 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+15)*1+lsi)*1], fp61);
target[((hsi*30+20)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+16)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*30+21)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+17)*1+lsi)*1], fp50);
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*30+22)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+18)*1+lsi)*1], fp43);
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
target[((hsi*30+23)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+19)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*30+24)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+20)*1+lsi)*1], fp29);
target[((hsi*30+25)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+21)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*30+26)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+22)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*30+27)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+23)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*30+28)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*30+24)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 158 */
}

#ifdef __cplusplus
};
#endif
