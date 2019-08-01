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
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _2emultipole_P_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + fp135;
LIBINT2_REALTYPE fp351;
fp351 = fp220 * fp195;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_z[vi] * fp105;
LIBINT2_REALTYPE fp132;
fp132 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp132 * fp104;
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PB_z[vi], fp104, fp101);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_z[vi], fp98, fp96);
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PA_z[vi], fp104, fp101);
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->BO_z[vi], fp164, fp154);
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_z[vi] * fp155;
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_z[vi] * fp154;
LIBINT2_REALTYPE fp126;
fp126 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp126 * fp98;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PB_z[vi], fp98, fp96);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->PA_z[vi], fp93, fp91);
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp141;
fp141 = fp140 + fp142;
LIBINT2_REALTYPE fp143;
fp143 = fp141 + fp144;
LIBINT2_REALTYPE fp224;
fp224 = fp351 * fp143;
LIBINT2_REALTYPE fp89;
fp89 = fp224;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+89)*1+lsi)*1]),&(fp89),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_y[vi] * fp121;
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp353;
fp353 = fp220 * fp194;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_z[vi], fp105, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->BO_z[vi], fp165, fp164);
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->BO_z[vi], fp157, fp155);
LIBINT2_REALTYPE fp225;
fp225 = fp353 * fp145;
LIBINT2_REALTYPE fp88;
fp88 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+88)*1+lsi)*1]),&(fp88),1);
LIBINT2_REALTYPE fp136;
fp136 = inteval->PB_x[vi] * fp135;
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + fp136;
LIBINT2_REALTYPE fp355;
fp355 = fp221 * fp195;
LIBINT2_REALTYPE fp226;
fp226 = fp355 * fp145;
LIBINT2_REALTYPE fp87;
fp87 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+87)*1+lsi)*1]),&(fp87),1);
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->PA_y[vi], fp121, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp357;
fp357 = fp220 * fp193;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + fp98;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BO_z[vi], fp166, fp159);
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_z[vi] * fp160;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_z[vi] * fp159;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + fp93;
LIBINT2_REALTYPE fp148;
fp148 = fp147 + fp149;
LIBINT2_REALTYPE fp150;
fp150 = fp148 + fp151;
LIBINT2_REALTYPE fp227;
fp227 = fp357 * fp150;
LIBINT2_REALTYPE fp86;
fp86 = fp227;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+86)*1+lsi)*1]),&(fp86),1);
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + fp105;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BO_z[vi], fp167, fp166);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BO_z[vi], fp162, fp160);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_y[vi], fp120, fp117);
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp116;
LIBINT2_REALTYPE fp359;
fp359 = fp220 * fp192;
LIBINT2_REALTYPE fp228;
fp228 = fp359 * fp152;
LIBINT2_REALTYPE fp85;
fp85 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+85)*1+lsi)*1]),&(fp85),1);
LIBINT2_REALTYPE fp361;
fp361 = fp221 * fp193;
LIBINT2_REALTYPE fp229;
fp229 = fp361 * fp152;
LIBINT2_REALTYPE fp84;
fp84 = fp229;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+84)*1+lsi)*1]),&(fp84),1);
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->PA_x[vi], fp135, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp363;
fp363 = fp222 * fp195;
LIBINT2_REALTYPE fp230;
fp230 = fp363 * fp150;
LIBINT2_REALTYPE fp83;
fp83 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+83)*1+lsi)*1]),&(fp83),1);
LIBINT2_REALTYPE fp365;
fp365 = fp222 * fp194;
LIBINT2_REALTYPE fp231;
fp231 = fp365 * fp152;
LIBINT2_REALTYPE fp82;
fp82 = fp231;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+82)*1+lsi)*1]),&(fp82),1);
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PA_x[vi], fp136, fp138);
LIBINT2_REALTYPE fp223;
fp223 = 0.0000000000000000e+00 + fp137;
LIBINT2_REALTYPE fp367;
fp367 = fp223 * fp195;
LIBINT2_REALTYPE fp232;
fp232 = fp367 * fp152;
LIBINT2_REALTYPE fp81;
fp81 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+81)*1+lsi)*1]),&(fp81),1);
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->BO_y[vi], fp195, fp194);
LIBINT2_REALTYPE fp315;
fp315 = fp220 * fp190;
LIBINT2_REALTYPE fp233;
fp233 = fp315 * fp155;
LIBINT2_REALTYPE fp80;
fp80 = fp233;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+80)*1+lsi)*1]),&(fp80),1);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PB_y[vi], fp120, fp117);
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->BO_y[vi], fp194, fp187);
LIBINT2_REALTYPE fp317;
fp317 = fp220 * fp188;
LIBINT2_REALTYPE fp234;
fp234 = fp317 * fp157;
LIBINT2_REALTYPE fp79;
fp79 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+79)*1+lsi)*1]),&(fp79),1);
LIBINT2_REALTYPE fp319;
fp319 = fp221 * fp190;
LIBINT2_REALTYPE fp235;
fp235 = fp319 * fp157;
LIBINT2_REALTYPE fp78;
fp78 = fp235;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+78)*1+lsi)*1]),&(fp78),1);
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->BO_y[vi], fp193, fp192);
LIBINT2_REALTYPE fp321;
fp321 = fp220 * fp185;
LIBINT2_REALTYPE fp236;
fp236 = fp321 * fp160;
LIBINT2_REALTYPE fp77;
fp77 = fp236;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+77)*1+lsi)*1]),&(fp77),1);
LIBINT2_REALTYPE fp112;
fp112 = fp132 * fp120;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_y[vi], fp114, fp112);
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->BO_y[vi], fp192, fp182);
LIBINT2_REALTYPE fp323;
fp323 = fp220 * fp183;
LIBINT2_REALTYPE fp237;
fp237 = fp323 * fp162;
LIBINT2_REALTYPE fp76;
fp76 = fp237;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+76)*1+lsi)*1]),&(fp76),1);
LIBINT2_REALTYPE fp325;
fp325 = fp221 * fp185;
LIBINT2_REALTYPE fp238;
fp238 = fp325 * fp162;
LIBINT2_REALTYPE fp75;
fp75 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+75)*1+lsi)*1]),&(fp75),1);
LIBINT2_REALTYPE fp327;
fp327 = fp222 * fp190;
LIBINT2_REALTYPE fp239;
fp239 = fp327 * fp160;
LIBINT2_REALTYPE fp74;
fp74 = fp239;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp329;
fp329 = fp222 * fp188;
LIBINT2_REALTYPE fp240;
fp240 = fp329 * fp162;
LIBINT2_REALTYPE fp73;
fp73 = fp240;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+73)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp331;
fp331 = fp223 * fp190;
LIBINT2_REALTYPE fp241;
fp241 = fp331 * fp162;
LIBINT2_REALTYPE fp72;
fp72 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+72)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->BO_y[vi], fp190, fp188);
LIBINT2_REALTYPE fp243;
fp243 = fp220 * fp180;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp164;
LIBINT2_REALTYPE fp71;
fp71 = fp242;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp179;
fp179 = inteval->BO_y[vi] * fp188;
LIBINT2_REALTYPE fp177;
fp177 = inteval->BO_y[vi] * fp187;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PB_y[vi], fp114, fp112);
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp176;
fp176 = fp175 + fp177;
LIBINT2_REALTYPE fp178;
fp178 = fp176 + fp179;
LIBINT2_REALTYPE fp245;
fp245 = fp220 * fp178;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp165;
LIBINT2_REALTYPE fp70;
fp70 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp247;
fp247 = fp221 * fp180;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp165;
LIBINT2_REALTYPE fp69;
fp69 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->BO_y[vi], fp185, fp183);
LIBINT2_REALTYPE fp249;
fp249 = fp220 * fp173;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp166;
LIBINT2_REALTYPE fp68;
fp68 = fp248;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp172;
fp172 = inteval->BO_y[vi] * fp183;
LIBINT2_REALTYPE fp170;
fp170 = inteval->BO_y[vi] * fp182;
LIBINT2_REALTYPE fp107;
fp107 = fp126 * fp114;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PA_y[vi], fp109, fp107);
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp169;
fp169 = fp168 + fp170;
LIBINT2_REALTYPE fp171;
fp171 = fp169 + fp172;
LIBINT2_REALTYPE fp251;
fp251 = fp220 * fp171;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp167;
LIBINT2_REALTYPE fp67;
fp67 = fp250;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp253;
fp253 = fp221 * fp173;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp167;
LIBINT2_REALTYPE fp66;
fp66 = fp252;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp255;
fp255 = fp222 * fp180;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp166;
LIBINT2_REALTYPE fp65;
fp65 = fp254;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp257;
fp257 = fp222 * fp178;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp167;
LIBINT2_REALTYPE fp64;
fp64 = fp256;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp259;
fp259 = fp223 * fp180;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp167;
LIBINT2_REALTYPE fp63;
fp63 = fp258;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->BO_x[vi], fp220, fp221);
LIBINT2_REALTYPE fp333;
fp333 = fp210 * fp195;
LIBINT2_REALTYPE fp260;
fp260 = fp333 * fp155;
LIBINT2_REALTYPE fp62;
fp62 = fp260;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp335;
fp335 = fp210 * fp194;
LIBINT2_REALTYPE fp261;
fp261 = fp335 * fp157;
LIBINT2_REALTYPE fp61;
fp61 = fp261;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PB_x[vi], fp136, fp138);
LIBINT2_REALTYPE fp212;
fp212 = 0.0000000000000000e+00 + fp128;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(inteval->BO_x[vi], fp221, fp212);
LIBINT2_REALTYPE fp337;
fp337 = fp213 * fp195;
LIBINT2_REALTYPE fp262;
fp262 = fp337 * fp157;
LIBINT2_REALTYPE fp60;
fp60 = fp262;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp339;
fp339 = fp210 * fp193;
LIBINT2_REALTYPE fp263;
fp263 = fp339 * fp160;
LIBINT2_REALTYPE fp59;
fp59 = fp263;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp341;
fp341 = fp210 * fp192;
LIBINT2_REALTYPE fp264;
fp264 = fp341 * fp162;
LIBINT2_REALTYPE fp58;
fp58 = fp264;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp343;
fp343 = fp213 * fp193;
LIBINT2_REALTYPE fp265;
fp265 = fp343 * fp162;
LIBINT2_REALTYPE fp57;
fp57 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->BO_x[vi], fp222, fp223);
LIBINT2_REALTYPE fp345;
fp345 = fp215 * fp195;
LIBINT2_REALTYPE fp266;
fp266 = fp345 * fp160;
LIBINT2_REALTYPE fp56;
fp56 = fp266;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp347;
fp347 = fp215 * fp194;
LIBINT2_REALTYPE fp267;
fp267 = fp347 * fp162;
LIBINT2_REALTYPE fp55;
fp55 = fp267;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp136;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PA_x[vi], fp128, fp131);
LIBINT2_REALTYPE fp217;
fp217 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->BO_x[vi], fp223, fp217);
LIBINT2_REALTYPE fp349;
fp349 = fp218 * fp195;
LIBINT2_REALTYPE fp268;
fp268 = fp349 * fp162;
LIBINT2_REALTYPE fp54;
fp54 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp270;
fp270 = fp210 * fp190;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp164;
LIBINT2_REALTYPE fp53;
fp53 = fp269;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp272;
fp272 = fp210 * fp188;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp165;
LIBINT2_REALTYPE fp52;
fp52 = fp271;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp274;
fp274 = fp213 * fp190;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp165;
LIBINT2_REALTYPE fp51;
fp51 = fp273;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp276;
fp276 = fp210 * fp185;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp166;
LIBINT2_REALTYPE fp50;
fp50 = fp275;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp278;
fp278 = fp210 * fp183;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp167;
LIBINT2_REALTYPE fp49;
fp49 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp280;
fp280 = fp213 * fp185;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp167;
LIBINT2_REALTYPE fp48;
fp48 = fp279;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp282;
fp282 = fp215 * fp190;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp166;
LIBINT2_REALTYPE fp47;
fp47 = fp281;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp284;
fp284 = fp215 * fp188;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp167;
LIBINT2_REALTYPE fp46;
fp46 = fp283;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp286;
fp286 = fp218 * fp190;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp167;
LIBINT2_REALTYPE fp45;
fp45 = fp285;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->BO_x[vi], fp210, fp213);
LIBINT2_REALTYPE fp288;
fp288 = fp196 * fp195;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp164;
LIBINT2_REALTYPE fp44;
fp44 = fp287;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp290;
fp290 = fp196 * fp194;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp165;
LIBINT2_REALTYPE fp43;
fp43 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp202;
fp202 = inteval->BO_x[vi] * fp213;
LIBINT2_REALTYPE fp200;
fp200 = inteval->BO_x[vi] * fp212;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PB_x[vi], fp128, fp131);
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp122;
LIBINT2_REALTYPE fp199;
fp199 = fp198 + fp200;
LIBINT2_REALTYPE fp201;
fp201 = fp199 + fp202;
LIBINT2_REALTYPE fp292;
fp292 = fp201 * fp195;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp165;
LIBINT2_REALTYPE fp42;
fp42 = fp291;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp294;
fp294 = fp196 * fp193;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp166;
LIBINT2_REALTYPE fp41;
fp41 = fp293;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp296;
fp296 = fp196 * fp192;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp167;
LIBINT2_REALTYPE fp40;
fp40 = fp295;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp298;
fp298 = fp201 * fp193;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp167;
LIBINT2_REALTYPE fp39;
fp39 = fp297;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->BO_x[vi], fp215, fp218);
LIBINT2_REALTYPE fp300;
fp300 = fp203 * fp195;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp166;
LIBINT2_REALTYPE fp38;
fp38 = fp299;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp302;
fp302 = fp203 * fp194;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp167;
LIBINT2_REALTYPE fp37;
fp37 = fp301;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp209;
fp209 = inteval->BO_x[vi] * fp218;
LIBINT2_REALTYPE fp207;
fp207 = inteval->BO_x[vi] * fp217;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp128;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PA_x[vi], fp122, fp125);
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp206;
fp206 = fp205 + fp207;
LIBINT2_REALTYPE fp208;
fp208 = fp206 + fp209;
LIBINT2_REALTYPE fp304;
fp304 = fp208 * fp195;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp167;
LIBINT2_REALTYPE fp36;
fp36 = fp303;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp305;
fp305 = fp351 * fp155;
LIBINT2_REALTYPE fp35;
fp35 = fp305;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp306;
fp306 = fp353 * fp157;
LIBINT2_REALTYPE fp34;
fp34 = fp306;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp307;
fp307 = fp355 * fp157;
LIBINT2_REALTYPE fp33;
fp33 = fp307;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp308;
fp308 = fp357 * fp160;
LIBINT2_REALTYPE fp32;
fp32 = fp308;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp309;
fp309 = fp359 * fp162;
LIBINT2_REALTYPE fp31;
fp31 = fp309;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp310;
fp310 = fp361 * fp162;
LIBINT2_REALTYPE fp30;
fp30 = fp310;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp311;
fp311 = fp363 * fp160;
LIBINT2_REALTYPE fp29;
fp29 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp312;
fp312 = fp365 * fp162;
LIBINT2_REALTYPE fp28;
fp28 = fp312;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp313;
fp313 = fp367 * fp162;
LIBINT2_REALTYPE fp27;
fp27 = fp313;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp164;
LIBINT2_REALTYPE fp26;
fp26 = fp314;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp165;
LIBINT2_REALTYPE fp25;
fp25 = fp316;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp165;
LIBINT2_REALTYPE fp24;
fp24 = fp318;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp166;
LIBINT2_REALTYPE fp23;
fp23 = fp320;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp167;
LIBINT2_REALTYPE fp22;
fp22 = fp322;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp167;
LIBINT2_REALTYPE fp21;
fp21 = fp324;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp166;
LIBINT2_REALTYPE fp20;
fp20 = fp326;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp167;
LIBINT2_REALTYPE fp19;
fp19 = fp328;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp167;
LIBINT2_REALTYPE fp18;
fp18 = fp330;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp164;
LIBINT2_REALTYPE fp17;
fp17 = fp332;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp165;
LIBINT2_REALTYPE fp16;
fp16 = fp334;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp165;
LIBINT2_REALTYPE fp15;
fp15 = fp336;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp166;
LIBINT2_REALTYPE fp14;
fp14 = fp338;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp167;
LIBINT2_REALTYPE fp13;
fp13 = fp340;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp167;
LIBINT2_REALTYPE fp12;
fp12 = fp342;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp166;
LIBINT2_REALTYPE fp11;
fp11 = fp344;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp167;
LIBINT2_REALTYPE fp10;
fp10 = fp346;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp167;
LIBINT2_REALTYPE fp9;
fp9 = fp348;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp164;
LIBINT2_REALTYPE fp8;
fp8 = fp350;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp165;
LIBINT2_REALTYPE fp7;
fp7 = fp352;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp165;
LIBINT2_REALTYPE fp6;
fp6 = fp354;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp166;
LIBINT2_REALTYPE fp5;
fp5 = fp356;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp167;
LIBINT2_REALTYPE fp4;
fp4 = fp358;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp167;
LIBINT2_REALTYPE fp3;
fp3 = fp360;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp166;
LIBINT2_REALTYPE fp2;
fp2 = fp362;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp167;
LIBINT2_REALTYPE fp1;
fp1 = fp364;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp167;
LIBINT2_REALTYPE fp0;
fp0 = fp366;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(fp0),1);
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
