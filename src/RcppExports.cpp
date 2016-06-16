// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// GridDiag
Rcpp::List GridDiag(const Rcpp::NumericVector& FUNvalues, const Rcpp::IntegerVector& gridDim, const int maxdimension, const std::string& decomposition, const std::string& library, const bool location, const bool printProgress);
RcppExport SEXP TDA_GridDiag(SEXP FUNvaluesSEXP, SEXP gridDimSEXP, SEXP maxdimensionSEXP, SEXP decompositionSEXP, SEXP librarySEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type FUNvalues(FUNvaluesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type gridDim(gridDimSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type decomposition(decompositionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(GridDiag(FUNvalues, gridDim, maxdimension, decomposition, library, location, printProgress));
    return __result;
END_RCPP
}
// Bottleneck
double Bottleneck(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2);
RcppExport SEXP TDA_Bottleneck(SEXP Diag1SEXP, SEXP Diag2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    __result = Rcpp::wrap(Bottleneck(Diag1, Diag2));
    return __result;
END_RCPP
}
// Wasserstein
double Wasserstein(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2, const int p);
RcppExport SEXP TDA_Wasserstein(SEXP Diag1SEXP, SEXP Diag2SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    __result = Rcpp::wrap(Wasserstein(Diag1, Diag2, p));
    return __result;
END_RCPP
}
// Kde
Rcpp::NumericVector Kde(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP TDA_Kde(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(Kde(X, Grid, h, weight, printProgress));
    return __result;
END_RCPP
}
// KdeDist
Rcpp::NumericVector KdeDist(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP TDA_KdeDist(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(KdeDist(X, Grid, h, weight, printProgress));
    return __result;
END_RCPP
}
// Dtm
Rcpp::NumericVector Dtm(const Rcpp::NumericMatrix& knnDistance, const double weightBound, const double r);
RcppExport SEXP TDA_Dtm(SEXP knnDistanceSEXP, SEXP weightBoundSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnDistance(knnDistanceSEXP);
    Rcpp::traits::input_parameter< const double >::type weightBound(weightBoundSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    __result = Rcpp::wrap(Dtm(knnDistance, weightBound, r));
    return __result;
END_RCPP
}
// DtmWeight
Rcpp::NumericVector DtmWeight(const Rcpp::NumericMatrix& knnDistance, const double weightBound, const double r, const Rcpp::NumericMatrix& knnIndex, const Rcpp::NumericVector& weight);
RcppExport SEXP TDA_DtmWeight(SEXP knnDistanceSEXP, SEXP weightBoundSEXP, SEXP rSEXP, SEXP knnIndexSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnDistance(knnDistanceSEXP);
    Rcpp::traits::input_parameter< const double >::type weightBound(weightBoundSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnIndex(knnIndexSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    __result = Rcpp::wrap(DtmWeight(knnDistance, weightBound, r, knnIndex, weight));
    return __result;
END_RCPP
}
// RipsDiag
Rcpp::List RipsDiag(const Rcpp::NumericMatrix& X, const int maxdimension, const double maxscale, const std::string& dist, const std::string& library, const bool location, const bool printProgress);
RcppExport SEXP TDA_RipsDiag(SEXP XSEXP, SEXP maxdimensionSEXP, SEXP maxscaleSEXP, SEXP distSEXP, SEXP librarySEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const double >::type maxscale(maxscaleSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(RipsDiag(X, maxdimension, maxscale, dist, library, location, printProgress));
    return __result;
END_RCPP
}
// AlphaShapeDiagGUDHI
Rcpp::List AlphaShapeDiagGUDHI(const Rcpp::NumericMatrix& X, const bool printProgress);
RcppExport SEXP TDA_AlphaShapeDiagGUDHI(SEXP XSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(AlphaShapeDiagGUDHI(X, printProgress));
    return __result;
END_RCPP
}
// AlphaComplexDiagGUDHI
Rcpp::List AlphaComplexDiagGUDHI(const Rcpp::NumericMatrix& X, const bool printProgress);
RcppExport SEXP TDA_AlphaComplexDiagGUDHI(SEXP XSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(AlphaComplexDiagGUDHI(X, printProgress));
    return __result;
END_RCPP
}
