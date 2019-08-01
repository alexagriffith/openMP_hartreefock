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
void CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*42+40)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src1[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->BO_x[vi], fp154, fp157);
LIBINT2_REALTYPE fp225;
fp225 = fp155 * fp153;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp3;
target[((hsi*168+167)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp12);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp6);
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src1[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp155 * fp152;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp8;
target[((hsi*168+166)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp11);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp13, fp15);
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src1[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp155 * fp151;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp17;
target[((hsi*168+165)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->BO_x[vi], fp157, fp160);
LIBINT2_REALTYPE fp231;
fp231 = fp158 * fp153;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp8;
target[((hsi*168+164)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp158 * fp152;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp17;
target[((hsi*168+163)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp163;
fp163 = inteval->BO_x[vi] * fp160;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp161 + fp163;
LIBINT2_REALTYPE fp235;
fp235 = fp162 * fp153;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp17;
target[((hsi*168+162)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp24);
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*42+34)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp22;
fp22 = fp20 + fp23;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src1[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp155 * fp150;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp22;
target[((hsi*168+161)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp31);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp25);
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src1[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp155 * fp149;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp27;
target[((hsi*168+160)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp29, fp30);
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp32, fp34);
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src1[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp155 * fp148;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp36;
target[((hsi*168+159)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp158 * fp150;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp27;
target[((hsi*168+158)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp158 * fp149;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp36;
target[((hsi*168+157)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp162 * fp150;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp36;
target[((hsi*168+156)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp43);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src1[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp155 * fp147;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp41;
target[((hsi*168+155)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp50);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_z[vi], fp53, fp44);
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src1[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp155 * fp146;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp46;
target[((hsi*168+154)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp49);
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_z[vi], fp51, fp53);
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src1[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp155 * fp145;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp55;
target[((hsi*168+153)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp158 * fp147;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp46;
target[((hsi*168+152)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp158 * fp146;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp55;
target[((hsi*168+151)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp162 * fp147;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp55;
target[((hsi*168+150)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_z[vi], fp69, fp62);
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp57 + fp59;
LIBINT2_REALTYPE fp60;
fp60 = fp58 + fp61;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src1[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp155 * fp144;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp60;
target[((hsi*168+149)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_z[vi], fp68, fp69);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_z[vi], fp72, fp63);
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src1[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp155 * fp143;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp65;
target[((hsi*168+148)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_z[vi], fp67, fp68);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp70, fp72);
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src1[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp155 * fp142;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp74;
target[((hsi*168+147)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp158 * fp144;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp65;
target[((hsi*168+146)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp158 * fp143;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp74;
target[((hsi*168+145)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp162 * fp144;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp74;
target[((hsi*168+144)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src2[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src2[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp88, fp81);
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_z[vi] * fp82;
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_z[vi] * fp81;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp76 + fp78;
LIBINT2_REALTYPE fp79;
fp79 = fp77 + fp80;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp155 * fp141;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp79;
target[((hsi*168+143)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src2[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_z[vi], fp87, fp88);
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_z[vi], fp91, fp82);
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp155 * fp140;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp84;
target[((hsi*168+142)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src2[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_z[vi], fp86, fp87);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_z[vi], fp89, fp91);
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src1[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp155 * fp139;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp93;
target[((hsi*168+141)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp158 * fp141;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp84;
target[((hsi*168+140)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp158 * fp140;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp93;
target[((hsi*168+139)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp162 * fp141;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp93;
target[((hsi*168+138)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src2[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src2[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_z[vi], fp107, fp100);
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_z[vi] * fp101;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_z[vi] * fp100;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src2[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp98;
fp98 = fp96 + fp99;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src1[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp155 * fp138;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp98;
target[((hsi*168+137)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src2[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_z[vi], fp106, fp107);
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_z[vi], fp110, fp101);
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src1[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp155 * fp137;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp103;
target[((hsi*168+136)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src2[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_z[vi], fp105, fp106);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_z[vi], fp108, fp110);
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = fp155 * fp136;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp112;
target[((hsi*168+135)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp158 * fp138;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp103;
target[((hsi*168+134)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp158 * fp137;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp112;
target[((hsi*168+133)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp162 * fp138;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp112;
target[((hsi*168+132)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src2[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src2[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_z[vi], fp126, fp119);
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_z[vi] * fp120;
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_z[vi] * fp119;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src2[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp114 + fp116;
LIBINT2_REALTYPE fp117;
fp117 = fp115 + fp118;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src1[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp155 * fp135;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp117;
target[((hsi*168+131)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src2[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->BO_z[vi], fp125, fp126);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_z[vi], fp129, fp120);
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src1[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp155 * fp134;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp122;
target[((hsi*168+130)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src2[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->BO_z[vi], fp124, fp125);
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->BO_z[vi], fp127, fp129);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp155 * fp133;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp131;
target[((hsi*168+129)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp158 * fp135;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp122;
target[((hsi*168+128)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp158 * fp134;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp131;
target[((hsi*168+127)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp162 * fp135;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp131;
target[((hsi*168+126)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->BO_x[vi], fp164, fp167);
LIBINT2_REALTYPE fp309;
fp309 = fp165 * fp153;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp22;
target[((hsi*168+125)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp165 * fp152;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp27;
target[((hsi*168+124)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp165 * fp151;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp36;
target[((hsi*168+123)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BO_x[vi], fp167, fp170);
LIBINT2_REALTYPE fp315;
fp315 = fp168 * fp153;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp27;
target[((hsi*168+122)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp168 * fp152;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp36;
target[((hsi*168+121)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp173;
fp173 = inteval->BO_x[vi] * fp170;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp171 + fp173;
LIBINT2_REALTYPE fp319;
fp319 = fp172 * fp153;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp36;
target[((hsi*168+120)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp165 * fp150;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp41;
target[((hsi*168+119)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp165 * fp149;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp46;
target[((hsi*168+118)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp165 * fp148;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp55;
target[((hsi*168+117)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp168 * fp150;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp46;
target[((hsi*168+116)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp168 * fp149;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp55;
target[((hsi*168+115)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp172 * fp150;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp55;
target[((hsi*168+114)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp165 * fp147;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp60;
target[((hsi*168+113)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp165 * fp146;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp65;
target[((hsi*168+112)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp165 * fp145;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp74;
target[((hsi*168+111)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp168 * fp147;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp65;
target[((hsi*168+110)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp168 * fp146;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp74;
target[((hsi*168+109)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp172 * fp147;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp74;
target[((hsi*168+108)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp165 * fp144;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp79;
target[((hsi*168+107)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp165 * fp143;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp84;
target[((hsi*168+106)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp165 * fp142;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp93;
target[((hsi*168+105)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp168 * fp144;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp84;
target[((hsi*168+104)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp168 * fp143;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp93;
target[((hsi*168+103)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp172 * fp144;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp93;
target[((hsi*168+102)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp165 * fp141;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp98;
target[((hsi*168+101)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp165 * fp140;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp103;
target[((hsi*168+100)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp165 * fp139;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp112;
target[((hsi*168+99)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp168 * fp141;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp103;
target[((hsi*168+98)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp168 * fp140;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp112;
target[((hsi*168+97)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp172 * fp141;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp112;
target[((hsi*168+96)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp165 * fp138;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp117;
target[((hsi*168+95)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp165 * fp137;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp122;
target[((hsi*168+94)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp165 * fp136;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp131;
target[((hsi*168+93)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp168 * fp138;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp122;
target[((hsi*168+92)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp168 * fp137;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp131;
target[((hsi*168+91)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp172 * fp138;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp131;
target[((hsi*168+90)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->BO_x[vi], fp174, fp177);
LIBINT2_REALTYPE fp381;
fp381 = fp175 * fp153;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp41;
target[((hsi*168+89)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp175 * fp152;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp46;
target[((hsi*168+88)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp175 * fp151;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp55;
target[((hsi*168+87)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->BO_x[vi], fp177, fp180);
LIBINT2_REALTYPE fp387;
fp387 = fp178 * fp153;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp46;
target[((hsi*168+86)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp178 * fp152;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp55;
target[((hsi*168+85)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp183;
fp183 = inteval->BO_x[vi] * fp180;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp181 + fp183;
LIBINT2_REALTYPE fp391;
fp391 = fp182 * fp153;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp55;
target[((hsi*168+84)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp175 * fp150;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp60;
target[((hsi*168+83)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp175 * fp149;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp65;
target[((hsi*168+82)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp175 * fp148;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp74;
target[((hsi*168+81)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp178 * fp150;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp65;
target[((hsi*168+80)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp178 * fp149;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp74;
target[((hsi*168+79)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp182 * fp150;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp74;
target[((hsi*168+78)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp175 * fp147;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp79;
target[((hsi*168+77)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp175 * fp146;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp84;
target[((hsi*168+76)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp175 * fp145;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp93;
target[((hsi*168+75)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp178 * fp147;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp84;
target[((hsi*168+74)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp178 * fp146;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp93;
target[((hsi*168+73)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp182 * fp147;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp93;
target[((hsi*168+72)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp175 * fp144;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp98;
target[((hsi*168+71)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp175 * fp143;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp103;
target[((hsi*168+70)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp175 * fp142;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp112;
target[((hsi*168+69)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp178 * fp144;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp103;
target[((hsi*168+68)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp178 * fp143;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp112;
target[((hsi*168+67)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp182 * fp144;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp112;
target[((hsi*168+66)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp175 * fp141;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp117;
target[((hsi*168+65)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp175 * fp140;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp122;
target[((hsi*168+64)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp175 * fp139;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp131;
target[((hsi*168+63)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp178 * fp141;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp122;
target[((hsi*168+62)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp437;
fp437 = fp178 * fp140;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp131;
target[((hsi*168+61)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp439;
fp439 = fp182 * fp141;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp131;
target[((hsi*168+60)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src0[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->BO_x[vi], fp184, fp187);
LIBINT2_REALTYPE fp441;
fp441 = fp185 * fp153;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp60;
target[((hsi*168+59)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp185 * fp152;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp65;
target[((hsi*168+58)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp445;
fp445 = fp185 * fp151;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp74;
target[((hsi*168+57)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src0[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->BO_x[vi], fp187, fp190);
LIBINT2_REALTYPE fp447;
fp447 = fp188 * fp153;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp65;
target[((hsi*168+56)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp449;
fp449 = fp188 * fp152;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp74;
target[((hsi*168+55)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp193;
fp193 = inteval->BO_x[vi] * fp190;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src0[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp191 + fp193;
LIBINT2_REALTYPE fp451;
fp451 = fp192 * fp153;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp74;
target[((hsi*168+54)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp453;
fp453 = fp185 * fp150;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp79;
target[((hsi*168+53)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp455;
fp455 = fp185 * fp149;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp84;
target[((hsi*168+52)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp457;
fp457 = fp185 * fp148;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp93;
target[((hsi*168+51)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp188 * fp150;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp84;
target[((hsi*168+50)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp461;
fp461 = fp188 * fp149;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp93;
target[((hsi*168+49)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp463;
fp463 = fp192 * fp150;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp93;
target[((hsi*168+48)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp465;
fp465 = fp185 * fp147;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp98;
target[((hsi*168+47)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp185 * fp146;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp103;
target[((hsi*168+46)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp469;
fp469 = fp185 * fp145;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp112;
target[((hsi*168+45)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp471;
fp471 = fp188 * fp147;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp103;
target[((hsi*168+44)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp473;
fp473 = fp188 * fp146;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp112;
target[((hsi*168+43)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp475;
fp475 = fp192 * fp147;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp112;
target[((hsi*168+42)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp185 * fp144;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp117;
target[((hsi*168+41)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp479;
fp479 = fp185 * fp143;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp122;
target[((hsi*168+40)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp481;
fp481 = fp185 * fp142;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp131;
target[((hsi*168+39)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp483;
fp483 = fp188 * fp144;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp122;
target[((hsi*168+38)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp188 * fp143;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp131;
target[((hsi*168+37)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp487;
fp487 = fp192 * fp144;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp131;
target[((hsi*168+36)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + src0[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->BO_x[vi], fp194, fp197);
LIBINT2_REALTYPE fp489;
fp489 = fp195 * fp153;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp79;
target[((hsi*168+35)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp195 * fp152;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp84;
target[((hsi*168+34)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp493;
fp493 = fp195 * fp151;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp93;
target[((hsi*168+33)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + src0[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->BO_x[vi], fp197, fp200);
LIBINT2_REALTYPE fp495;
fp495 = fp198 * fp153;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp84;
target[((hsi*168+32)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp497;
fp497 = fp198 * fp152;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp93;
target[((hsi*168+31)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp203;
fp203 = inteval->BO_x[vi] * fp200;
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + src0[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp201 + fp203;
LIBINT2_REALTYPE fp499;
fp499 = fp202 * fp153;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp93;
target[((hsi*168+30)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp195 * fp150;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp98;
target[((hsi*168+29)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp503;
fp503 = fp195 * fp149;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp103;
target[((hsi*168+28)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp505;
fp505 = fp195 * fp148;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp112;
target[((hsi*168+27)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp507;
fp507 = fp198 * fp150;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp103;
target[((hsi*168+26)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp509;
fp509 = fp198 * fp149;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp112;
target[((hsi*168+25)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp511;
fp511 = fp202 * fp150;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp112;
target[((hsi*168+24)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp513;
fp513 = fp195 * fp147;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp117;
target[((hsi*168+23)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp195 * fp146;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp122;
target[((hsi*168+22)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp517;
fp517 = fp195 * fp145;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp131;
target[((hsi*168+21)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp519;
fp519 = fp198 * fp147;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp122;
target[((hsi*168+20)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp521;
fp521 = fp198 * fp146;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp131;
target[((hsi*168+19)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp523;
fp523 = fp202 * fp147;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp131;
target[((hsi*168+18)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp207;
fp207 = 0.0000000000000000e+00 + src0[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + src0[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_plus(inteval->BO_x[vi], fp204, fp207);
LIBINT2_REALTYPE fp525;
fp525 = fp205 * fp153;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp98;
target[((hsi*168+17)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp205 * fp152;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp103;
target[((hsi*168+16)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp529;
fp529 = fp205 * fp151;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp112;
target[((hsi*168+15)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + src0[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->BO_x[vi], fp207, fp210);
LIBINT2_REALTYPE fp531;
fp531 = fp208 * fp153;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp103;
target[((hsi*168+14)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp533;
fp533 = fp208 * fp152;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp112;
target[((hsi*168+13)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp213;
fp213 = inteval->BO_x[vi] * fp210;
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + src0[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp211 + fp213;
LIBINT2_REALTYPE fp535;
fp535 = fp212 * fp153;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp112;
target[((hsi*168+12)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp537;
fp537 = fp205 * fp150;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp117;
target[((hsi*168+11)*1+lsi)*1] = fp536;
LIBINT2_REALTYPE fp539;
fp539 = fp205 * fp149;
LIBINT2_REALTYPE fp538;
fp538 = fp539 * fp122;
target[((hsi*168+10)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp541;
fp541 = fp205 * fp148;
LIBINT2_REALTYPE fp540;
fp540 = fp541 * fp131;
target[((hsi*168+9)*1+lsi)*1] = fp540;
LIBINT2_REALTYPE fp543;
fp543 = fp208 * fp150;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp122;
target[((hsi*168+8)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp545;
fp545 = fp208 * fp149;
LIBINT2_REALTYPE fp544;
fp544 = fp545 * fp131;
target[((hsi*168+7)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp547;
fp547 = fp212 * fp150;
LIBINT2_REALTYPE fp546;
fp546 = fp547 * fp131;
target[((hsi*168+6)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp217;
fp217 = 0.0000000000000000e+00 + src0[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + src0[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->BO_x[vi], fp214, fp217);
LIBINT2_REALTYPE fp549;
fp549 = fp215 * fp153;
LIBINT2_REALTYPE fp548;
fp548 = fp549 * fp117;
target[((hsi*168+5)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp551;
fp551 = fp215 * fp152;
LIBINT2_REALTYPE fp550;
fp550 = fp551 * fp122;
target[((hsi*168+4)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp553;
fp553 = fp215 * fp151;
LIBINT2_REALTYPE fp552;
fp552 = fp553 * fp131;
target[((hsi*168+3)*1+lsi)*1] = fp552;
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + src0[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->BO_x[vi], fp217, fp220);
LIBINT2_REALTYPE fp555;
fp555 = fp218 * fp153;
LIBINT2_REALTYPE fp554;
fp554 = fp555 * fp122;
target[((hsi*168+2)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp557;
fp557 = fp218 * fp152;
LIBINT2_REALTYPE fp556;
fp556 = fp557 * fp131;
target[((hsi*168+1)*1+lsi)*1] = fp556;
LIBINT2_REALTYPE fp223;
fp223 = inteval->BO_x[vi] * fp220;
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + src0[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp221 + fp223;
LIBINT2_REALTYPE fp559;
fp559 = fp222 * fp153;
LIBINT2_REALTYPE fp558;
fp558 = fp559 * fp131;
target[((hsi*168+0)*1+lsi)*1] = fp558;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 560 */
}

#ifdef __cplusplus
};
#endif
