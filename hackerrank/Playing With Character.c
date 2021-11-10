#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int BUFFSIZE = 256;
    
    char ch;
    char s[BUFFSIZE];
    char sen[BUFFSIZE];
    
    scanf("%c ", &ch);
    scanf("%s ", s);
    fgets(sen, BUFFSIZE, stdin);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
