
#include <stdio.h>
/*
void swap(int a, int b)

{
        int tmp = a;
        a = b;
        b = tmp;
}
    */
void swap (int *pa, int *pb)    // swap1 과 다른 형식이다  포인터를 사용하여 값을 정해준다
{
    int tmp = *pa;        //  tmp는 [*p + a] 다
    *pa = *pb;            // [*p +a ]는 [*p + b] 이다
    *pb = tmp;            // [*p + b]는 tmp 이다 
                          // 쓸때 없이 졸라 복잡하게 한다.
}   

int main(void)
{
    int a = 100;
    int b = 200;
    
    printf("a : %d\t b: %d\n", a, b);
    // swap
    
    swap(&a, &b);   // 값을 바꿔준다
    
    printf("a : %d\t b: %d\n", a, b);
    
    return 0;
}

2021.05.14
