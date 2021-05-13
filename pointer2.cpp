#include <stdio.h>

int main (void)
{
    int *p;
    
    // p = NULL --> 인자 없음
    
    int a;
    p = &a;
    
    int nums[100];
    p = &nums[0];
    
    *p = 300;
    
    printf("*p : %d\n", *p);
    
    
    return 0;
}

2021.05.13 포인터 *p
