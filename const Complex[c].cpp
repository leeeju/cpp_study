const complex cpp 

#include "complex.h"

/*Complex::Complex()
{
    this -> re = 0.0;
    this -> re = 0.0
}
Complex::Complex(double re)
{
    this -> re = re
    this -> im = 0.0
    
}*/
std:: ostream& operator << (std::ostream& out, const Complex& rhs)
{
    out << "[" << rhs. re << " ," << rhs. im << " i]";
    
    return out;
}


Complex::Complex(double re, double im)
{
    this -> re = re;
    this -> im = im;
}
Complex::Complex(const Complex& rhs)
{
    this -> re = rhs.re;
    this -> im = rhs.im;
}
Complex:: ~Complex()
{

}
Complex& Complex::operator =(const Complex& rhs)
{
    this -> re = rhs.re;
    this -> im = rhs.im;
    
    return *this;
}
Complex Complex :: operator=(double re)
{
    this -> re = re;
    
    return *this;

}

bool Complex::operator == (const Complex& rhs) const
{
    return (this -> im == rhs.im && this -> re == rhs.re);
}

const Complex Complex::operator +(const Complex& rhs) const
{
    return Complex (this -> im + rhs.im && this -> re + rhs.re);
}

Complex& Complex::operator++()
{
     this -> re += 1.0;
     return *this;
}
Complex Complex::operator++(int)
{
  Complex tmp (*this);
  this -> re += 1.0;
  return *this;
}


double Complex::real() const
{
    return this -> re;
}
double Complex::imag() const
{
    return this ->im;
}
void Complex::real(double re)
{
    this -> re = re;
}
void Complex::imag(double im)
{
    this -> im = im;
}

///
멤버 함수의 const 사용
