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
void OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp26 + src4[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*3+2)*1+lsi)*1], fp1);
target[((hsi*6+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src4[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->oo2z[vi] * fp6;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*3+1)*1+lsi)*1], fp5);
target[((hsi*6+4)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*3+1)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp9;
fp9 = inteval->oo2z[vi] * fp10;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*3+1)*1+lsi)*1], fp9);
target[((hsi*6+3)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src4[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->oo2z[vi] * fp15;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*3+0)*1+lsi)*1], fp14);
target[((hsi*6+2)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = inteval->oo2z[vi] * fp19;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*3+0)*1+lsi)*1], fp18);
target[((hsi*6+1)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp25;
fp25 = 5.0000000000000000e-01 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*3+0)*1+lsi)*1], fp23);
target[((hsi*6+0)*1+lsi)*1] = fp22;
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