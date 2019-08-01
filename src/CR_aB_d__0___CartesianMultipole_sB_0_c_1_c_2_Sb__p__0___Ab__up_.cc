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
void CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp59, fp60);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp63 * fp61;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp3;
target[((hsi*18+17)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp5, fp6);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp10);
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp72;
fp72 = fp63 * fp57;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp12;
target[((hsi*18+16)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp64 * fp61;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp12;
target[((hsi*18+15)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp53);
LIBINT2_REALTYPE fp76;
fp76 = fp63 * fp54;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp17;
target[((hsi*18+14)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp24);
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp78;
fp78 = fp63 * fp50;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp26;
target[((hsi*18+13)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp64 * fp54;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp26;
target[((hsi*18+12)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp35);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp46);
LIBINT2_REALTYPE fp82;
fp82 = fp63 * fp47;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp31;
target[((hsi*18+11)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp34);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp38);
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp84;
fp84 = fp63 * fp43;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp40;
target[((hsi*18+10)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp64 * fp47;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp40;
target[((hsi*18+9)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp65 * fp61;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp17;
target[((hsi*18+8)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp65 * fp57;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp26;
target[((hsi*18+7)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp66 * fp61;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp26;
target[((hsi*18+6)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp65 * fp54;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp31;
target[((hsi*18+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp65 * fp50;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp40;
target[((hsi*18+4)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp66 * fp54;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp40;
target[((hsi*18+3)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp67 * fp61;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp31;
target[((hsi*18+2)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp67 * fp57;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp40;
target[((hsi*18+1)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp68 * fp61;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp40;
target[((hsi*18+0)*1+lsi)*1] = fp103;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 105 */
}

#ifdef __cplusplus
};
#endif
