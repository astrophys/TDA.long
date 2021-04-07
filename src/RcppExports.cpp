// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// GridFiltration
Rcpp::List GridFiltration(const Rcpp::NumericVector& FUNvalues, const Rcpp::IntegerVector& gridDim, const int maxdimension, const std::string& decomposition, const bool printProgress);
RcppExport SEXP _TDA_long_GridFiltration(SEXP FUNvaluesSEXP, SEXP gridDimSEXP, SEXP maxdimensionSEXP, SEXP decompositionSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type FUNvalues(FUNvaluesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type gridDim(gridDimSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type decomposition(decompositionSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(GridFiltration(FUNvalues, gridDim, maxdimension, decomposition, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// GridDiag
Rcpp::List GridDiag(const Rcpp::NumericVector& FUNvalues, const Rcpp::IntegerVector& gridDim, const int maxdimension, const std::string& decomposition, const std::string& library, const bool location, const bool printProgress);
RcppExport SEXP _TDA_long_GridDiag(SEXP FUNvaluesSEXP, SEXP gridDimSEXP, SEXP maxdimensionSEXP, SEXP decompositionSEXP, SEXP librarySEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type FUNvalues(FUNvaluesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type gridDim(gridDimSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type decomposition(decompositionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(GridDiag(FUNvalues, gridDim, maxdimension, decomposition, library, location, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// Bottleneck
double Bottleneck(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2);
RcppExport SEXP _TDA_long_Bottleneck(SEXP Diag1SEXP, SEXP Diag2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    rcpp_result_gen = Rcpp::wrap(Bottleneck(Diag1, Diag2));
    return rcpp_result_gen;
END_RCPP
}
// Wasserstein
double Wasserstein(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2, const int p);
RcppExport SEXP _TDA_long_Wasserstein(SEXP Diag1SEXP, SEXP Diag2SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(Wasserstein(Diag1, Diag2, p));
    return rcpp_result_gen;
END_RCPP
}
// Kde
Rcpp::NumericVector Kde(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const std::string& kertype, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP _TDA_long_Kde(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP kertypeSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type kertype(kertypeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(Kde(X, Grid, h, kertype, weight, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// KdeDist
Rcpp::NumericVector KdeDist(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP _TDA_long_KdeDist(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(KdeDist(X, Grid, h, weight, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// Dtm
Rcpp::NumericVector Dtm(const Rcpp::NumericMatrix& knnDistance, const double weightBound, const double r);
RcppExport SEXP _TDA_long_Dtm(SEXP knnDistanceSEXP, SEXP weightBoundSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnDistance(knnDistanceSEXP);
    Rcpp::traits::input_parameter< const double >::type weightBound(weightBoundSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(Dtm(knnDistance, weightBound, r));
    return rcpp_result_gen;
END_RCPP
}
// DtmWeight
Rcpp::NumericVector DtmWeight(const Rcpp::NumericMatrix& knnDistance, const double weightBound, const double r, const Rcpp::NumericMatrix& knnIndex, const Rcpp::NumericVector& weight);
RcppExport SEXP _TDA_long_DtmWeight(SEXP knnDistanceSEXP, SEXP weightBoundSEXP, SEXP rSEXP, SEXP knnIndexSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnDistance(knnDistanceSEXP);
    Rcpp::traits::input_parameter< const double >::type weightBound(weightBoundSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnIndex(knnIndexSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    rcpp_result_gen = Rcpp::wrap(DtmWeight(knnDistance, weightBound, r, knnIndex, weight));
    return rcpp_result_gen;
END_RCPP
}
// FiltrationDiag
Rcpp::List FiltrationDiag(const Rcpp::List& filtration, const int maxdimension, const std::string& library, const bool location, const bool printProgress);
RcppExport SEXP _TDA_long_FiltrationDiag(SEXP filtrationSEXP, SEXP maxdimensionSEXP, SEXP librarySEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type filtration(filtrationSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(FiltrationDiag(filtration, maxdimension, library, location, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// FunFiltration
Rcpp::List FunFiltration(const Rcpp::NumericVector& FUNvalues, const Rcpp::List& cmplx);
RcppExport SEXP _TDA_long_FunFiltration(SEXP FUNvaluesSEXP, SEXP cmplxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type FUNvalues(FUNvaluesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type cmplx(cmplxSEXP);
    rcpp_result_gen = Rcpp::wrap(FunFiltration(FUNvalues, cmplx));
    return rcpp_result_gen;
END_RCPP
}
// RipsFiltration
Rcpp::List RipsFiltration(const Rcpp::NumericMatrix& X, const int maxdimension, const double maxscale, const std::string& dist, const std::string& library, const bool printProgress);
RcppExport SEXP _TDA_long_RipsFiltration(SEXP XSEXP, SEXP maxdimensionSEXP, SEXP maxscaleSEXP, SEXP distSEXP, SEXP librarySEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const double >::type maxscale(maxscaleSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(RipsFiltration(X, maxdimension, maxscale, dist, library, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// RipsDiag
Rcpp::List RipsDiag(const Rcpp::NumericMatrix& X, const int maxdimension, const double maxscale, const std::string& dist, const std::string& libraryFiltration, const std::string& libraryDiag, const bool location, const bool printProgress);
RcppExport SEXP _TDA_long_RipsDiag(SEXP XSEXP, SEXP maxdimensionSEXP, SEXP maxscaleSEXP, SEXP distSEXP, SEXP libraryFiltrationSEXP, SEXP libraryDiagSEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const double >::type maxscale(maxscaleSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libraryFiltration(libraryFiltrationSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libraryDiag(libraryDiagSEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(RipsDiag(X, maxdimension, maxscale, dist, libraryFiltration, libraryDiag, location, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// AlphaShapeFiltration
Rcpp::List AlphaShapeFiltration(const Rcpp::NumericMatrix& X, const bool printProgress);
RcppExport SEXP _TDA_long_AlphaShapeFiltration(SEXP XSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(AlphaShapeFiltration(X, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// AlphaShapeDiag
Rcpp::List AlphaShapeDiag(const Rcpp::NumericMatrix& X, const int maxdimension, const std::string& libraryDiag, const bool location, const bool printProgress);
RcppExport SEXP _TDA_long_AlphaShapeDiag(SEXP XSEXP, SEXP maxdimensionSEXP, SEXP libraryDiagSEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libraryDiag(libraryDiagSEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(AlphaShapeDiag(X, maxdimension, libraryDiag, location, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// AlphaComplexFiltration
Rcpp::List AlphaComplexFiltration(const Rcpp::NumericMatrix& X, const bool printProgress);
RcppExport SEXP _TDA_long_AlphaComplexFiltration(SEXP XSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(AlphaComplexFiltration(X, printProgress));
    return rcpp_result_gen;
END_RCPP
}
// AlphaComplexDiag
Rcpp::List AlphaComplexDiag(const Rcpp::NumericMatrix& X, const int maxdimension, const std::string& libraryDiag, const bool location, const bool printProgress);
RcppExport SEXP _TDA_long_AlphaComplexDiag(SEXP XSEXP, SEXP maxdimensionSEXP, SEXP libraryDiagSEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libraryDiag(libraryDiagSEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(AlphaComplexDiag(X, maxdimension, libraryDiag, location, printProgress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TDA_long_GridFiltration", (DL_FUNC) &_TDA_long_GridFiltration, 5},
    {"_TDA_long_GridDiag", (DL_FUNC) &_TDA_long_GridDiag, 7},
    {"_TDA_long_Bottleneck", (DL_FUNC) &_TDA_long_Bottleneck, 2},
    {"_TDA_long_Wasserstein", (DL_FUNC) &_TDA_long_Wasserstein, 3},
    {"_TDA_long_Kde", (DL_FUNC) &_TDA_long_Kde, 6},
    {"_TDA_long_KdeDist", (DL_FUNC) &_TDA_long_KdeDist, 5},
    {"_TDA_long_Dtm", (DL_FUNC) &_TDA_long_Dtm, 3},
    {"_TDA_long_DtmWeight", (DL_FUNC) &_TDA_long_DtmWeight, 5},
    {"_TDA_long_FiltrationDiag", (DL_FUNC) &_TDA_long_FiltrationDiag, 5},
    {"_TDA_long_FunFiltration", (DL_FUNC) &_TDA_long_FunFiltration, 2},
    {"_TDA_long_RipsFiltration", (DL_FUNC) &_TDA_long_RipsFiltration, 6},
    {"_TDA_long_RipsDiag", (DL_FUNC) &_TDA_long_RipsDiag, 8},
    {"_TDA_long_AlphaShapeFiltration", (DL_FUNC) &_TDA_long_AlphaShapeFiltration, 2},
    {"_TDA_long_AlphaShapeDiag", (DL_FUNC) &_TDA_long_AlphaShapeDiag, 5},
    {"_TDA_long_AlphaComplexFiltration", (DL_FUNC) &_TDA_long_AlphaComplexFiltration, 2},
    {"_TDA_long_AlphaComplexDiag", (DL_FUNC) &_TDA_long_AlphaComplexDiag, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_TDA_long(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
