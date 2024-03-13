// rational.cpp - Implementations of Rational class member functions

#include "rational.h"
#include <cmath>
using namespace std;

int Rational::gcd (int a, int b) const {
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

void Rational::reduce () {
	if (num == 0)
		den = 1;
	else {
		if (den < 0) {
			num = -num;
			den = -den;
		}
	}
	int divisor = abs(gcd(num, den));
	num /= divisor;
	den /= divisor;
}
