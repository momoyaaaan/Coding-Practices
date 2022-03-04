#include<stdio.h>
#include <string.h>

// TODO: Declare the hasConsonant() function here
int hasConsonant(char *code);

int main(void) {
    char code[100];

    printf("Enter the code: ");
    scanf("%s", code);

    int result = hasConsonant(code);

    if(result == 1) {
        printf("ALERT! There is a consonant in the code!");
    } else if(result == 0) {
        printf("There is no consonant in the code. Situation is under control!");
    }

    return 0;
}

// TODO: Define the hasConsonant() function here
int hasConsonant(char *code){
int flag = 0;
  int len = strlen(code);
  for(int i = 0; i < len; i++){
  if(code[i] == 'b' ||code[i] == 'B' ||code[i] == 'c' ||code[i] == 'C' ||code[i] == 'd' ||code[i] =='D' ||code[i] == 'f' ||
  code[i] == 'F' ||code[i] == 'g' ||code[i] == 'G' ||code[i] == 'j' ||code[i] =='J' ||code[i] == 'k' ||code[i] == 'K' ||
  code[i] == 'l' ||code[i] == 'L' ||code[i] == 'm' ||code[i] == 'M' ||code[i] == 'n' ||code[i] == 'N' ||code[i] == 'p' ||
  code[i] == 'P' ||code[i] == 'q' ||code[i] == 'Q' ||code[i] == 's' ||code[i] == 'S' ||code[i] == 't' ||code[i] == 'T' ||
  code[i] == 'v' ||code[i] == 'V' ||code[i] == 'x' ||code[i] == 'X' ||code[i] == 'z' ||code[i] == 'Z' ||code[i] == 'h' ||
  code[i] == 'H' ||code[i] == 'r' ||code[i] == 'R' ||code[i] == 'w' ||code[i] == 'W' ||code[i] == 'y' ||code[i] == 'Y'){
    flag = 1;
  }
  }
  if(flag == 1){
    return 1;
  }else{
    return 0;
  }
}
