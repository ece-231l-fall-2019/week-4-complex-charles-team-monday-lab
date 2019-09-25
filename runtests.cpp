#include <iostream>

// change the value below to 1 to run tests against your Complex class.
// change the value below to 0 to run tests against the built in std::complex.

#if 1 
#include "Complex.h"
#else
#include <complex>
typedef std::complex<double> Complex;
#endif
using namespace std;
void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
	Complex z1 (4,3), z2 (5,2);
	Assert(z1.real() == 4, "real constructor");
	Assert(z1.imag() == 3, "real constructor");
	Assert(norm(z1) == 25, "complex norm");

	
	// TODO:
	// Write *at least* 20 more tests to fully test
	// your Complex class.

	cout << "The answer for 4+3i / 5+2i = " << z1 / z2 << endl;
	cout << "The answer for 4+3i * 5+2i = " << z1 * z2 << endl;
	cout << "The answer for 5+2i / 4+3i = " << z2 / z1 << endl;
	cout << "The answer for 5+2i * 4+3i = " << z2 * z1 << endl;
	return 0;
}


