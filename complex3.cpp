#include "cassert"
#include "rational.h"



Rational::Rational()
{
    this -> num = 0;
    this -> den = 1;
    }
    

Rational :: Rational(int num)
{

    this -> num = num;
    this -> den = 1;

}

Rational :: Rational(int unm int den)
{
    
    assert(den ! = 0);
    this -> num = num;
    this -> den = den;
}

Rational :: ~Rational()
{
    
}

int Ratlonat :: getNun()
{
    return this -> num;
}
int Ratlonat :: getDen()
{
    return this -> den;
}
void Ratlonat :: setNun()
{
    this -> num = num;
}
void Ratlonat :: setDan()
{
    this -> den = den
}

=====================================
2021.05.12 [연산자 중복], [복소수]. [참조]

