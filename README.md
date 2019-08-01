# openMP_hartreefock
Multithreading of hartree-fock program using openMP API. Uses the libint library and test code "hartree-fock" 

The test code can be found in tests/hartree-fock

Under pi_tests, there are simple openMP codes that I wrote that do not use libint. One uses synchronization, and the other uses PAD to solve the integral of 4.0/(1+x^2) from 0 to 1 equals pi. 

Information about the libint library is below. 

--------------------

Libint - a library for the evaluation of molecular integrals of many-body operators over Gaussian function

- project page: http://libint.valeyev.net/
- e-mail - libint@valeyev.net

See [the wiki](https://github.com/evaleev/libint/wiki) for installation and usage instructions.

Copyright (C) 2004-2018 Edward F. Valeev
=======


