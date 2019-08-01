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
void OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*28+27)*1+lsi)*1] - src3[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+35)*1+lsi)*1], fp5);
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = src2[((hsi*28+26)*1+lsi)*1] - src3[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp10 * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+34)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*45+43)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = src2[((hsi*28+25)*1+lsi)*1] - src3[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp17 * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+33)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp14;
fp14 = fp18 + fp15;
target[((hsi*45+42)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = src2[((hsi*28+24)*1+lsi)*1] - src3[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp24 * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+32)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*45+41)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = src2[((hsi*28+23)*1+lsi)*1] - src3[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp31 * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PC_z[vi] * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+31)*1+lsi)*1], fp33);
LIBINT2_REALTYPE fp28;
fp28 = fp32 + fp29;
target[((hsi*45+40)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
fp37 = src2[((hsi*28+22)*1+lsi)*1] - src3[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp38 * fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_z[vi] * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+30)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*45+39)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp44;
fp44 = src2[((hsi*28+21)*1+lsi)*1] - src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp45 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PC_z[vi] * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+29)*1+lsi)*1], fp47);
LIBINT2_REALTYPE fp42;
fp42 = fp46 + fp43;
target[((hsi*45+38)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PC_z[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+28)*1+lsi)*1], fp50);
target[((hsi*45+37)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp54;
fp54 = src2[((hsi*28+21)*1+lsi)*1] - src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp55 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_y[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+28)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
target[((hsi*45+36)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp61;
fp61 = src2[((hsi*28+20)*1+lsi)*1] - src3[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp62 * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_z[vi] * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp64);
LIBINT2_REALTYPE fp59;
fp59 = fp63 + fp60;
target[((hsi*45+35)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp68;
fp68 = src2[((hsi*28+19)*1+lsi)*1] - src3[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp69 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PC_z[vi] * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
target[((hsi*45+34)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp75;
fp75 = src2[((hsi*28+18)*1+lsi)*1] - src3[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp76 * fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_z[vi] * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp78);
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
target[((hsi*45+33)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp82;
fp82 = src2[((hsi*28+17)*1+lsi)*1] - src3[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp83 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_z[vi] * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp85);
LIBINT2_REALTYPE fp80;
fp80 = fp84 + fp81;
target[((hsi*45+32)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp89;
fp89 = src2[((hsi*28+16)*1+lsi)*1] - src3[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp90 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PC_z[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp87;
fp87 = fp91 + fp88;
target[((hsi*45+31)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp96;
fp96 = src2[((hsi*28+15)*1+lsi)*1] - src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp97 * fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PC_z[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+22)*1+lsi)*1], fp99);
LIBINT2_REALTYPE fp94;
fp94 = fp98 + fp95;
target[((hsi*45+30)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PC_z[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+21)*1+lsi)*1], fp102);
target[((hsi*45+29)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp106;
fp106 = src2[((hsi*28+15)*1+lsi)*1] - src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp107 * fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_y[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+21)*1+lsi)*1], fp109);
LIBINT2_REALTYPE fp104;
fp104 = fp108 + fp105;
target[((hsi*45+28)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp113;
fp113 = src2[((hsi*28+14)*1+lsi)*1] - src3[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp114 * fp113;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PC_z[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp116);
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
target[((hsi*45+27)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp120;
fp120 = src2[((hsi*28+13)*1+lsi)*1] - src3[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp121 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PC_z[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp123);
LIBINT2_REALTYPE fp118;
fp118 = fp122 + fp119;
target[((hsi*45+26)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp127;
fp127 = src2[((hsi*28+12)*1+lsi)*1] - src3[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp128 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PC_z[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+18)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp125;
fp125 = fp129 + fp126;
target[((hsi*45+25)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp134;
fp134 = src2[((hsi*28+11)*1+lsi)*1] - src3[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp135 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PC_z[vi] * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp132;
fp132 = fp136 + fp133;
target[((hsi*45+24)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp141;
fp141 = src2[((hsi*28+10)*1+lsi)*1] - src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp142 * fp141;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PC_z[vi] * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp144);
LIBINT2_REALTYPE fp139;
fp139 = fp143 + fp140;
target[((hsi*45+23)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PC_z[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+15)*1+lsi)*1], fp147);
target[((hsi*45+22)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = src2[((hsi*28+10)*1+lsi)*1] - src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp152 * fp151;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PC_y[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+15)*1+lsi)*1], fp154);
LIBINT2_REALTYPE fp149;
fp149 = fp153 + fp150;
target[((hsi*45+21)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp158;
fp158 = src2[((hsi*28+9)*1+lsi)*1] - src3[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp159 * fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PC_z[vi] * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp161);
LIBINT2_REALTYPE fp156;
fp156 = fp160 + fp157;
target[((hsi*45+20)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp165;
fp165 = src2[((hsi*28+8)*1+lsi)*1] - src3[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp166 * fp165;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PC_z[vi] * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp168);
LIBINT2_REALTYPE fp163;
fp163 = fp167 + fp164;
target[((hsi*45+19)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp172;
fp172 = src2[((hsi*28+7)*1+lsi)*1] - src3[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp173 * fp172;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PC_z[vi] * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+12)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp170;
fp170 = fp174 + fp171;
target[((hsi*45+18)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp179;
fp179 = src2[((hsi*28+6)*1+lsi)*1] - src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp180 * fp179;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PC_z[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp182);
LIBINT2_REALTYPE fp177;
fp177 = fp181 + fp178;
target[((hsi*45+17)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp185;
fp185 = inteval->PC_z[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+10)*1+lsi)*1], fp185);
target[((hsi*45+16)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp189;
fp189 = src2[((hsi*28+6)*1+lsi)*1] - src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp190 * fp189;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PC_y[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+10)*1+lsi)*1], fp192);
LIBINT2_REALTYPE fp187;
fp187 = fp191 + fp188;
target[((hsi*45+15)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp196;
fp196 = src2[((hsi*28+5)*1+lsi)*1] - src3[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp197 * fp196;
LIBINT2_REALTYPE fp199;
fp199 = inteval->PC_z[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+9)*1+lsi)*1], fp199);
LIBINT2_REALTYPE fp194;
fp194 = fp198 + fp195;
target[((hsi*45+14)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp203;
fp203 = src2[((hsi*28+4)*1+lsi)*1] - src3[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp204 * fp203;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PC_z[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp206);
LIBINT2_REALTYPE fp201;
fp201 = fp205 + fp202;
target[((hsi*45+13)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp210;
fp210 = src2[((hsi*28+3)*1+lsi)*1] - src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp211 * fp210;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PC_z[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp213);
LIBINT2_REALTYPE fp208;
fp208 = fp212 + fp209;
target[((hsi*45+12)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PC_z[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+6)*1+lsi)*1], fp216);
target[((hsi*45+11)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp220;
fp220 = src2[((hsi*28+3)*1+lsi)*1] - src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp219;
fp219 = fp221 * fp220;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PC_y[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+6)*1+lsi)*1], fp223);
LIBINT2_REALTYPE fp218;
fp218 = fp222 + fp219;
target[((hsi*45+10)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp227;
fp227 = src2[((hsi*28+2)*1+lsi)*1] - src3[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp228 * fp227;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PC_z[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+5)*1+lsi)*1], fp230);
LIBINT2_REALTYPE fp225;
fp225 = fp229 + fp226;
target[((hsi*45+9)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp234;
fp234 = src2[((hsi*28+1)*1+lsi)*1] - src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp235 * fp234;
LIBINT2_REALTYPE fp237;
fp237 = inteval->PC_z[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp237);
LIBINT2_REALTYPE fp232;
fp232 = fp236 + fp233;
target[((hsi*45+8)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp240;
fp240 = inteval->PC_z[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+3)*1+lsi)*1], fp240);
target[((hsi*45+7)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp244;
fp244 = src2[((hsi*28+1)*1+lsi)*1] - src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp243;
fp243 = fp245 * fp244;
LIBINT2_REALTYPE fp247;
fp247 = inteval->PC_y[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp247);
LIBINT2_REALTYPE fp242;
fp242 = fp246 + fp243;
target[((hsi*45+6)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp251;
fp251 = src2[((hsi*28+0)*1+lsi)*1] - src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp250;
fp250 = fp252 * fp251;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PC_z[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp254);
LIBINT2_REALTYPE fp249;
fp249 = fp253 + fp250;
target[((hsi*45+5)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PC_z[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+1)*1+lsi)*1], fp257);
target[((hsi*45+4)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp261;
fp261 = src2[((hsi*28+0)*1+lsi)*1] - src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp260;
fp260 = fp262 * fp261;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PC_y[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp264);
LIBINT2_REALTYPE fp259;
fp259 = fp263 + fp260;
target[((hsi*45+3)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp267;
fp267 = inteval->PC_z[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*36+0)*1+lsi)*1], fp267);
target[((hsi*45+2)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp270;
fp270 = inteval->PC_y[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*36+0)*1+lsi)*1], fp270);
target[((hsi*45+1)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp274;
fp274 = src2[((hsi*28+0)*1+lsi)*1] - src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp273;
fp273 = fp275 * fp274;
LIBINT2_REALTYPE fp277;
fp277 = inteval->PC_x[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_minus(inteval->PB_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp277);
LIBINT2_REALTYPE fp272;
fp272 = fp276 + fp273;
target[((hsi*45+0)*1+lsi)*1] = fp272;
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
