#include <stdio.h>

int main(void){
  float n, sum;
  
  do
  {
    printf("Enter a number: ");
    scanf("%f", &n);
    
    if(n < 0){
      sum = sum + n;
    }
    
  }while(n!=0);
  
  printf("Sum of all negatives = %.3f", sum);
  
  return 0;
}
