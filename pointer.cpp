#include <stdio.h>

int main(void)
{
    int a;
    int *p;
    
    a = 100;
    p = &a;
    *p = 500;
    
    p = (int *) 0x3f3436;
    
    printf ("a : %d\n" , a);
    
    return 0;
}

2021.05.13 일반 포인터
