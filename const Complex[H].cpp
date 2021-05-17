#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

//cout << c1;
//operator << (cout, c1);

class Complex {
friend std:: ostream& operator << (std::ostream& out, const Complex& rhs );

private:
 
  int re;
  int im;

public:
    
    //Complex();
    //Complex (double re);
    Complex (double re = 0.0, double im = 0.0);
    Complex (const Complex& rhs);
    ~Complex();
    
    Complex& operator = (const Complex& rhs);
    Complex operator = (double re);
    // +=  -=  *=  /= 
    bool operator == (const Complex& rhs) const;
    // !=, < , > , ==
    const Complex operator + (const Complex& rhs) const;
    // - , * , /
    
    Complex& operator++();            //perfix   
    Complex operator++(int);        //postfix
    
    
    
    
    double real(void) const;
    double imag(void) const;
    
    void real(double re);
    void imag(double im);
    
    
};

#endif  

2021.05.17 멤버함수의 const 사용
