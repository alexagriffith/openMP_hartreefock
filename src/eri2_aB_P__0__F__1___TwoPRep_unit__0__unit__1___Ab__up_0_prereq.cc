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
void eri2_aB_P__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp145;
fp145 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp132;
fp132 = fp135 * fp133;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->WQ_z[vi], fp89, fp132);
LIBINT2_REALTYPE fp31;
fp31 = fp145 * fp93;
LIBINT2_REALTYPE fp141;
fp141 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->roe[vi], fp89, fp79);
LIBINT2_REALTYPE fp72;
fp72 = fp141 * fp73;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp123;
fp123 = fp135 * fp124;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->WQ_z[vi], fp90, fp123);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->WQ_z[vi], fp91, fp72);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_z[vi], fp71, fp31);
LIBINT2_REALTYPE fp29;
fp29 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp129;
fp129 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp129 * fp89;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->WP_z[vi], fp91, fp38);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_y[vi] * fp37;
LIBINT2_REALTYPE fp28;
fp28 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_minus(inteval->WQ_y[vi], fp100, fp132);
LIBINT2_REALTYPE fp108;
fp108 = fp114 * fp104;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->WQ_y[vi], fp101, fp123);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * fp102;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WP_z[vi], fp80, fp108);
LIBINT2_REALTYPE fp27;
fp27 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->roe[vi], fp100, fp82);
LIBINT2_REALTYPE fp84;
fp84 = fp141 * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->WQ_y[vi], fp102, fp84);
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * fp83;
LIBINT2_REALTYPE fp26;
fp26 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_x[vi] * fp37;
LIBINT2_REALTYPE fp25;
fp25 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp113;
fp113 = fp114 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->WP_z[vi], fp90, fp113);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_x[vi] * fp41;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * fp45;
LIBINT2_REALTYPE fp24;
fp24 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_x[vi] * fp102;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp23;
fp23 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->WQ_x[vi], fp120, fp132);
LIBINT2_REALTYPE fp68;
fp68 = fp114 * fp131;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_minus(inteval->WQ_x[vi], fp119, fp123);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_z[vi] * fp122;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_z[vi], fp110, fp68);
LIBINT2_REALTYPE fp22;
fp22 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_y[vi] * fp122;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * fp117;
LIBINT2_REALTYPE fp21;
fp21 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_minus(inteval->roe[vi], fp120, fp121);
LIBINT2_REALTYPE fp138;
fp138 = fp141 * fp139;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->WQ_x[vi], fp122, fp138);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * fp137;
LIBINT2_REALTYPE fp20;
fp20 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_y[vi] * fp71;
LIBINT2_REALTYPE fp19;
fp19 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp97;
fp97 = fp114 * fp93;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * fp91;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->WP_y[vi], fp77, fp97);
LIBINT2_REALTYPE fp18;
fp18 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp62;
fp62 = fp129 * fp100;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->WP_y[vi], fp102, fp62);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WQ_z[vi] * fp61;
LIBINT2_REALTYPE fp17;
fp17 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp55;
fp55 = fp145 * fp104;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->WP_y[vi], fp83, fp55);
LIBINT2_REALTYPE fp16;
fp16 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_x[vi] * fp91;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * fp95;
LIBINT2_REALTYPE fp15;
fp15 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->WP_y[vi], fp101, fp113);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_x[vi] * fp59;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_z[vi] * fp66;
LIBINT2_REALTYPE fp14;
fp14 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_x[vi] * fp61;
LIBINT2_REALTYPE fp13;
fp13 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_y[vi] * fp110;
LIBINT2_REALTYPE fp12;
fp12 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WP_y[vi], fp117, fp68);
LIBINT2_REALTYPE fp11;
fp11 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * fp137;
LIBINT2_REALTYPE fp10;
fp10 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_x[vi] * fp71;
LIBINT2_REALTYPE fp9;
fp9 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_x[vi] * fp77;
LIBINT2_REALTYPE fp8;
fp8 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp7;
fp7 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * fp83;
LIBINT2_REALTYPE fp6;
fp6 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->WP_x[vi], fp95, fp97);
LIBINT2_REALTYPE fp5;
fp5 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->WP_x[vi], fp119, fp113);
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_y[vi] * fp112;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_z[vi] * fp116;
LIBINT2_REALTYPE fp4;
fp4 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_x[vi], fp106, fp108);
LIBINT2_REALTYPE fp3;
fp3 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp120;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->WP_x[vi], fp122, fp128);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_z[vi] * fp127;
LIBINT2_REALTYPE fp2;
fp2 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_y[vi] * fp127;
LIBINT2_REALTYPE fp1;
fp1 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp131;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->WP_x[vi], fp137, fp144);
LIBINT2_REALTYPE fp0;
fp0 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 147 */
}

#ifdef __cplusplus
};
#endif
