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
void CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*25+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src1[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_y[vi], fp101, fp102);
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp105 * fp103;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp3;
target[((hsi*45+44)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp5, fp6);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp10);
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp102;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp118;
fp118 = fp105 * fp99;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp12;
target[((hsi*45+43)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp106 * fp103;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp12;
target[((hsi*45+42)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*25+18)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_y[vi], fp94, fp95);
LIBINT2_REALTYPE fp122;
fp122 = fp105 * fp96;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp17;
target[((hsi*45+41)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp24);
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp91 + fp93;
LIBINT2_REALTYPE fp124;
fp124 = fp105 * fp92;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp26;
target[((hsi*45+40)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp106 * fp96;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp26;
target[((hsi*45+39)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp35);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp88);
LIBINT2_REALTYPE fp128;
fp128 = fp105 * fp89;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp31;
target[((hsi*45+38)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp34);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp38);
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp88;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp130;
fp130 = fp105 * fp85;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp40;
target[((hsi*45+37)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp106 * fp89;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp40;
target[((hsi*45+36)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp49);
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp49;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_y[vi], fp80, fp81);
LIBINT2_REALTYPE fp134;
fp134 = fp105 * fp82;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp45;
target[((hsi*45+35)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp47, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp52);
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp81;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp77 + fp79;
LIBINT2_REALTYPE fp136;
fp136 = fp105 * fp78;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp54;
target[((hsi*45+34)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp106 * fp82;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp54;
target[((hsi*45+33)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp63);
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp66;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_y[vi], fp73, fp74);
LIBINT2_REALTYPE fp140;
fp140 = fp105 * fp75;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp59;
target[((hsi*45+32)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp61, fp62);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp64, fp66);
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp74;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp142;
fp142 = fp105 * fp71;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp68;
target[((hsi*45+31)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp106 * fp75;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp68;
target[((hsi*45+30)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp107 * fp103;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp17;
target[((hsi*45+29)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp107 * fp99;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp26;
target[((hsi*45+28)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp108 * fp103;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp26;
target[((hsi*45+27)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp107 * fp96;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp31;
target[((hsi*45+26)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp154;
fp154 = fp107 * fp92;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp40;
target[((hsi*45+25)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp108 * fp96;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp40;
target[((hsi*45+24)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp107 * fp89;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp45;
target[((hsi*45+23)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp160;
fp160 = fp107 * fp85;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp54;
target[((hsi*45+22)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp108 * fp89;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp54;
target[((hsi*45+21)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp107 * fp82;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp59;
target[((hsi*45+20)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp166;
fp166 = fp107 * fp78;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp68;
target[((hsi*45+19)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp108 * fp82;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp68;
target[((hsi*45+18)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp109 * fp103;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp31;
target[((hsi*45+17)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp109 * fp99;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp40;
target[((hsi*45+16)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src0[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp110 * fp103;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp40;
target[((hsi*45+15)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp109 * fp96;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp45;
target[((hsi*45+14)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp109 * fp92;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp54;
target[((hsi*45+13)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp110 * fp96;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp54;
target[((hsi*45+12)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp109 * fp89;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp59;
target[((hsi*45+11)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp109 * fp85;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp68;
target[((hsi*45+10)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp110 * fp89;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp68;
target[((hsi*45+9)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp111 * fp103;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp45;
target[((hsi*45+8)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp190;
fp190 = fp111 * fp99;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp54;
target[((hsi*45+7)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp112 * fp103;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp54;
target[((hsi*45+6)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp111 * fp96;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp59;
target[((hsi*45+5)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp111 * fp92;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp68;
target[((hsi*45+4)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp112 * fp96;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp68;
target[((hsi*45+3)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp113 * fp103;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp59;
target[((hsi*45+2)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp113 * fp99;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp68;
target[((hsi*45+1)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp114 * fp103;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp68;
target[((hsi*45+0)*1+lsi)*1] = fp203;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 205 */
}

#ifdef __cplusplus
};
#endif
