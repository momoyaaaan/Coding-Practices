#include <stdio.h>

int main(void){
  int first,second;
  int gcd;
  
  printf("Enter the first integer: ");
  scanf("%d", &first);
  
  printf("Enter the second integer: ");
  scanf("%d", &second);
  
  for(int i = 1; i <= first && i <= second; ++i){
        if(first % i == 0 && second % i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d", first, second, gcd);
    
    return 0;
}
