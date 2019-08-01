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
void OSVRRP0InBra_aB_g__0__s__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+5)*1+lsi)*1], src1[((hsi*6+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+4)*1+lsi)*1], src1[((hsi*6+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp7);
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+3)*1+lsi)*1], src1[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp13);
target[((hsi*15+12)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*15+11)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+3)*1+lsi)*1], src1[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp23 * fp21;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+6)*1+lsi)*1], fp20);
target[((hsi*15+10)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+2)*1+lsi)*1], src1[((hsi*6+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp29 * fp27;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp26);
target[((hsi*15+9)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+1)*1+lsi)*1], src1[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp32);
target[((hsi*15+8)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*15+7)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+1)*1+lsi)*1], src1[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp42 * fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp39);
target[((hsi*15+6)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+0)*1+lsi)*1], src1[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp48 * fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp45);
target[((hsi*15+5)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*15+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+0)*1+lsi)*1], src1[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp55 * fp53;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp52);
target[((hsi*15+3)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+2)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+1)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+0)*1+lsi)*1], src1[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp63;
fp63 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp63 * fp61;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp60);
target[((hsi*15+0)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 65 */
}

#ifdef __cplusplus
};
#endif
