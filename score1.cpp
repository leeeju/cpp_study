#include <stdio.h>

int main(void)
{
    int score;
    printf("input score : ");
    scanf("%d", &score);
    
    printf("csore : %d --> %s\n", score, (score >= 60) ? "pass " : "fail");


    return 0;
    
}
