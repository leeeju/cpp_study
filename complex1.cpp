#include <iostream>
#include "complex.h"

int main()
{
    Rational r1;
    Rational r2(3);
    Rational r3(3, 4);

    r1.setNun(r3. getNun);   
    r1.setDen(r3. getNun);
    
    std::cout << "r1  : " << r1. getNun() << " / " << r1 getNun() " / " std::endl;
    std::cout << "r1  : " << r1. getNun() << " / " << r1 getNun() " / " std::endl;
    std::cout << "r1  : " << r1. getNun() << " / " << r1 getNun() " / " std::endl;
    
    
    return 0;
}

=======================

#ifndef "Rational"
#define "Rational"

class Rational {

public:
    int unm;
    int den;

    
public;

    Rational();
    Rational(int num);
    Rational(int num int den);
    ~ Rational ();
    
    int getNun();
    int getDen();
    
    void setNum(int num);
    void setDen(int den);
    
    };
    
#endif     
===========================================================================================
2021.05.12 [연산자 중복], [복소수], [참조]

ex) std :: cout << " ~~ " << std :: endl
 객체별 설명 :  cout : 출력값 / "~~" : 결과값 / << : 출력부호 / :: : 연산자 / endl : 조작자&줄바꿈
 
 ex)
 inclade <iostreom>
 using std :: cout -> std   --> 보기와 같이 미리 선언시 밑에 생략가능
 using std :: cout -> endl  --> 보기와 같이 미리 선언시 밑에 생략가능
 
 int main()
 cout << "~~" << endl  = 출력가능
 
