# TDA.long - a version of the [TDA](https://cran.r-project.org/web/packages/TDA/index.html)  package using longs instead of ints.
Author : [Fasy et al. (2014)](https://projecteuclid.org/journals/annals-of-statistics/volume-42/issue-6/Confidence-sets-for-persistence-diagrams/10.1214/14-AOS1252.full) and [Chazal et al.](https://dl.acm.org/doi/10.1145/2582112.2582128)
License: 
    GUDHI: MIT + ['The GUDHI License'](https://gudhi.inria.fr/licensing/)
    Dionysus: GPL-3
    PHAT: GPL-3
    Boost/BH: ['Boost Software Licence'](https://www.boost.org/LICENSE_1_0.txt)
    CGAL: GPL-3 | LGPL-3 + ['The CGAL Licence'](https://www.cgal.org/license.html)
    Ali's code : MIT

## Purpose:
1. I am using this code to run very large biofilm samples (e.g. 512x512x46).
Throughout the code ints are used.
This is problematic b/c unsigned ints are limited in size to 2^32.
Given the size of my samples, I need to use longs to prevent the overflow of ints in the code.
Hence I forked the TDA package from the [CRAN repo](https://github.com/cran/TDA) to accomplish this.

## Installation :
Steps :
0. `git clone https://github.com/astrophys/TDA.long.git`
1. `cd TDA.long`
2. `install.packages("devtools")`
3. `devtools::install("path/to/TDA.long")`

## Running :

## Notes :
