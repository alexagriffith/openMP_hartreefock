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
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,496)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+1144)*1+lsi)*1]), &(inteval->stack[((hsi*60+400)*1+lsi)*1]), &(inteval->stack[((hsi*36+460)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1252)*1+lsi)*1]), &(inteval->stack[((hsi*90+310)*1+lsi)*1]), &(inteval->stack[((hsi*60+400)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1432)*1+lsi)*1]), &(inteval->stack[((hsi*180+1252)*1+lsi)*1]), &(inteval->stack[((hsi*108+1144)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1144)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]), &(inteval->stack[((hsi*60+250)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+1648)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*300+1648)*1+lsi)*1]), &(inteval->stack[((hsi*180+1144)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+496)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+1432)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*648+496)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
