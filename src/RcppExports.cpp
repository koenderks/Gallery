// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// draw_ant
arma::mat draw_ant(arma::mat X, int iters, int ncolors, int x, int y, std::vector<int> dx, std::vector<int> dy);
RcppExport SEXP _aRtsy_draw_ant(SEXP XSEXP, SEXP itersSEXP, SEXP ncolorsSEXP, SEXP xSEXP, SEXP ySEXP, SEXP dxSEXP, SEXP dySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type ncolors(ncolorsSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dy(dySEXP);
    rcpp_result_gen = Rcpp::wrap(draw_ant(X, iters, ncolors, x, y, dx, dy));
    return rcpp_result_gen;
END_RCPP
}
// iterate_chladni
Rcpp::NumericVector iterate_chladni(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::NumericVector waves);
RcppExport SEXP _aRtsy_iterate_chladni(SEXP xSEXP, SEXP ySEXP, SEXP wavesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type waves(wavesSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_chladni(x, y, waves));
    return rcpp_result_gen;
END_RCPP
}
// draw_circlemap
arma::mat draw_circlemap(arma::mat X, double left, double right, double bottom, double top, int iters);
RcppExport SEXP _aRtsy_draw_circlemap(SEXP XSEXP, SEXP leftSEXP, SEXP rightSEXP, SEXP bottomSEXP, SEXP topSEXP, SEXP itersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type left(leftSEXP);
    Rcpp::traits::input_parameter< double >::type right(rightSEXP);
    Rcpp::traits::input_parameter< double >::type bottom(bottomSEXP);
    Rcpp::traits::input_parameter< double >::type top(topSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_circlemap(X, left, right, bottom, top, iters));
    return rcpp_result_gen;
END_RCPP
}
// get_collatz_sequence
std::vector<int> get_collatz_sequence(int x);
RcppExport SEXP _aRtsy_get_collatz_sequence(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_collatz_sequence(x));
    return rcpp_result_gen;
END_RCPP
}
// draw_collatz
arma::mat draw_collatz(arma::mat empty, std::vector<int> series, double even, double odd);
RcppExport SEXP _aRtsy_draw_collatz(SEXP emptySEXP, SEXP seriesSEXP, SEXP evenSEXP, SEXP oddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type empty(emptySEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type series(seriesSEXP);
    Rcpp::traits::input_parameter< double >::type even(evenSEXP);
    Rcpp::traits::input_parameter< double >::type odd(oddSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_collatz(empty, series, even, odd));
    return rcpp_result_gen;
END_RCPP
}
// iterate_flame
arma::cube iterate_flame(arma::cube canvas, int iterations, int resolution, int edge, bool blend, bool post, bool final, bool extra, arma::mat colors, Rcpp::DoubleVector functions, Rcpp::DoubleVector funcWeights, arma::mat funcPars, Rcpp::DoubleVector variations, arma::mat varWeights, Rcpp::DoubleVector varParams, arma::mat postPars, Rcpp::DoubleVector finalPars, Rcpp::DoubleVector extraPars);
RcppExport SEXP _aRtsy_iterate_flame(SEXP canvasSEXP, SEXP iterationsSEXP, SEXP resolutionSEXP, SEXP edgeSEXP, SEXP blendSEXP, SEXP postSEXP, SEXP finalSEXP, SEXP extraSEXP, SEXP colorsSEXP, SEXP functionsSEXP, SEXP funcWeightsSEXP, SEXP funcParsSEXP, SEXP variationsSEXP, SEXP varWeightsSEXP, SEXP varParamsSEXP, SEXP postParsSEXP, SEXP finalParsSEXP, SEXP extraParsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type canvas(canvasSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< bool >::type blend(blendSEXP);
    Rcpp::traits::input_parameter< bool >::type post(postSEXP);
    Rcpp::traits::input_parameter< bool >::type final(finalSEXP);
    Rcpp::traits::input_parameter< bool >::type extra(extraSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type colors(colorsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type functions(functionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type funcWeights(funcWeightsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type funcPars(funcParsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type variations(variationsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type varWeights(varWeightsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type varParams(varParamsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type postPars(postParsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type finalPars(finalParsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type extraPars(extraParsSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_flame(canvas, iterations, resolution, edge, blend, post, final, extra, colors, functions, funcWeights, funcPars, variations, varWeights, varParams, postPars, finalPars, extraPars));
    return rcpp_result_gen;
END_RCPP
}
// iterate_flow
Rcpp::DataFrame iterate_flow(arma::mat angles, int j, int iters, int left, int right, int top, int bottom, double step);
RcppExport SEXP _aRtsy_iterate_flow(SEXP anglesSEXP, SEXP jSEXP, SEXP itersSEXP, SEXP leftSEXP, SEXP rightSEXP, SEXP topSEXP, SEXP bottomSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type angles(anglesSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type left(leftSEXP);
    Rcpp::traits::input_parameter< int >::type right(rightSEXP);
    Rcpp::traits::input_parameter< int >::type top(topSEXP);
    Rcpp::traits::input_parameter< int >::type bottom(bottomSEXP);
    Rcpp::traits::input_parameter< double >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_flow(angles, j, iters, left, right, top, bottom, step));
    return rcpp_result_gen;
END_RCPP
}
// iterate_maze
Rcpp::DataFrame iterate_maze(arma::mat X, double x, double y);
RcppExport SEXP _aRtsy_iterate_maze(SEXP XSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_maze(X, x, y));
    return rcpp_result_gen;
END_RCPP
}
// iterate_mesh
Rcpp::DataFrame iterate_mesh(int iterations, int start, Rcpp::IntegerVector order, Rcpp::DoubleVector points, Rcpp::DoubleVector centers, Rcpp::DoubleVector radii, Rcpp::DoubleVector increase);
RcppExport SEXP _aRtsy_iterate_mesh(SEXP iterationsSEXP, SEXP startSEXP, SEXP orderSEXP, SEXP pointsSEXP, SEXP centersSEXP, SEXP radiiSEXP, SEXP increaseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type centers(centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type increase(increaseSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_mesh(iterations, start, order, points, centers, radii, increase));
    return rcpp_result_gen;
END_RCPP
}
// get_closest_node
Rcpp::IntegerVector get_closest_node(Rcpp::NumericVector attractor_x, Rcpp::NumericVector attractor_y, Rcpp::NumericVector nodes_x, Rcpp::NumericVector nodes_y, double attraction_distance);
RcppExport SEXP _aRtsy_get_closest_node(SEXP attractor_xSEXP, SEXP attractor_ySEXP, SEXP nodes_xSEXP, SEXP nodes_ySEXP, SEXP attraction_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_x(attractor_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_y(attractor_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_x(nodes_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_y(nodes_ySEXP);
    Rcpp::traits::input_parameter< double >::type attraction_distance(attraction_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_closest_node(attractor_x, attractor_y, nodes_x, nodes_y, attraction_distance));
    return rcpp_result_gen;
END_RCPP
}
// kill_attractors
Rcpp::DataFrame kill_attractors(Rcpp::NumericVector attractor_x, Rcpp::NumericVector attractor_y, Rcpp::NumericVector nodes_x, Rcpp::NumericVector nodes_y, double kill_distance);
RcppExport SEXP _aRtsy_kill_attractors(SEXP attractor_xSEXP, SEXP attractor_ySEXP, SEXP nodes_xSEXP, SEXP nodes_ySEXP, SEXP kill_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_x(attractor_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_y(attractor_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_x(nodes_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_y(nodes_ySEXP);
    Rcpp::traits::input_parameter< double >::type kill_distance(kill_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(kill_attractors(attractor_x, attractor_y, nodes_x, nodes_y, kill_distance));
    return rcpp_result_gen;
END_RCPP
}
// draw_circle
Rcpp::DataFrame draw_circle(double center_x, double center_y, double diameter, int n);
RcppExport SEXP _aRtsy_draw_circle(SEXP center_xSEXP, SEXP center_ySEXP, SEXP diameterSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type center_x(center_xSEXP);
    Rcpp::traits::input_parameter< double >::type center_y(center_ySEXP);
    Rcpp::traits::input_parameter< double >::type diameter(diameterSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_circle(center_x, center_y, diameter, n));
    return rcpp_result_gen;
END_RCPP
}
// get_directions
Rcpp::DataFrame get_directions(Rcpp::NumericVector attractor_x, Rcpp::NumericVector attractor_y, Rcpp::NumericVector nodes_x, Rcpp::NumericVector nodes_y, Rcpp::IntegerVector closest_nodes);
RcppExport SEXP _aRtsy_get_directions(SEXP attractor_xSEXP, SEXP attractor_ySEXP, SEXP nodes_xSEXP, SEXP nodes_ySEXP, SEXP closest_nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_x(attractor_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type attractor_y(attractor_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_x(nodes_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nodes_y(nodes_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type closest_nodes(closest_nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_directions(attractor_x, attractor_y, nodes_x, nodes_y, closest_nodes));
    return rcpp_result_gen;
END_RCPP
}
// iterate_phyllotaxis
Rcpp::DataFrame iterate_phyllotaxis(int iter, double a, double p);
RcppExport SEXP _aRtsy_iterate_phyllotaxis(SEXP iterSEXP, SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_phyllotaxis(iter, a, p));
    return rcpp_result_gen;
END_RCPP
}
// draw_planet
arma::mat draw_planet(arma::mat X, int radius, int xcenter, int ycenter, int threshold, int iterations, double starprob, int ncolors, int colorsused, double fade, int lightright);
RcppExport SEXP _aRtsy_draw_planet(SEXP XSEXP, SEXP radiusSEXP, SEXP xcenterSEXP, SEXP ycenterSEXP, SEXP thresholdSEXP, SEXP iterationsSEXP, SEXP starprobSEXP, SEXP ncolorsSEXP, SEXP colorsusedSEXP, SEXP fadeSEXP, SEXP lightrightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type xcenter(xcenterSEXP);
    Rcpp::traits::input_parameter< int >::type ycenter(ycenterSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< double >::type starprob(starprobSEXP);
    Rcpp::traits::input_parameter< int >::type ncolors(ncolorsSEXP);
    Rcpp::traits::input_parameter< int >::type colorsused(colorsusedSEXP);
    Rcpp::traits::input_parameter< double >::type fade(fadeSEXP);
    Rcpp::traits::input_parameter< int >::type lightright(lightrightSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_planet(X, radius, xcenter, ycenter, threshold, iterations, starprob, ncolors, colorsused, fade, lightright));
    return rcpp_result_gen;
END_RCPP
}
// draw_polylines
arma::mat draw_polylines(arma::mat X, double ratio, int iters, int rows, int cols);
RcppExport SEXP _aRtsy_draw_polylines(SEXP XSEXP, SEXP ratioSEXP, SEXP itersSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_polylines(X, ratio, iters, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// iterate_recaman
Rcpp::IntegerVector iterate_recaman(int n, int start, int increment);
RcppExport SEXP _aRtsy_iterate_recaman(SEXP nSEXP, SEXP startSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_recaman(n, start, increment));
    return rcpp_result_gen;
END_RCPP
}
// draw_splits
Rcpp::DataFrame draw_splits(Rcpp::NumericVector x, Rcpp::NumericVector xend, Rcpp::NumericVector y, Rcpp::NumericVector yend, Rcpp::NumericVector col, double sda, int ncols, int iterations);
RcppExport SEXP _aRtsy_draw_splits(SEXP xSEXP, SEXP xendSEXP, SEXP ySEXP, SEXP yendSEXP, SEXP colSEXP, SEXP sdaSEXP, SEXP ncolsSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xend(xendSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yend(yendSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type col(colSEXP);
    Rcpp::traits::input_parameter< double >::type sda(sdaSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_splits(x, xend, y, yend, col, sda, ncols, iterations));
    return rcpp_result_gen;
END_RCPP
}
// draw_squares
arma::mat draw_squares(arma::mat X, Rcpp::DataFrame neighbors, int s, int cuts, double ratio);
RcppExport SEXP _aRtsy_draw_squares(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP cutsSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type cuts(cutsSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_squares(X, neighbors, s, cuts, ratio));
    return rcpp_result_gen;
END_RCPP
}
// draw_strokes
arma::mat draw_strokes(arma::mat X, Rcpp::DataFrame neighbors, int s, double p);
RcppExport SEXP _aRtsy_draw_strokes(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_strokes(X, neighbors, s, p));
    return rcpp_result_gen;
END_RCPP
}
// draw_turmite
arma::mat draw_turmite(arma::mat X, int iters, int row, int col, double p);
RcppExport SEXP _aRtsy_draw_turmite(SEXP XSEXP, SEXP itersSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_turmite(X, iters, row, col, p));
    return rcpp_result_gen;
END_RCPP
}
// deform
Rcpp::DataFrame deform(Rcpp::DataFrame canvas, int maxdepth, int resolution);
RcppExport SEXP _aRtsy_deform(SEXP canvasSEXP, SEXP maxdepthSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type canvas(canvasSEXP);
    Rcpp::traits::input_parameter< int >::type maxdepth(maxdepthSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(deform(canvas, maxdepth, resolution));
    return rcpp_result_gen;
END_RCPP
}
// c_noise_knn
std::vector<double> c_noise_knn(arma::rowvec x, arma::rowvec y, arma::rowvec z, arma::rowvec newx, arma::rowvec newy, int k, int n);
RcppExport SEXP _aRtsy_c_noise_knn(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP newxSEXP, SEXP newySEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type newy(newySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(c_noise_knn(x, y, z, newx, newy, k, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_aRtsy_draw_ant", (DL_FUNC) &_aRtsy_draw_ant, 7},
    {"_aRtsy_iterate_chladni", (DL_FUNC) &_aRtsy_iterate_chladni, 3},
    {"_aRtsy_draw_circlemap", (DL_FUNC) &_aRtsy_draw_circlemap, 6},
    {"_aRtsy_get_collatz_sequence", (DL_FUNC) &_aRtsy_get_collatz_sequence, 1},
    {"_aRtsy_draw_collatz", (DL_FUNC) &_aRtsy_draw_collatz, 4},
    {"_aRtsy_iterate_flame", (DL_FUNC) &_aRtsy_iterate_flame, 18},
    {"_aRtsy_iterate_flow", (DL_FUNC) &_aRtsy_iterate_flow, 8},
    {"_aRtsy_iterate_maze", (DL_FUNC) &_aRtsy_iterate_maze, 3},
    {"_aRtsy_iterate_mesh", (DL_FUNC) &_aRtsy_iterate_mesh, 7},
    {"_aRtsy_get_closest_node", (DL_FUNC) &_aRtsy_get_closest_node, 5},
    {"_aRtsy_kill_attractors", (DL_FUNC) &_aRtsy_kill_attractors, 5},
    {"_aRtsy_draw_circle", (DL_FUNC) &_aRtsy_draw_circle, 4},
    {"_aRtsy_get_directions", (DL_FUNC) &_aRtsy_get_directions, 5},
    {"_aRtsy_iterate_phyllotaxis", (DL_FUNC) &_aRtsy_iterate_phyllotaxis, 3},
    {"_aRtsy_draw_planet", (DL_FUNC) &_aRtsy_draw_planet, 11},
    {"_aRtsy_draw_polylines", (DL_FUNC) &_aRtsy_draw_polylines, 5},
    {"_aRtsy_iterate_recaman", (DL_FUNC) &_aRtsy_iterate_recaman, 3},
    {"_aRtsy_draw_splits", (DL_FUNC) &_aRtsy_draw_splits, 8},
    {"_aRtsy_draw_squares", (DL_FUNC) &_aRtsy_draw_squares, 5},
    {"_aRtsy_draw_strokes", (DL_FUNC) &_aRtsy_draw_strokes, 4},
    {"_aRtsy_draw_turmite", (DL_FUNC) &_aRtsy_draw_turmite, 5},
    {"_aRtsy_deform", (DL_FUNC) &_aRtsy_deform, 3},
    {"_aRtsy_c_noise_knn", (DL_FUNC) &_aRtsy_c_noise_knn, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_aRtsy(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
