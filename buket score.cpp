#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int buket[45];

    for (int i = 0; i < 45; i++) {
        buket[i] = i + 1;
    
    }
        srand(time(NULL));   
       
        for (int i = 1; i <= 100000; i++){
            // printf("%d" buket[i])
            int left = rand() % 45;
            int right = rand() % 45;
           
            int tmp = buket[left];
            buket[left] = buket[right];
            buket[right] = tmp;
        }
       
        for (int i = 0; i < 7; i++) {
            printf("%d\t", buket[i]);               
              }
                 
    printf("\n");
    return 0;
}

======================================
2021.05.12 연습 및 실습 내용
