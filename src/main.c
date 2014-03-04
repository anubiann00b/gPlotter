/************************************************
 * GPlotter - version 0.1 alpha
 * A neat little program for displaying the
 * output of functions in various ways, among
 * them, as a representation along a Cartesian
 * plane in two-dimensional space.
 * ++++++++++++++++++++++++++++++++++++++++++++++
 * 2014 Princeton Ferro
*************************************************/

#include "gpmath.h"

int main(int argc, char **argv) {
	// TODO: add GTK 3.11 code here
	
	// f(x) = x^2 + 3x^1
	monomial ms[2] = {
		{ 1, 'x', 2 },
		{ 3, 'x', 1 }
	};
	
	// test equations
	polynomial p = { .length = 2 };
	p.monos = ms;
	
	char *eq = to_equation_text(p);
	
	printf("Equation: %s\n", eq);
	
	return 0;
}
