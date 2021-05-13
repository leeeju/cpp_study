/////////////////////////////////////////////////////////////////////////
 // ex) complex --------> Rational                                    //
 // ex) Complex c1 -------> Rational c1                              //
 // ex) double re; & double im; --------> int unm & int den         //
 ////////////////////////////////////////////////////////////////////

#include <iostream>
#include "complex.h"

int main()
{
    Complex c1;
    //Complex c2 (3.0);
   Complex c2 = 3.0;
   
   
    Complex c3 (3.0, 4.0);
    // Complex c4(c3);
    Complex c4 = c3;
                                    //int i;
    //c1. real(c3.real());         //i = 100;
    //c1. imag(c3.imag());        //int i = 3.14;
                                   
    c1 = c3;
    
    if (c1 == c3)
        std::cout  << "c1 and c3 are equnl" << std :: endl;
        else
            std::cout  << "c1 and c3 not equal " << std :: endl;
       
                           
                                   
    std::cout  << "c1 : (" << c1.real() << ",  " << c1.imag() << "  )" << std :: endl;
    std::cout  << "c2 : (" << c2.real() << ",  " << c2.imag() << "  )" << std :: endl;
    std::cout  << "c3 : (" << c3.real() << ",  " << c3.imag() << "  )" << std :: endl;
    std::cout  << "c4 : (" << c4.real() << ",  " << c4.imag() << "  )" << std :: endl;
    return 0;
}

2021.05.13  생성자 소멸자
