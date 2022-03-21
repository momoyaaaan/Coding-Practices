#include <stdio.h>

int main(void){
  int n;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++){
    if(i > 3){
      printf("%d\n", i);
    }
  }
  
  return 0;
}
