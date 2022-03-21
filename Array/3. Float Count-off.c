#include<stdio.h>

int main(void) {
    
    float nums[30] = {
        1.4, 1.2054, 2.2, 2.5, 3.66, 
        3.0, 4.024, 4.00001, 5.5, 5.10,
        1, 2, 3, 4, 5,
        -1.11, -1.111, -1.1111, -1.11111, -1.111111,
        2.421, 4.1, 12312.1, -414.123, -321.12,
        0, 3.123, 3.14, 143, 2.412
    };
    
    int size = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = size-1; i >= 0; i--){
      printf("%.2f\n", nums[i]);
      
    }
    return 0;
}
