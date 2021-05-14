
#include <stdio.h>

// sum = sum + nums[i];
// sum += nums[i];

long long  powre(int bese, int exponent)
// int powre(int bese, int exponent)
{
        long long reault = 1LL;
        // int reault = 1;
        for (int i = 1; i <= exponent; i++ ){
            reault *= bese ;              // reault = reault * bese;
        }       
            return reault;
}
int main (void)
{
    for (int i = 0; i <= 32; i++) {
            long long int reault;
            // int reault;
            reault = powre(2, i);
           
            printf("2 power of %d = %lld\n",i, reault);
                                 // %d\n
        }
    return 0;
}

2021.05.14 증가 값
