#include <iostream>
#include "complex"

int main()
{
    complex c1;
    complex c2(3.0);
    complex c3(3.0, 4.0);
    
    c1 real (c3. real);
    c1 imag (c3. imag);
    
    std:: cout << "c1 : (" << c1. real() << ", " << c1. imag() << "i)" << std::endl;
    std:: cout << "c2 : (" << c2. real() << ", " << c2. imag() << "i)" << std::endl;
    std:: cout << "c3 : (" << c3. real() << ", " << c3. imag() << "i)" << std::endl;

    return 0;
}

2021.05.12 C++ [std : 코드 출력 장치] , [:: 연산자], [<< : 출력의미], [end : 조작자 & 줄바꿈 역할]
