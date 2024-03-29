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
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+4300)*1+lsi)*1]), &(inteval->stack[((hsi*168+1216)*1+lsi)*1]), &(inteval->stack[((hsi*126+1384)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+4678)*1+lsi)*1]), &(inteval->stack[((hsi*126+1384)*1+lsi)*1]), &(inteval->stack[((hsi*90+1510)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4948)*1+lsi)*1]), &(inteval->stack[((hsi*378+4300)*1+lsi)*1]), &(inteval->stack[((hsi*270+4678)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+5488)*1+lsi)*1]), &(inteval->stack[((hsi*216+1000)*1+lsi)*1]), &(inteval->stack[((hsi*168+1216)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+5992)*1+lsi)*1]), &(inteval->stack[((hsi*504+5488)*1+lsi)*1]), &(inteval->stack[((hsi*378+4300)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+6748)*1+lsi)*1]), &(inteval->stack[((hsi*756+5992)*1+lsi)*1]), &(inteval->stack[((hsi*540+4948)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+4300)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+4930)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]), &(inteval->stack[((hsi*150+850)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+5380)*1+lsi)*1]), &(inteval->stack[((hsi*630+4300)*1+lsi)*1]), &(inteval->stack[((hsi*450+4930)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+7648)*1+lsi)*1]), &(inteval->stack[((hsi*840+640)*1+lsi)*1]), &(inteval->stack[((hsi*630+4300)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7648)*1+lsi)*1]), &(inteval->stack[((hsi*900+5380)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*2700+1600)*1+lsi)*1]), &(inteval->stack[((hsi*1500+0)*1+lsi)*1]), &(inteval->stack[((hsi*900+6748)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2700+1600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
