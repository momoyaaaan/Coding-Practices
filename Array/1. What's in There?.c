#include <stdio.h>

int main(void){
  char string[100];
  int index;
  
  printf("Enter the string: ");
  scanf("%s", &string);
  
  printf("Enter the index: ");
  scanf("%d", &index);
  
  printf("Character at index %d = %c", index, string[index]);
  
  return 0;
  

}
