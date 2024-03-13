#pragma once

// rational.h - Rational number class

class Rational {
private:
	int num, den; // Numerator and denominator
	int gcd (int a, int b) const; // Finds GCD of a and b
	void reduce (); // Converts current rational number to reduced form
public:
	// Constructors
	Rational() { num = 0; den = 1; } // Default, 0
	Rational(int n) { num = n; den = 1; }
	Rational(int n, int d) { num = n; den = d; reduce(); }
	Rational(double n) : Rational((int)(n * 10000), 10000) { }
};
