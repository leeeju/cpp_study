#include <stdio.h>

int main(void)
{
    int matrix[3][4] = {
    
        {1,2.3,4}, {5,6,7,8}, {9,10,11,12}
       
        };
       
        for (int i = 0; i < 3; ++i){
            for (int j = 0; j < 4; ++j) {
                printf("%2d ", matrix[i][j]);       
            }
            printf("\n");
        }
    return 0;
}

// 2021.05.12
// 숫자 출력기
