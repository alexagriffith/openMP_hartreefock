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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3910)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+11470)*1+lsi)*1]), &(inteval->stack[((hsi*420+2244)*1+lsi)*1]), &(inteval->stack[((hsi*280+2664)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+12310)*1+lsi)*1]), &(inteval->stack[((hsi*588+1656)*1+lsi)*1]), &(inteval->stack[((hsi*420+2244)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+13570)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12310)*1+lsi)*1]), &(inteval->stack[((hsi*840+11470)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+11470)*1+lsi)*1]), &(inteval->stack[((hsi*315+3385)*1+lsi)*1]), &(inteval->stack[((hsi*210+3700)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+12100)*1+lsi)*1]), &(inteval->stack[((hsi*441+2944)*1+lsi)*1]), &(inteval->stack[((hsi*315+3385)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+1656)*1+lsi)*1]), &(inteval->stack[((hsi*945+12100)*1+lsi)*1]), &(inteval->stack[((hsi*630+11470)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3780+15250)*1+lsi)*1]), &(inteval->stack[((hsi*1680+13570)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1656)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+1656)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*360+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+11470)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+19030)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11470)*1+lsi)*1]), &(inteval->stack[((hsi*1080+1656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5040+21190)*1+lsi)*1]), &(inteval->stack[((hsi*2160+19030)*1+lsi)*1]), &(inteval->stack[((hsi*1680+13570)*1+lsi)*1]),60);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*7560+3910)*1+lsi)*1]), &(inteval->stack[((hsi*5040+21190)*1+lsi)*1]), &(inteval->stack[((hsi*3780+15250)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7560+3910)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
