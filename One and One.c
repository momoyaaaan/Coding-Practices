#include <stdio.h>

int main(void){

    char character;
    int integer;

    printf("Enter the character: ");
    scanf("%s", &character);

    printf("Enter the integer: ");
    scanf("%d", &integer);

    printf("%c %d", character, integer);

    return 0;
}
