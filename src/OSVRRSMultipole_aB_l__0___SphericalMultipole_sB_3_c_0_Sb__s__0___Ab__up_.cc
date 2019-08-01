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
void OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+35)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+34)*1+lsi)*1], fp7);
target[((hsi*45+43)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+33)*1+lsi)*1], fp13);
target[((hsi*45+42)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+32)*1+lsi)*1], fp19);
target[((hsi*45+41)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src4[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+31)*1+lsi)*1], fp25);
target[((hsi*45+40)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src4[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+30)*1+lsi)*1], fp31);
target[((hsi*45+39)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src4[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+29)*1+lsi)*1], fp37);
target[((hsi*45+38)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src4[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+28)*1+lsi)*1], fp43);
target[((hsi*45+37)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e-01 * src3[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * src3[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+28)*1+lsi)*1], fp47);
target[((hsi*45+36)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src4[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp56);
target[((hsi*45+35)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = fp64 + src4[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp62);
target[((hsi*45+34)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src4[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp68);
target[((hsi*45+33)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src4[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp74);
target[((hsi*45+32)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp81;
fp81 = fp82 + src4[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp80);
target[((hsi*45+31)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = fp88 + src4[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+22)*1+lsi)*1], fp86);
target[((hsi*45+30)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src4[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+21)*1+lsi)*1], fp92);
target[((hsi*45+29)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp98;
fp98 = 5.0000000000000000e-01 * src3[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 5.0000000000000000e-01 * src3[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+21)*1+lsi)*1], fp96);
target[((hsi*45+28)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp106;
fp106 = fp107 + src4[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp105);
target[((hsi*45+27)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = fp113 + src4[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp111);
target[((hsi*45+26)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp118;
fp118 = fp119 + src4[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+18)*1+lsi)*1], fp117);
target[((hsi*45+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp124;
fp124 = fp125 + src4[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp123);
target[((hsi*45+24)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp130;
fp130 = fp131 + src4[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp129);
target[((hsi*45+23)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src4[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+15)*1+lsi)*1], fp135);
target[((hsi*45+22)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp141;
fp141 = 5.0000000000000000e-01 * src3[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 5.0000000000000000e-01 * src3[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+15)*1+lsi)*1], fp139);
target[((hsi*45+21)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp149;
fp149 = fp150 + src4[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp148);
target[((hsi*45+20)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp155;
fp155 = fp156 + src4[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->oo2z[vi] * fp155;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp154);
target[((hsi*45+19)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = fp162 + src4[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+12)*1+lsi)*1], fp160);
target[((hsi*45+18)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src4[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp166);
target[((hsi*45+17)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src4[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+10)*1+lsi)*1], fp172);
target[((hsi*45+16)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp178;
fp178 = 5.0000000000000000e-01 * src3[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 5.0000000000000000e-01 * src3[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp179;
fp179 = fp181 + fp180;
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = inteval->oo2z[vi] * fp177;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+10)*1+lsi)*1], fp176);
target[((hsi*45+15)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp186;
fp186 = fp187 + src4[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+9)*1+lsi)*1], fp185);
target[((hsi*45+14)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp192;
fp192 = fp193 + src4[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp191);
target[((hsi*45+13)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp198;
fp198 = fp199 + src4[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->oo2z[vi] * fp198;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp197);
target[((hsi*45+12)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + src4[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+6)*1+lsi)*1], fp203);
target[((hsi*45+11)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp209;
fp209 = 5.0000000000000000e-01 * src3[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e-01 * src3[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp207;
fp207 = inteval->oo2z[vi] * fp208;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+6)*1+lsi)*1], fp207);
target[((hsi*45+10)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp217;
fp217 = fp218 + src4[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+5)*1+lsi)*1], fp216);
target[((hsi*45+9)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp223;
fp223 = fp224 + src4[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->oo2z[vi] * fp223;
LIBINT2_REALTYPE fp226;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp222);
target[((hsi*45+8)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + src4[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = inteval->oo2z[vi] * fp229;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+3)*1+lsi)*1], fp228);
target[((hsi*45+7)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp234;
fp234 = 5.0000000000000000e-01 * src3[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = 5.0000000000000000e-01 * src3[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp235;
fp235 = fp237 + fp236;
LIBINT2_REALTYPE fp233;
fp233 = fp235 + fp234;
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp232);
target[((hsi*45+6)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp242;
fp242 = fp243 + src4[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp241);
target[((hsi*45+5)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + src4[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->oo2z[vi] * fp248;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+1)*1+lsi)*1], fp247);
target[((hsi*45+4)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp253;
fp253 = 5.0000000000000000e-01 * src3[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = 5.0000000000000000e-01 * src3[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
LIBINT2_REALTYPE fp252;
fp252 = fp254 + fp253;
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp251);
target[((hsi*45+3)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp261;
fp261 = 0.0000000000000000e+00 + src4[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+0)*1+lsi)*1], fp260);
target[((hsi*45+2)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp266;
fp266 = 5.0000000000000000e-01 * src3[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp265;
fp265 = fp267 + fp266;
LIBINT2_REALTYPE fp264;
fp264 = inteval->oo2z[vi] * fp265;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+0)*1+lsi)*1], fp264);
target[((hsi*45+1)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp273;
fp273 = -5.0000000000000000e-01 * src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = 5.0000000000000000e-01 * src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp272;
fp272 = fp274 - fp273;
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp271);
target[((hsi*45+0)*1+lsi)*1] = fp270;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 279 */
}

#ifdef __cplusplus
};
#endif
