#include <iostream>

// change the value below to 1 to run tests against your Complex class.
// change the value below to 0 to run tests against the built in std::complex.

#if 0
#include "Complex.h"
#else
#include <complex>
typedef std::complex<double> Complex;
#endif

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
//--- Test #1 ----------------------------------------------
	Complex z1(4, 3), z2(5,2);
	Complex z3(-2,-1), z4(0,0);
	
	std::cout <<" z1 = "<< z1 <<std::endl;
	std::cout <<" z2 = "<< z2 <<std::endl;
	std::cout <<" z1 + z2 = " << z1 + z2 <<std::endl; // ANSWER: (9,5)
	std::cout <<" z1 - z2 = " << z1 - z2 <<std::endl; // ANSWER: (-1,1)
	std::cout <<" z1 / z2 = " << z1 / z2 <<std::endl; // ANSWER: (0.896552,0.241379)
	std::cout <<" z1 * z2 = " << z1 * z2 <<std::endl; // ANSWER: (14,23)
	Assert(z1.real() == 4, "real constructor");
	Assert(z3.real() == 4, "real constructor"); 
	Assert(z3.imag() == -1, "real constructor");
	Assert(norm(z1) == 25, "complex norm");
	
	std::cout << "Does z1 == 24 : ";
	if(z1 == z4)
		std::cout << "yes";
	else
		std::cout << "no";
	std::cout << "\n";
	
//	std::cout <<" z1 += z2 " << z1 += z2;
//	std::cout <<" : z1 = " << z1 << std::endl;
/*
	Assert(z1.real() == 4, "real constructor");
	Assert(z1.imag() == 3, "real constructor");
	Assert(norm(z1) == 25, "complex norm");

//--- Test #2 ---------------------------------------------
	Complex z4 = z1 - z2;
	std::cout << "z4 = " << z4 << "\n z3 = \n ";
	Complex z5(5,0);

	Assert(z2.real() == 5, "real constructor");
	Assert(z2.imag() == 0, "real constructor");
	Assert(norm(z2) == 25, "complex norm");
     Assert(z2 + z1);

//--- Test #3 ----------------------------------------------
*/
	return 0;
}


