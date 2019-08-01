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
void OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+54)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+65)*1+lsi)*1], fp1);
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+53)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+64)*1+lsi)*1], fp6);
target[((hsi*78+76)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+52)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+63)*1+lsi)*1], fp11);
target[((hsi*78+75)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+51)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+62)*1+lsi)*1], fp16);
target[((hsi*78+74)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+50)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+61)*1+lsi)*1], fp21);
target[((hsi*78+73)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+49)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+60)*1+lsi)*1], fp26);
target[((hsi*78+72)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+48)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+59)*1+lsi)*1], fp31);
target[((hsi*78+71)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+47)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+58)*1+lsi)*1], fp36);
target[((hsi*78+70)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+46)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+57)*1+lsi)*1], fp41);
target[((hsi*78+69)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+56)*1+lsi)*1], fp46);
target[((hsi*78+68)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
target[((hsi*78+67)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = -5.0000000000000000e-01 * src3[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+55)*1+lsi)*1], fp52);
target[((hsi*78+66)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+54)*1+lsi)*1], fp59);
target[((hsi*78+65)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+53)*1+lsi)*1], fp64);
target[((hsi*78+64)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+52)*1+lsi)*1], fp69);
target[((hsi*78+63)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+51)*1+lsi)*1], fp74);
target[((hsi*78+62)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+50)*1+lsi)*1], fp79);
target[((hsi*78+61)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+49)*1+lsi)*1], fp84);
target[((hsi*78+60)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+48)*1+lsi)*1], fp89);
target[((hsi*78+59)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+47)*1+lsi)*1], fp94);
target[((hsi*78+58)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+46)*1+lsi)*1], fp99);
target[((hsi*78+57)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
target[((hsi*78+56)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp107;
fp107 = -5.0000000000000000e-01 * src3[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+45)*1+lsi)*1], fp105);
target[((hsi*78+55)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+44)*1+lsi)*1], fp112);
target[((hsi*78+54)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+43)*1+lsi)*1], fp117);
target[((hsi*78+53)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+42)*1+lsi)*1], fp122);
target[((hsi*78+52)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+41)*1+lsi)*1], fp127);
target[((hsi*78+51)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+40)*1+lsi)*1], fp132);
target[((hsi*78+50)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+39)*1+lsi)*1], fp137);
target[((hsi*78+49)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+38)*1+lsi)*1], fp142);
target[((hsi*78+48)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+37)*1+lsi)*1], fp147);
target[((hsi*78+47)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
target[((hsi*78+46)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp155;
fp155 = -5.0000000000000000e-01 * src3[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+36)*1+lsi)*1], fp153);
target[((hsi*78+45)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+35)*1+lsi)*1], fp160);
target[((hsi*78+44)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+34)*1+lsi)*1], fp165);
target[((hsi*78+43)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+33)*1+lsi)*1], fp170);
target[((hsi*78+42)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+32)*1+lsi)*1], fp175);
target[((hsi*78+41)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp181;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+31)*1+lsi)*1], fp180);
target[((hsi*78+40)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+30)*1+lsi)*1], fp185);
target[((hsi*78+39)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+29)*1+lsi)*1], fp190);
target[((hsi*78+38)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
target[((hsi*78+37)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp198;
fp198 = -5.0000000000000000e-01 * src3[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+28)*1+lsi)*1], fp196);
target[((hsi*78+36)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+27)*1+lsi)*1], fp203);
target[((hsi*78+35)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+26)*1+lsi)*1], fp208);
target[((hsi*78+34)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp213;
fp213 = inteval->oo2z[vi] * fp214;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+25)*1+lsi)*1], fp213);
target[((hsi*78+33)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2z[vi] * fp219;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+24)*1+lsi)*1], fp218);
target[((hsi*78+32)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp224;
LIBINT2_REALTYPE fp226;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+23)*1+lsi)*1], fp223);
target[((hsi*78+31)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp228;
fp228 = inteval->oo2z[vi] * fp229;
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+22)*1+lsi)*1], fp228);
target[((hsi*78+30)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PA_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
target[((hsi*78+29)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp236;
fp236 = -5.0000000000000000e-01 * src3[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp235;
fp235 = fp237 + fp236;
LIBINT2_REALTYPE fp234;
fp234 = inteval->oo2z[vi] * fp235;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+21)*1+lsi)*1], fp234);
target[((hsi*78+28)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+20)*1+lsi)*1], fp241);
target[((hsi*78+27)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+19)*1+lsi)*1], fp246);
target[((hsi*78+26)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+18)*1+lsi)*1], fp251);
target[((hsi*78+25)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp257;
fp257 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp256;
fp256 = inteval->oo2z[vi] * fp257;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+17)*1+lsi)*1], fp256);
target[((hsi*78+24)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp261;
fp261 = inteval->oo2z[vi] * fp262;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+16)*1+lsi)*1], fp261);
target[((hsi*78+23)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
target[((hsi*78+22)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp269;
fp269 = -5.0000000000000000e-01 * src3[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp268;
fp268 = fp270 + fp269;
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+15)*1+lsi)*1], fp267);
target[((hsi*78+21)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp276;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp274;
fp274 = inteval->oo2z[vi] * fp275;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+14)*1+lsi)*1], fp274);
target[((hsi*78+20)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp279;
fp279 = inteval->oo2z[vi] * fp280;
LIBINT2_REALTYPE fp282;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+13)*1+lsi)*1], fp279);
target[((hsi*78+19)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+12)*1+lsi)*1], fp284);
target[((hsi*78+18)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp290;
fp290 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+11)*1+lsi)*1], fp289);
target[((hsi*78+17)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp293;
fp293 = inteval->PA_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
target[((hsi*78+16)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp297;
fp297 = -5.0000000000000000e-01 * src3[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp298;
fp298 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp296;
fp296 = fp298 + fp297;
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp300;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+10)*1+lsi)*1], fp295);
target[((hsi*78+15)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp302;
fp302 = inteval->oo2z[vi] * fp303;
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+9)*1+lsi)*1], fp302);
target[((hsi*78+14)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp310;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+8)*1+lsi)*1], fp307);
target[((hsi*78+13)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp314;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp315;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+7)*1+lsi)*1], fp312);
target[((hsi*78+12)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp316;
fp316 = inteval->PA_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
target[((hsi*78+11)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp320;
fp320 = -5.0000000000000000e-01 * src3[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp319;
fp319 = fp321 + fp320;
LIBINT2_REALTYPE fp318;
fp318 = inteval->oo2z[vi] * fp319;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+6)*1+lsi)*1], fp318);
target[((hsi*78+10)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp325;
fp325 = inteval->oo2z[vi] * fp326;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+5)*1+lsi)*1], fp325);
target[((hsi*78+9)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp332;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+4)*1+lsi)*1], fp330);
target[((hsi*78+8)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp334;
fp334 = inteval->PA_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
target[((hsi*78+7)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp338;
fp338 = -5.0000000000000000e-01 * src3[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp337;
fp337 = fp339 + fp338;
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp341;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+3)*1+lsi)*1], fp336);
target[((hsi*78+6)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp345;
LIBINT2_REALTYPE fp344;
fp344 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp343;
fp343 = inteval->oo2z[vi] * fp344;
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp342;
fp342 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+2)*1+lsi)*1], fp343);
target[((hsi*78+5)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
target[((hsi*78+4)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp351;
fp351 = -5.0000000000000000e-01 * src3[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
LIBINT2_REALTYPE fp352;
fp352 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp350;
fp350 = fp352 + fp351;
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+1)*1+lsi)*1], fp349);
target[((hsi*78+3)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PA_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
target[((hsi*78+2)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp359;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(-5.0000000000000000e-01, src3[((hsi*66+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp357;
fp357 = inteval->oo2z[vi] * fp358;
LIBINT2_REALTYPE fp360;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+0)*1+lsi)*1], fp357);
target[((hsi*78+1)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp364;
fp364 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
LIBINT2_REALTYPE fp365;
fp365 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp363;
fp363 = fp365 - fp364;
LIBINT2_REALTYPE fp362;
fp362 = inteval->oo2z[vi] * fp363;
LIBINT2_REALTYPE fp367;
LIBINT2_REALTYPE fp361;
fp361 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*66+0)*1+lsi)*1], fp362);
target[((hsi*78+0)*1+lsi)*1] = fp361;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 368 */
}

#ifdef __cplusplus
};
#endif
