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
void OSVRRP0InBra_aB_h__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+9)*1+lsi)*1], src1[((hsi*10+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+8)*1+lsi)*1], src1[((hsi*10+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp7);
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+7)*1+lsi)*1], src1[((hsi*10+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp13);
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+6)*1+lsi)*1], src1[((hsi*10+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp19);
target[((hsi*21+17)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*21+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+6)*1+lsi)*1], src1[((hsi*10+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp29;
fp29 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp29 * fp27;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp26);
target[((hsi*21+15)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+5)*1+lsi)*1], src1[((hsi*10+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp35;
fp35 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp32);
target[((hsi*21+14)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+4)*1+lsi)*1], src1[((hsi*10+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp41;
fp41 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp41 * fp39;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp38);
target[((hsi*21+13)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+3)*1+lsi)*1], src1[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp47 * fp45;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp44);
target[((hsi*21+12)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+3)*1+lsi)*1], src1[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp54;
fp54 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp54 * fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp51);
target[((hsi*21+10)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+2)*1+lsi)*1], src1[((hsi*10+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp60;
fp60 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp60 * fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp57);
target[((hsi*21+9)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+1)*1+lsi)*1], src1[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp66 * fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp63);
target[((hsi*21+8)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+7)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+1)*1+lsi)*1], src1[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp73 * fp71;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp70);
target[((hsi*21+6)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+0)*1+lsi)*1], src1[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp79 * fp77;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp76);
target[((hsi*21+5)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+0)*1+lsi)*1], src1[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp86 * fp84;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp83);
target[((hsi*21+3)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+2)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+1)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+0)*1+lsi)*1], src1[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp94;
fp94 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp94 * fp92;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp91);
target[((hsi*21+0)*1+lsi)*1] = fp90;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 96 */
}

#ifdef __cplusplus
};
#endif
