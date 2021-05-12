
#include <stdio.h>

int main(void)
{
    int matrix[3][4] = {
    
        {1,2.3,4}, {5,6,7,8}, {9,10,11,12}
       
        };
        int sum = 0;
        for (int i = 0; i < 3; ++i){
            for (int j = 0; j < 4; ++j) {
                sum = sum + matrix [i][j]    ;
            }
           
        }
        printf("sum : %d\n", sum);
    return 0;
} 

===================
  2021.05.12 
