#ifndef COMPLX_H
#define COMPLX_H

class Complex {

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
    bool operator == (const Complex& rhs);
    //
    const Complex operator + (const Complex& rhs);
    
    Complex& operator++();            //perfix   
    Complex operator++(int);        //postfix
    
    
    
    
    double real(void);
    double imag(void);
    
    void real(double re);
    void imag(double im);
    
    
};

#endif  
2021.05.14 헤더 
