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
void OSVRRP0InBra_aB_f__0__f__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp378;
fp378 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp378 * src3[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+29)*1+lsi)*1], src1[((hsi*30+29)*1+lsi)*1]);
LIBINT2_REALTYPE fp3;
fp3 = fp383 * fp4;
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+59)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*100+99)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp370;
fp370 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp370 * src3[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+28)*1+lsi)*1], src1[((hsi*30+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp10;
fp10 = fp383 * fp11;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+58)*1+lsi)*1], fp10);
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
target[((hsi*100+98)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp355;
fp355 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp355 * src3[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+27)*1+lsi)*1], src1[((hsi*30+27)*1+lsi)*1]);
LIBINT2_REALTYPE fp17;
fp17 = fp383 * fp18;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+57)*1+lsi)*1], fp17);
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*100+97)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+26)*1+lsi)*1], src1[((hsi*30+26)*1+lsi)*1]);
LIBINT2_REALTYPE fp22;
fp22 = fp383 * fp23;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+56)*1+lsi)*1], fp22);
target[((hsi*100+96)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp27;
fp27 = fp370 * src3[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+25)*1+lsi)*1], src1[((hsi*30+25)*1+lsi)*1]);
LIBINT2_REALTYPE fp29;
fp29 = fp383 * fp30;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+55)*1+lsi)*1], fp29);
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*100+95)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
fp34 = fp355 * src3[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+24)*1+lsi)*1], src1[((hsi*30+24)*1+lsi)*1]);
LIBINT2_REALTYPE fp36;
fp36 = fp383 * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+54)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*100+94)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+23)*1+lsi)*1], src1[((hsi*30+23)*1+lsi)*1]);
LIBINT2_REALTYPE fp41;
fp41 = fp383 * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+53)*1+lsi)*1], fp41);
target[((hsi*100+93)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp46;
fp46 = fp355 * src3[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+22)*1+lsi)*1], src1[((hsi*30+22)*1+lsi)*1]);
LIBINT2_REALTYPE fp48;
fp48 = fp383 * fp49;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+52)*1+lsi)*1], fp48);
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*100+92)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+21)*1+lsi)*1], src1[((hsi*30+21)*1+lsi)*1]);
LIBINT2_REALTYPE fp53;
fp53 = fp383 * fp54;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+51)*1+lsi)*1], fp53);
target[((hsi*100+91)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+20)*1+lsi)*1], src1[((hsi*30+20)*1+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = fp383 * fp59;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+50)*1+lsi)*1], fp58);
target[((hsi*100+90)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp63;
fp63 = fp378 * src3[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+19)*1+lsi)*1], src1[((hsi*30+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp65;
fp65 = fp279 * fp126;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+49)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*100+89)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp68;
fp68 = fp370 * src3[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+18)*1+lsi)*1], src1[((hsi*30+18)*1+lsi)*1]);
LIBINT2_REALTYPE fp70;
fp70 = fp279 * fp133;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+48)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*100+88)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp73;
fp73 = fp355 * src3[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+17)*1+lsi)*1], src1[((hsi*30+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp75;
fp75 = fp279 * fp140;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+47)*1+lsi)*1], fp75);
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*100+87)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+16)*1+lsi)*1], src1[((hsi*30+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp78;
fp78 = fp279 * fp147;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+46)*1+lsi)*1], fp78);
target[((hsi*100+86)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp81;
fp81 = fp370 * src3[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+15)*1+lsi)*1], src1[((hsi*30+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp83;
fp83 = fp279 * fp152;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+45)*1+lsi)*1], fp83);
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*100+85)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp86;
fp86 = fp355 * src3[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+14)*1+lsi)*1], src1[((hsi*30+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp88;
fp88 = fp279 * fp159;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+44)*1+lsi)*1], fp88);
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
target[((hsi*100+84)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+13)*1+lsi)*1], src1[((hsi*30+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp91;
fp91 = fp279 * fp166;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+43)*1+lsi)*1], fp91);
target[((hsi*100+83)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp94;
fp94 = fp355 * src3[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+12)*1+lsi)*1], src1[((hsi*30+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp96;
fp96 = fp279 * fp171;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+42)*1+lsi)*1], fp96);
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
target[((hsi*100+82)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+11)*1+lsi)*1], src1[((hsi*30+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp99;
fp99 = fp279 * fp178;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+41)*1+lsi)*1], fp99);
target[((hsi*100+81)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+10)*1+lsi)*1], src1[((hsi*30+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp102;
fp102 = fp279 * fp183;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+40)*1+lsi)*1], fp102);
target[((hsi*100+80)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp105;
fp105 = fp378 * src3[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+39)*1+lsi)*1], fp105);
target[((hsi*100+79)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp137;
fp137 = fp370 * src3[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+38)*1+lsi)*1], fp137);
target[((hsi*100+78)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp355 * src3[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+37)*1+lsi)*1], fp110);
target[((hsi*100+77)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_z[vi] * src0[((hsi*60+36)*1+lsi)*1];
target[((hsi*100+76)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp114;
fp114 = fp370 * src3[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+35)*1+lsi)*1], fp114);
target[((hsi*100+75)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp117;
fp117 = fp355 * src3[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+34)*1+lsi)*1], fp117);
target[((hsi*100+74)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_z[vi] * src0[((hsi*60+33)*1+lsi)*1];
target[((hsi*100+73)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp175;
fp175 = fp355 * src3[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+32)*1+lsi)*1], fp175);
target[((hsi*100+72)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_z[vi] * src0[((hsi*60+31)*1+lsi)*1];
target[((hsi*100+71)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * src0[((hsi*60+30)*1+lsi)*1];
target[((hsi*100+70)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp125;
fp125 = fp383 * fp126;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+39)*1+lsi)*1], fp125);
target[((hsi*100+69)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp130;
fp130 = fp355 * src3[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp383 * fp133;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+38)*1+lsi)*1], fp132);
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
target[((hsi*100+68)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp139;
fp139 = fp383 * fp140;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+37)*1+lsi)*1], fp139);
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*100+67)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp144;
fp144 = fp378 * src3[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp383 * fp147;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+36)*1+lsi)*1], fp146);
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
target[((hsi*100+66)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp151;
fp151 = fp383 * fp152;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+35)*1+lsi)*1], fp151);
target[((hsi*100+65)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp156;
fp156 = fp355 * src3[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp383 * fp159;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+34)*1+lsi)*1], fp158);
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
target[((hsi*100+64)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp163;
fp163 = fp370 * src3[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp383 * fp166;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+33)*1+lsi)*1], fp165);
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
target[((hsi*100+63)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp170;
fp170 = fp383 * fp171;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+32)*1+lsi)*1], fp170);
target[((hsi*100+62)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp177;
fp177 = fp383 * fp178;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+31)*1+lsi)*1], fp177);
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
target[((hsi*100+61)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp182;
fp182 = fp383 * fp183;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+30)*1+lsi)*1], fp182);
target[((hsi*100+60)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp187;
fp187 = fp378 * src3[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+9)*1+lsi)*1], src1[((hsi*30+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp239;
fp239 = fp279 * fp321;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+29)*1+lsi)*1], fp239);
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*100+59)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = fp370 * src3[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+8)*1+lsi)*1], src1[((hsi*30+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp244;
fp244 = fp279 * fp326;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+28)*1+lsi)*1], fp244);
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*100+58)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp195;
fp195 = fp355 * src3[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+7)*1+lsi)*1], src1[((hsi*30+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp249;
fp249 = fp279 * fp331;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+27)*1+lsi)*1], fp249);
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
target[((hsi*100+57)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp337;
LIBINT2_REALTYPE fp336;
fp336 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+6)*1+lsi)*1], src1[((hsi*30+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp254;
fp254 = fp279 * fp336;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+26)*1+lsi)*1], fp254);
target[((hsi*100+56)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp370 * src3[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
LIBINT2_REALTYPE fp343;
fp343 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+5)*1+lsi)*1], src1[((hsi*30+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp257;
fp257 = fp279 * fp343;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+25)*1+lsi)*1], fp257);
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
target[((hsi*100+55)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp205;
fp205 = fp355 * src3[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
LIBINT2_REALTYPE fp350;
fp350 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+4)*1+lsi)*1], src1[((hsi*30+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp262;
fp262 = fp279 * fp350;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+24)*1+lsi)*1], fp262);
LIBINT2_REALTYPE fp204;
fp204 = fp206 + fp205;
target[((hsi*100+54)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp359;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+3)*1+lsi)*1], src1[((hsi*30+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp267;
fp267 = fp279 * fp358;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+23)*1+lsi)*1], fp267);
target[((hsi*100+53)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp355 * src3[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
LIBINT2_REALTYPE fp365;
fp365 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+2)*1+lsi)*1], src1[((hsi*30+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp270;
fp270 = fp279 * fp365;
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+22)*1+lsi)*1], fp270);
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
target[((hsi*100+52)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp374;
LIBINT2_REALTYPE fp373;
fp373 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+1)*1+lsi)*1], src1[((hsi*30+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp275;
fp275 = fp279 * fp373;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+21)*1+lsi)*1], fp275);
target[((hsi*100+51)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp382;
LIBINT2_REALTYPE fp381;
fp381 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*30+0)*1+lsi)*1], src1[((hsi*30+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp381;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*60+20)*1+lsi)*1], fp278);
target[((hsi*100+50)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp378 * src3[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+19)*1+lsi)*1], fp219);
target[((hsi*100+49)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp247;
fp247 = fp370 * src3[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+18)*1+lsi)*1], fp247);
target[((hsi*100+48)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp224;
fp224 = fp355 * src3[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+17)*1+lsi)*1], fp224);
target[((hsi*100+47)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = inteval->WP_z[vi] * src0[((hsi*60+16)*1+lsi)*1];
target[((hsi*100+46)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp228;
fp228 = fp370 * src3[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+15)*1+lsi)*1], fp228);
target[((hsi*100+45)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp231;
fp231 = fp355 * src3[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+14)*1+lsi)*1], fp231);
target[((hsi*100+44)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = inteval->WP_z[vi] * src0[((hsi*60+13)*1+lsi)*1];
target[((hsi*100+43)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp273;
fp273 = fp355 * src3[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+12)*1+lsi)*1], fp273);
target[((hsi*100+42)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp236;
fp236 = inteval->WP_z[vi] * src0[((hsi*60+11)*1+lsi)*1];
target[((hsi*100+41)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp237;
fp237 = inteval->WP_z[vi] * src0[((hsi*60+10)*1+lsi)*1];
target[((hsi*100+40)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+19)*1+lsi)*1], fp239);
target[((hsi*100+39)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp242;
fp242 = fp355 * src3[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+18)*1+lsi)*1], fp244);
LIBINT2_REALTYPE fp241;
fp241 = fp243 + fp242;
target[((hsi*100+38)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp250;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+17)*1+lsi)*1], fp249);
LIBINT2_REALTYPE fp246;
fp246 = fp248 + fp247;
target[((hsi*100+37)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp252;
fp252 = fp378 * src3[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+16)*1+lsi)*1], fp254);
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
target[((hsi*100+36)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+15)*1+lsi)*1], fp257);
target[((hsi*100+35)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp260;
fp260 = fp355 * src3[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+14)*1+lsi)*1], fp262);
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
target[((hsi*100+34)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp265;
fp265 = fp370 * src3[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+13)*1+lsi)*1], fp267);
LIBINT2_REALTYPE fp264;
fp264 = fp266 + fp265;
target[((hsi*100+33)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+12)*1+lsi)*1], fp270);
target[((hsi*100+32)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp276;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+11)*1+lsi)*1], fp275);
LIBINT2_REALTYPE fp272;
fp272 = fp274 + fp273;
target[((hsi*100+31)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp280;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*60+10)*1+lsi)*1], fp278);
target[((hsi*100+30)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp282;
fp282 = fp378 * src3[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp281;
fp281 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+9)*1+lsi)*1], fp282);
target[((hsi*100+29)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp303;
fp303 = fp370 * src3[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+8)*1+lsi)*1], fp303);
target[((hsi*100+28)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * src3[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+7)*1+lsi)*1], fp354);
target[((hsi*100+27)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp288;
fp288 = inteval->WP_z[vi] * src0[((hsi*60+6)*1+lsi)*1];
target[((hsi*100+26)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp362;
fp362 = fp370 * src3[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+5)*1+lsi)*1], fp362);
target[((hsi*100+25)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp292;
fp292 = fp355 * src3[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp291;
fp291 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+4)*1+lsi)*1], fp292);
target[((hsi*100+24)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = inteval->WP_z[vi] * src0[((hsi*60+3)*1+lsi)*1];
target[((hsi*100+23)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp316;
fp316 = fp355 * src3[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp295;
fp295 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*60+2)*1+lsi)*1], fp316);
target[((hsi*100+22)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp297;
fp297 = inteval->WP_z[vi] * src0[((hsi*60+1)*1+lsi)*1];
target[((hsi*100+21)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp298;
fp298 = inteval->WP_z[vi] * src0[((hsi*60+0)*1+lsi)*1];
target[((hsi*100+20)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp299;
fp299 = inteval->WP_y[vi] * src0[((hsi*60+9)*1+lsi)*1];
target[((hsi*100+19)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp340;
fp340 = fp355 * src3[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+8)*1+lsi)*1], fp340);
target[((hsi*100+18)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+7)*1+lsi)*1], fp303);
target[((hsi*100+17)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp306;
fp306 = fp378 * src3[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+6)*1+lsi)*1], fp306);
target[((hsi*100+16)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = inteval->WP_y[vi] * src0[((hsi*60+5)*1+lsi)*1];
target[((hsi*100+15)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp310;
fp310 = fp355 * src3[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+4)*1+lsi)*1], fp310);
target[((hsi*100+14)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * src3[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+3)*1+lsi)*1], fp369);
target[((hsi*100+13)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp314;
fp314 = inteval->WP_y[vi] * src0[((hsi*60+2)*1+lsi)*1];
target[((hsi*100+12)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*60+1)*1+lsi)*1], fp316);
target[((hsi*100+11)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WP_y[vi] * src0[((hsi*60+0)*1+lsi)*1];
target[((hsi*100+10)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp320;
fp320 = fp383 * fp321;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp319;
fp319 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+9)*1+lsi)*1], fp320);
target[((hsi*100+9)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp325;
fp325 = fp383 * fp326;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+8)*1+lsi)*1], fp325);
target[((hsi*100+8)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp330;
fp330 = fp383 * fp331;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+7)*1+lsi)*1], fp330);
target[((hsi*100+7)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp335;
fp335 = fp383 * fp336;
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp334;
fp334 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+6)*1+lsi)*1], fp335);
target[((hsi*100+6)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp342;
fp342 = fp383 * fp343;
LIBINT2_REALTYPE fp345;
LIBINT2_REALTYPE fp341;
fp341 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+5)*1+lsi)*1], fp342);
LIBINT2_REALTYPE fp339;
fp339 = fp341 + fp340;
target[((hsi*100+5)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp347;
fp347 = fp355 * src3[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp383 * fp350;
LIBINT2_REALTYPE fp352;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+4)*1+lsi)*1], fp349);
LIBINT2_REALTYPE fp346;
fp346 = fp348 + fp347;
target[((hsi*100+4)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp357;
fp357 = fp383 * fp358;
LIBINT2_REALTYPE fp360;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+3)*1+lsi)*1], fp357);
LIBINT2_REALTYPE fp353;
fp353 = fp356 + fp354;
target[((hsi*100+3)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp364;
fp364 = fp383 * fp365;
LIBINT2_REALTYPE fp367;
LIBINT2_REALTYPE fp363;
fp363 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+2)*1+lsi)*1], fp364);
LIBINT2_REALTYPE fp361;
fp361 = fp363 + fp362;
target[((hsi*100+2)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp372;
fp372 = fp383 * fp373;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp371;
fp371 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+1)*1+lsi)*1], fp372);
LIBINT2_REALTYPE fp368;
fp368 = fp371 + fp369;
target[((hsi*100+1)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * src3[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp383 * fp381;
LIBINT2_REALTYPE fp384;
LIBINT2_REALTYPE fp379;
fp379 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*60+0)*1+lsi)*1], fp380);
LIBINT2_REALTYPE fp376;
fp376 = fp379 + fp377;
target[((hsi*100+0)*1+lsi)*1] = fp376;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 385 */
}

#ifdef __cplusplus
};
#endif
