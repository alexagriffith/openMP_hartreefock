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
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2175)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+5550)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]), &(inteval->stack[((hsi*315+1635)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+6495)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+7755)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6495)*1+lsi)*1]), &(inteval->stack[((hsi*945+5550)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+9645)*1+lsi)*1]), &(inteval->stack[((hsi*315+1635)*1+lsi)*1]), &(inteval->stack[((hsi*225+1950)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+10320)*1+lsi)*1]), &(inteval->stack[((hsi*945+5550)*1+lsi)*1]), &(inteval->stack[((hsi*675+9645)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+11670)*1+lsi)*1]), &(inteval->stack[((hsi*1890+7755)*1+lsi)*1]), &(inteval->stack[((hsi*1350+10320)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+9645)*1+lsi)*1]), &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+13920)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9645)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6495)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+16440)*1+lsi)*1]), &(inteval->stack[((hsi*2520+13920)*1+lsi)*1]), &(inteval->stack[((hsi*1890+7755)*1+lsi)*1]),15);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*3375+2175)*1+lsi)*1]), &(inteval->stack[((hsi*3150+16440)*1+lsi)*1]), &(inteval->stack[((hsi*2250+11670)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3375+2175)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
