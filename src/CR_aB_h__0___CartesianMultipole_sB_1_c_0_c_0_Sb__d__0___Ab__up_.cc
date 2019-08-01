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
void CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_x[vi], fp36, fp39);
LIBINT2_REALTYPE fp97;
fp97 = fp37 * fp35;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*126+125)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp37 * fp34;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp1;
target[((hsi*126+124)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp37 * fp33;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp2;
target[((hsi*126+123)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp39, fp42);
LIBINT2_REALTYPE fp103;
fp103 = fp40 * fp35;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp1;
target[((hsi*126+122)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp40 * fp34;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*126+121)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp43 + fp45;
LIBINT2_REALTYPE fp107;
fp107 = fp44 * fp35;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp2;
target[((hsi*126+120)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp37 * fp32;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
target[((hsi*126+119)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp37 * fp31;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
target[((hsi*126+118)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp37 * fp30;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp5;
target[((hsi*126+117)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp40 * fp32;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp4;
target[((hsi*126+116)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp40 * fp31;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
target[((hsi*126+115)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp44 * fp32;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp5;
target[((hsi*126+114)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp37 * fp29;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
target[((hsi*126+113)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp37 * fp28;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*126+112)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp37 * fp27;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp8;
target[((hsi*126+111)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp40 * fp29;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp7;
target[((hsi*126+110)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp40 * fp28;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp8;
target[((hsi*126+109)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp44 * fp29;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp8;
target[((hsi*126+108)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp37 * fp26;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp9;
target[((hsi*126+107)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp37 * fp25;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp10;
target[((hsi*126+106)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp37 * fp24;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp11;
target[((hsi*126+105)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp40 * fp26;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp10;
target[((hsi*126+104)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp40 * fp25;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp11;
target[((hsi*126+103)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp44 * fp26;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp11;
target[((hsi*126+102)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp37 * fp23;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp12;
target[((hsi*126+101)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp37 * fp22;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp13;
target[((hsi*126+100)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp37 * fp21;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp14;
target[((hsi*126+99)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp40 * fp23;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp13;
target[((hsi*126+98)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp40 * fp22;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp14;
target[((hsi*126+97)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp44 * fp23;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp14;
target[((hsi*126+96)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp37 * fp20;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp15;
target[((hsi*126+95)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp37 * fp19;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp16;
target[((hsi*126+94)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp37 * fp18;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp17;
target[((hsi*126+93)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp40 * fp20;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp16;
target[((hsi*126+92)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp40 * fp19;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp17;
target[((hsi*126+91)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp44 * fp20;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp17;
target[((hsi*126+90)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp46, fp49);
LIBINT2_REALTYPE fp169;
fp169 = fp47 * fp35;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp3;
target[((hsi*126+89)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp47 * fp34;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp4;
target[((hsi*126+88)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp47 * fp33;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp5;
target[((hsi*126+87)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp52);
LIBINT2_REALTYPE fp175;
fp175 = fp50 * fp35;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp4;
target[((hsi*126+86)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp50 * fp34;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp5;
target[((hsi*126+85)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp179;
fp179 = fp54 * fp35;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp5;
target[((hsi*126+84)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp47 * fp32;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
target[((hsi*126+83)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp47 * fp31;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp7;
target[((hsi*126+82)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp47 * fp30;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp8;
target[((hsi*126+81)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp50 * fp32;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp7;
target[((hsi*126+80)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp50 * fp31;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp8;
target[((hsi*126+79)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp54 * fp32;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
target[((hsi*126+78)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp47 * fp29;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp9;
target[((hsi*126+77)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp47 * fp28;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp10;
target[((hsi*126+76)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp47 * fp27;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp11;
target[((hsi*126+75)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp50 * fp29;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp10;
target[((hsi*126+74)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp50 * fp28;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp11;
target[((hsi*126+73)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp54 * fp29;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp11;
target[((hsi*126+72)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp47 * fp26;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp12;
target[((hsi*126+71)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp47 * fp25;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp13;
target[((hsi*126+70)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp47 * fp24;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp14;
target[((hsi*126+69)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp50 * fp26;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp13;
target[((hsi*126+68)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp50 * fp25;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp14;
target[((hsi*126+67)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp54 * fp26;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp14;
target[((hsi*126+66)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp47 * fp23;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp15;
target[((hsi*126+65)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp47 * fp22;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp16;
target[((hsi*126+64)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp47 * fp21;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp17;
target[((hsi*126+63)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp50 * fp23;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp16;
target[((hsi*126+62)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp50 * fp22;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp17;
target[((hsi*126+61)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp54 * fp23;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp17;
target[((hsi*126+60)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp59);
LIBINT2_REALTYPE fp229;
fp229 = fp57 * fp35;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp6;
target[((hsi*126+59)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp57 * fp34;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp7;
target[((hsi*126+58)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp57 * fp33;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp8;
target[((hsi*126+57)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp62);
LIBINT2_REALTYPE fp235;
fp235 = fp60 * fp35;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp7;
target[((hsi*126+56)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp60 * fp34;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp8;
target[((hsi*126+55)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp62;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp63 + fp65;
LIBINT2_REALTYPE fp239;
fp239 = fp64 * fp35;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp8;
target[((hsi*126+54)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp57 * fp32;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp9;
target[((hsi*126+53)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp57 * fp31;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp10;
target[((hsi*126+52)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp57 * fp30;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
target[((hsi*126+51)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp60 * fp32;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp10;
target[((hsi*126+50)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp60 * fp31;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp11;
target[((hsi*126+49)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp64 * fp32;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp11;
target[((hsi*126+48)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp57 * fp29;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp12;
target[((hsi*126+47)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp57 * fp28;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp13;
target[((hsi*126+46)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp57 * fp27;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp14;
target[((hsi*126+45)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp60 * fp29;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp13;
target[((hsi*126+44)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp60 * fp28;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp14;
target[((hsi*126+43)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp64 * fp29;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp14;
target[((hsi*126+42)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp57 * fp26;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp15;
target[((hsi*126+41)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp57 * fp25;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp16;
target[((hsi*126+40)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp57 * fp24;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp17;
target[((hsi*126+39)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp60 * fp26;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp16;
target[((hsi*126+38)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp60 * fp25;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp17;
target[((hsi*126+37)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp64 * fp26;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp17;
target[((hsi*126+36)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp69);
LIBINT2_REALTYPE fp277;
fp277 = fp67 * fp35;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp9;
target[((hsi*126+35)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp67 * fp34;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp10;
target[((hsi*126+34)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp67 * fp33;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp11;
target[((hsi*126+33)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp72);
LIBINT2_REALTYPE fp283;
fp283 = fp70 * fp35;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp10;
target[((hsi*126+32)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp70 * fp34;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp11;
target[((hsi*126+31)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_x[vi] * fp72;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp73 + fp75;
LIBINT2_REALTYPE fp287;
fp287 = fp74 * fp35;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp11;
target[((hsi*126+30)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp67 * fp32;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp12;
target[((hsi*126+29)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp67 * fp31;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp13;
target[((hsi*126+28)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp67 * fp30;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp14;
target[((hsi*126+27)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp70 * fp32;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp13;
target[((hsi*126+26)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp70 * fp31;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp14;
target[((hsi*126+25)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp74 * fp32;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp14;
target[((hsi*126+24)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp67 * fp29;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp15;
target[((hsi*126+23)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp67 * fp28;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp16;
target[((hsi*126+22)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp67 * fp27;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp17;
target[((hsi*126+21)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp70 * fp29;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp16;
target[((hsi*126+20)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp70 * fp28;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp17;
target[((hsi*126+19)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp74 * fp29;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp17;
target[((hsi*126+18)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_x[vi], fp76, fp79);
LIBINT2_REALTYPE fp313;
fp313 = fp77 * fp35;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp12;
target[((hsi*126+17)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp77 * fp34;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp13;
target[((hsi*126+16)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp77 * fp33;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp14;
target[((hsi*126+15)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp82);
LIBINT2_REALTYPE fp319;
fp319 = fp80 * fp35;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp13;
target[((hsi*126+14)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp80 * fp34;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp14;
target[((hsi*126+13)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp82;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp83 + fp85;
LIBINT2_REALTYPE fp323;
fp323 = fp84 * fp35;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp14;
target[((hsi*126+12)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp77 * fp32;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp15;
target[((hsi*126+11)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp77 * fp31;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp16;
target[((hsi*126+10)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp77 * fp30;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp17;
target[((hsi*126+9)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp80 * fp32;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp16;
target[((hsi*126+8)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp80 * fp31;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp17;
target[((hsi*126+7)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp84 * fp32;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp17;
target[((hsi*126+6)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->BO_x[vi], fp86, fp89);
LIBINT2_REALTYPE fp337;
fp337 = fp87 * fp35;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp15;
target[((hsi*126+5)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp87 * fp34;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp16;
target[((hsi*126+4)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp87 * fp33;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp17;
target[((hsi*126+3)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp92);
LIBINT2_REALTYPE fp343;
fp343 = fp90 * fp35;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp16;
target[((hsi*126+2)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp90 * fp34;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp17;
target[((hsi*126+1)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp93 + fp95;
LIBINT2_REALTYPE fp347;
fp347 = fp94 * fp35;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp17;
target[((hsi*126+0)*1+lsi)*1] = fp346;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 348 */
}

#ifdef __cplusplus
};
#endif
