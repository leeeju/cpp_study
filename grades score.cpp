#include <stdio.h>

int main(void)
{
    int score;
    printf("input score :  ");
    scanf("%d", &score);
    
    char grades[11] = {'F','F','F','F','F','F','D','C','B','A','A'};
    
    char grade;
    grade = grades[score / 10];
    
    printf("score : %d\t grade: %c\n", score, grade);
    return 0;
} 

===================================
  2021.05.12 학점 출력기
