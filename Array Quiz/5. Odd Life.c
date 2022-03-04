#include<stdio.h>

// TODO: Declare the displayOdd() function here
void displayOdd(int *arr, int size);
int main(void) {
    int life[90] = {
        1,3,2,4,5,7,6,8,9,11,
        100,13,0,14,16,17,3,18,20,10,
        12,8,15,14,-5,17,19,18,1,9,5,
        10,13,11,14,16,22,0,18,20,3,
        99,13,15,14,22,17,19,0,23,2,
        12,13,15,22,16,17,56,18,44,99,
        2,13,22,14,16,89,19,69,101,34,
        12,22,15,14,78,17,69,18,2,33
    };

    displayOdd(life, 90);
    
    return 0;
}

// TODO: Define the displayOdd() function here
void displayOdd(int *arr, int size){
  for(int i = size; i >= 0; i--){
    if(arr[i] % 2 != 0){
      printf("Odd element at index %d: %d\n", i, arr[i]);
    }
  }
}
