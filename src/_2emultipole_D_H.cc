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
#include <_2emultipole_D_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _2emultipole_D_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1260)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_2emultipole_D_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+126)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+252)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+378)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+504)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+630)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+756)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+882)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+1008)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*126+1134)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
