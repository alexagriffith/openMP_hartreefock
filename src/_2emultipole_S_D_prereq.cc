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
void _2emultipole_S_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp237;
fp237 = fp149 * fp132;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp69;
fp69 = inteval->PB_z[vi] * fp70;
LIBINT2_REALTYPE fp88;
fp88 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp88 * fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PB_z[vi], fp69, fp67);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_z[vi], fp66, fp64);
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + fp63;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_z[vi], fp111, fp104);
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_z[vi] * fp105;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_z[vi] * fp104;
LIBINT2_REALTYPE fp84;
fp84 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp84 * fp66;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_z[vi], fp63, fp61);
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp60;
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp98;
fp98 = fp96 + fp99;
LIBINT2_REALTYPE fp152;
fp152 = fp237 * fp98;
LIBINT2_REALTYPE fp59;
fp59 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_y[vi] * fp81;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp239;
fp239 = fp149 * fp131;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->BO_z[vi], fp112, fp111);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_z[vi], fp107, fp105);
LIBINT2_REALTYPE fp153;
fp153 = fp239 * fp100;
LIBINT2_REALTYPE fp58;
fp58 = fp153;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp70;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_z[vi], fp113, fp112);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_z[vi], fp109, fp107);
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PB_y[vi], fp80, fp78);
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp241;
fp241 = fp149 * fp130;
LIBINT2_REALTYPE fp154;
fp154 = fp241 * fp102;
LIBINT2_REALTYPE fp57;
fp57 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PB_x[vi] * fp90;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp243;
fp243 = fp150 * fp132;
LIBINT2_REALTYPE fp155;
fp155 = fp243 * fp100;
LIBINT2_REALTYPE fp56;
fp56 = fp155;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp245;
fp245 = fp150 * fp131;
LIBINT2_REALTYPE fp156;
fp156 = fp245 * fp102;
LIBINT2_REALTYPE fp55;
fp55 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PB_x[vi], fp91, fp93);
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + fp92;
LIBINT2_REALTYPE fp247;
fp247 = fp151 * fp132;
LIBINT2_REALTYPE fp157;
fp157 = fp247 * fp102;
LIBINT2_REALTYPE fp54;
fp54 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_y[vi], fp132, fp131);
LIBINT2_REALTYPE fp213;
fp213 = fp149 * fp128;
LIBINT2_REALTYPE fp158;
fp158 = fp213 * fp105;
LIBINT2_REALTYPE fp53;
fp53 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->BO_y[vi], fp131, fp130);
LIBINT2_REALTYPE fp215;
fp215 = fp149 * fp126;
LIBINT2_REALTYPE fp159;
fp159 = fp215 * fp107;
LIBINT2_REALTYPE fp52;
fp52 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp75;
fp75 = fp88 * fp80;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PB_y[vi], fp77, fp75);
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_y[vi], fp130, fp123);
LIBINT2_REALTYPE fp217;
fp217 = fp149 * fp124;
LIBINT2_REALTYPE fp160;
fp160 = fp217 * fp109;
LIBINT2_REALTYPE fp51;
fp51 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp219;
fp219 = fp150 * fp128;
LIBINT2_REALTYPE fp161;
fp161 = fp219 * fp107;
LIBINT2_REALTYPE fp50;
fp50 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp221;
fp221 = fp150 * fp126;
LIBINT2_REALTYPE fp162;
fp162 = fp221 * fp109;
LIBINT2_REALTYPE fp49;
fp49 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp223;
fp223 = fp151 * fp128;
LIBINT2_REALTYPE fp163;
fp163 = fp223 * fp109;
LIBINT2_REALTYPE fp48;
fp48 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->BO_y[vi], fp128, fp126);
LIBINT2_REALTYPE fp165;
fp165 = fp149 * fp121;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp111;
LIBINT2_REALTYPE fp47;
fp47 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_y[vi], fp126, fp124);
LIBINT2_REALTYPE fp167;
fp167 = fp149 * fp119;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp112;
LIBINT2_REALTYPE fp46;
fp46 = fp166;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_y[vi] * fp124;
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp72;
fp72 = fp84 * fp77;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PB_y[vi], fp74, fp72);
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp115;
fp115 = fp114 + fp116;
LIBINT2_REALTYPE fp117;
fp117 = fp115 + fp118;
LIBINT2_REALTYPE fp169;
fp169 = fp149 * fp117;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp113;
LIBINT2_REALTYPE fp45;
fp45 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp171;
fp171 = fp150 * fp121;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp112;
LIBINT2_REALTYPE fp44;
fp44 = fp170;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp173;
fp173 = fp150 * fp119;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp113;
LIBINT2_REALTYPE fp43;
fp43 = fp172;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp175;
fp175 = fp151 * fp121;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp113;
LIBINT2_REALTYPE fp42;
fp42 = fp174;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->BO_x[vi], fp149, fp150);
LIBINT2_REALTYPE fp225;
fp225 = fp142 * fp132;
LIBINT2_REALTYPE fp176;
fp176 = fp225 * fp105;
LIBINT2_REALTYPE fp41;
fp41 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp227;
fp227 = fp142 * fp131;
LIBINT2_REALTYPE fp177;
fp177 = fp227 * fp107;
LIBINT2_REALTYPE fp40;
fp40 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp229;
fp229 = fp142 * fp130;
LIBINT2_REALTYPE fp178;
fp178 = fp229 * fp109;
LIBINT2_REALTYPE fp39;
fp39 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp150, fp151);
LIBINT2_REALTYPE fp231;
fp231 = fp144 * fp132;
LIBINT2_REALTYPE fp179;
fp179 = fp231 * fp107;
LIBINT2_REALTYPE fp38;
fp38 = fp179;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp233;
fp233 = fp144 * fp131;
LIBINT2_REALTYPE fp180;
fp180 = fp233 * fp109;
LIBINT2_REALTYPE fp37;
fp37 = fp180;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp91;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PB_x[vi], fp92, fp87);
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->BO_x[vi], fp151, fp146);
LIBINT2_REALTYPE fp235;
fp235 = fp147 * fp132;
LIBINT2_REALTYPE fp181;
fp181 = fp235 * fp109;
LIBINT2_REALTYPE fp36;
fp36 = fp181;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp183;
fp183 = fp142 * fp128;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp111;
LIBINT2_REALTYPE fp35;
fp35 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp185;
fp185 = fp142 * fp126;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp112;
LIBINT2_REALTYPE fp34;
fp34 = fp184;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp187;
fp187 = fp142 * fp124;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp113;
LIBINT2_REALTYPE fp33;
fp33 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp189;
fp189 = fp144 * fp128;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp112;
LIBINT2_REALTYPE fp32;
fp32 = fp188;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp191;
fp191 = fp144 * fp126;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp113;
LIBINT2_REALTYPE fp31;
fp31 = fp190;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp193;
fp193 = fp147 * fp128;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp113;
LIBINT2_REALTYPE fp30;
fp30 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->BO_x[vi], fp142, fp144);
LIBINT2_REALTYPE fp195;
fp195 = fp133 * fp132;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp111;
LIBINT2_REALTYPE fp29;
fp29 = fp194;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp197;
fp197 = fp133 * fp131;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp112;
LIBINT2_REALTYPE fp28;
fp28 = fp196;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp199;
fp199 = fp133 * fp130;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp113;
LIBINT2_REALTYPE fp27;
fp27 = fp198;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->BO_x[vi], fp144, fp147);
LIBINT2_REALTYPE fp201;
fp201 = fp135 * fp132;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp112;
LIBINT2_REALTYPE fp26;
fp26 = fp200;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp203;
fp203 = fp135 * fp131;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp113;
LIBINT2_REALTYPE fp25;
fp25 = fp202;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp141;
fp141 = inteval->BO_x[vi] * fp147;
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_x[vi] * fp146;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp92;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->PB_x[vi], fp86, fp83);
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp82;
LIBINT2_REALTYPE fp138;
fp138 = fp137 + fp139;
LIBINT2_REALTYPE fp140;
fp140 = fp138 + fp141;
LIBINT2_REALTYPE fp205;
fp205 = fp140 * fp132;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp113;
LIBINT2_REALTYPE fp24;
fp24 = fp204;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp206;
fp206 = fp237 * fp105;
LIBINT2_REALTYPE fp23;
fp23 = fp206;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp207;
fp207 = fp239 * fp107;
LIBINT2_REALTYPE fp22;
fp22 = fp207;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp208;
fp208 = fp241 * fp109;
LIBINT2_REALTYPE fp21;
fp21 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp209;
fp209 = fp243 * fp107;
LIBINT2_REALTYPE fp20;
fp20 = fp209;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp210;
fp210 = fp245 * fp109;
LIBINT2_REALTYPE fp19;
fp19 = fp210;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp211;
fp211 = fp247 * fp109;
LIBINT2_REALTYPE fp18;
fp18 = fp211;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp111;
LIBINT2_REALTYPE fp17;
fp17 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp112;
LIBINT2_REALTYPE fp16;
fp16 = fp214;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp113;
LIBINT2_REALTYPE fp15;
fp15 = fp216;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp112;
LIBINT2_REALTYPE fp14;
fp14 = fp218;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp113;
LIBINT2_REALTYPE fp13;
fp13 = fp220;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp113;
LIBINT2_REALTYPE fp12;
fp12 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp111;
LIBINT2_REALTYPE fp11;
fp11 = fp224;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp112;
LIBINT2_REALTYPE fp10;
fp10 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp113;
LIBINT2_REALTYPE fp9;
fp9 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp112;
LIBINT2_REALTYPE fp8;
fp8 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp113;
LIBINT2_REALTYPE fp7;
fp7 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp113;
LIBINT2_REALTYPE fp6;
fp6 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp111;
LIBINT2_REALTYPE fp5;
fp5 = fp236;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp112;
LIBINT2_REALTYPE fp4;
fp4 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp113;
LIBINT2_REALTYPE fp3;
fp3 = fp240;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp112;
LIBINT2_REALTYPE fp2;
fp2 = fp242;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp113;
LIBINT2_REALTYPE fp1;
fp1 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp113;
LIBINT2_REALTYPE fp0;
fp0 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 248 */
}

#ifdef __cplusplus
};
#endif
