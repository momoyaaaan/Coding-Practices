#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Enter the first integer: ");
    scanf("\n%d", &a);

    printf("Enter the second integer: ");
    scanf("\n%d", &b);

    printf("Enter the third integer: ");
    scanf("\n%d", &c);

    printf("%d %d %d", a, b, c);

    if(a >= b, a >= c){
        printf("\nYes");
    }
    
    return 0;
}
