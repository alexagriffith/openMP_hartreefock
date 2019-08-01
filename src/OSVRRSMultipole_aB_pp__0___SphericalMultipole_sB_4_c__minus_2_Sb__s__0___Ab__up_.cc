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
void OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5, const LIBINT2_REALTYPE* src6) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+54)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src6[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+65)*1+lsi)*1], fp1);
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+53)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src6[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+64)*1+lsi)*1], fp7);
target[((hsi*78+76)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+52)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src6[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+63)*1+lsi)*1], fp13);
target[((hsi*78+75)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+51)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src6[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+62)*1+lsi)*1], fp19);
target[((hsi*78+74)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+50)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src6[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+61)*1+lsi)*1], fp25);
target[((hsi*78+73)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+49)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src6[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+60)*1+lsi)*1], fp31);
target[((hsi*78+72)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+48)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src6[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+59)*1+lsi)*1], fp37);
target[((hsi*78+71)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+47)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src6[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+58)*1+lsi)*1], fp43);
target[((hsi*78+70)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+46)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src6[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+57)*1+lsi)*1], fp49);
target[((hsi*78+69)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = fp57 + src6[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+56)*1+lsi)*1], fp55);
target[((hsi*78+68)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src6[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+55)*1+lsi)*1], fp61);
target[((hsi*78+67)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp67;
fp67 = -5.0000000000000000e-01 * src5[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = -5.0000000000000000e-01 * src4[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+55)*1+lsi)*1], fp65);
target[((hsi*78+66)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src6[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+54)*1+lsi)*1], fp74);
target[((hsi*78+65)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp81;
fp81 = fp82 + src6[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+53)*1+lsi)*1], fp80);
target[((hsi*78+64)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = fp88 + src6[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+52)*1+lsi)*1], fp86);
target[((hsi*78+63)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp93;
fp93 = fp94 + src6[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+51)*1+lsi)*1], fp92);
target[((hsi*78+62)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = fp100 + src6[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+50)*1+lsi)*1], fp98);
target[((hsi*78+61)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp105;
fp105 = fp106 + src6[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+49)*1+lsi)*1], fp104);
target[((hsi*78+60)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp111;
fp111 = fp112 + src6[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+48)*1+lsi)*1], fp110);
target[((hsi*78+59)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = fp118 + src6[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+47)*1+lsi)*1], fp116);
target[((hsi*78+58)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = fp124 + src6[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+46)*1+lsi)*1], fp122);
target[((hsi*78+57)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src6[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+45)*1+lsi)*1], fp128);
target[((hsi*78+56)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp134;
fp134 = -5.0000000000000000e-01 * src5[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = -5.0000000000000000e-01 * src4[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+45)*1+lsi)*1], fp132);
target[((hsi*78+55)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp142;
fp142 = fp143 + src6[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+44)*1+lsi)*1], fp141);
target[((hsi*78+54)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp148;
fp148 = fp149 + src6[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+43)*1+lsi)*1], fp147);
target[((hsi*78+53)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp154;
fp154 = fp155 + src6[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+42)*1+lsi)*1], fp153);
target[((hsi*78+52)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp160;
fp160 = fp161 + src6[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->oo2z[vi] * fp160;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+41)*1+lsi)*1], fp159);
target[((hsi*78+51)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp166;
fp166 = fp167 + src6[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+40)*1+lsi)*1], fp165);
target[((hsi*78+50)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp172;
fp172 = fp173 + src6[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->oo2z[vi] * fp172;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+39)*1+lsi)*1], fp171);
target[((hsi*78+49)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp178;
fp178 = fp179 + src6[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+38)*1+lsi)*1], fp177);
target[((hsi*78+48)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp184;
fp184 = fp185 + src6[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+37)*1+lsi)*1], fp183);
target[((hsi*78+47)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src6[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+36)*1+lsi)*1], fp189);
target[((hsi*78+46)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp195;
fp195 = -5.0000000000000000e-01 * src5[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = -5.0000000000000000e-01 * src4[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+36)*1+lsi)*1], fp193);
target[((hsi*78+45)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src6[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+35)*1+lsi)*1], fp202);
target[((hsi*78+44)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp209;
fp209 = fp210 + src6[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+34)*1+lsi)*1], fp208);
target[((hsi*78+43)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp215;
fp215 = fp216 + src6[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+33)*1+lsi)*1], fp214);
target[((hsi*78+42)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp221;
fp221 = fp222 + src6[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+32)*1+lsi)*1], fp220);
target[((hsi*78+41)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp227;
fp227 = fp228 + src6[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+31)*1+lsi)*1], fp226);
target[((hsi*78+40)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp233;
fp233 = fp234 + src6[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+30)*1+lsi)*1], fp232);
target[((hsi*78+39)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp239;
fp239 = fp240 + src6[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+29)*1+lsi)*1], fp238);
target[((hsi*78+38)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + src6[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+28)*1+lsi)*1], fp244);
target[((hsi*78+37)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp250;
fp250 = -5.0000000000000000e-01 * src5[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = -5.0000000000000000e-01 * src4[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+28)*1+lsi)*1], fp248);
target[((hsi*78+36)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp258;
fp258 = fp259 + src6[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->oo2z[vi] * fp258;
LIBINT2_REALTYPE fp261;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+27)*1+lsi)*1], fp257);
target[((hsi*78+35)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp266;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp264;
fp264 = fp265 + src6[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->oo2z[vi] * fp264;
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+26)*1+lsi)*1], fp263);
target[((hsi*78+34)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp270;
fp270 = fp271 + src6[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->oo2z[vi] * fp270;
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+25)*1+lsi)*1], fp269);
target[((hsi*78+33)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp276;
fp276 = fp277 + src6[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = inteval->oo2z[vi] * fp276;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+24)*1+lsi)*1], fp275);
target[((hsi*78+32)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp284;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp282;
fp282 = fp283 + src6[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+23)*1+lsi)*1], fp281);
target[((hsi*78+31)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp290;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp288;
fp288 = fp289 + src6[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->oo2z[vi] * fp288;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+22)*1+lsi)*1], fp287);
target[((hsi*78+30)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp294;
fp294 = 0.0000000000000000e+00 + src6[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->oo2z[vi] * fp294;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+21)*1+lsi)*1], fp293);
target[((hsi*78+29)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp299;
fp299 = -5.0000000000000000e-01 * src5[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = -5.0000000000000000e-01 * src4[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp300;
fp300 = fp302 + fp301;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = inteval->oo2z[vi] * fp298;
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+21)*1+lsi)*1], fp297);
target[((hsi*78+28)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp307;
fp307 = fp308 + src6[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = inteval->oo2z[vi] * fp307;
LIBINT2_REALTYPE fp310;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+20)*1+lsi)*1], fp306);
target[((hsi*78+27)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp315;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp313;
fp313 = fp314 + src6[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+19)*1+lsi)*1], fp312);
target[((hsi*78+26)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp321;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp319;
fp319 = fp320 + src6[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = inteval->oo2z[vi] * fp319;
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+18)*1+lsi)*1], fp318);
target[((hsi*78+25)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp325;
fp325 = fp326 + src6[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = inteval->oo2z[vi] * fp325;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp323;
fp323 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+17)*1+lsi)*1], fp324);
target[((hsi*78+24)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp331;
fp331 = fp332 + src6[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+16)*1+lsi)*1], fp330);
target[((hsi*78+23)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp337;
fp337 = 0.0000000000000000e+00 + src6[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+15)*1+lsi)*1], fp336);
target[((hsi*78+22)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp342;
fp342 = -5.0000000000000000e-01 * src5[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = -5.0000000000000000e-01 * src4[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp343;
fp343 = fp345 + fp344;
LIBINT2_REALTYPE fp341;
fp341 = fp343 + fp342;
LIBINT2_REALTYPE fp340;
fp340 = inteval->oo2z[vi] * fp341;
LIBINT2_REALTYPE fp347;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+15)*1+lsi)*1], fp340);
target[((hsi*78+21)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp352;
LIBINT2_REALTYPE fp351;
fp351 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp350;
fp350 = fp351 + src6[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp353;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+14)*1+lsi)*1], fp349);
target[((hsi*78+20)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp358;
LIBINT2_REALTYPE fp357;
fp357 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp356;
fp356 = fp357 + src6[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->oo2z[vi] * fp356;
LIBINT2_REALTYPE fp359;
LIBINT2_REALTYPE fp354;
fp354 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+13)*1+lsi)*1], fp355);
target[((hsi*78+19)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp364;
LIBINT2_REALTYPE fp363;
fp363 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp362;
fp362 = fp363 + src6[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = inteval->oo2z[vi] * fp362;
LIBINT2_REALTYPE fp365;
LIBINT2_REALTYPE fp360;
fp360 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+12)*1+lsi)*1], fp361);
target[((hsi*78+18)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp370;
LIBINT2_REALTYPE fp369;
fp369 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp368;
fp368 = fp369 + src6[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = inteval->oo2z[vi] * fp368;
LIBINT2_REALTYPE fp371;
LIBINT2_REALTYPE fp366;
fp366 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+11)*1+lsi)*1], fp367);
target[((hsi*78+17)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp374;
fp374 = 0.0000000000000000e+00 + src6[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = inteval->oo2z[vi] * fp374;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+10)*1+lsi)*1], fp373);
target[((hsi*78+16)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp379;
fp379 = -5.0000000000000000e-01 * src5[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = -5.0000000000000000e-01 * src4[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
LIBINT2_REALTYPE fp382;
fp382 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp380;
fp380 = fp382 + fp381;
LIBINT2_REALTYPE fp378;
fp378 = fp380 + fp379;
LIBINT2_REALTYPE fp377;
fp377 = inteval->oo2z[vi] * fp378;
LIBINT2_REALTYPE fp384;
LIBINT2_REALTYPE fp376;
fp376 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+10)*1+lsi)*1], fp377);
target[((hsi*78+15)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp389;
LIBINT2_REALTYPE fp388;
fp388 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp387;
fp387 = fp388 + src6[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = inteval->oo2z[vi] * fp387;
LIBINT2_REALTYPE fp390;
LIBINT2_REALTYPE fp385;
fp385 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+9)*1+lsi)*1], fp386);
target[((hsi*78+14)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp395;
LIBINT2_REALTYPE fp394;
fp394 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp393;
fp393 = fp394 + src6[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp396;
LIBINT2_REALTYPE fp391;
fp391 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+8)*1+lsi)*1], fp392);
target[((hsi*78+13)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp401;
LIBINT2_REALTYPE fp400;
fp400 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp399;
fp399 = fp400 + src6[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = inteval->oo2z[vi] * fp399;
LIBINT2_REALTYPE fp402;
LIBINT2_REALTYPE fp397;
fp397 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+7)*1+lsi)*1], fp398);
target[((hsi*78+12)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp405;
fp405 = 0.0000000000000000e+00 + src6[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = inteval->oo2z[vi] * fp405;
LIBINT2_REALTYPE fp406;
LIBINT2_REALTYPE fp403;
fp403 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+6)*1+lsi)*1], fp404);
target[((hsi*78+11)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp410;
fp410 = -5.0000000000000000e-01 * src5[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = -5.0000000000000000e-01 * src4[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
LIBINT2_REALTYPE fp413;
fp413 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp411;
fp411 = fp413 + fp412;
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
LIBINT2_REALTYPE fp408;
fp408 = inteval->oo2z[vi] * fp409;
LIBINT2_REALTYPE fp415;
LIBINT2_REALTYPE fp407;
fp407 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+6)*1+lsi)*1], fp408);
target[((hsi*78+10)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp420;
LIBINT2_REALTYPE fp419;
fp419 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp418;
fp418 = fp419 + src6[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = inteval->oo2z[vi] * fp418;
LIBINT2_REALTYPE fp421;
LIBINT2_REALTYPE fp416;
fp416 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+5)*1+lsi)*1], fp417);
target[((hsi*78+9)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp426;
LIBINT2_REALTYPE fp425;
fp425 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp424;
fp424 = fp425 + src6[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = inteval->oo2z[vi] * fp424;
LIBINT2_REALTYPE fp427;
LIBINT2_REALTYPE fp422;
fp422 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+4)*1+lsi)*1], fp423);
target[((hsi*78+8)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp430;
fp430 = 0.0000000000000000e+00 + src6[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = inteval->oo2z[vi] * fp430;
LIBINT2_REALTYPE fp431;
LIBINT2_REALTYPE fp428;
fp428 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+3)*1+lsi)*1], fp429);
target[((hsi*78+7)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp435;
fp435 = -5.0000000000000000e-01 * src5[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = -5.0000000000000000e-01 * src4[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
LIBINT2_REALTYPE fp438;
fp438 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp436;
fp436 = fp438 + fp437;
LIBINT2_REALTYPE fp434;
fp434 = fp436 + fp435;
LIBINT2_REALTYPE fp433;
fp433 = inteval->oo2z[vi] * fp434;
LIBINT2_REALTYPE fp440;
LIBINT2_REALTYPE fp432;
fp432 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+3)*1+lsi)*1], fp433);
target[((hsi*78+6)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp445;
LIBINT2_REALTYPE fp444;
fp444 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp443;
fp443 = fp444 + src6[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = inteval->oo2z[vi] * fp443;
LIBINT2_REALTYPE fp446;
LIBINT2_REALTYPE fp441;
fp441 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+2)*1+lsi)*1], fp442);
target[((hsi*78+5)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp449;
fp449 = 0.0000000000000000e+00 + src6[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = inteval->oo2z[vi] * fp449;
LIBINT2_REALTYPE fp450;
LIBINT2_REALTYPE fp447;
fp447 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+1)*1+lsi)*1], fp448);
target[((hsi*78+4)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp454;
fp454 = -5.0000000000000000e-01 * src5[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = -5.0000000000000000e-01 * src4[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp458;
LIBINT2_REALTYPE fp457;
fp457 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp455;
fp455 = fp457 + fp456;
LIBINT2_REALTYPE fp453;
fp453 = fp455 + fp454;
LIBINT2_REALTYPE fp452;
fp452 = inteval->oo2z[vi] * fp453;
LIBINT2_REALTYPE fp459;
LIBINT2_REALTYPE fp451;
fp451 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+1)*1+lsi)*1], fp452);
target[((hsi*78+3)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp462;
fp462 = 0.0000000000000000e+00 + src6[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = inteval->oo2z[vi] * fp462;
LIBINT2_REALTYPE fp463;
LIBINT2_REALTYPE fp460;
fp460 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+0)*1+lsi)*1], fp461);
target[((hsi*78+2)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp467;
fp467 = -5.0000000000000000e-01 * src5[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp469;
LIBINT2_REALTYPE fp468;
fp468 = libint2::fma_plus(-5.0000000000000000e-01, src4[((hsi*66+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp466;
fp466 = fp468 + fp467;
LIBINT2_REALTYPE fp465;
fp465 = inteval->oo2z[vi] * fp466;
LIBINT2_REALTYPE fp470;
LIBINT2_REALTYPE fp464;
fp464 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+0)*1+lsi)*1], fp465);
target[((hsi*78+1)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp474;
fp474 = 5.0000000000000000e-01 * src3[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp476;
fp476 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp478;
LIBINT2_REALTYPE fp477;
fp477 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp475;
fp475 = fp477 + fp476;
LIBINT2_REALTYPE fp473;
fp473 = fp475 - fp474;
LIBINT2_REALTYPE fp472;
fp472 = inteval->oo2z[vi] * fp473;
LIBINT2_REALTYPE fp479;
LIBINT2_REALTYPE fp471;
fp471 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*66+0)*1+lsi)*1], fp472);
target[((hsi*78+0)*1+lsi)*1] = fp471;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 480 */
}

#ifdef __cplusplus
};
#endif
