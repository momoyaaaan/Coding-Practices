#include <stdio.h>

int main(void){

    int a,b,c;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Remainder = %d", c = a % b);
    return 0;
}
