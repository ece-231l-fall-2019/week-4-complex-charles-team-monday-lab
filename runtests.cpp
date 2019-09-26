#include <iostream>

// change the value below to 1 to run tests against your Complex class.
// change the value below to 0 to run tests against the built in std::complex.

#if 1 // TESTING Built-In complex
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
	
	Complex z1(4, 3), z2(5,2);
	Complex z3(-1,-2), z4(-2,4);
	Complex z5(0,8), z6(6,0);
	
	
//--- Test #1 ---- Assert Complex Z2 ---------------------------------------
	Assert(z1.real() == 4, "real constructor");
	Assert(z1.imag() == 3, "real constructor");
//--- Test #2 ---- Assert Complex Z4 ---------------------------------------
	Assert(z4.real() == -2, "real constructor");
<<<<<<< HEAD
	Assert(z4.imag() == 4, "real constructor");
=======
	Assert(z4.imag() == -4, "real constructor");
>>>>>>> master
//--- Test #3 ---- Assert Complex Z6 ---------------------------------------
	Assert(z6.real() == 6, "real constructor");
	Assert(z6.imag() == 0, "real constructor");

//--- Test #4 ---- Out Stream << -----------------------------------------
	std::cout <<" z1 = "<< z1 <<std::endl;
	std::cout <<" z2 = "<< z2 <<std::endl;
	std::cout <<" z3 = "<< z3 <<std::endl;
	std::cout <<" z4 = "<< z4 <<std::endl;
	std::cout <<" z5 = "<< z5 <<std::endl;
	std::cout <<" z6 = "<< z6 <<std::endl;
	std::cout << "\n";
//--- Test #5 ---- Addition ----------------------------------------------------------
	std::cout <<" z1 + z2 = " << z1 + z2 <<std::endl; // ANSWER: (9 + 5i)
	std::cout <<" z3 + z4 = " << z3 + z4 <<std::endl; // ANSWER: (-3 + 2i)
	std::cout <<" z5 + z1 = " << z5 + z1 <<std::endl; // ANSWER: (4 + 11i)
	std::cout <<" z6 + z4 = " << z6 + z4 <<std::endl; // ANSWER: (4 + 4i)
	std::cout << "\n";
//--- Test #6 ---- Subtraction --------------------------------------------------------
	std::cout <<" z1 - z2 = " << z1 - z2 <<std::endl; // ANSWER: (-1 + 1i)
	std::cout <<" z3 - z4 = " << z3 - z4 <<std::endl; // ANSWER: (1 - 6i)
	std::cout <<" z2 - z4 = " << z2 - z4 <<std::endl; // ANSWER: (7 - 2i)
	std::cout <<" z6 - z1 = " << z6 - z1 <<std::endl; // ANSWER: (2 - 3i)
	std::cout << "\n";
//--- Test #7 ---- Multiplication --------------------------------------------------------
	std::cout <<" z1 * z2 = " << z1 * z2 <<std::endl; // ANSWER: (14 + 23i)
	std::cout <<" z3 * z4 = " << z3 * z4 <<std::endl; // ANSWER: (10 + 0i)
	std::cout <<" z5 * z6 = " << z5 * z6 <<std::endl; // ANSWER: (0 + 48i)
	std::cout <<" z1 * z5 = " << z1 * z5 <<std::endl; // ANSWER: (-24 + 32i)
	std::cout << "\n";
//--- Test #8 ---- Division ------------------------------------------------------------
	std::cout <<" z1 / z2 = " << z1 / z2 <<std::endl; // ANSWER: (0.896552 + 0.241379i)
	std::cout <<" z4 / z3 = " << z4 / z3 <<std::endl; // ANSWER: (-1.2 - 1.6i)
	std::cout <<" z5 / z6 = " << z5 / z6 <<std::endl; // ANSWER: (0 + 1.3333i)
	std::cout <<" z1 / z5 = " << z1 / z5 <<std::endl; // ANSWER: (0.375 - 0.5i)
	std::cout <<" z1 / z1 = " << z1 / z1 <<std::endl; // ANSWER: (1 + 0i)
	Complex z8(0,0);
	std::cout <<" z1 / (0 + 0i) = " << z1 / z8 <<std::endl; // UNDEFIND
	std::cout << "\n";
	
//--- Test #9 ---- Conjugate --------------------------------------------------------
	std::cout << "The Conjugate of z1 = " << conj(z1) << std::endl; // ANSWER: (4 - 3i)
	std::cout << "The Conjugate of z3 = " << conj(z3) << std::endl; // ANSWER: (-1 + 2i)
	std::cout << "The Conjugate of z5 = " << conj(z5) << std::endl; // ANSWER: (0 - 8i)
	std::cout << "\n";
//--- Test #10 --- Normal --------------------------------------------------------
	std::cout << "The Normal of z1 = " << norm(z1) << std::endl; // ANSWER: 25
	std::cout << "The Normal of z3 = " << norm(z3) << std::endl; // ANSWER: 5
	std::cout << "The Normal of z5 = " << norm(z5) << std::endl; // ANSWER: 64
	std::cout << "\n";
//--- Test #11 --- Compare Complex --------------------------------------------------------
	Complex z7(4, 3);
	std::cout << "Note: Complex z7 = " << z7 << std::endl;
	std::cout << "Does z1 == z7 : "; //ANWER Yes
	if(z1 == z7)
		std::cout << "Yes ";
	else
		std::cout << "No ";
	std::cout << "\n";
	
	std::cout << "Does z2 == z5: "; //ANWER NO
	if(z2 == z5)
		std::cout << "Yes ";
	else
		std::cout << "No ";
	std::cout << "\n";
	
//--- Test #12 --- Compare Complex --------------------------------------------------------
	std::cout << "Is z1 != z7 : "; // ANSWER  No
	if(z1 != z7)
		std::cout << "Yes";
	else
		std::cout << "No"; 
	std::cout << "\n";
	
	std::cout << "Is z1 != z4 : "; // ANSWER Yes
	if(z1 != z4)
		std::cout << "Yes";
	else
		std::cout << "No"; 
	std::cout << "\n";
	std::cout << "\n";
	
//--- Test #13 --- Compare to Double --------------------------------------------------------
	double a = 0.0, b = -2.0, c = 6.0;
	// z4=(-2,4) , z5=(0,8) , z6=(6,0)
	std::cout << "A = " << a << " , B = " << b << " , C = " << c << std::endl;
	std::cout << "Is z6 == to A, B, or C : "; // ANSWER  C
	if(z6 == a)
		std::cout << "A";
	if(z6 == b)
		std::cout << "B";
	if(z6 == c)
		std::cout << "C";
	else
		std::cout << "None"; 
	std::cout << "\n";
//--- Test #14 --- Compare to Double --------------------------------------------------------
	std::cout << "Is z5 == to A, B, or C : "; // ANSWER : None
	if(z5 == a)
		std::cout << "A";
	if(z5 == b)
		std::cout << "B";
	if(z5 == c)
		std::cout << "C";
	else
		std::cout << "None"; 
	std::cout << "\n";
//--- Test #15 --- Compare to Double --------------------------------------------------------	
	std::cout << "Is z4 == to A, B, or C : "; // ANSWER  None
	if(z4 == a)
		std::cout << "A";
	if(z4 == b)
		std::cout << "B";
	if(z4 == c)
		std::cout << "C";
	else
		std::cout << "None"; 
	std::cout << "\n";
	std::cout << "\n";
//--- Test #16 --- Compare to Double --------------------------------------------------------
	//a = 0.0, b = -2.0, c = 6.0; z4=(-2,4) , z5=(0,8) , z6=(6,0)
	std::cout << "A = " << a << " , B = " << b << " , C = " << c << std::endl;
	std::cout << "T or F: z6 != C : "; // False
	if(z6 != c)
		std::cout << "True";
	else
		std::cout << "False"; 
	std::cout << "\n";
	
	std::cout << "T or F: z5 != A : "; // True
	if(z5 != a)
		std::cout << "True";
	else
		std::cout << "False"; 
	std::cout << "\n";
	
	std::cout << "T or F: z4 != B : "; // True
	if(z4 != b)
		std::cout << "True";
	else
		std::cout << "False"; 
	std::cout << "\n";
	std::cout << "\n";
//--- Test #17 --- Add Assign --------------------------------------------------------
	z1 += z2;
	std::cout << "z1 += z2 = " << z1 << std::endl; // ANSWER: (9 + 5i)
	z3 += z4;
	std::cout << "z3 += z4 = " << z3 << std::endl;  // ANSWER: (-3 + 2i)
	std::cout << "\n";
//--- Test #18 --- Subtract Assign --------------------------------------------------------
	z1 -= z2;
	std::cout << "z1 -= z2 = " << z1 << std::endl; // ANSWER: (4 + 3i)
	z4 -= z5;
	std::cout << "z4 -= z5 = " << z4 << std::endl; // ANSWER: (-2 - 4i)
	std::cout << "\n";
//--- Test #19 --- Multiply Assign --------------------------------------------------------
	z1 *= z2;
	std::cout << "z1 *= z2 = " << z1 << std::endl; // ANSWER: (14 + 23i)
	z4 *= z2;
	std::cout << "z4 *= z2 = " << z4 << std::endl; // ANSWER: (-2 - 24i)
	z3 *= z4;
	std::cout << "z3 *= z4 = " << z3 << std::endl; // ANSWER: (54 + 68i)
	z5 *= z3;
	std::cout << "z5 *= z3 = " << z5 << std::endl; // ANSWER: (-544 + 432i)
	std::cout << "\n";
//--- Test #20 --- Divide Assign --------------------------------------------------------
	z4 /= z6;
	std::cout << "z4 /= z6 = " << z4 << std::endl;  // ANSWER: (-0.333333 - 4i)
	z2 /= z1;
	std::cout << "z2 /= z1 = " << z2 << std::endl; // ANSWER: (0.16 - 0.12i)
	z1 /= z6;
	std::cout << "z1 /= z6 = " << z1 << std::endl; // ANSWER: (2.33333 + 3.83333i)
	z1 /= z1;
	std::cout << "z1 /= z1 = " << z1 << std::endl; // ANSWER: (1 + 0i)
	std::cout << "\n";
//--- END OF TESTING -------------------------------------------------------------------------
	return 0;
}


