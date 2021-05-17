#include <iostream>
#include "complex.h"


int main()
{
    
    Complex c1 (3.0, 4.0);
    Complex c2 = 3.0;
    Complex c3;
    Complex c4 = c1;

    c3 = c2 = c1;
    c2 = 3.0;
    
    c3 = c1 + c2;
    
    ++c3;
    c3++;
    
    if (c1 == c2)
        std::cout << " c1 and c2 are eqaul " << std::endl;
    else
        std::cout << " c1 and c2 are not eqaul" << std::endl;
       
    // std::cout << " c1 : ( " << c1.real() << ", " << c1. imag() << " i)" << std::endl;
    std::cout << " c1 : ( " << c1 << std::endl;
    std::cout << " c2 : ( " << c2 << std::endl;
    std::cout << " c3 : ( " << c3 << std::endl;
    std::cout << " c4 : ( " << c4 << std::endl;
    return 0;
    
    const Complex c5(3.0, 4.0);
    
    std::cout <<"c5 : " <<  c5.real() << ", " << c5.imag() << " i)" << std::endl;
    
    return 0;
    
}
}
2021.05.17
