<!--
Compile :
    pandoc -f markdown notes/notes.md -t latex -o notes.pdf

Notes:
    1. http://lierdakil.github.io/pandoc-crossref/
-->


<!--
    YAML section
-->
---
title: Notes Modifying the R's TDA Package
author: Ali Snedden
date: 2021-04-06
abstract: These are my notes on using the R [TDA package](https://cran.r-project.org/web/packages/TDA/vignettes/article.pdf). I'm not a topologist, so there is some reading involved.
...
---
header-includes:
  - \hypersetup{colorlinks=true,
            urlcolor=blue,
            pdfborderstyle={/S/U/W 1}}
---
\definecolor{codegray}{gray}{0.9}
\newcommand{\code}[1]{\colorbox{codegray}{\texttt{#1}}}

\maketitle
\tableofcontents
\pagebreak

To Edit Repo Name
==================================
1. Change TDA -> TDA.long in NAMESPACE and DESCRIPTION
#. Run Rcpp::compileAttributes()


Convert files to use longs instead of ints 
==================================
1. Get list of files of interest
    a) grep -rl int ~/Code/R/TDA/ | grep -v boost | grep -v phat | grep -v gudhi | grep -v CGAL | grep -v Rd | grep -v "\.R$"
        #. DESCRIPTION
        #. NEWS
        #. MD5
        #. vignettes/article.Rnw
        #. vignettes/biblio.bib
        #. inst/doc/article.Rnw
        #. NAMESPACE
        #. README.md
        #. .git/hooks/fsmonitor-watchman.sample
        #. .git/hooks/pre-commit.sample
        #. .git/hooks/update.sample
        #. .git/hooks/pre-rebase.sample
        #. .git/hooks/prepare-commit-msg.sample
        #. .git/objects/pack/pack-c0818db4c6043d34fb3f6470042753eacf0c4524.pack
        #. .git/index
        #. DONE : src/diag.cpp
        #. DONE : src/kde.h
        #. DONE : src/alphaShape.h
        #. N/A  : src/geometry/kinetic-sort.h
        #. DONE : src/geometry/linear-kernel.h
        #. N/A  : src/geometry/NOTES
        #. DONE : src/geometry/polynomial.hpp
        #. DONE : src/geometry/simulator.h
        #. DONE : src/geometry/distances.h
        #. DONE : src/geometry/euclidean.hpp
        #. DONE : src/geometry/simulator.hpp
        #. src/geometry/Arbitdistance.h
        #. src/geometry/l2distance.h
        #. src/geometry/weighted-cechdistance.h
        #. src/geometry/polynomial.h
        #. src/geometry/euclidean.h
        #. src/geometry/weighted-l2distance.h
        #. src/RcppExports.cpp
        #. src/utilities/log.h
        #. src/utilities/timer.h
        #. src/utilities/circular_list.h
        #. src/utilities/containers.h
        #. src/utilities/consistencylist.hpp
        #. src/utilities/indirect.h
        #. src/utilities/orderlist.h
        #. src/utilities/property-maps.h
        #. src/utilities/counter.h
        #. src/utilities/eventqueue.h
        #. src/utilities/types.h
        #. src/utilities/binaryheap.h
        #. src/utilities/consistencylist.h
        #. src/utilities/munkres/munkres.h
        #. src/utilities/munkres/matrix.h
        #. src/utilities/munkres/munkres.cpp
        #. src/utilities/munkres/matrix.hpp
        #. src/grid.h
        #. src/topology/order.h
        #. src/topology/dynamic-persistence.h
        #. src/topology/chain.h
        #. src/topology/filtration.h
        #. src/topology/image-zigzag-persistence.h
        #. src/topology/cycles.h
        #. src/topology/weighted-rips.h
        #. src/topology/persistence-diagram.h
        #. src/topology/field-arithmetic.h
        #. src/topology/simplex.h
        #. src/topology/chain.hpp
        #. src/topology/zigzag-persistence.h
        #. src/topology/vineyard.h
        #. src/topology/dynamic-persistence.hpp
        #. src/topology/persistence-diagram.hpp
        #. src/topology/cohomology-persistence.h
        #. src/topology/static-persistence.h
        #. src/alphaComplex.h
        #. src/rips.h
        #. src/tdautils/typecastUtils.h
        #. src/tdautils/gridUtils.h
        #. src/tdautils/filtrationDiag.h
        #. src/tdautils/dionysusUtils.h
        #. src/tdautils/kernelUtils.h
        #. src/tdautils/ripsArbit.h
        #. src/tdautils/ripsL2.h
        #. src/tdautils/cgalUtils.h
    #) Commands to replace (in order)
        #. %s/unsigned int/unsigned long/gc
        #. %s/unsigned/unsigned long/gc
        #. %s/int/long/gc
