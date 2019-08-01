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
void eri3_aB_F__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp595;
fp595 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp201;
fp201 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp165;
fp165 = fp595 * fp201;
LIBINT2_REALTYPE fp591;
fp591 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp524;
LIBINT2_REALTYPE fp523;
fp523 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp522;
fp522 = fp591 * fp523;
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_minus(inteval->WP_z[vi], fp200, fp522);
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * fp186;
LIBINT2_REALTYPE fp529;
LIBINT2_REALTYPE fp528;
fp528 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp527;
fp527 = fp591 * fp528;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_minus(inteval->WP_z[vi], fp201, fp527);
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->QC_z[vi], fp188, fp167);
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp61;
fp61 = fp595 * fp164;
LIBINT2_REALTYPE fp600;
fp600 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp429;
fp429 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp430;
LIBINT2_REALTYPE fp428;
fp428 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp429);
LIBINT2_REALTYPE fp286;
fp286 = fp595 * fp428;
LIBINT2_REALTYPE fp567;
fp567 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp566;
LIBINT2_REALTYPE fp565;
fp565 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp564;
fp564 = fp567 * fp565;
LIBINT2_REALTYPE fp426;
fp426 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp427;
LIBINT2_REALTYPE fp425;
fp425 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp426);
LIBINT2_REALTYPE fp363;
fp363 = inteval->WQ_z[vi] * fp425;
LIBINT2_REALTYPE fp364;
LIBINT2_REALTYPE fp362;
fp362 = libint2::fma_plus(inteval->QC_z[vi], fp428, fp363);
LIBINT2_REALTYPE fp361;
fp361 = fp362 - fp564;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(inteval->WP_z[vi], fp361, fp286);
LIBINT2_REALTYPE fp283;
fp283 = fp595 * fp425;
LIBINT2_REALTYPE fp559;
LIBINT2_REALTYPE fp558;
fp558 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp557;
fp557 = fp567 * fp558;
LIBINT2_REALTYPE fp435;
fp435 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp436;
LIBINT2_REALTYPE fp434;
fp434 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp435);
LIBINT2_REALTYPE fp359;
fp359 = inteval->WQ_z[vi] * fp434;
LIBINT2_REALTYPE fp360;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(inteval->QC_z[vi], fp425, fp359);
LIBINT2_REALTYPE fp357;
fp357 = fp358 - fp557;
LIBINT2_REALTYPE fp284;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->WP_z[vi], fp357, fp283);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->roz[vi], fp282, fp285);
LIBINT2_REALTYPE fp63;
fp63 = fp600 * fp64;
LIBINT2_REALTYPE fp554;
fp554 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp553;
fp553 = fp554 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(inteval->WP_z[vi], fp434, fp553);
LIBINT2_REALTYPE fp151;
fp151 = fp595 * fp213;
LIBINT2_REALTYPE fp371;
LIBINT2_REALTYPE fp370;
fp370 = libint2::fma_minus(inteval->roz[vi], fp357, fp361);
LIBINT2_REALTYPE fp369;
fp369 = fp591 * fp370;
LIBINT2_REALTYPE fp203;
fp203 = fp595 * fp434;
LIBINT2_REALTYPE fp548;
LIBINT2_REALTYPE fp547;
fp547 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]);
LIBINT2_REALTYPE fp546;
fp546 = fp567 * fp547;
LIBINT2_REALTYPE fp432;
fp432 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp433;
LIBINT2_REALTYPE fp431;
fp431 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp432);
LIBINT2_REALTYPE fp355;
fp355 = inteval->WQ_z[vi] * fp431;
LIBINT2_REALTYPE fp356;
LIBINT2_REALTYPE fp354;
fp354 = libint2::fma_plus(inteval->QC_z[vi], fp434, fp355);
LIBINT2_REALTYPE fp353;
fp353 = fp354 - fp546;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->WP_z[vi], fp353, fp203);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(inteval->WP_z[vi], fp202, fp369);
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->WP_z[vi], fp150, fp63);
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp179;
fp179 = inteval->WQ_y[vi] * fp186;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->QC_y[vi], fp188, fp179);
LIBINT2_REALTYPE fp184;
fp184 = fp554 * fp178;
LIBINT2_REALTYPE fp477;
fp477 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp478;
LIBINT2_REALTYPE fp476;
fp476 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp477);
LIBINT2_REALTYPE fp505;
fp505 = fp554 * fp476;
LIBINT2_REALTYPE fp474;
fp474 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp475;
LIBINT2_REALTYPE fp473;
fp473 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp474);
LIBINT2_REALTYPE fp385;
fp385 = inteval->WQ_z[vi] * fp473;
LIBINT2_REALTYPE fp386;
LIBINT2_REALTYPE fp384;
fp384 = libint2::fma_plus(inteval->QC_z[vi], fp476, fp385);
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->WP_z[vi], fp384, fp505);
LIBINT2_REALTYPE fp502;
fp502 = fp554 * fp473;
LIBINT2_REALTYPE fp483;
fp483 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp484;
LIBINT2_REALTYPE fp482;
fp482 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp483);
LIBINT2_REALTYPE fp382;
fp382 = inteval->WQ_z[vi] * fp482;
LIBINT2_REALTYPE fp383;
LIBINT2_REALTYPE fp381;
fp381 = libint2::fma_plus(inteval->QC_z[vi], fp473, fp382);
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->WP_z[vi], fp381, fp502);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->roz[vi], fp292, fp294);
LIBINT2_REALTYPE fp69;
fp69 = fp600 * fp70;
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_z[vi] * fp482;
LIBINT2_REALTYPE fp156;
fp156 = fp554 * fp176;
LIBINT2_REALTYPE fp393;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_minus(inteval->roz[vi], fp381, fp384);
LIBINT2_REALTYPE fp391;
fp391 = fp591 * fp392;
LIBINT2_REALTYPE fp496;
fp496 = fp554 * fp482;
LIBINT2_REALTYPE fp480;
fp480 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp481;
LIBINT2_REALTYPE fp479;
fp479 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp480);
LIBINT2_REALTYPE fp379;
fp379 = inteval->WQ_z[vi] * fp479;
LIBINT2_REALTYPE fp380;
LIBINT2_REALTYPE fp378;
fp378 = libint2::fma_plus(inteval->QC_z[vi], fp482, fp379);
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->WP_z[vi], fp378, fp496);
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_minus(inteval->WP_z[vi], fp206, fp391);
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->WP_z[vi], fp155, fp69);
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp184;
LIBINT2_REALTYPE fp58;
fp58 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp410;
fp410 = inteval->WQ_y[vi] * fp473;
LIBINT2_REALTYPE fp411;
LIBINT2_REALTYPE fp409;
fp409 = libint2::fma_plus(inteval->QC_y[vi], fp476, fp410);
LIBINT2_REALTYPE fp408;
fp408 = fp409 - fp564;
LIBINT2_REALTYPE fp299;
fp299 = inteval->WP_z[vi] * fp408;
LIBINT2_REALTYPE fp406;
fp406 = inteval->WQ_y[vi] * fp482;
LIBINT2_REALTYPE fp407;
LIBINT2_REALTYPE fp405;
fp405 = libint2::fma_plus(inteval->QC_y[vi], fp473, fp406);
LIBINT2_REALTYPE fp404;
fp404 = fp405 - fp557;
LIBINT2_REALTYPE fp298;
fp298 = inteval->WP_z[vi] * fp404;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(inteval->roz[vi], fp298, fp299);
LIBINT2_REALTYPE fp74;
fp74 = fp600 * fp75;
LIBINT2_REALTYPE fp418;
LIBINT2_REALTYPE fp417;
fp417 = libint2::fma_minus(inteval->roz[vi], fp404, fp408);
LIBINT2_REALTYPE fp416;
fp416 = fp591 * fp417;
LIBINT2_REALTYPE fp402;
fp402 = inteval->WQ_y[vi] * fp479;
LIBINT2_REALTYPE fp403;
LIBINT2_REALTYPE fp401;
fp401 = libint2::fma_plus(inteval->QC_y[vi], fp482, fp402);
LIBINT2_REALTYPE fp400;
fp400 = fp401 - fp546;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_z[vi] * fp400;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_minus(inteval->WP_z[vi], fp160, fp416);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->WP_z[vi], fp161, fp74);
LIBINT2_REALTYPE fp57;
fp57 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_x[vi] * fp186;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->QC_x[vi], fp188, fp193);
LIBINT2_REALTYPE fp102;
fp102 = fp554 * fp192;
LIBINT2_REALTYPE fp535;
fp535 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp536;
LIBINT2_REALTYPE fp534;
fp534 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp535);
LIBINT2_REALTYPE fp341;
fp341 = fp554 * fp534;
LIBINT2_REALTYPE fp532;
fp532 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp533;
LIBINT2_REALTYPE fp531;
fp531 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp532);
LIBINT2_REALTYPE fp445;
fp445 = inteval->WQ_z[vi] * fp531;
LIBINT2_REALTYPE fp446;
LIBINT2_REALTYPE fp444;
fp444 = libint2::fma_plus(inteval->QC_z[vi], fp534, fp445);
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(inteval->WP_z[vi], fp444, fp341);
LIBINT2_REALTYPE fp338;
fp338 = fp554 * fp531;
LIBINT2_REALTYPE fp543;
fp543 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp544;
LIBINT2_REALTYPE fp542;
fp542 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp543);
LIBINT2_REALTYPE fp442;
fp442 = inteval->WQ_z[vi] * fp542;
LIBINT2_REALTYPE fp443;
LIBINT2_REALTYPE fp441;
fp441 = libint2::fma_plus(inteval->QC_z[vi], fp531, fp442);
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(inteval->WP_z[vi], fp441, fp338);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->roz[vi], fp301, fp303);
LIBINT2_REALTYPE fp80;
fp80 = fp600 * fp81;
LIBINT2_REALTYPE fp190;
fp190 = inteval->WP_z[vi] * fp542;
LIBINT2_REALTYPE fp170;
fp170 = fp554 * fp190;
LIBINT2_REALTYPE fp464;
LIBINT2_REALTYPE fp463;
fp463 = libint2::fma_minus(inteval->roz[vi], fp441, fp444);
LIBINT2_REALTYPE fp462;
fp462 = fp591 * fp463;
LIBINT2_REALTYPE fp252;
fp252 = fp554 * fp542;
LIBINT2_REALTYPE fp538;
fp538 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp539;
LIBINT2_REALTYPE fp537;
fp537 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp538);
LIBINT2_REALTYPE fp438;
fp438 = inteval->WQ_z[vi] * fp537;
LIBINT2_REALTYPE fp439;
LIBINT2_REALTYPE fp437;
fp437 = libint2::fma_plus(inteval->QC_z[vi], fp542, fp438);
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->WP_z[vi], fp437, fp252);
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->WP_z[vi], fp215, fp462);
LIBINT2_REALTYPE fp169;
fp169 = fp171 + fp170;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->WP_z[vi], fp169, fp80);
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp102;
LIBINT2_REALTYPE fp56;
fp56 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp493;
fp493 = inteval->WQ_y[vi] * fp531;
LIBINT2_REALTYPE fp494;
LIBINT2_REALTYPE fp492;
fp492 = libint2::fma_plus(inteval->QC_y[vi], fp534, fp493);
LIBINT2_REALTYPE fp310;
fp310 = inteval->WP_z[vi] * fp492;
LIBINT2_REALTYPE fp490;
fp490 = inteval->WQ_y[vi] * fp542;
LIBINT2_REALTYPE fp491;
LIBINT2_REALTYPE fp489;
fp489 = libint2::fma_plus(inteval->QC_y[vi], fp531, fp490);
LIBINT2_REALTYPE fp309;
fp309 = inteval->WP_z[vi] * fp489;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->roz[vi], fp309, fp310);
LIBINT2_REALTYPE fp85;
fp85 = fp600 * fp86;
LIBINT2_REALTYPE fp512;
LIBINT2_REALTYPE fp511;
fp511 = libint2::fma_minus(inteval->roz[vi], fp489, fp492);
LIBINT2_REALTYPE fp510;
fp510 = fp591 * fp511;
LIBINT2_REALTYPE fp486;
fp486 = inteval->WQ_y[vi] * fp537;
LIBINT2_REALTYPE fp487;
LIBINT2_REALTYPE fp485;
fp485 = libint2::fma_plus(inteval->QC_y[vi], fp542, fp486);
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_z[vi] * fp485;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_minus(inteval->WP_z[vi], fp177, fp510);
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->WP_z[vi], fp181, fp85);
LIBINT2_REALTYPE fp55;
fp55 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp569;
fp569 = inteval->WQ_x[vi] * fp531;
LIBINT2_REALTYPE fp570;
LIBINT2_REALTYPE fp568;
fp568 = libint2::fma_plus(inteval->QC_x[vi], fp534, fp569);
LIBINT2_REALTYPE fp563;
fp563 = fp568 - fp564;
LIBINT2_REALTYPE fp313;
fp313 = inteval->WP_z[vi] * fp563;
LIBINT2_REALTYPE fp561;
fp561 = inteval->WQ_x[vi] * fp542;
LIBINT2_REALTYPE fp562;
LIBINT2_REALTYPE fp560;
fp560 = libint2::fma_plus(inteval->QC_x[vi], fp531, fp561);
LIBINT2_REALTYPE fp556;
fp556 = fp560 - fp557;
LIBINT2_REALTYPE fp312;
fp312 = inteval->WP_z[vi] * fp556;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->roz[vi], fp312, fp313);
LIBINT2_REALTYPE fp90;
fp90 = fp600 * fp91;
LIBINT2_REALTYPE fp590;
LIBINT2_REALTYPE fp589;
fp589 = libint2::fma_minus(inteval->roz[vi], fp556, fp563);
LIBINT2_REALTYPE fp588;
fp588 = fp591 * fp589;
LIBINT2_REALTYPE fp550;
fp550 = inteval->WQ_x[vi] * fp537;
LIBINT2_REALTYPE fp551;
LIBINT2_REALTYPE fp549;
fp549 = libint2::fma_plus(inteval->QC_x[vi], fp542, fp550);
LIBINT2_REALTYPE fp545;
fp545 = fp549 - fp546;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_z[vi] * fp545;
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_minus(inteval->WP_z[vi], fp191, fp588);
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->WP_z[vi], fp195, fp90);
LIBINT2_REALTYPE fp54;
fp54 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp150;
LIBINT2_REALTYPE fp53;
fp53 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp174;
fp174 = fp554 * fp164;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_y[vi], fp155, fp174);
LIBINT2_REALTYPE fp52;
fp52 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp98;
fp98 = fp595 * fp178;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->WP_y[vi], fp161, fp98);
LIBINT2_REALTYPE fp51;
fp51 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_y[vi] * fp169;
LIBINT2_REALTYPE fp50;
fp50 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->WP_y[vi], fp181, fp102);
LIBINT2_REALTYPE fp49;
fp49 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_y[vi] * fp195;
LIBINT2_REALTYPE fp48;
fp48 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp270;
fp270 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_minus(inteval->WP_y[vi], fp270, fp522);
LIBINT2_REALTYPE fp242;
fp242 = inteval->WQ_z[vi] * fp266;
LIBINT2_REALTYPE fp271;
fp271 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_minus(inteval->WP_y[vi], fp271, fp527);
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->QC_z[vi], fp268, fp242);
LIBINT2_REALTYPE fp106;
fp106 = fp595 * fp241;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_y[vi] * fp353;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_minus(inteval->WP_y[vi], fp220, fp369);
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->WP_z[vi], fp221, fp106);
LIBINT2_REALTYPE fp47;
fp47 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp255;
fp255 = fp595 * fp271;
LIBINT2_REALTYPE fp257;
fp257 = inteval->WQ_y[vi] * fp266;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(inteval->QC_y[vi], fp268, fp257);
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
LIBINT2_REALTYPE fp264;
fp264 = fp554 * fp254;
LIBINT2_REALTYPE fp239;
fp239 = inteval->WP_y[vi] * fp434;
LIBINT2_REALTYPE fp227;
fp227 = fp554 * fp239;
LIBINT2_REALTYPE fp448;
fp448 = fp554 * fp434;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->WP_y[vi], fp378, fp448);
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_minus(inteval->WP_y[vi], fp224, fp391);
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->WP_z[vi], fp226, fp264);
LIBINT2_REALTYPE fp46;
fp46 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp250;
LIBINT2_REALTYPE fp249;
fp249 = libint2::fma_plus(inteval->WP_y[vi], fp482, fp553);
LIBINT2_REALTYPE fp235;
fp235 = fp595 * fp249;
LIBINT2_REALTYPE fp232;
fp232 = fp595 * fp482;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->WP_y[vi], fp400, fp232);
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_minus(inteval->WP_y[vi], fp231, fp416);
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_z[vi] * fp234;
LIBINT2_REALTYPE fp45;
fp45 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp275;
fp275 = inteval->WQ_x[vi] * fp266;
LIBINT2_REALTYPE fp276;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_plus(inteval->QC_x[vi], fp268, fp275);
LIBINT2_REALTYPE fp139;
fp139 = fp554 * fp274;
LIBINT2_REALTYPE fp240;
fp240 = inteval->WP_y[vi] * fp437;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_minus(inteval->WP_y[vi], fp240, fp462);
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_z[vi], fp244, fp139);
LIBINT2_REALTYPE fp44;
fp44 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp272;
fp272 = inteval->WP_y[vi] * fp542;
LIBINT2_REALTYPE fp260;
fp260 = fp554 * fp272;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->WP_y[vi], fp485, fp252);
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_minus(inteval->WP_y[vi], fp251, fp510);
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_z[vi] * fp259;
LIBINT2_REALTYPE fp43;
fp43 = fp113;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp273;
fp273 = inteval->WP_y[vi] * fp545;
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_minus(inteval->WP_y[vi], fp273, fp588);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_z[vi] * fp277;
LIBINT2_REALTYPE fp42;
fp42 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp316;
fp316 = inteval->WP_y[vi] * fp361;
LIBINT2_REALTYPE fp315;
fp315 = inteval->WP_y[vi] * fp357;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->roz[vi], fp315, fp316);
LIBINT2_REALTYPE fp116;
fp116 = fp600 * fp117;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->WP_y[vi], fp221, fp116);
LIBINT2_REALTYPE fp41;
fp41 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp247;
fp247 = fp554 * fp241;
LIBINT2_REALTYPE fp457;
fp457 = fp554 * fp428;
LIBINT2_REALTYPE fp321;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(inteval->WP_y[vi], fp384, fp457);
LIBINT2_REALTYPE fp454;
fp454 = fp554 * fp425;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp318;
fp318 = libint2::fma_plus(inteval->WP_y[vi], fp381, fp454);
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_minus(inteval->roz[vi], fp318, fp320);
LIBINT2_REALTYPE fp122;
fp122 = fp600 * fp123;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_minus(inteval->WP_y[vi], fp226, fp122);
LIBINT2_REALTYPE fp120;
fp120 = fp121 + fp247;
LIBINT2_REALTYPE fp40;
fp40 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp127;
fp127 = fp595 * fp254;
LIBINT2_REALTYPE fp328;
fp328 = fp595 * fp476;
LIBINT2_REALTYPE fp329;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->WP_y[vi], fp408, fp328);
LIBINT2_REALTYPE fp325;
fp325 = fp595 * fp473;
LIBINT2_REALTYPE fp326;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(inteval->WP_y[vi], fp404, fp325);
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_minus(inteval->roz[vi], fp324, fp327);
LIBINT2_REALTYPE fp129;
fp129 = fp600 * fp130;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->WP_y[vi], fp234, fp129);
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp39;
fp39 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp335;
fp335 = inteval->WP_y[vi] * fp444;
LIBINT2_REALTYPE fp334;
fp334 = inteval->WP_y[vi] * fp441;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_minus(inteval->roz[vi], fp334, fp335);
LIBINT2_REALTYPE fp134;
fp134 = fp600 * fp135;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->WP_y[vi], fp244, fp134);
LIBINT2_REALTYPE fp38;
fp38 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp342;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(inteval->WP_y[vi], fp492, fp341);
LIBINT2_REALTYPE fp339;
LIBINT2_REALTYPE fp337;
fp337 = libint2::fma_plus(inteval->WP_y[vi], fp489, fp338);
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_minus(inteval->roz[vi], fp337, fp340);
LIBINT2_REALTYPE fp141;
fp141 = fp600 * fp142;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_minus(inteval->WP_y[vi], fp259, fp141);
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp37;
fp37 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp350;
fp350 = inteval->WP_y[vi] * fp563;
LIBINT2_REALTYPE fp349;
fp349 = inteval->WP_y[vi] * fp556;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_minus(inteval->roz[vi], fp349, fp350);
LIBINT2_REALTYPE fp146;
fp146 = fp600 * fp147;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->WP_y[vi], fp277, fp146);
LIBINT2_REALTYPE fp36;
fp36 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_x[vi] * fp150;
LIBINT2_REALTYPE fp35;
fp35 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_x[vi] * fp155;
LIBINT2_REALTYPE fp34;
fp34 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_x[vi] * fp161;
LIBINT2_REALTYPE fp33;
fp33 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->WP_x[vi], fp169, fp174);
LIBINT2_REALTYPE fp32;
fp32 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->WP_x[vi], fp181, fp184);
LIBINT2_REALTYPE fp31;
fp31 = fp183;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp198;
fp198 = fp595 * fp192;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->WP_x[vi], fp195, fp198);
LIBINT2_REALTYPE fp30;
fp30 = fp197;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp288;
fp288 = inteval->WP_x[vi] * fp202;
LIBINT2_REALTYPE fp205;
fp205 = inteval->WP_y[vi] * fp288;
LIBINT2_REALTYPE fp29;
fp29 = fp205;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp209;
fp209 = fp554 * fp249;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->WP_z[vi], fp224, fp209);
LIBINT2_REALTYPE fp211;
fp211 = inteval->WP_x[vi] * fp208;
LIBINT2_REALTYPE fp28;
fp28 = fp211;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp330;
fp330 = inteval->WP_x[vi] * fp231;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_z[vi] * fp330;
LIBINT2_REALTYPE fp27;
fp27 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp555;
LIBINT2_REALTYPE fp552;
fp552 = libint2::fma_plus(inteval->WP_x[vi], fp542, fp553);
LIBINT2_REALTYPE fp344;
fp344 = fp554 * fp552;
LIBINT2_REALTYPE fp449;
LIBINT2_REALTYPE fp447;
fp447 = libint2::fma_plus(inteval->WP_x[vi], fp437, fp448);
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->WP_z[vi], fp447, fp344);
LIBINT2_REALTYPE fp217;
fp217 = inteval->WP_y[vi] * fp305;
LIBINT2_REALTYPE fp26;
fp26 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp497;
LIBINT2_REALTYPE fp495;
fp495 = libint2::fma_plus(inteval->WP_x[vi], fp485, fp496);
LIBINT2_REALTYPE fp345;
LIBINT2_REALTYPE fp343;
fp343 = libint2::fma_plus(inteval->WP_y[vi], fp495, fp344);
LIBINT2_REALTYPE fp218;
fp218 = inteval->WP_z[vi] * fp343;
LIBINT2_REALTYPE fp25;
fp25 = fp218;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp572;
fp572 = fp595 * fp542;
LIBINT2_REALTYPE fp573;
LIBINT2_REALTYPE fp571;
fp571 = libint2::fma_plus(inteval->WP_x[vi], fp545, fp572);
LIBINT2_REALTYPE fp351;
fp351 = inteval->WP_y[vi] * fp571;
LIBINT2_REALTYPE fp219;
fp219 = inteval->WP_z[vi] * fp351;
LIBINT2_REALTYPE fp24;
fp24 = fp219;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp223;
fp223 = inteval->WP_x[vi] * fp221;
LIBINT2_REALTYPE fp23;
fp23 = fp223;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp230;
fp230 = inteval->WP_x[vi] * fp226;
LIBINT2_REALTYPE fp22;
fp22 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_x[vi] * fp234;
LIBINT2_REALTYPE fp21;
fp21 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->WP_x[vi], fp244, fp247);
LIBINT2_REALTYPE fp20;
fp20 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->WP_x[vi], fp259, fp264);
LIBINT2_REALTYPE fp19;
fp19 = fp263;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp280;
fp280 = fp595 * fp274;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp279;
fp279 = libint2::fma_plus(inteval->WP_x[vi], fp277, fp280);
LIBINT2_REALTYPE fp18;
fp18 = fp279;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp540;
fp540 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp525;
LIBINT2_REALTYPE fp521;
fp521 = libint2::fma_minus(inteval->WP_x[vi], fp540, fp522);
LIBINT2_REALTYPE fp451;
fp451 = inteval->WQ_z[vi] * fp521;
LIBINT2_REALTYPE fp541;
fp541 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp530;
LIBINT2_REALTYPE fp526;
fp526 = libint2::fma_minus(inteval->WP_x[vi], fp541, fp527);
LIBINT2_REALTYPE fp452;
LIBINT2_REALTYPE fp450;
fp450 = libint2::fma_plus(inteval->QC_z[vi], fp526, fp451);
LIBINT2_REALTYPE fp290;
fp290 = fp595 * fp450;
LIBINT2_REALTYPE fp365;
fp365 = inteval->WP_x[vi] * fp353;
LIBINT2_REALTYPE fp372;
LIBINT2_REALTYPE fp368;
fp368 = libint2::fma_minus(inteval->WP_x[vi], fp365, fp369);
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->WP_z[vi], fp368, fp290);
LIBINT2_REALTYPE fp17;
fp17 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp499;
fp499 = inteval->WQ_y[vi] * fp521;
LIBINT2_REALTYPE fp500;
LIBINT2_REALTYPE fp498;
fp498 = libint2::fma_plus(inteval->QC_y[vi], fp526, fp499);
LIBINT2_REALTYPE fp515;
fp515 = fp554 * fp498;
LIBINT2_REALTYPE fp387;
fp387 = inteval->WP_x[vi] * fp378;
LIBINT2_REALTYPE fp394;
LIBINT2_REALTYPE fp390;
fp390 = libint2::fma_minus(inteval->WP_x[vi], fp387, fp391);
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(inteval->WP_z[vi], fp390, fp515);
LIBINT2_REALTYPE fp16;
fp16 = fp296;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp412;
fp412 = inteval->WP_x[vi] * fp400;
LIBINT2_REALTYPE fp419;
LIBINT2_REALTYPE fp415;
fp415 = libint2::fma_minus(inteval->WP_x[vi], fp412, fp416);
LIBINT2_REALTYPE fp300;
fp300 = inteval->WP_z[vi] * fp415;
LIBINT2_REALTYPE fp15;
fp15 = fp300;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp575;
fp575 = fp595 * fp541;
LIBINT2_REALTYPE fp577;
fp577 = inteval->WQ_x[vi] * fp521;
LIBINT2_REALTYPE fp578;
LIBINT2_REALTYPE fp576;
fp576 = libint2::fma_plus(inteval->QC_x[vi], fp526, fp577);
LIBINT2_REALTYPE fp574;
fp574 = fp576 + fp575;
LIBINT2_REALTYPE fp347;
fp347 = fp554 * fp574;
LIBINT2_REALTYPE fp440;
fp440 = inteval->WP_x[vi] * fp434;
LIBINT2_REALTYPE fp460;
fp460 = fp554 * fp440;
LIBINT2_REALTYPE fp465;
LIBINT2_REALTYPE fp461;
fp461 = libint2::fma_minus(inteval->WP_x[vi], fp447, fp462);
LIBINT2_REALTYPE fp459;
fp459 = fp461 + fp460;
LIBINT2_REALTYPE fp308;
LIBINT2_REALTYPE fp307;
fp307 = libint2::fma_plus(inteval->WP_z[vi], fp459, fp347);
LIBINT2_REALTYPE fp14;
fp14 = fp307;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp488;
fp488 = inteval->WP_x[vi] * fp482;
LIBINT2_REALTYPE fp508;
fp508 = fp554 * fp488;
LIBINT2_REALTYPE fp513;
LIBINT2_REALTYPE fp509;
fp509 = libint2::fma_minus(inteval->WP_x[vi], fp495, fp510);
LIBINT2_REALTYPE fp507;
fp507 = fp509 + fp508;
LIBINT2_REALTYPE fp311;
fp311 = inteval->WP_z[vi] * fp507;
LIBINT2_REALTYPE fp13;
fp13 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp586;
fp586 = fp595 * fp552;
LIBINT2_REALTYPE fp592;
LIBINT2_REALTYPE fp587;
fp587 = libint2::fma_minus(inteval->WP_x[vi], fp571, fp588);
LIBINT2_REALTYPE fp585;
fp585 = fp587 + fp586;
LIBINT2_REALTYPE fp314;
fp314 = inteval->WP_z[vi] * fp585;
LIBINT2_REALTYPE fp12;
fp12 = fp314;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp317;
fp317 = inteval->WP_y[vi] * fp368;
LIBINT2_REALTYPE fp11;
fp11 = fp317;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp467;
fp467 = fp554 * fp450;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(inteval->WP_y[vi], fp390, fp467);
LIBINT2_REALTYPE fp10;
fp10 = fp322;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp332;
fp332 = fp595 * fp498;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->WP_y[vi], fp415, fp332);
LIBINT2_REALTYPE fp9;
fp9 = fp331;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp336;
fp336 = inteval->WP_y[vi] * fp459;
LIBINT2_REALTYPE fp8;
fp8 = fp336;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp348;
LIBINT2_REALTYPE fp346;
fp346 = libint2::fma_plus(inteval->WP_y[vi], fp507, fp347);
LIBINT2_REALTYPE fp7;
fp7 = fp346;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp352;
fp352 = inteval->WP_y[vi] * fp585;
LIBINT2_REALTYPE fp6;
fp6 = fp352;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp367;
fp367 = inteval->WP_x[vi] * fp361;
LIBINT2_REALTYPE fp366;
fp366 = inteval->WP_x[vi] * fp357;
LIBINT2_REALTYPE fp376;
LIBINT2_REALTYPE fp375;
fp375 = libint2::fma_minus(inteval->roz[vi], fp366, fp367);
LIBINT2_REALTYPE fp374;
fp374 = fp600 * fp375;
LIBINT2_REALTYPE fp377;
LIBINT2_REALTYPE fp373;
fp373 = libint2::fma_minus(inteval->WP_x[vi], fp368, fp374);
LIBINT2_REALTYPE fp5;
fp5 = fp373;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp389;
fp389 = inteval->WP_x[vi] * fp384;
LIBINT2_REALTYPE fp388;
fp388 = inteval->WP_x[vi] * fp381;
LIBINT2_REALTYPE fp398;
LIBINT2_REALTYPE fp397;
fp397 = libint2::fma_minus(inteval->roz[vi], fp388, fp389);
LIBINT2_REALTYPE fp396;
fp396 = fp600 * fp397;
LIBINT2_REALTYPE fp399;
LIBINT2_REALTYPE fp395;
fp395 = libint2::fma_minus(inteval->WP_x[vi], fp390, fp396);
LIBINT2_REALTYPE fp4;
fp4 = fp395;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp414;
fp414 = inteval->WP_x[vi] * fp408;
LIBINT2_REALTYPE fp413;
fp413 = inteval->WP_x[vi] * fp404;
LIBINT2_REALTYPE fp423;
LIBINT2_REALTYPE fp422;
fp422 = libint2::fma_minus(inteval->roz[vi], fp413, fp414);
LIBINT2_REALTYPE fp421;
fp421 = fp600 * fp422;
LIBINT2_REALTYPE fp424;
LIBINT2_REALTYPE fp420;
fp420 = libint2::fma_minus(inteval->WP_x[vi], fp415, fp421);
LIBINT2_REALTYPE fp3;
fp3 = fp420;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp458;
LIBINT2_REALTYPE fp456;
fp456 = libint2::fma_plus(inteval->WP_x[vi], fp444, fp457);
LIBINT2_REALTYPE fp455;
LIBINT2_REALTYPE fp453;
fp453 = libint2::fma_plus(inteval->WP_x[vi], fp441, fp454);
LIBINT2_REALTYPE fp471;
LIBINT2_REALTYPE fp470;
fp470 = libint2::fma_minus(inteval->roz[vi], fp453, fp456);
LIBINT2_REALTYPE fp469;
fp469 = fp600 * fp470;
LIBINT2_REALTYPE fp472;
LIBINT2_REALTYPE fp468;
fp468 = libint2::fma_minus(inteval->WP_x[vi], fp459, fp469);
LIBINT2_REALTYPE fp466;
fp466 = fp468 + fp467;
LIBINT2_REALTYPE fp2;
fp2 = fp466;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp506;
LIBINT2_REALTYPE fp504;
fp504 = libint2::fma_plus(inteval->WP_x[vi], fp492, fp505);
LIBINT2_REALTYPE fp503;
LIBINT2_REALTYPE fp501;
fp501 = libint2::fma_plus(inteval->WP_x[vi], fp489, fp502);
LIBINT2_REALTYPE fp519;
LIBINT2_REALTYPE fp518;
fp518 = libint2::fma_minus(inteval->roz[vi], fp501, fp504);
LIBINT2_REALTYPE fp517;
fp517 = fp600 * fp518;
LIBINT2_REALTYPE fp520;
LIBINT2_REALTYPE fp516;
fp516 = libint2::fma_minus(inteval->WP_x[vi], fp507, fp517);
LIBINT2_REALTYPE fp514;
fp514 = fp516 + fp515;
LIBINT2_REALTYPE fp1;
fp1 = fp514;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp594;
fp594 = fp595 * fp574;
LIBINT2_REALTYPE fp583;
fp583 = fp595 * fp534;
LIBINT2_REALTYPE fp584;
LIBINT2_REALTYPE fp582;
fp582 = libint2::fma_plus(inteval->WP_x[vi], fp563, fp583);
LIBINT2_REALTYPE fp580;
fp580 = fp595 * fp531;
LIBINT2_REALTYPE fp581;
LIBINT2_REALTYPE fp579;
fp579 = libint2::fma_plus(inteval->WP_x[vi], fp556, fp580);
LIBINT2_REALTYPE fp599;
LIBINT2_REALTYPE fp598;
fp598 = libint2::fma_minus(inteval->roz[vi], fp579, fp582);
LIBINT2_REALTYPE fp597;
fp597 = fp600 * fp598;
LIBINT2_REALTYPE fp601;
LIBINT2_REALTYPE fp596;
fp596 = libint2::fma_minus(inteval->WP_x[vi], fp585, fp597);
LIBINT2_REALTYPE fp593;
fp593 = fp596 + fp594;
LIBINT2_REALTYPE fp0;
fp0 = fp593;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 602 */
}

#ifdef __cplusplus
};
#endif