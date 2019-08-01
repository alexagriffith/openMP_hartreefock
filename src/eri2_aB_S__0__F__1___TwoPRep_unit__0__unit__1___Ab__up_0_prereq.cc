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
void eri2_aB_S__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->roe[vi], fp31, fp32);
LIBINT2_REALTYPE fp11;
fp11 = fp50 * fp12;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2e[vi] * fp43;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_minus(inteval->WQ_z[vi], fp22, fp42);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->WQ_z[vi], fp23, fp11);
LIBINT2_REALTYPE fp9;
fp9 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_y[vi] * fp23;
LIBINT2_REALTYPE fp8;
fp8 = fp15;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->WQ_y[vi], fp27, fp42);
LIBINT2_REALTYPE fp16;
fp16 = inteval->WQ_z[vi] * fp28;
LIBINT2_REALTYPE fp7;
fp7 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->roe[vi], fp34, fp35);
LIBINT2_REALTYPE fp18;
fp18 = fp50 * fp19;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_minus(inteval->WQ_y[vi], fp28, fp18);
LIBINT2_REALTYPE fp6;
fp6 = fp17;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_x[vi] * fp23;
LIBINT2_REALTYPE fp5;
fp5 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_y[vi] * fp38;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WQ_z[vi] * fp36;
LIBINT2_REALTYPE fp4;
fp4 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_x[vi] * fp28;
LIBINT2_REALTYPE fp3;
fp3 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_minus(inteval->WQ_x[vi], fp38, fp42);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_z[vi] * fp41;
LIBINT2_REALTYPE fp2;
fp2 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_y[vi] * fp41;
LIBINT2_REALTYPE fp1;
fp1 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->roe[vi], fp39, fp40);
LIBINT2_REALTYPE fp47;
fp47 = fp50 * fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->WQ_x[vi], fp41, fp47);
LIBINT2_REALTYPE fp0;
fp0 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 52 */
}

#ifdef __cplusplus
};
#endif
