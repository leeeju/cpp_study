#include <stdio.h>

int main(void)
{
    int a = 0x12345678;
    char *p;
    
    p = (char *) &a;
    
    printf(" *p  : 0x%x\n" , *p);

    return 0;
}
2021.05.13  [int *p  VS char *p ] 인트형 포인터 와 케리터 포인터
