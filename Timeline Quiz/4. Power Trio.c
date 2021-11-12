#include <stdio.h>

int main(void){

    float a, b, c, d;
    
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter the third number: ");
    scanf("%f", &c);

    printf("Product = %.1f", a*b*c);

    return 0;
}
