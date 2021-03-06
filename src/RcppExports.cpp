// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// knox
List knox(NumericVector x, NumericVector y, NumericVector time, double sigma, double tau);
RcppExport SEXP knox_knox(SEXP xSEXP, SEXP ySEXP, SEXP timeSEXP, SEXP sigmaSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    __result = Rcpp::wrap(knox(x, y, time, sigma, tau));
    return __result;
END_RCPP
}
// knox_mc
List knox_mc(NumericVector x, NumericVector y, NumericVector time, double sigma, double tau, int perm);
RcppExport SEXP knox_knox_mc(SEXP xSEXP, SEXP ySEXP, SEXP timeSEXP, SEXP sigmaSEXP, SEXP tauSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type perm(permSEXP);
    __result = Rcpp::wrap(knox_mc(x, y, time, sigma, tau, perm));
    return __result;
END_RCPP
}
// iknox_mc
List iknox_mc(NumericVector x, NumericVector y, NumericVector time, double sigma, double tau, int perm);
RcppExport SEXP knox_iknox_mc(SEXP xSEXP, SEXP ySEXP, SEXP timeSEXP, SEXP sigmaSEXP, SEXP tauSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type perm(permSEXP);
    __result = Rcpp::wrap(iknox_mc(x, y, time, sigma, tau, perm));
    return __result;
END_RCPP
}
// st_link
DataFrame st_link(NumericVector x, NumericVector y, NumericVector time, double ds, double dt);
RcppExport SEXP knox_st_link(SEXP xSEXP, SEXP ySEXP, SEXP timeSEXP, SEXP dsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type ds(dsSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    __result = Rcpp::wrap(st_link(x, y, time, ds, dt));
    return __result;
END_RCPP
}
