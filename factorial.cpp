#include <stdio.h>

long long factorial(int n)
{
    long long reault =1LL;
    for (int i = 2; i <= n; i++) {
        reault *= i;      // reault = reault * i;
    }
    return reault;
}

int main(void)
{
    for (int i = 1; i <= 100; i++) {
        long long reault;
       
        reault = factorial(i);
       
        printf("%d! = %lld\n", i, reault);
    }

    return 0;
} 
2021.05.14
