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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp87 * fp86;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp1;
target[((hsi*168+167)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp87 * fp85;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
target[((hsi*168+166)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp6);
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp87 * fp84;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
target[((hsi*168+165)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp9);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp87 * fp83;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp10;
target[((hsi*168+164)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp12);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp87 * fp82;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp13;
target[((hsi*168+163)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp15);
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp87 * fp81;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp16;
target[((hsi*168+162)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp19);
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp87 * fp80;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp20;
target[((hsi*168+161)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp88 * fp86;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp4;
target[((hsi*168+160)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp88 * fp85;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp7;
target[((hsi*168+159)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp88 * fp84;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp10;
target[((hsi*168+158)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp88 * fp83;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp13;
target[((hsi*168+157)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp88 * fp82;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp16;
target[((hsi*168+156)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp88 * fp81;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp20;
target[((hsi*168+155)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp89 * fp86;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp7;
target[((hsi*168+154)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp89 * fp85;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp10;
target[((hsi*168+153)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp89 * fp84;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp13;
target[((hsi*168+152)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp89 * fp83;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp16;
target[((hsi*168+151)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp89 * fp82;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp20;
target[((hsi*168+150)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp90 * fp86;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp10;
target[((hsi*168+149)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp90 * fp85;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp13;
target[((hsi*168+148)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp90 * fp84;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp16;
target[((hsi*168+147)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp90 * fp83;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp20;
target[((hsi*168+146)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp91 * fp86;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp13;
target[((hsi*168+145)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp91 * fp85;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp16;
target[((hsi*168+144)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp91 * fp84;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp20;
target[((hsi*168+143)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp92 * fp86;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp16;
target[((hsi*168+142)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp92 * fp85;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp20;
target[((hsi*168+141)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp93 * fp86;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp20;
target[((hsi*168+140)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp87 * fp79;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp23;
target[((hsi*168+139)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp25);
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp87 * fp78;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp26;
target[((hsi*168+138)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp28);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp87 * fp77;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp29;
target[((hsi*168+137)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp31);
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp87 * fp76;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp32;
target[((hsi*168+136)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp34);
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp87 * fp75;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp35;
target[((hsi*168+135)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp41, fp37);
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp87 * fp74;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp38;
target[((hsi*168+134)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp41);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp87 * fp73;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp42;
target[((hsi*168+133)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp88 * fp79;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp26;
target[((hsi*168+132)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp88 * fp78;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp29;
target[((hsi*168+131)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp88 * fp77;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp32;
target[((hsi*168+130)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp88 * fp76;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp35;
target[((hsi*168+129)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp88 * fp75;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp38;
target[((hsi*168+128)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp88 * fp74;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp42;
target[((hsi*168+127)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp89 * fp79;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp29;
target[((hsi*168+126)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp89 * fp78;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp32;
target[((hsi*168+125)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp89 * fp77;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp35;
target[((hsi*168+124)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp89 * fp76;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp38;
target[((hsi*168+123)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp89 * fp75;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp42;
target[((hsi*168+122)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp90 * fp79;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp32;
target[((hsi*168+121)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp90 * fp78;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp35;
target[((hsi*168+120)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp90 * fp77;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp38;
target[((hsi*168+119)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp90 * fp76;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp42;
target[((hsi*168+118)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp91 * fp79;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp35;
target[((hsi*168+117)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp91 * fp78;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp38;
target[((hsi*168+116)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp91 * fp77;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp42;
target[((hsi*168+115)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp92 * fp79;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp38;
target[((hsi*168+114)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp92 * fp78;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp42;
target[((hsi*168+113)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp93 * fp79;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp42;
target[((hsi*168+112)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp87 * fp72;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp45;
target[((hsi*168+111)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp47);
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp87 * fp71;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp48;
target[((hsi*168+110)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_z[vi], fp53, fp50);
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp87 * fp70;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp51;
target[((hsi*168+109)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp56, fp53);
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp87 * fp69;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp54;
target[((hsi*168+108)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_z[vi], fp59, fp56);
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp87 * fp68;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp57;
target[((hsi*168+107)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_z[vi], fp63, fp59);
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp87 * fp67;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp60;
target[((hsi*168+106)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp63);
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp87 * fp66;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp64;
target[((hsi*168+105)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp88 * fp72;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp48;
target[((hsi*168+104)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp88 * fp71;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp51;
target[((hsi*168+103)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp88 * fp70;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp54;
target[((hsi*168+102)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp88 * fp69;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp57;
target[((hsi*168+101)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp88 * fp68;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp60;
target[((hsi*168+100)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp88 * fp67;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp64;
target[((hsi*168+99)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp89 * fp72;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp51;
target[((hsi*168+98)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp89 * fp71;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp54;
target[((hsi*168+97)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp89 * fp70;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp57;
target[((hsi*168+96)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp89 * fp69;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp60;
target[((hsi*168+95)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp89 * fp68;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp64;
target[((hsi*168+94)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp90 * fp72;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp54;
target[((hsi*168+93)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp90 * fp71;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp57;
target[((hsi*168+92)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp90 * fp70;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp60;
target[((hsi*168+91)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp90 * fp69;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp64;
target[((hsi*168+90)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp91 * fp72;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp57;
target[((hsi*168+89)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp91 * fp71;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp60;
target[((hsi*168+88)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp91 * fp70;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp64;
target[((hsi*168+87)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp92 * fp72;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp60;
target[((hsi*168+86)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp92 * fp71;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp64;
target[((hsi*168+85)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp93 * fp72;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp64;
target[((hsi*168+84)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp94 * fp86;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp23;
target[((hsi*168+83)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp94 * fp85;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp26;
target[((hsi*168+82)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp94 * fp84;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp29;
target[((hsi*168+81)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp94 * fp83;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp32;
target[((hsi*168+80)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp94 * fp82;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp35;
target[((hsi*168+79)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp94 * fp81;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp38;
target[((hsi*168+78)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp94 * fp80;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp42;
target[((hsi*168+77)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp95 * fp86;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp26;
target[((hsi*168+76)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp95 * fp85;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp29;
target[((hsi*168+75)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp95 * fp84;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp32;
target[((hsi*168+74)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp95 * fp83;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp35;
target[((hsi*168+73)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp95 * fp82;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp38;
target[((hsi*168+72)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp95 * fp81;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp42;
target[((hsi*168+71)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp96 * fp86;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp29;
target[((hsi*168+70)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp96 * fp85;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp32;
target[((hsi*168+69)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp96 * fp84;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp35;
target[((hsi*168+68)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp96 * fp83;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp38;
target[((hsi*168+67)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp96 * fp82;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp42;
target[((hsi*168+66)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp97 * fp86;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp32;
target[((hsi*168+65)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp97 * fp85;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp35;
target[((hsi*168+64)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp97 * fp84;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp38;
target[((hsi*168+63)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp97 * fp83;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp42;
target[((hsi*168+62)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp98 * fp86;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp35;
target[((hsi*168+61)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp98 * fp85;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp38;
target[((hsi*168+60)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp98 * fp84;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp42;
target[((hsi*168+59)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp99 * fp86;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp38;
target[((hsi*168+58)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp99 * fp85;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp42;
target[((hsi*168+57)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp100 * fp86;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp42;
target[((hsi*168+56)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp94 * fp79;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp45;
target[((hsi*168+55)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp94 * fp78;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp48;
target[((hsi*168+54)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp94 * fp77;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp51;
target[((hsi*168+53)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp94 * fp76;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp54;
target[((hsi*168+52)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp94 * fp75;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp57;
target[((hsi*168+51)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp94 * fp74;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp60;
target[((hsi*168+50)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp94 * fp73;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp64;
target[((hsi*168+49)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp95 * fp79;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp48;
target[((hsi*168+48)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp95 * fp78;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp51;
target[((hsi*168+47)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp95 * fp77;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp54;
target[((hsi*168+46)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp95 * fp76;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp57;
target[((hsi*168+45)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp95 * fp75;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp60;
target[((hsi*168+44)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp95 * fp74;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp64;
target[((hsi*168+43)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp96 * fp79;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp51;
target[((hsi*168+42)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp96 * fp78;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp54;
target[((hsi*168+41)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp96 * fp77;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp57;
target[((hsi*168+40)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp96 * fp76;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp60;
target[((hsi*168+39)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp96 * fp75;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp64;
target[((hsi*168+38)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp97 * fp79;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp54;
target[((hsi*168+37)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp97 * fp78;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp57;
target[((hsi*168+36)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp97 * fp77;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp60;
target[((hsi*168+35)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp97 * fp76;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp64;
target[((hsi*168+34)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp98 * fp79;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp57;
target[((hsi*168+33)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp98 * fp78;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp60;
target[((hsi*168+32)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp98 * fp77;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp64;
target[((hsi*168+31)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp99 * fp79;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp60;
target[((hsi*168+30)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp99 * fp78;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp64;
target[((hsi*168+29)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp100 * fp79;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp64;
target[((hsi*168+28)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = fp101 * fp86;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp45;
target[((hsi*168+27)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp101 * fp85;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp48;
target[((hsi*168+26)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp101 * fp84;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp51;
target[((hsi*168+25)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp101 * fp83;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp54;
target[((hsi*168+24)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp101 * fp82;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp57;
target[((hsi*168+23)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp101 * fp81;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp60;
target[((hsi*168+22)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp101 * fp80;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp64;
target[((hsi*168+21)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp102 * fp86;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp48;
target[((hsi*168+20)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp102 * fp85;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp51;
target[((hsi*168+19)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp102 * fp84;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp54;
target[((hsi*168+18)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp102 * fp83;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp57;
target[((hsi*168+17)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp102 * fp82;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp60;
target[((hsi*168+16)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp102 * fp81;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp64;
target[((hsi*168+15)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp415;
fp415 = fp103 * fp86;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp51;
target[((hsi*168+14)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp103 * fp85;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp54;
target[((hsi*168+13)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp103 * fp84;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp57;
target[((hsi*168+12)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp103 * fp83;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp60;
target[((hsi*168+11)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp103 * fp82;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp64;
target[((hsi*168+10)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp104 * fp86;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp54;
target[((hsi*168+9)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp104 * fp85;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp57;
target[((hsi*168+8)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp104 * fp84;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp60;
target[((hsi*168+7)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp104 * fp83;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp64;
target[((hsi*168+6)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp105 * fp86;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp57;
target[((hsi*168+5)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp105 * fp85;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp60;
target[((hsi*168+4)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp437;
fp437 = fp105 * fp84;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp64;
target[((hsi*168+3)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = fp106 * fp86;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp60;
target[((hsi*168+2)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp441;
fp441 = fp106 * fp85;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp64;
target[((hsi*168+1)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp443;
fp443 = fp107 * fp86;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp64;
target[((hsi*168+0)*1+lsi)*1] = fp442;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 444 */
}

#ifdef __cplusplus
};
#endif
