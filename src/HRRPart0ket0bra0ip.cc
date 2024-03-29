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
void HRRPart0ket0bra0ip(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+27)*lowdim+lsi)*1], src0[((hsi*36+35)*lowdim+lsi)*1]);
target[((hsi*84+83)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+26)*lowdim+lsi)*1], src0[((hsi*36+34)*lowdim+lsi)*1]);
target[((hsi*84+82)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+25)*lowdim+lsi)*1], src0[((hsi*36+33)*lowdim+lsi)*1]);
target[((hsi*84+81)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+24)*lowdim+lsi)*1], src0[((hsi*36+32)*lowdim+lsi)*1]);
target[((hsi*84+80)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+23)*lowdim+lsi)*1], src0[((hsi*36+31)*lowdim+lsi)*1]);
target[((hsi*84+79)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+22)*lowdim+lsi)*1], src0[((hsi*36+30)*lowdim+lsi)*1]);
target[((hsi*84+78)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+21)*lowdim+lsi)*1], src0[((hsi*36+29)*lowdim+lsi)*1]);
target[((hsi*84+77)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+20)*lowdim+lsi)*1], src0[((hsi*36+27)*lowdim+lsi)*1]);
target[((hsi*84+76)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+19)*lowdim+lsi)*1], src0[((hsi*36+26)*lowdim+lsi)*1]);
target[((hsi*84+75)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+18)*lowdim+lsi)*1], src0[((hsi*36+25)*lowdim+lsi)*1]);
target[((hsi*84+74)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+17)*lowdim+lsi)*1], src0[((hsi*36+24)*lowdim+lsi)*1]);
target[((hsi*84+73)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+16)*lowdim+lsi)*1], src0[((hsi*36+23)*lowdim+lsi)*1]);
target[((hsi*84+72)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+15)*lowdim+lsi)*1], src0[((hsi*36+22)*lowdim+lsi)*1]);
target[((hsi*84+71)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+14)*lowdim+lsi)*1], src0[((hsi*36+20)*lowdim+lsi)*1]);
target[((hsi*84+70)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+13)*lowdim+lsi)*1], src0[((hsi*36+19)*lowdim+lsi)*1]);
target[((hsi*84+69)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+12)*lowdim+lsi)*1], src0[((hsi*36+18)*lowdim+lsi)*1]);
target[((hsi*84+68)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+11)*lowdim+lsi)*1], src0[((hsi*36+17)*lowdim+lsi)*1]);
target[((hsi*84+67)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+10)*lowdim+lsi)*1], src0[((hsi*36+16)*lowdim+lsi)*1]);
target[((hsi*84+66)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+9)*lowdim+lsi)*1], src0[((hsi*36+14)*lowdim+lsi)*1]);
target[((hsi*84+65)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+8)*lowdim+lsi)*1], src0[((hsi*36+13)*lowdim+lsi)*1]);
target[((hsi*84+64)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+7)*lowdim+lsi)*1], src0[((hsi*36+12)*lowdim+lsi)*1]);
target[((hsi*84+63)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+6)*lowdim+lsi)*1], src0[((hsi*36+11)*lowdim+lsi)*1]);
target[((hsi*84+62)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+5)*lowdim+lsi)*1], src0[((hsi*36+9)*lowdim+lsi)*1]);
target[((hsi*84+61)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+4)*lowdim+lsi)*1], src0[((hsi*36+8)*lowdim+lsi)*1]);
target[((hsi*84+60)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+3)*lowdim+lsi)*1], src0[((hsi*36+7)*lowdim+lsi)*1]);
target[((hsi*84+59)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+2)*lowdim+lsi)*1], src0[((hsi*36+5)*lowdim+lsi)*1]);
target[((hsi*84+58)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+1)*lowdim+lsi)*1], src0[((hsi*36+4)*lowdim+lsi)*1]);
target[((hsi*84+57)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*28+0)*lowdim+lsi)*1], src0[((hsi*36+2)*lowdim+lsi)*1]);
target[((hsi*84+56)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+27)*lowdim+lsi)*1], src0[((hsi*36+34)*lowdim+lsi)*1]);
target[((hsi*84+55)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+26)*lowdim+lsi)*1], src0[((hsi*36+33)*lowdim+lsi)*1]);
target[((hsi*84+54)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+25)*lowdim+lsi)*1], src0[((hsi*36+32)*lowdim+lsi)*1]);
target[((hsi*84+53)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+24)*lowdim+lsi)*1], src0[((hsi*36+31)*lowdim+lsi)*1]);
target[((hsi*84+52)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+23)*lowdim+lsi)*1], src0[((hsi*36+30)*lowdim+lsi)*1]);
target[((hsi*84+51)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+22)*lowdim+lsi)*1], src0[((hsi*36+29)*lowdim+lsi)*1]);
target[((hsi*84+50)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+21)*lowdim+lsi)*1], src0[((hsi*36+28)*lowdim+lsi)*1]);
target[((hsi*84+49)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+20)*lowdim+lsi)*1], src0[((hsi*36+26)*lowdim+lsi)*1]);
target[((hsi*84+48)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+19)*lowdim+lsi)*1], src0[((hsi*36+25)*lowdim+lsi)*1]);
target[((hsi*84+47)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+18)*lowdim+lsi)*1], src0[((hsi*36+24)*lowdim+lsi)*1]);
target[((hsi*84+46)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+17)*lowdim+lsi)*1], src0[((hsi*36+23)*lowdim+lsi)*1]);
target[((hsi*84+45)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+16)*lowdim+lsi)*1], src0[((hsi*36+22)*lowdim+lsi)*1]);
target[((hsi*84+44)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+15)*lowdim+lsi)*1], src0[((hsi*36+21)*lowdim+lsi)*1]);
target[((hsi*84+43)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+14)*lowdim+lsi)*1], src0[((hsi*36+19)*lowdim+lsi)*1]);
target[((hsi*84+42)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+13)*lowdim+lsi)*1], src0[((hsi*36+18)*lowdim+lsi)*1]);
target[((hsi*84+41)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+12)*lowdim+lsi)*1], src0[((hsi*36+17)*lowdim+lsi)*1]);
target[((hsi*84+40)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+11)*lowdim+lsi)*1], src0[((hsi*36+16)*lowdim+lsi)*1]);
target[((hsi*84+39)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+10)*lowdim+lsi)*1], src0[((hsi*36+15)*lowdim+lsi)*1]);
target[((hsi*84+38)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+9)*lowdim+lsi)*1], src0[((hsi*36+13)*lowdim+lsi)*1]);
target[((hsi*84+37)*lowdim+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+8)*lowdim+lsi)*1], src0[((hsi*36+12)*lowdim+lsi)*1]);
target[((hsi*84+36)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+7)*lowdim+lsi)*1], src0[((hsi*36+11)*lowdim+lsi)*1]);
target[((hsi*84+35)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+6)*lowdim+lsi)*1], src0[((hsi*36+10)*lowdim+lsi)*1]);
target[((hsi*84+34)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+5)*lowdim+lsi)*1], src0[((hsi*36+8)*lowdim+lsi)*1]);
target[((hsi*84+33)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+4)*lowdim+lsi)*1], src0[((hsi*36+7)*lowdim+lsi)*1]);
target[((hsi*84+32)*lowdim+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+3)*lowdim+lsi)*1], src0[((hsi*36+6)*lowdim+lsi)*1]);
target[((hsi*84+31)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+2)*lowdim+lsi)*1], src0[((hsi*36+4)*lowdim+lsi)*1]);
target[((hsi*84+30)*lowdim+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+1)*lowdim+lsi)*1], src0[((hsi*36+3)*lowdim+lsi)*1]);
target[((hsi*84+29)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*28+0)*lowdim+lsi)*1], src0[((hsi*36+1)*lowdim+lsi)*1]);
target[((hsi*84+28)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+27)*lowdim+lsi)*1], src0[((hsi*36+27)*lowdim+lsi)*1]);
target[((hsi*84+27)*lowdim+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+26)*lowdim+lsi)*1], src0[((hsi*36+26)*lowdim+lsi)*1]);
target[((hsi*84+26)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+25)*lowdim+lsi)*1], src0[((hsi*36+25)*lowdim+lsi)*1]);
target[((hsi*84+25)*lowdim+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+24)*lowdim+lsi)*1], src0[((hsi*36+24)*lowdim+lsi)*1]);
target[((hsi*84+24)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+23)*lowdim+lsi)*1], src0[((hsi*36+23)*lowdim+lsi)*1]);
target[((hsi*84+23)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+22)*lowdim+lsi)*1], src0[((hsi*36+22)*lowdim+lsi)*1]);
target[((hsi*84+22)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+21)*lowdim+lsi)*1], src0[((hsi*36+21)*lowdim+lsi)*1]);
target[((hsi*84+21)*lowdim+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+20)*lowdim+lsi)*1], src0[((hsi*36+20)*lowdim+lsi)*1]);
target[((hsi*84+20)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+19)*lowdim+lsi)*1], src0[((hsi*36+19)*lowdim+lsi)*1]);
target[((hsi*84+19)*lowdim+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+18)*lowdim+lsi)*1], src0[((hsi*36+18)*lowdim+lsi)*1]);
target[((hsi*84+18)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+17)*lowdim+lsi)*1], src0[((hsi*36+17)*lowdim+lsi)*1]);
target[((hsi*84+17)*lowdim+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+16)*lowdim+lsi)*1], src0[((hsi*36+16)*lowdim+lsi)*1]);
target[((hsi*84+16)*lowdim+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+15)*lowdim+lsi)*1], src0[((hsi*36+15)*lowdim+lsi)*1]);
target[((hsi*84+15)*lowdim+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+14)*lowdim+lsi)*1], src0[((hsi*36+14)*lowdim+lsi)*1]);
target[((hsi*84+14)*lowdim+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+13)*lowdim+lsi)*1], src0[((hsi*36+13)*lowdim+lsi)*1]);
target[((hsi*84+13)*lowdim+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+12)*lowdim+lsi)*1], src0[((hsi*36+12)*lowdim+lsi)*1]);
target[((hsi*84+12)*lowdim+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+11)*lowdim+lsi)*1], src0[((hsi*36+11)*lowdim+lsi)*1]);
target[((hsi*84+11)*lowdim+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+10)*lowdim+lsi)*1], src0[((hsi*36+10)*lowdim+lsi)*1]);
target[((hsi*84+10)*lowdim+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+9)*lowdim+lsi)*1], src0[((hsi*36+9)*lowdim+lsi)*1]);
target[((hsi*84+9)*lowdim+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+8)*lowdim+lsi)*1], src0[((hsi*36+8)*lowdim+lsi)*1]);
target[((hsi*84+8)*lowdim+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+7)*lowdim+lsi)*1], src0[((hsi*36+7)*lowdim+lsi)*1]);
target[((hsi*84+7)*lowdim+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+6)*lowdim+lsi)*1], src0[((hsi*36+6)*lowdim+lsi)*1]);
target[((hsi*84+6)*lowdim+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+5)*lowdim+lsi)*1], src0[((hsi*36+5)*lowdim+lsi)*1]);
target[((hsi*84+5)*lowdim+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+4)*lowdim+lsi)*1], src0[((hsi*36+4)*lowdim+lsi)*1]);
target[((hsi*84+4)*lowdim+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+3)*lowdim+lsi)*1], src0[((hsi*36+3)*lowdim+lsi)*1]);
target[((hsi*84+3)*lowdim+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+2)*lowdim+lsi)*1], src0[((hsi*36+2)*lowdim+lsi)*1]);
target[((hsi*84+2)*lowdim+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+1)*lowdim+lsi)*1], src0[((hsi*36+1)*lowdim+lsi)*1]);
target[((hsi*84+1)*lowdim+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*28+0)*lowdim+lsi)*1], src0[((hsi*36+0)*lowdim+lsi)*1]);
target[((hsi*84+0)*lowdim+lsi)*1] = fp166;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
#endif
