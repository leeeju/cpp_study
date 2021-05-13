#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int substract(int a, int b)
{
    return a - b;

}
int main(void)
{
    int (*fp)(int, int );
    
    fp = &add;            // fp = add;
    
    int re;
    re = (*fp)(4, 10);     // re = fp(4. 3);
    printf("re : %d\n" , re);
    
    fp = &substract;
    re = (*fp)(4, 10);
    printf("re : %d\n", re);
    
    return 0;
}

2021.05.13 함수형 포인터
