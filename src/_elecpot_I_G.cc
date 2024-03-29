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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <_elecpot_I_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpot_I_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,230)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_I_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+650)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+758)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+893)*1+lsi)*1]), &(inteval->stack[((hsi*135+758)*1+lsi)*1]), &(inteval->stack[((hsi*108+650)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1109)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]), &(inteval->stack[((hsi*28+202)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1193)*1+lsi)*1]), &(inteval->stack[((hsi*108+650)*1+lsi)*1]), &(inteval->stack[((hsi*84+1109)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1361)*1+lsi)*1]), &(inteval->stack[((hsi*216+893)*1+lsi)*1]), &(inteval->stack[((hsi*168+1193)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1109)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+1641)*1+lsi)*1]), &(inteval->stack[((hsi*165+1109)*1+lsi)*1]), &(inteval->stack[((hsi*135+758)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1911)*1+lsi)*1]), &(inteval->stack[((hsi*270+1641)*1+lsi)*1]), &(inteval->stack[((hsi*216+893)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+230)*1+lsi)*1]), &(inteval->stack[((hsi*360+1911)*1+lsi)*1]), &(inteval->stack[((hsi*280+1361)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*420+230)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
