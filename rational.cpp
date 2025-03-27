// rational.cpp - Implementations of Rational class member functions

#include "rational.h"
#include <cmath>
using namespace std;

int Rational::gcd (int a, int b) const {
	// Euclidian algorithm for finding greatest common divisor of a and b
	// https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

void Rational::reduce () {
	// Reduce the current rational number to lowest terms

	// If numerator is zero, set denominator to 1
	if (num == 0)
		den = 1;
	// Ensure denominator is positive, with sign on numerator
	else if (den < 0) {
			num = -num;
			den = -den;
		}

	// Find greatest common divisor of numerator and denominator
	int divisor = abs(gcd(num, den));

	// Reduce to lowest terms
	num /= divisor;
	den /= divisor;
}
