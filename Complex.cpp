#include "Complex.h"

Complex::Complex()
{
	_real = 0.0;
	_imag = 0.0;
}
Complex& Complex::operator=(const Complex& z)
{
	_real = z._real;
	_imag = z._imag;
	return *this;
}
Complex& Complex::operator=(double r)
{
}
Complex& Complex::operator+=(const Complex& z)
{
	_real += z._real;
	_imag += z._imag;
	return *this;
}
Complex& Complex::operator-=(const Complex& z)
{
	_real -= z._real;
	_imag -= z._imag;
	return *this;
}
Complex& Complex::operator*=(const Complex& z)
{
	_real *= z._real;
	_imag *= z._imag;
	return *this;
}
Complex& Complex::operator/=(const Complex& z)
{
	_real /= z._real;
	_imag /= z._imag;
	return *this;
}


// basic math operations

Complex operator+(const Complex& a, const Complex& b);
{
}
Complex operator-(const Complex& a, const Complex& b);
{
}
Complex operator*(const Complex& a, const Complex& b);
{
}
Complex operator/(const Complex& a, const Complex& b);
{
}

// norm returns the squared magnitude of z

double norm(const Complex& z)
{
}

// conj returns the complex conjugate of z

Complex conj(const Complex& z)
{
}

// Comparison

bool operator==(const Complex& a, const Complex& b)
{
}
bool operator==(const Complex& a, double r)
{
}
bool operator!=(const Complex& a, const Complex& b)
{
}
bool operator!=(const Complex& a, double r)
{
}

//write the complex number z to the output stream in the format "6+5i" or "6-5i"

std::ostream& operator<<(std::ostream& out, const Complex& z)
{
}
