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
void CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->BO_y[vi], fp155, fp156);
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src0[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp159 * fp157;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp3;
target[((hsi*126+125)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp10);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->BO_y[vi], fp156, fp152);
LIBINT2_REALTYPE fp180;
fp180 = fp159 * fp153;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp8;
target[((hsi*126+124)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp15);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp11);
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->BO_y[vi], fp152, fp149);
LIBINT2_REALTYPE fp182;
fp182 = fp159 * fp150;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp13;
target[((hsi*126+123)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp20);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp16);
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->BO_y[vi], fp149, fp146);
LIBINT2_REALTYPE fp184;
fp184 = fp159 * fp147;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp18;
target[((hsi*126+122)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp27);
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp21);
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_y[vi], fp146, fp143);
LIBINT2_REALTYPE fp186;
fp186 = fp159 * fp144;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp23;
target[((hsi*126+121)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp26);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp30);
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_y[vi] * fp143;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp140 + fp142;
LIBINT2_REALTYPE fp188;
fp188 = fp159 * fp141;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp32;
target[((hsi*126+120)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp160 * fp157;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp8;
target[((hsi*126+119)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp160 * fp153;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp13;
target[((hsi*126+118)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp160 * fp150;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp18;
target[((hsi*126+117)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp160 * fp147;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp23;
target[((hsi*126+116)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp160 * fp144;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp32;
target[((hsi*126+115)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp161 * fp157;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp13;
target[((hsi*126+114)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp161 * fp153;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp18;
target[((hsi*126+113)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp204;
fp204 = fp161 * fp150;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp23;
target[((hsi*126+112)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp161 * fp147;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp32;
target[((hsi*126+111)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + src0[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp162 * fp157;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp18;
target[((hsi*126+110)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp210;
fp210 = fp162 * fp153;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp23;
target[((hsi*126+109)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp212;
fp212 = fp162 * fp150;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp32;
target[((hsi*126+108)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src0[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp163 * fp157;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp23;
target[((hsi*126+107)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp163 * fp153;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp32;
target[((hsi*126+106)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp164 * fp157;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp32;
target[((hsi*126+105)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp44, fp39);
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_y[vi], fp136, fp137);
LIBINT2_REALTYPE fp220;
fp220 = fp159 * fp138;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp37;
target[((hsi*126+104)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp44);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp40);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_y[vi], fp137, fp133);
LIBINT2_REALTYPE fp222;
fp222 = fp159 * fp134;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp42;
target[((hsi*126+103)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp54, fp49);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp45);
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->BO_y[vi], fp133, fp130);
LIBINT2_REALTYPE fp224;
fp224 = fp159 * fp131;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp47;
target[((hsi*126+102)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_z[vi], fp61, fp54);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp55, fp50);
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_y[vi], fp130, fp127);
LIBINT2_REALTYPE fp226;
fp226 = fp159 * fp128;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp52;
target[((hsi*126+101)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp60, fp61);
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_z[vi], fp64, fp55);
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_y[vi], fp127, fp124);
LIBINT2_REALTYPE fp228;
fp228 = fp159 * fp125;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp57;
target[((hsi*126+100)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_z[vi], fp59, fp60);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp64);
LIBINT2_REALTYPE fp123;
fp123 = inteval->BO_y[vi] * fp124;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp121 + fp123;
LIBINT2_REALTYPE fp230;
fp230 = fp159 * fp122;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp66;
target[((hsi*126+99)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp232;
fp232 = fp160 * fp138;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp42;
target[((hsi*126+98)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp160 * fp134;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp47;
target[((hsi*126+97)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp160 * fp131;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp52;
target[((hsi*126+96)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp238;
fp238 = fp160 * fp128;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp57;
target[((hsi*126+95)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp160 * fp125;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp66;
target[((hsi*126+94)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp161 * fp138;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp47;
target[((hsi*126+93)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp161 * fp134;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp52;
target[((hsi*126+92)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp246;
fp246 = fp161 * fp131;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp57;
target[((hsi*126+91)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp161 * fp128;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp66;
target[((hsi*126+90)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp250;
fp250 = fp162 * fp138;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp52;
target[((hsi*126+89)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp252;
fp252 = fp162 * fp134;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp57;
target[((hsi*126+88)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = fp162 * fp131;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp66;
target[((hsi*126+87)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp256;
fp256 = fp163 * fp138;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp57;
target[((hsi*126+86)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp258;
fp258 = fp163 * fp134;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp66;
target[((hsi*126+85)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp260;
fp260 = fp164 * fp138;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp66;
target[((hsi*126+84)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp78, fp73);
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp74;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_z[vi] * fp73;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp68 + fp70;
LIBINT2_REALTYPE fp71;
fp71 = fp69 + fp72;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_y[vi], fp117, fp118);
LIBINT2_REALTYPE fp262;
fp262 = fp159 * fp119;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp71;
target[((hsi*126+83)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_z[vi], fp83, fp78);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_z[vi], fp79, fp74);
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src1[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_y[vi], fp118, fp114);
LIBINT2_REALTYPE fp264;
fp264 = fp159 * fp115;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp76;
target[((hsi*126+82)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_z[vi], fp88, fp83);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_z[vi], fp84, fp79);
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src1[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_y[vi], fp114, fp111);
LIBINT2_REALTYPE fp266;
fp266 = fp159 * fp112;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp81;
target[((hsi*126+81)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_z[vi], fp95, fp88);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_z[vi], fp89, fp84);
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src1[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_y[vi], fp111, fp108);
LIBINT2_REALTYPE fp268;
fp268 = fp159 * fp109;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp86;
target[((hsi*126+80)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_z[vi], fp94, fp95);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_z[vi], fp98, fp89);
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src1[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_y[vi], fp108, fp105);
LIBINT2_REALTYPE fp270;
fp270 = fp159 * fp106;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp91;
target[((hsi*126+79)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src2[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_z[vi], fp93, fp94);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_z[vi], fp96, fp98);
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_y[vi] * fp105;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp102 + fp104;
LIBINT2_REALTYPE fp272;
fp272 = fp159 * fp103;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp100;
target[((hsi*126+78)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp274;
fp274 = fp160 * fp119;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp76;
target[((hsi*126+77)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp160 * fp115;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp81;
target[((hsi*126+76)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp278;
fp278 = fp160 * fp112;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp86;
target[((hsi*126+75)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp280;
fp280 = fp160 * fp109;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp91;
target[((hsi*126+74)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp282;
fp282 = fp160 * fp106;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp100;
target[((hsi*126+73)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp284;
fp284 = fp161 * fp119;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp81;
target[((hsi*126+72)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp286;
fp286 = fp161 * fp115;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp86;
target[((hsi*126+71)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp288;
fp288 = fp161 * fp112;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp91;
target[((hsi*126+70)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp290;
fp290 = fp161 * fp109;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp100;
target[((hsi*126+69)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp292;
fp292 = fp162 * fp119;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp86;
target[((hsi*126+68)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = fp162 * fp115;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp91;
target[((hsi*126+67)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp296;
fp296 = fp162 * fp112;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp100;
target[((hsi*126+66)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp298;
fp298 = fp163 * fp119;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp91;
target[((hsi*126+65)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp300;
fp300 = fp163 * fp115;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp100;
target[((hsi*126+64)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp302;
fp302 = fp164 * fp119;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp100;
target[((hsi*126+63)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src0[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp165 * fp157;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp37;
target[((hsi*126+62)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp306;
fp306 = fp165 * fp153;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp42;
target[((hsi*126+61)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = fp165 * fp150;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp47;
target[((hsi*126+60)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp310;
fp310 = fp165 * fp147;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp52;
target[((hsi*126+59)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp312;
fp312 = fp165 * fp144;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp57;
target[((hsi*126+58)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp165 * fp141;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp66;
target[((hsi*126+57)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp166 * fp157;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp42;
target[((hsi*126+56)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp318;
fp318 = fp166 * fp153;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp47;
target[((hsi*126+55)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp320;
fp320 = fp166 * fp150;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp52;
target[((hsi*126+54)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp322;
fp322 = fp166 * fp147;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp57;
target[((hsi*126+53)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp324;
fp324 = fp166 * fp144;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp66;
target[((hsi*126+52)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp167 * fp157;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp47;
target[((hsi*126+51)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp328;
fp328 = fp167 * fp153;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp52;
target[((hsi*126+50)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp330;
fp330 = fp167 * fp150;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp57;
target[((hsi*126+49)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp332;
fp332 = fp167 * fp147;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp66;
target[((hsi*126+48)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp168 * fp157;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp52;
target[((hsi*126+47)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp336;
fp336 = fp168 * fp153;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp57;
target[((hsi*126+46)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp168 * fp150;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp66;
target[((hsi*126+45)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp169 * fp157;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp57;
target[((hsi*126+44)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp169 * fp153;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp66;
target[((hsi*126+43)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = fp170 * fp157;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp66;
target[((hsi*126+42)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp346;
fp346 = fp165 * fp138;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp71;
target[((hsi*126+41)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp348;
fp348 = fp165 * fp134;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp76;
target[((hsi*126+40)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp350;
fp350 = fp165 * fp131;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp81;
target[((hsi*126+39)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp352;
fp352 = fp165 * fp128;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp86;
target[((hsi*126+38)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp354;
fp354 = fp165 * fp125;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp91;
target[((hsi*126+37)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp356;
fp356 = fp165 * fp122;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp100;
target[((hsi*126+36)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp358;
fp358 = fp166 * fp138;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp76;
target[((hsi*126+35)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp360;
fp360 = fp166 * fp134;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp81;
target[((hsi*126+34)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp362;
fp362 = fp166 * fp131;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp86;
target[((hsi*126+33)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp364;
fp364 = fp166 * fp128;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp91;
target[((hsi*126+32)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp366;
fp366 = fp166 * fp125;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp100;
target[((hsi*126+31)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp368;
fp368 = fp167 * fp138;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp81;
target[((hsi*126+30)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp370;
fp370 = fp167 * fp134;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp86;
target[((hsi*126+29)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp372;
fp372 = fp167 * fp131;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp91;
target[((hsi*126+28)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp374;
fp374 = fp167 * fp128;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp100;
target[((hsi*126+27)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp376;
fp376 = fp168 * fp138;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp86;
target[((hsi*126+26)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp378;
fp378 = fp168 * fp134;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp91;
target[((hsi*126+25)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp380;
fp380 = fp168 * fp131;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp100;
target[((hsi*126+24)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp382;
fp382 = fp169 * fp138;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp91;
target[((hsi*126+23)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp384;
fp384 = fp169 * fp134;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp100;
target[((hsi*126+22)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp386;
fp386 = fp170 * fp138;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp100;
target[((hsi*126+21)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp171 * fp157;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp71;
target[((hsi*126+20)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp390;
fp390 = fp171 * fp153;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp76;
target[((hsi*126+19)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp392;
fp392 = fp171 * fp150;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp81;
target[((hsi*126+18)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp394;
fp394 = fp171 * fp147;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp86;
target[((hsi*126+17)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp396;
fp396 = fp171 * fp144;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp91;
target[((hsi*126+16)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp171 * fp141;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp100;
target[((hsi*126+15)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src0[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = fp172 * fp157;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp76;
target[((hsi*126+14)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp402;
fp402 = fp172 * fp153;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp81;
target[((hsi*126+13)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp404;
fp404 = fp172 * fp150;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp86;
target[((hsi*126+12)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp406;
fp406 = fp172 * fp147;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp91;
target[((hsi*126+11)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp408;
fp408 = fp172 * fp144;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp100;
target[((hsi*126+10)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp410;
fp410 = fp173 * fp157;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp81;
target[((hsi*126+9)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp412;
fp412 = fp173 * fp153;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp86;
target[((hsi*126+8)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp414;
fp414 = fp173 * fp150;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp91;
target[((hsi*126+7)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp173 * fp147;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp100;
target[((hsi*126+6)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp418;
fp418 = fp174 * fp157;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp86;
target[((hsi*126+5)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp420;
fp420 = fp174 * fp153;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp91;
target[((hsi*126+4)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp422;
fp422 = fp174 * fp150;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp100;
target[((hsi*126+3)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src0[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = fp175 * fp157;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp91;
target[((hsi*126+2)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp426;
fp426 = fp175 * fp153;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp100;
target[((hsi*126+1)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = fp176 * fp157;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp100;
target[((hsi*126+0)*1+lsi)*1] = fp427;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 429 */
}

#ifdef __cplusplus
};
#endif
