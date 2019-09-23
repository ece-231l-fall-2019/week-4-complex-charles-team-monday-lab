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

double rel = 0.0, img = 0.0; // Return Values

Complex::Complex(const Complex& z)
{
	_real = z._real;
	_imag = z._imag;
}
//---- Find Conjugate -----------------------
Complex conj(const Complex& z) 
{
	rel = z.real();
	img = z.imag() * -1;
	Complex calc(rel, img);
	return calc;
}
//---- Find Normal -----------------------
double norm(const Complex& z)
{
	double res = 0.0;
	rel = z.real() * z.real();
	img = z.imag() * z.imag();
	res = rel + img;
	return res;
}
//---- cout stream << ------------------------------------------------------
std::ostream& operator<<(std::ostream& out, const Complex& z)
{
	if( z.imag() > 0)
	{
		out << "(" << z.real() << " + " << z.imag() << "i)";
	return out;
	}
	else
	{
		out << "(" << z.real() << " - " << z.imag() * -1 << "i)";
		return out;
	}
}
//---- Additon --------------------------------------------------------------
Complex operator+(const Complex& a, const Complex& b)
{
	rel = a.real() + b.real();
	img = a.imag() + b.imag();
	Complex calc(rel, img);
	return calc;
}
//---- Subtraction ---------------------------------------------------------
Complex operator-(const Complex& a, const Complex& b)
{
	rel = a.real() - b.real();
	img = a.imag() - b.imag();
	Complex calc (rel, img);
	return calc;	
}
//---- Multiplication ------------------------------------------------------
Complex operator*(const Complex& a, const Complex& b)
{    
	double f = 0.0, o = 0.0, i = 0.0, l = 0.0; // FOIL 
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
//---- Division --------------------------------------------------------
Complex operator/(const Complex& a, const Complex& b)
{
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
//---- Assign ---------------------------------------
Complex& Complex::operator=(double r)
{
	_real = r;
	_imag = 0.0;
	return *this;
}
//---- Add Assign ------------------------------------------
Complex& Complex::operator+=(const Complex& z)
{
	_real = _real + z.real();
	_imag = _imag + z.imag();
	return *this;
}
//---- Subtract Assign -------------------------------------
Complex& Complex::operator-=(const Complex& z)
{
	_real = _real - z.real();
	_imag = _imag - z.imag();
	return *this;
}
//---- Multiply Assign ------------------------------------
Complex& Complex::operator*=(const Complex& z)
{
	double temp = _real; // need to save original vaule of _real.
	_real = (_real * z.real()) + ((_imag * z.imag())* -1); // becuase _real changes here
	_imag = (temp * z.imag()) + (_imag * z.real()) ;
	return *this;
}
//--- Divide Assign ---------------------------------------
Complex& Complex::operator/=(const Complex& z)
{
	double temp = _real;
	double denominator = norm(z);
	_real = ((_real * z.real()) + (_imag * z.imag())) / denominator;
	_imag = ((temp * -z.imag()) + (_imag * z.real())) / denominator;
	return *this;
}
//----Equivalent Comparison------------------------------------------------
bool operator==(const Complex& a, const Complex& b)
{
	if( a.real() == b.real() && a.imag() == b.imag())
		return true;
	return false;
}
bool operator==(const Complex& a, double r)
{
	if(a.real() == r && a.imag() == 0.0)
		return true;
	return false;
}
//---- Not Equivalent Complex Comparison -------------------------------------------
bool operator!=(const Complex& a, const Complex& b)
{
	if(a.real() == b.real())
		return false; 
	else if(a.imag() == b.real())
		return false;
	return true;
}
bool operator!=(const Complex& a, double r)
{
	if (a.real() != r && a.imag() != 0.0)
		return true;
	return false;
}
//---- END of Program ------------------------------------------------------------------------