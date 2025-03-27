// For demonstration of operator overloading
#include "rational.h"
#include <iostream>
using namespace std;

int main () {
	Rational r1;
	Rational r2(3);
	Rational r3(24, 9);
	Rational r4(1.25);

	// Output the 4 Rational's
	cout << r1.str() << " " << r2.str() << " " << r3.str() << " " << r4.str() << endl;

	// Requires operator overloads for <<...
	// cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;

	// Requires operator overloads for *, /
	// cout << r2 * r3 << " " << r2 / r3 << endl;

	// Requires operator overloads for *=, /=
	// Rational r5(1, 2);
	// r3 *= r5;
	// r4 /= r5;
	// cout << r3 << " " << r4 << endl;

	// Relational operators
	// cout << "r1 < r2 " << (r1 < r2 ? "true" : "false") << endl;
	// cout << "r1 > r2 " << (r1 > r2 ? "true" : "false") << endl;
	// cout << "r1 == r2 " << (r1 == r2 ? "true" : "false") << endl;
	// cout << "r1 != r2 " << (r1 != r2 ? "true" : "false") << endl;
	// cout << "r1 <= r2 " << (r1 <= r2 ? "true" : "false") << endl;
	// cout << "r1 >= r2 " << (r1 >= r2 ? "true" : "false") << endl;

	// Unary minus
	// r4 = -r4;
	// cout << r4 << endl;

	// Pre- and post-increment
	// cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
	// r3 = ++r1;
	// r4 = r2++;
	// cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
}
