// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// adult_weight_wrapper
List adult_weight_wrapper(NumericVector bw, NumericVector ht, NumericVector age, NumericVector sex, NumericMatrix EIchange, NumericMatrix NAchange, NumericVector PAL, NumericVector pcarb_base, NumericVector pcarb, double days);
RcppExport SEXP bw_adult_weight_wrapper(SEXP bwSEXP, SEXP htSEXP, SEXP ageSEXP, SEXP sexSEXP, SEXP EIchangeSEXP, SEXP NAchangeSEXP, SEXP PALSEXP, SEXP pcarb_baseSEXP, SEXP pcarbSEXP, SEXP daysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ht(htSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type EIchange(EIchangeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NAchange(NAchangeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PAL(PALSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb_base(pcarb_baseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb(pcarbSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    rcpp_result_gen = Rcpp::wrap(adult_weight_wrapper(bw, ht, age, sex, EIchange, NAchange, PAL, pcarb_base, pcarb, days));
    return rcpp_result_gen;
END_RCPP
}
// adult_weight_wrapper_EI
List adult_weight_wrapper_EI(NumericVector bw, NumericVector ht, NumericVector age, NumericVector sex, NumericMatrix EIchange, NumericMatrix NAchange, NumericVector PAL, NumericVector pcarb_base, NumericVector pcarb, NumericVector input_EIntake, double days);
RcppExport SEXP bw_adult_weight_wrapper_EI(SEXP bwSEXP, SEXP htSEXP, SEXP ageSEXP, SEXP sexSEXP, SEXP EIchangeSEXP, SEXP NAchangeSEXP, SEXP PALSEXP, SEXP pcarb_baseSEXP, SEXP pcarbSEXP, SEXP input_EIntakeSEXP, SEXP daysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ht(htSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type EIchange(EIchangeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NAchange(NAchangeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PAL(PALSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb_base(pcarb_baseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb(pcarbSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type input_EIntake(input_EIntakeSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    rcpp_result_gen = Rcpp::wrap(adult_weight_wrapper_EI(bw, ht, age, sex, EIchange, NAchange, PAL, pcarb_base, pcarb, input_EIntake, days));
    return rcpp_result_gen;
END_RCPP
}
// child_weight_wrapper
List child_weight_wrapper(NumericVector age, NumericVector sex, NumericVector FFM, NumericVector FM, double days);
RcppExport SEXP bw_child_weight_wrapper(SEXP ageSEXP, SEXP sexSEXP, SEXP FFMSEXP, SEXP FMSEXP, SEXP daysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FFM(FFMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FM(FMSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    rcpp_result_gen = Rcpp::wrap(child_weight_wrapper(age, sex, FFM, FM, days));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"bw_adult_weight_wrapper", (DL_FUNC) &bw_adult_weight_wrapper, 10},
    {"bw_adult_weight_wrapper_EI", (DL_FUNC) &bw_adult_weight_wrapper_EI, 11},
    {"bw_child_weight_wrapper", (DL_FUNC) &bw_child_weight_wrapper, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_bw(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
