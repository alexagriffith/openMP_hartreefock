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
void CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp96 * fp95;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
target[((hsi*63+62)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp5, fp6);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp10);
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp96 * fp94;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp12;
target[((hsi*63+61)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp97 * fp95;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp12;
target[((hsi*63+60)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp96 * fp93;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp17;
target[((hsi*63+59)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp24);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp96 * fp92;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp26;
target[((hsi*63+58)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp97 * fp93;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp26;
target[((hsi*63+57)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp35);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp96 * fp91;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp31;
target[((hsi*63+56)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp34);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp38);
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp96 * fp90;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp40;
target[((hsi*63+55)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp97 * fp91;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp40;
target[((hsi*63+54)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp49);
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp49;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp96 * fp89;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp45;
target[((hsi*63+53)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp47, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp52);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp96 * fp88;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp54;
target[((hsi*63+52)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp97 * fp89;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp54;
target[((hsi*63+51)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp63);
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp66;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp96 * fp87;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp59;
target[((hsi*63+50)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp61, fp62);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp64, fp66);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp96 * fp86;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp68;
target[((hsi*63+49)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp97 * fp87;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp68;
target[((hsi*63+48)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_z[vi], fp76, fp77);
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp96 * fp85;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp73;
target[((hsi*63+47)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp75, fp76);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp78, fp80);
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp96 * fp84;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp82;
target[((hsi*63+46)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp97 * fp85;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp82;
target[((hsi*63+45)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp98 * fp95;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp17;
target[((hsi*63+44)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp98 * fp94;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp26;
target[((hsi*63+43)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp99 * fp95;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp26;
target[((hsi*63+42)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp98 * fp93;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp31;
target[((hsi*63+41)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp98 * fp92;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp40;
target[((hsi*63+40)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp99 * fp93;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp40;
target[((hsi*63+39)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp98 * fp91;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp45;
target[((hsi*63+38)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp98 * fp90;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp54;
target[((hsi*63+37)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp99 * fp91;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp54;
target[((hsi*63+36)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp98 * fp89;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp59;
target[((hsi*63+35)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp98 * fp88;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp68;
target[((hsi*63+34)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp99 * fp89;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp68;
target[((hsi*63+33)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp98 * fp87;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp73;
target[((hsi*63+32)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp98 * fp86;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp82;
target[((hsi*63+31)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp99 * fp87;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp82;
target[((hsi*63+30)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp100 * fp95;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp31;
target[((hsi*63+29)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp100 * fp94;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp40;
target[((hsi*63+28)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp101 * fp95;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp40;
target[((hsi*63+27)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp100 * fp93;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp45;
target[((hsi*63+26)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp100 * fp92;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp54;
target[((hsi*63+25)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp101 * fp93;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp54;
target[((hsi*63+24)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp100 * fp91;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp59;
target[((hsi*63+23)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp100 * fp90;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp68;
target[((hsi*63+22)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp101 * fp91;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp68;
target[((hsi*63+21)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp100 * fp89;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp73;
target[((hsi*63+20)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp100 * fp88;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp82;
target[((hsi*63+19)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp101 * fp89;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp82;
target[((hsi*63+18)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp102 * fp95;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp45;
target[((hsi*63+17)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp102 * fp94;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp54;
target[((hsi*63+16)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp103 * fp95;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp54;
target[((hsi*63+15)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp102 * fp93;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp59;
target[((hsi*63+14)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp102 * fp92;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp68;
target[((hsi*63+13)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp103 * fp93;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp68;
target[((hsi*63+12)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp102 * fp91;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp73;
target[((hsi*63+11)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp102 * fp90;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp82;
target[((hsi*63+10)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp103 * fp91;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp82;
target[((hsi*63+9)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp104 * fp95;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp59;
target[((hsi*63+8)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp104 * fp94;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp68;
target[((hsi*63+7)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp105 * fp95;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp68;
target[((hsi*63+6)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp104 * fp93;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp73;
target[((hsi*63+5)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp104 * fp92;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp82;
target[((hsi*63+4)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp105 * fp93;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp82;
target[((hsi*63+3)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp106 * fp95;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp73;
target[((hsi*63+2)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp106 * fp94;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp82;
target[((hsi*63+1)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp107 * fp95;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp82;
target[((hsi*63+0)*1+lsi)*1] = fp232;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 234 */
}

#ifdef __cplusplus
};
#endif
