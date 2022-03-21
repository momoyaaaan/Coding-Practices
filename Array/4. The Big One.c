#include <stdio.h>

int main(void){
  int size;
  
  printf("Enter the size: ");
  scanf("%d", &size);
  
  int array[size];
  
  for(int i = 0; i < size; i++){
    scanf("%d", &array[i]);
  }
  
  printf("\nReversed = ");
  for(int i = size-1; i >= 0; i--){
    printf("%d ", array[i]);
  }
  
  for(int i = 0; i < size; i++){
    if(array[0] < array[i]){
      array[0] = array[i];
    }
  }
  
  printf("\nLargest element = %d", array[0]);
  
  return 0;
}
