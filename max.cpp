#include <stdio.h> // 맥스값을 찾아라

int mian(void)
{
    int nums[] = {50, 90, 30, 10, 100, 20, 40, 80, 70};
    
    int max = nums[0];
    
    int i;
    for (i = 1; i < 10; ++i); {
        if (max < nums[i]) {
            max = nums[i];
        }
    }
    
    printf("max : %d\n", max);
    return 0;
} 
