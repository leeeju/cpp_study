#include <stdio.h>

int sumArray(const int *pArr, int size)
{
    int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + pArr[i];   // *(parr + i);
        }
    
        return sum;
}

int main(void)
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    
    int sum;
    //sum = sumArray(nums, 10);    // sum = sumArray(&nums[0]);      <-- 두 형식 모두 같은거다 뭘 써도 상관 없음
    sum = sumArray(nums + 5, 5);   //sum = sumArray(&nums[5], 5);    <-- 두 형식 모두 같은거다 뭘 써도 상관 없음
    
    printf("sum : %d\n", sum);
    
    
    return 0;
} 

2021.05.14
/*
sumArray 치명적인 단점으로는 사이드 10 밖에 못 준다 그렇게 때문에 변수형인 size를 사용한다

★ 함수인자로 포인터를 사용하는 이유 ★
 1. 호출하는 쪽의 변수값을 호출 당하는 쪽에서 바꿀때
 2. 배열 인자를 전달할떄 첫번째 엘리먼트와 사이드를 전달 할때

*/
  
  
