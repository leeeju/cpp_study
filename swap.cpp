#include <stdio.h> 

void swap(int a, int b)

{
        int tmp = a;    // tmp는 a로 선언
        a = b;          // b는 a다  
        b = tmp;        // b 는 tmp다 결국 다 같은 값이다
}
    
int main(void)
{
    int a = 100;
    int b = 200;
    
    printf("a : %dtb: %d\n", a, b);
    // swap
    
    swap(a, b);    // 선언한다 스와프
    
    printf("a : %dtb: %d\n", a, b);
    
    return 0;
}

2021.05.14
a 와 b의 값을 swap를 사용하여 서로 바꿔 준다
