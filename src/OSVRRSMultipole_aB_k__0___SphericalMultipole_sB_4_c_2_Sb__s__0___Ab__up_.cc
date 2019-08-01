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
void OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5, const LIBINT2_REALTYPE* src6) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src6[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src6[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp7);
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src6[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp13);
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src6[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp19);
target[((hsi*36+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src6[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp25);
target[((hsi*36+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src6[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp31);
target[((hsi*36+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src6[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp37);
target[((hsi*36+29)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * src5[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 5.0000000000000000e-01 * src4[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+21)*1+lsi)*1], fp41);
target[((hsi*36+28)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp51;
fp51 = fp52 + src6[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2z[vi] * fp51;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp50);
target[((hsi*36+27)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src6[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp56);
target[((hsi*36+26)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = fp64 + src6[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+18)*1+lsi)*1], fp62);
target[((hsi*36+25)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src6[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp68);
target[((hsi*36+24)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src6[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp74);
target[((hsi*36+23)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src6[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp80);
target[((hsi*36+22)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * src5[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 5.0000000000000000e-01 * src4[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+15)*1+lsi)*1], fp84);
target[((hsi*36+21)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp94;
fp94 = fp95 + src6[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp93);
target[((hsi*36+20)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp100;
fp100 = fp101 + src6[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp99);
target[((hsi*36+19)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp106;
fp106 = fp107 + src6[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+12)*1+lsi)*1], fp105);
target[((hsi*36+18)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = fp113 + src6[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp111);
target[((hsi*36+17)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src6[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp117);
target[((hsi*36+16)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp123;
fp123 = 5.0000000000000000e-01 * src5[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 5.0000000000000000e-01 * src4[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+10)*1+lsi)*1], fp121);
target[((hsi*36+15)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp131;
fp131 = fp132 + src6[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+9)*1+lsi)*1], fp130);
target[((hsi*36+14)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp137;
fp137 = fp138 + src6[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp136);
target[((hsi*36+13)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp143;
fp143 = fp144 + src6[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp142);
target[((hsi*36+12)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src6[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp148);
target[((hsi*36+11)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e-01 * src5[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 5.0000000000000000e-01 * src4[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+6)*1+lsi)*1], fp152);
target[((hsi*36+10)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp162;
fp162 = fp163 + src6[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->oo2z[vi] * fp162;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+5)*1+lsi)*1], fp161);
target[((hsi*36+9)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp168;
fp168 = fp169 + src6[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp167);
target[((hsi*36+8)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src6[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+3)*1+lsi)*1], fp173);
target[((hsi*36+7)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp179;
fp179 = 5.0000000000000000e-01 * src5[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 5.0000000000000000e-01 * src4[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp177);
target[((hsi*36+6)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp187;
fp187 = fp188 + src6[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = inteval->oo2z[vi] * fp187;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp186);
target[((hsi*36+5)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src6[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->oo2z[vi] * fp193;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+1)*1+lsi)*1], fp192);
target[((hsi*36+4)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp198;
fp198 = 5.0000000000000000e-01 * src5[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 5.0000000000000000e-01 * src4[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp196);
target[((hsi*36+3)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + src6[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+0)*1+lsi)*1], fp205);
target[((hsi*36+2)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e-01 * src5[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(5.0000000000000000e-01, src4[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+0)*1+lsi)*1], fp209);
target[((hsi*36+1)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp218;
fp218 = 5.0000000000000000e-01 * src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp217;
fp217 = fp219 - fp218;
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp216);
target[((hsi*36+0)*1+lsi)*1] = fp215;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 224 */
}

#ifdef __cplusplus
};
#endif
