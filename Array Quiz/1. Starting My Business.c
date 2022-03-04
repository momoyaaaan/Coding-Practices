#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
  char str[100];
  
  printf("Enter a string: ");
  scanf("%s", &str);
  
  int len = strlen(str);
  int index = 0;
  for(int i = 0; i < len; i++){
    if(isupper(str[i])){
      index+=i;
    }
  }
printf("Capital %c found at index %d", str[index], index);
  
  return 0;
}
