#include <stdio.h>

int main (void)
{
    int a;
    int *pa;
    int **ppa;
    
    a = 100;
    pa = &a;
    ppa = &pa;
    
    **ppa = 500;
    
    printf("a : %d\n" , a);

    return 0;
}

2021.05.13 이중 포인터
