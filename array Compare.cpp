

#include <stdio.h>

int main(void)
{
    int nums1[] = {1,2,3,4,5};
    int nums2[] = {1,2,3,4,5};
    /*
    if (nums1 == nums2) {
        printf("nums1 and nums2 are equal\n");   
    
    } else {
        printf("nums1 and nums2 are not equal\n");
    }
 */
      int i;
     for (i = 0; i < 5; i++) {
         if (nums1[i] != nums2[i]) {
         break;
         }
     }
     if (i == 5)
     {
        printf("nums1 and nums2 are equal\n");   
    
    } else {
        printf("nums1 and nums2 are not equal\n");
    }
    

    return 0;
}

2021.05.14 포인터
