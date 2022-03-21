#include<stdio.h>

int main(void) {
    
    int nums[40] = {
        -2, 1, 1, 2, 3, 
        9, 10, -3, 100, 2,
        4, -5, 1, 10, -100,
        5, 2, 3, -1, 1,
        -3, -4, -5, -6, -7,
        9, 9, 9, 9, 9,
        1, 2, 3, 4, 5,
        100, 100, 100, 100, 100
    };
    
    int size = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = 0; i < size; i++){
      if(nums[i] > 0){
        nums[i]*=nums[i]*nums[i];
        printf("%d", nums[i]);
      }
      if(nums[i] < 0){
        nums[i]*=nums[i];
        printf("%d", nums[i]);
      }
      printf("\n");
    }
    return 0;
}
