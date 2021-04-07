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


