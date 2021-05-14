
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int num, den;
    if ( a > b) {
        num = a;
        den = b;
    } else {
        num = b;
        den = a;
        }
       
        int remain;
        while (remain = num % den) {
                       
            //if (remain ==0);
          2021.05.14 유클리드 호제법 [큰수에서 작은 수를 계속 빼서 남어지 값이 같아 지도록 만든다]      
                               ex)  126   -   36
                                     90   -   36
                                     54   -   36
                                     답 : 18
