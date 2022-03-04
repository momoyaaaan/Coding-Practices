#include<stdio.h>
#include<string.h>
int main() {
    char array[100] ="supercalifragilisticexpialidocious";
    int index;
    int len = strlen(array);
    
    printf("Enter the index: ");
    scanf("%d", &index);
    
    for(int i = 0; i < len; i++){
      printf("%c", array[index]);
      break;
    }
    return 0;
}
