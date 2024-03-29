// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/isqg.h"
#include <Rcpp.h>

using namespace Rcpp;

// standard_meiosis
MPtr standard_meiosis();
RcppExport SEXP _isqg_standard_meiosis() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(standard_meiosis());
    return rcpp_result_gen;
END_RCPP
}
// gamete_ctor
Codes gamete_ctor(int number, isqg::seamless::Trap<Specie> spc);
RcppExport SEXP _isqg_gamete_ctor(SEXP numberSEXP, SEXP spcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type number(numberSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type spc(spcSEXP);
    rcpp_result_gen = Rcpp::wrap(gamete_ctor(number, spc));
    return rcpp_result_gen;
END_RCPP
}
// specie_cus_ctor
Specie specie_cus_ctor(Maps input, Names snps, Spots chrs, Map loci, Spots index, Spots lwr, Spots upr, MPtr custom);
RcppExport SEXP _isqg_specie_cus_ctor(SEXP inputSEXP, SEXP snpsSEXP, SEXP chrsSEXP, SEXP lociSEXP, SEXP indexSEXP, SEXP lwrSEXP, SEXP uprSEXP, SEXP customSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Maps >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Names >::type snps(snpsSEXP);
    Rcpp::traits::input_parameter< Spots >::type chrs(chrsSEXP);
    Rcpp::traits::input_parameter< Map >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< Spots >::type index(indexSEXP);
    Rcpp::traits::input_parameter< Spots >::type lwr(lwrSEXP);
    Rcpp::traits::input_parameter< Spots >::type upr(uprSEXP);
    Rcpp::traits::input_parameter< MPtr >::type custom(customSEXP);
    rcpp_result_gen = Rcpp::wrap(specie_cus_ctor(input, snps, chrs, loci, index, lwr, upr, custom));
    return rcpp_result_gen;
END_RCPP
}
// specie_get_snps
Names specie_get_snps(isqg::seamless::Trap<Specie> spc);
RcppExport SEXP _isqg_specie_get_snps(SEXP spcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type spc(spcSEXP);
    rcpp_result_gen = Rcpp::wrap(specie_get_snps(spc));
    return rcpp_result_gen;
END_RCPP
}
// specie_get_chrs
Spots specie_get_chrs(isqg::seamless::Trap<Specie> spc);
RcppExport SEXP _isqg_specie_get_chrs(SEXP spcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type spc(spcSEXP);
    rcpp_result_gen = Rcpp::wrap(specie_get_chrs(spc));
    return rcpp_result_gen;
END_RCPP
}
// specie_get_loci
Map specie_get_loci(isqg::seamless::Trap<Specie> spc);
RcppExport SEXP _isqg_specie_get_loci(SEXP spcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type spc(spcSEXP);
    rcpp_result_gen = Rcpp::wrap(specie_get_loci(spc));
    return rcpp_result_gen;
END_RCPP
}
// genotype_num_ctor
Genotype genotype_num_ctor(isqg::seamless::Trap<Specimen> gid);
RcppExport SEXP _isqg_genotype_num_ctor(SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    rcpp_result_gen = Rcpp::wrap(genotype_num_ctor(gid));
    return rcpp_result_gen;
END_RCPP
}
// genotype_cod_ctor
Codes genotype_cod_ctor(isqg::seamless::Trap<Specimen> gid);
RcppExport SEXP _isqg_genotype_cod_ctor(SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    rcpp_result_gen = Rcpp::wrap(genotype_cod_ctor(gid));
    return rcpp_result_gen;
END_RCPP
}
// specimen_get_snps
Names specimen_get_snps(isqg::seamless::Trap<Specimen> gid);
RcppExport SEXP _isqg_specimen_get_snps(SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    rcpp_result_gen = Rcpp::wrap(specimen_get_snps(gid));
    return rcpp_result_gen;
END_RCPP
}
// specimen_look_num
int specimen_look_num(isqg::seamless::Trap<Specimen> gid, Code snp);
RcppExport SEXP _isqg_specimen_look_num(SEXP gidSEXP, SEXP snpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    Rcpp::traits::input_parameter< Code >::type snp(snpSEXP);
    rcpp_result_gen = Rcpp::wrap(specimen_look_num(gid, snp));
    return rcpp_result_gen;
END_RCPP
}
// specimen_look_cod
Code specimen_look_cod(isqg::seamless::Trap<Specimen> gid, Code snp);
RcppExport SEXP _isqg_specimen_look_cod(SEXP gidSEXP, SEXP snpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    Rcpp::traits::input_parameter< Code >::type snp(snpSEXP);
    rcpp_result_gen = Rcpp::wrap(specimen_look_cod(gid, snp));
    return rcpp_result_gen;
END_RCPP
}
// specimen_mirror
Specimen specimen_mirror(isqg::seamless::Trap<Specimen> gid);
RcppExport SEXP _isqg_specimen_mirror(SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    rcpp_result_gen = Rcpp::wrap(specimen_mirror(gid));
    return rcpp_result_gen;
END_RCPP
}
// founder
Specimen founder(isqg::seamless::Trap<Specie> origin, Code code);
RcppExport SEXP _isqg_founder(SEXP originSEXP, SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< Code >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(founder(origin, code));
    return rcpp_result_gen;
END_RCPP
}
// import
Specimen import(isqg::seamless::Trap<Specie> origin, Code cis, Code trans);
RcppExport SEXP _isqg_import(SEXP originSEXP, SEXP cisSEXP, SEXP transSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< Code >::type cis(cisSEXP);
    Rcpp::traits::input_parameter< Code >::type trans(transSEXP);
    rcpp_result_gen = Rcpp::wrap(import(origin, cis, trans));
    return rcpp_result_gen;
END_RCPP
}
// cross
Population cross(int number, isqg::seamless::Trap<Specimen> female, isqg::seamless::Trap<Specimen> male);
RcppExport SEXP _isqg_cross(SEXP numberSEXP, SEXP femaleSEXP, SEXP maleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type number(numberSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type female(femaleSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type male(maleSEXP);
    rcpp_result_gen = Rcpp::wrap(cross(number, female, male));
    return rcpp_result_gen;
END_RCPP
}
// self
Population self(int number, isqg::seamless::Trap<Specimen> individual);
RcppExport SEXP _isqg_self(SEXP numberSEXP, SEXP individualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type number(numberSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type individual(individualSEXP);
    rcpp_result_gen = Rcpp::wrap(self(number, individual));
    return rcpp_result_gen;
END_RCPP
}
// dh
Population dh(int number, isqg::seamless::Trap<Specimen> individual);
RcppExport SEXP _isqg_dh(SEXP numberSEXP, SEXP individualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type number(numberSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type individual(individualSEXP);
    rcpp_result_gen = Rcpp::wrap(dh(number, individual));
    return rcpp_result_gen;
END_RCPP
}
// bar
int bar(std::vector<int> p, std::vector<int> i, std::vector<int> j, SEXP s);
RcppExport SEXP _isqg_bar(SEXP pSEXP, SEXP iSEXP, SEXP jSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type i(iSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type j(jSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(bar(p, i, j, s));
    return rcpp_result_gen;
END_RCPP
}
// foo
int foo(int i);
RcppExport SEXP _isqg_foo(SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(foo(i));
    return rcpp_result_gen;
END_RCPP
}
// trait_infty_ctor
Trait trait_infty_ctor(isqg::seamless::Trap<Specie> origin, Codes loci, double mu, double add, double dom);
RcppExport SEXP _isqg_trait_infty_ctor(SEXP originSEXP, SEXP lociSEXP, SEXP muSEXP, SEXP addSEXP, SEXP domSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< Codes >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type add(addSEXP);
    Rcpp::traits::input_parameter< double >::type dom(domSEXP);
    rcpp_result_gen = Rcpp::wrap(trait_infty_ctor(origin, loci, mu, add, dom));
    return rcpp_result_gen;
END_RCPP
}
// trait_quant_ctor
Trait trait_quant_ctor(isqg::seamless::Trap<Specie> origin, Codes loci, double mu, Maps add, Maps dom);
RcppExport SEXP _isqg_trait_quant_ctor(SEXP originSEXP, SEXP lociSEXP, SEXP muSEXP, SEXP addSEXP, SEXP domSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< Codes >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Maps >::type add(addSEXP);
    Rcpp::traits::input_parameter< Maps >::type dom(domSEXP);
    rcpp_result_gen = Rcpp::wrap(trait_quant_ctor(origin, loci, mu, add, dom));
    return rcpp_result_gen;
END_RCPP
}
// trait_custm_ctor
Trait trait_custm_ctor(isqg::seamless::Trap<Specie> origin, APtr extension, SEXP auxiliar);
RcppExport SEXP _isqg_trait_custm_ctor(SEXP originSEXP, SEXP extensionSEXP, SEXP auxiliarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specie> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< APtr >::type extension(extensionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type auxiliar(auxiliarSEXP);
    rcpp_result_gen = Rcpp::wrap(trait_custm_ctor(origin, extension, auxiliar));
    return rcpp_result_gen;
END_RCPP
}
// trait_alpha_eval
double trait_alpha_eval(isqg::seamless::Trap<Trait> trait, isqg::seamless::Trap<Specimen> gid);
RcppExport SEXP _isqg_trait_alpha_eval(SEXP traitSEXP, SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Trait> >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< isqg::seamless::Trap<Specimen> >::type gid(gidSEXP);
    rcpp_result_gen = Rcpp::wrap(trait_alpha_eval(trait, gid));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_isqg_standard_meiosis", (DL_FUNC) &_isqg_standard_meiosis, 0},
    {"_isqg_gamete_ctor", (DL_FUNC) &_isqg_gamete_ctor, 2},
    {"_isqg_specie_cus_ctor", (DL_FUNC) &_isqg_specie_cus_ctor, 8},
    {"_isqg_specie_get_snps", (DL_FUNC) &_isqg_specie_get_snps, 1},
    {"_isqg_specie_get_chrs", (DL_FUNC) &_isqg_specie_get_chrs, 1},
    {"_isqg_specie_get_loci", (DL_FUNC) &_isqg_specie_get_loci, 1},
    {"_isqg_genotype_num_ctor", (DL_FUNC) &_isqg_genotype_num_ctor, 1},
    {"_isqg_genotype_cod_ctor", (DL_FUNC) &_isqg_genotype_cod_ctor, 1},
    {"_isqg_specimen_get_snps", (DL_FUNC) &_isqg_specimen_get_snps, 1},
    {"_isqg_specimen_look_num", (DL_FUNC) &_isqg_specimen_look_num, 2},
    {"_isqg_specimen_look_cod", (DL_FUNC) &_isqg_specimen_look_cod, 2},
    {"_isqg_specimen_mirror", (DL_FUNC) &_isqg_specimen_mirror, 1},
    {"_isqg_founder", (DL_FUNC) &_isqg_founder, 2},
    {"_isqg_import", (DL_FUNC) &_isqg_import, 3},
    {"_isqg_cross", (DL_FUNC) &_isqg_cross, 3},
    {"_isqg_self", (DL_FUNC) &_isqg_self, 2},
    {"_isqg_dh", (DL_FUNC) &_isqg_dh, 2},
    {"_isqg_bar", (DL_FUNC) &_isqg_bar, 4},
    {"_isqg_foo", (DL_FUNC) &_isqg_foo, 1},
    {"_isqg_trait_infty_ctor", (DL_FUNC) &_isqg_trait_infty_ctor, 5},
    {"_isqg_trait_quant_ctor", (DL_FUNC) &_isqg_trait_quant_ctor, 5},
    {"_isqg_trait_custm_ctor", (DL_FUNC) &_isqg_trait_custm_ctor, 3},
    {"_isqg_trait_alpha_eval", (DL_FUNC) &_isqg_trait_alpha_eval, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_isqg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
