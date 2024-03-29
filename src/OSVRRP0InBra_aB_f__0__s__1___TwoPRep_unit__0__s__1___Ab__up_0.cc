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
void OSVRRP0InBra_aB_f__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp26;
fp26 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*3+2)*1+lsi)*1], src1[((hsi*3+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp1;
fp1 = fp26 * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*6+5)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*3+1)*1+lsi)*1], src1[((hsi*3+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp11;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*6+4)*1+lsi)*1], fp6);
target[((hsi*10+8)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*10+7)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp10;
fp10 = fp26 * fp11;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*6+3)*1+lsi)*1], fp10);
target[((hsi*10+6)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*3+0)*1+lsi)*1], src1[((hsi*3+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp18;
fp18 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*6+2)*1+lsi)*1], fp18);
target[((hsi*10+5)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*6+1)*1+lsi)*1], fp18);
target[((hsi*10+3)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+1)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp23;
fp23 = fp26 * fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*6+0)*1+lsi)*1], fp23);
target[((hsi*10+0)*1+lsi)*1] = fp22;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 28 */
}

#ifdef __cplusplus
};
#endif
