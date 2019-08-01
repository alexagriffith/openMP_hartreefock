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
void CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_y[vi], fp80, fp81);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_x[vi], fp84, fp87);
LIBINT2_REALTYPE fp149;
fp149 = fp85 * fp82;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp0;
target[((hsi*150+149)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp81, fp77);
LIBINT2_REALTYPE fp151;
fp151 = fp85 * fp78;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp1;
target[((hsi*150+148)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_y[vi], fp77, fp74);
LIBINT2_REALTYPE fp153;
fp153 = fp85 * fp75;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp2;
target[((hsi*150+147)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_y[vi], fp74, fp71);
LIBINT2_REALTYPE fp155;
fp155 = fp85 * fp72;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp3;
target[((hsi*150+146)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp68 + fp70;
LIBINT2_REALTYPE fp157;
fp157 = fp85 * fp69;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp4;
target[((hsi*150+145)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_x[vi], fp87, fp90);
LIBINT2_REALTYPE fp159;
fp159 = fp88 * fp82;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp1;
target[((hsi*150+144)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp88 * fp78;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp2;
target[((hsi*150+143)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp88 * fp75;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp3;
target[((hsi*150+142)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp88 * fp72;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp4;
target[((hsi*150+141)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp90, fp93);
LIBINT2_REALTYPE fp167;
fp167 = fp91 * fp82;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp2;
target[((hsi*150+140)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp91 * fp78;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp3;
target[((hsi*150+139)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp91 * fp75;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp4;
target[((hsi*150+138)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_x[vi], fp93, fp96);
LIBINT2_REALTYPE fp173;
fp173 = fp94 * fp82;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp3;
target[((hsi*150+137)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp94 * fp78;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp4;
target[((hsi*150+136)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_x[vi] * fp96;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp97 + fp99;
LIBINT2_REALTYPE fp177;
fp177 = fp98 * fp82;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp4;
target[((hsi*150+135)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_y[vi], fp64, fp65);
LIBINT2_REALTYPE fp179;
fp179 = fp85 * fp66;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp5;
target[((hsi*150+134)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_y[vi], fp65, fp61);
LIBINT2_REALTYPE fp181;
fp181 = fp85 * fp62;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
target[((hsi*150+133)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp61, fp58);
LIBINT2_REALTYPE fp183;
fp183 = fp85 * fp59;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp7;
target[((hsi*150+132)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp55);
LIBINT2_REALTYPE fp185;
fp185 = fp85 * fp56;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp8;
target[((hsi*150+131)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_y[vi] * fp55;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp52 + fp54;
LIBINT2_REALTYPE fp187;
fp187 = fp85 * fp53;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp9;
target[((hsi*150+130)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp88 * fp66;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp6;
target[((hsi*150+129)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp88 * fp62;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp7;
target[((hsi*150+128)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp88 * fp59;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp8;
target[((hsi*150+127)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp88 * fp56;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp9;
target[((hsi*150+126)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp91 * fp66;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp7;
target[((hsi*150+125)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp91 * fp62;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp8;
target[((hsi*150+124)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp91 * fp59;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp9;
target[((hsi*150+123)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp94 * fp66;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp8;
target[((hsi*150+122)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp94 * fp62;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp9;
target[((hsi*150+121)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp98 * fp66;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp9;
target[((hsi*150+120)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp49);
LIBINT2_REALTYPE fp209;
fp209 = fp85 * fp50;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp10;
target[((hsi*150+119)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp45);
LIBINT2_REALTYPE fp211;
fp211 = fp85 * fp46;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp11;
target[((hsi*150+118)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp42);
LIBINT2_REALTYPE fp213;
fp213 = fp85 * fp43;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp12;
target[((hsi*150+117)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp39);
LIBINT2_REALTYPE fp215;
fp215 = fp85 * fp40;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp13;
target[((hsi*150+116)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp217;
fp217 = fp85 * fp37;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp14;
target[((hsi*150+115)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp88 * fp50;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp11;
target[((hsi*150+114)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp88 * fp46;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp12;
target[((hsi*150+113)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp88 * fp43;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp13;
target[((hsi*150+112)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp88 * fp40;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp14;
target[((hsi*150+111)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp91 * fp50;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp12;
target[((hsi*150+110)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp91 * fp46;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp13;
target[((hsi*150+109)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp91 * fp43;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp14;
target[((hsi*150+108)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp94 * fp50;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp13;
target[((hsi*150+107)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp94 * fp46;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp14;
target[((hsi*150+106)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp98 * fp50;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp14;
target[((hsi*150+105)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp33);
LIBINT2_REALTYPE fp239;
fp239 = fp85 * fp34;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp15;
target[((hsi*150+104)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp29);
LIBINT2_REALTYPE fp241;
fp241 = fp85 * fp30;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp16;
target[((hsi*150+103)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp26);
LIBINT2_REALTYPE fp243;
fp243 = fp85 * fp27;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp17;
target[((hsi*150+102)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp23);
LIBINT2_REALTYPE fp245;
fp245 = fp85 * fp24;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp18;
target[((hsi*150+101)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp247;
fp247 = fp85 * fp21;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp19;
target[((hsi*150+100)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp88 * fp34;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp16;
target[((hsi*150+99)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp88 * fp30;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp17;
target[((hsi*150+98)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp88 * fp27;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp18;
target[((hsi*150+97)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp88 * fp24;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp19;
target[((hsi*150+96)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp91 * fp34;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp17;
target[((hsi*150+95)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp91 * fp30;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp18;
target[((hsi*150+94)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp91 * fp27;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp19;
target[((hsi*150+93)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp94 * fp34;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp18;
target[((hsi*150+92)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp94 * fp30;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp19;
target[((hsi*150+91)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp98 * fp34;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp19;
target[((hsi*150+90)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp103);
LIBINT2_REALTYPE fp269;
fp269 = fp101 * fp82;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp5;
target[((hsi*150+89)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp101 * fp78;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp6;
target[((hsi*150+88)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp101 * fp75;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp7;
target[((hsi*150+87)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp101 * fp72;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp8;
target[((hsi*150+86)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp101 * fp69;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp9;
target[((hsi*150+85)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_x[vi], fp103, fp106);
LIBINT2_REALTYPE fp279;
fp279 = fp104 * fp82;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp6;
target[((hsi*150+84)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp104 * fp78;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp7;
target[((hsi*150+83)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp104 * fp75;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp8;
target[((hsi*150+82)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp104 * fp72;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp9;
target[((hsi*150+81)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->BO_x[vi], fp106, fp109);
LIBINT2_REALTYPE fp287;
fp287 = fp107 * fp82;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp7;
target[((hsi*150+80)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp107 * fp78;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp8;
target[((hsi*150+79)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp107 * fp75;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp9;
target[((hsi*150+78)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp109, fp112);
LIBINT2_REALTYPE fp293;
fp293 = fp110 * fp82;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp8;
target[((hsi*150+77)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp110 * fp78;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp9;
target[((hsi*150+76)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_x[vi] * fp112;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp113 + fp115;
LIBINT2_REALTYPE fp297;
fp297 = fp114 * fp82;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp9;
target[((hsi*150+75)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp101 * fp66;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp10;
target[((hsi*150+74)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp101 * fp62;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp11;
target[((hsi*150+73)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp101 * fp59;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp12;
target[((hsi*150+72)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp101 * fp56;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp13;
target[((hsi*150+71)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp101 * fp53;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp14;
target[((hsi*150+70)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp104 * fp66;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp11;
target[((hsi*150+69)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp104 * fp62;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp12;
target[((hsi*150+68)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp104 * fp59;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp13;
target[((hsi*150+67)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp104 * fp56;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp14;
target[((hsi*150+66)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp107 * fp66;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp12;
target[((hsi*150+65)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp107 * fp62;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp13;
target[((hsi*150+64)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp107 * fp59;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp14;
target[((hsi*150+63)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp110 * fp66;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp13;
target[((hsi*150+62)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp110 * fp62;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp14;
target[((hsi*150+61)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp114 * fp66;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp14;
target[((hsi*150+60)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp101 * fp50;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp15;
target[((hsi*150+59)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp101 * fp46;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp16;
target[((hsi*150+58)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp101 * fp43;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp17;
target[((hsi*150+57)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp101 * fp40;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp18;
target[((hsi*150+56)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp101 * fp37;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp19;
target[((hsi*150+55)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp104 * fp50;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp16;
target[((hsi*150+54)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp104 * fp46;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp17;
target[((hsi*150+53)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp104 * fp43;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp18;
target[((hsi*150+52)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp104 * fp40;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp19;
target[((hsi*150+51)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp107 * fp50;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp17;
target[((hsi*150+50)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp107 * fp46;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp18;
target[((hsi*150+49)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp107 * fp43;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp19;
target[((hsi*150+48)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp110 * fp50;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp18;
target[((hsi*150+47)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp110 * fp46;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp19;
target[((hsi*150+46)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp114 * fp50;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp19;
target[((hsi*150+45)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_x[vi], fp116, fp119);
LIBINT2_REALTYPE fp359;
fp359 = fp117 * fp82;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp10;
target[((hsi*150+44)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp117 * fp78;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp11;
target[((hsi*150+43)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp117 * fp75;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp12;
target[((hsi*150+42)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp117 * fp72;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp13;
target[((hsi*150+41)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp117 * fp69;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp14;
target[((hsi*150+40)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_x[vi], fp119, fp122);
LIBINT2_REALTYPE fp369;
fp369 = fp120 * fp82;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp11;
target[((hsi*150+39)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp120 * fp78;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp12;
target[((hsi*150+38)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp120 * fp75;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp13;
target[((hsi*150+37)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp120 * fp72;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp14;
target[((hsi*150+36)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->BO_x[vi], fp122, fp125);
LIBINT2_REALTYPE fp377;
fp377 = fp123 * fp82;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp12;
target[((hsi*150+35)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp123 * fp78;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp13;
target[((hsi*150+34)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp123 * fp75;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp14;
target[((hsi*150+33)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->BO_x[vi], fp125, fp128);
LIBINT2_REALTYPE fp383;
fp383 = fp126 * fp82;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp13;
target[((hsi*150+32)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp126 * fp78;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp14;
target[((hsi*150+31)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_x[vi] * fp128;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp129 + fp131;
LIBINT2_REALTYPE fp387;
fp387 = fp130 * fp82;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp14;
target[((hsi*150+30)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp117 * fp66;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp15;
target[((hsi*150+29)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp117 * fp62;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp16;
target[((hsi*150+28)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp117 * fp59;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp17;
target[((hsi*150+27)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp117 * fp56;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp18;
target[((hsi*150+26)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp117 * fp53;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp19;
target[((hsi*150+25)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp120 * fp66;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp16;
target[((hsi*150+24)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp120 * fp62;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp17;
target[((hsi*150+23)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp120 * fp59;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp18;
target[((hsi*150+22)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp120 * fp56;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp19;
target[((hsi*150+21)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp123 * fp66;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp17;
target[((hsi*150+20)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp123 * fp62;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp18;
target[((hsi*150+19)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp123 * fp59;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp19;
target[((hsi*150+18)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp126 * fp66;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp18;
target[((hsi*150+17)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp126 * fp62;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp19;
target[((hsi*150+16)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp130 * fp66;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp19;
target[((hsi*150+15)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->BO_x[vi], fp132, fp135);
LIBINT2_REALTYPE fp419;
fp419 = fp133 * fp82;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp15;
target[((hsi*150+14)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp133 * fp78;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp16;
target[((hsi*150+13)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp133 * fp75;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp17;
target[((hsi*150+12)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp133 * fp72;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp18;
target[((hsi*150+11)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp133 * fp69;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp19;
target[((hsi*150+10)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BO_x[vi], fp135, fp138);
LIBINT2_REALTYPE fp429;
fp429 = fp136 * fp82;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp16;
target[((hsi*150+9)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp136 * fp78;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp17;
target[((hsi*150+8)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp136 * fp75;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp18;
target[((hsi*150+7)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp136 * fp72;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp19;
target[((hsi*150+6)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->BO_x[vi], fp138, fp141);
LIBINT2_REALTYPE fp437;
fp437 = fp139 * fp82;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp17;
target[((hsi*150+5)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp439;
fp439 = fp139 * fp78;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp18;
target[((hsi*150+4)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp441;
fp441 = fp139 * fp75;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp19;
target[((hsi*150+3)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->BO_x[vi], fp141, fp144);
LIBINT2_REALTYPE fp443;
fp443 = fp142 * fp82;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp18;
target[((hsi*150+2)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp445;
fp445 = fp142 * fp78;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp19;
target[((hsi*150+1)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_x[vi] * fp144;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp145 + fp147;
LIBINT2_REALTYPE fp447;
fp447 = fp146 * fp82;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp19;
target[((hsi*150+0)*1+lsi)*1] = fp446;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 448 */
}

#ifdef __cplusplus
};
#endif
