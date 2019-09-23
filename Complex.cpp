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
Complex::Complex(const Complex& z)
{
	_real = z._real;
	_imag = z._imag;
}
double Complex::real() const
{
	return _real;
}
double Complex::imag() const
{
	return _imag;
}
Complex& Complex::operator=(const Complex& z)
{
	_real = z.real();
	_imag = z.imag();
	return *this;
}

Complex& Complex::operator=(double r)
{
	_real = r;
	_imag = 0.0;
	return *this;
}

Complex& Complex::operator+=(const Complex& z)
{
	_real += z.real();
	_imag += z.imag();
	return *this;
}
Complex& Complex::operator-=(const Complex& z)
{
	_real -= z.real();
	_imag -= z.imag();
	return *this;
}
Complex& Complex::operator*=(const Complex& z)
{
	_real = (_real * z._real) + (-1 * (_imag * z._imag));
	_imag = (_imag * z._real)*2;
	return *this;
}
Complex& Complex::operator/=(const Complex& z)
{
	_real = z._real;
	_imag = z._imag;
	return *this;
}


// basic math operations

Complex operator+(const Complex& a, const Complex& b)
{
	Complex c(a.real()+b.real(), a.imag()+b.imag());
	return c;
}
Complex operator-(const Complex& a, const Complex& b)
{
	Complex c(a.real()-b.real(), a.imag() - b.imag());
	return c;
}
Complex operator*(const Complex& a, const Complex& b)
{
	Complex c((a.real() * b.real())+(-1*(a.imag()*b.imag())), ((a.real()*b.imag())+(b.real()*a.imag())));
	return c;
}
Complex operator/(const Complex& a, const Complex& b)
{
	Complex c(0.0,0.0);
	return c;
}

// norm returns the squared magnitude of z

double norm(const Complex& z)
{
	double c = (z.real() * z.real()) + (z.imag() * z.imag());
	return c;
}

// conj returns the complex conjugate of z

Complex conj(const Complex& z)
{
	Complex c (z.real(), -z.imag());
	return c;
}

// Comparison

bool operator==(const Complex& a, const Complex& b)
{
	if (a.real() == b.real() && a.imag() == b.imag())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator==(const Complex& a, double r)
{
	if (a.real() == r && a.imag() == 0.0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator!=(const Complex& a, const Complex& b)
{
	if (a.real() != b.real() && a.imag() != b.imag())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator!=(const Complex& a, double r)
{
	if (a.real() != r && a.imag() != 0.0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//write the complex number z to the output stream in the format "6+5i" or "6-5i"

std::ostream& operator<<(std::ostream& out, const Complex& z)
{
	if (z.imag() < 0)
	{
		return out << z.real() <<  " - " << z.imag() << "i" <<std::endl;
	}
	else
	{
		return out << z.real() << " + " << z.imag() << "i" <<std::endl;
	}
}
