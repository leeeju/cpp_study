#include <stdio.h>

int main(void)
{
    void *p;
    
    int a;
    a = 100;
    
    p =&a;
    // *p = 200;
    
    *(int *)p = 500;
    
    double d;
    d = 3.14;
    
    p = &d;
    * (double *) p = 2.178;
    
    printf("a : %d\t d : %f\n", a, d);
    
    return 0;
} 

2021.05.13 void형 포인터
