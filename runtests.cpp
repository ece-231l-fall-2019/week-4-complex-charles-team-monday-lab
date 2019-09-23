#include <iostream>

// change the value below to 1 to run tests against your Complex class.
// change the value below to 0 to run tests against the built in std::complex.

#if 1  // TESTING Built-In complex
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
	Complex z3(-1,-2), z4(-2,-4);
	
	std::cout <<" z1 = "<< z1 <<std::endl;
	std::cout <<" z2 = "<< z2 <<std::endl;
	// Basic operations
	std::cout <<" z1 + z2 = " << z1 + z2 <<std::endl; // ANSWER: (9 + 5i)
	std::cout <<" z1 - z2 = " << z1 - z2 <<std::endl; // ANSWER: (-1 + 1i)
	std::cout <<" z1 / z2 = " << z1 / z2 <<std::endl; // ANSWER: (0.896552 + 0.241379i)
	std::cout <<" z1 * z2 = " << z1 * z2 <<std::endl; // ANSWER: (14 + 23i)

	std::cout << "The Conjugate of z1 = " << conj(z1) << std::endl; 
	std::cout << "The Normal of z2 = " << norm(z2) << std::endl;
	
	
	// Compare operations
	std::cout << "Does z1 == 24 : "; //ANWER NO
	if(z1 == z2)
		std::cout << "yes ";
	else
		std::cout << "no ";
	std::cout << "\n";
	
	std::cout << "is z3 != 24 : "; // ANSWER Yes
	if(z1 != z4)
		std::cout << "yes";
	else
		std::cout << "no"; 
	std::cout << "\n";
	
	
	std::cout <<" z4 = "<< z4 <<std::endl; //ANSWER(-2 + 4i)
	
	std::cout << "z3 - z4  = " << z3 - z4 << std::endl; //ANSWER: (1 + 2i)
	
	z3 += z4; 
	std::cout << "z3 += z4 =" << z3 << std::endl; // ANSWER (-3 - 6i)
	
	z3 -= z4;
	std::cout << "z3 -= z4 =" << z3 << std::endl; // ANSWER: (-1 - 2i)
	
	z1 *= z2;
	std::cout << "z1 *= z2 =" << z1 << std::endl; //ANSWER: (14 + 23i)
	
	z2 /= z1;
	std::cout << "z2 /= z1 =" << z2 << std::endl; // ANSWER: (.16 - .12i)
	
	
	//std::cout << "z3 -= z4 =" << z3 -= z4 << std::endl;
	//std::cout << "z3 *= z4 =" << z3 *= z4 << std::endl;
	//std::cout << "z3 /= z4 =" << z3 /= z4 << std::endl;
	
/*
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


