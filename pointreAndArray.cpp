 

#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    int *p;
    
    p = nums;
    
    for (int i = 0; i <5 ; i++){
    printf("*p : %d\n", *p);
    ++p;
    }
    return 0;
}

2021.05.14
포인터
