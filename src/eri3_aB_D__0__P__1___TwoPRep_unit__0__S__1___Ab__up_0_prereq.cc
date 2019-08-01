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
void eri3_aB_D__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp91;
fp91 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp91 * fp54;
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp78;
fp78 = fp86 * fp79;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->WP_z[vi], fp51, fp78);
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_z[vi] * fp26;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp83;
fp83 = fp86 * fp84;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->WP_z[vi], fp54, fp83);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->QC_z[vi], fp28, fp21);
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_y[vi] * fp26;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->QC_y[vi], fp28, fp24);
LIBINT2_REALTYPE fp16;
fp16 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_x[vi] * fp26;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_x[vi], fp28, fp31);
LIBINT2_REALTYPE fp15;
fp15 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp57);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_z[vi], fp56, fp103);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_y[vi] * fp95;
LIBINT2_REALTYPE fp14;
fp14 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp62);
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->WP_y[vi], fp61, fp103);
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * fp97;
LIBINT2_REALTYPE fp13;
fp13 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp66);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * fp65;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * fp99;
LIBINT2_REALTYPE fp12;
fp12 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->WP_y[vi], fp60, fp78);
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_z[vi] * fp44;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->WP_y[vi], fp68, fp83);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->QC_z[vi], fp46, fp37);
LIBINT2_REALTYPE fp11;
fp11 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp40;
fp40 = fp91 * fp68;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WQ_y[vi] * fp44;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->QC_y[vi], fp46, fp42);
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp10;
fp10 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_x[vi] * fp44;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->QC_x[vi], fp46, fp49);
LIBINT2_REALTYPE fp9;
fp9 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_x[vi] * fp95;
LIBINT2_REALTYPE fp8;
fp8 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_x[vi] * fp61;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * fp101;
LIBINT2_REALTYPE fp7;
fp7 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->WP_x[vi], fp65, fp103);
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp102;
LIBINT2_REALTYPE fp6;
fp6 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_x[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_y[vi] * fp100;
LIBINT2_REALTYPE fp5;
fp5 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_x[vi] * fp97;
LIBINT2_REALTYPE fp4;
fp4 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_y[vi] * fp102;
LIBINT2_REALTYPE fp3;
fp3 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->WP_x[vi], fp76, fp78);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_z[vi] * fp77;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->WP_x[vi], fp88, fp83);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->QC_z[vi], fp82, fp71);
LIBINT2_REALTYPE fp2;
fp2 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_y[vi] * fp77;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->QC_y[vi], fp82, fp74);
LIBINT2_REALTYPE fp1;
fp1 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp88;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_x[vi] * fp77;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->QC_x[vi], fp82, fp93);
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
LIBINT2_REALTYPE fp0;
fp0 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 106 */
}

#ifdef __cplusplus
};
#endif
