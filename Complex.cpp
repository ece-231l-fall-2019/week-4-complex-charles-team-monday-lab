#include "Complex.h"

Complex::Complex()
{
	_real = 0.0;
	_imag = 0.0;
}

Complex::Complex(double re, double im)
{
	_real = re;
	_imag = im;
}

double Complex::real() const{return _real;}
double Complex::imag() const{return _imag;}
double rel = 0.0, img = 0.0;
Complex::Complex(const Complex& z)
{
	_real = z._real;
	_imag = z._imag;
}
std::ostream& operator<<(std::ostream& out, const Complex& z)
{
	out << "(" << z.real() << ", " << z.imag() << "i)";
	return out;
}

Complex operator+(const Complex& a, const Complex& b)
{
	// Additon
	rel = a.real() + b.real();
	img = a.imag() + b.imag();
	Complex calc(rel, img);
	return calc;
}

Complex operator-(const Complex& a, const Complex& b)
{
	// Subtraction
	rel = a.real() - b.real();
	img = a.imag() - b.imag();
	Complex calc (rel, img);
	return calc;
	
}
Complex operator*(const Complex& a, const Complex& b)
{    
	// FOIL
	double f = 0.0, o = 0.0, i = 0.0, l = 0.0; 
	//  (Ax + Bi)(Cx - Di) 
	f = a.real() * b.real();    //  Ax * Cx
	o = a.real() * b.imag();    //  Ax * Di
	i = a.imag() * b.real();    //  Bi * Cx
	l = a.imag() * b.imag();    //  Bi * Di 
	
	rel = f + (l * -1);         // (i) sqr = -1
	img = o + i; 
	Complex calc (rel, img);
	return calc;
}
Complex operator/(const Complex& a, const Complex& b)
{
	// Divsion
	double numerX = 0.0, numerI = 0.0;              // Numerator 
	double denom = 0.0;                             // Denominator
	double conjX = b.real(), conjI = b.imag() * -1; // Find Conjugate
	// Find Denomiator
	denom = (b.real() * conjX) + (b.imag() * b.imag()); // ConjI * (-1) = b.imag
	// Find Numerator
	double f = 0.0, o = 0.0, i = 0.0, l = 0.0; 
	f = a.real() * conjX, o = a.real() * conjI;
	i = a.imag() * conjX, l = a.imag() * b.imag(); 
	numerX = f + l, numerI = o + i; 
	// Determin values
	rel = numerX / denom;
	img = numerI / denom;
	Complex calc (rel, img);
	return calc;	
}
/*
bool operator==(const Complex& a, const Complex& b);
bool operator==(const Complex& a, double r);
bool operator!=(const Complex& a, const Complex& b);
bool operator!=(const Complex& a, double r);
*/

