#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private :
    double re;
    double im;
    
public :
    //Complex();                    // default construxtor
    //Complex(double re);           // convert construxtor
    
    Complex(double re = 0.0, double im = 0.0);
    
    //Complex(const Complex *ps);     
    Complex (const Complex& rhs);     // copy construxtor
    ~Complex();   

    // void operator = (Complex c);   // performance X
    // void operator = (const Complex *pc);
    void operator = (const Complex& rhs);
    
    bool operator == (const Complex rhs);
    
    double real();
    double imag();
    
    void real(double re);
    void imag(double im);
    
};
#endif

2021.05.13 Complex 헤더 파일
