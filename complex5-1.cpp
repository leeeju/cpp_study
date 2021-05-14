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
        std::cout << " 문자열 " << std::endl;
    else
        std::cout << " 문자열 " << std::endl;
       
    std::cout << " c1 : ( " << c1.real() << ", " << c1. imag() << " i)" << std::endl;
    std::cout << " c2 : ( " << c2.real() << ", " << c2. imag() << " i)" << std::endl;
    std::cout << " c3 : ( " << c3.real() << ", " << c3. imag() << " i)" << std::endl;
    std::cout << " c4 : ( " << c4.real() << ", " << c4. imag() << " i)" << std::endl;
    return 0;
}

2021.05.14 
가장 양호한 성공작
