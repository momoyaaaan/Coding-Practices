#include <stdio.h>

int main(void){

    float a, b;


    printf("Enter the base of the pizza slice: ");
    scanf("%f", &a);

    printf("Enter the height of the pizza slice: ");
    scanf("%f", &b);


    printf("Area of the pizza slice = %.2f", a*b/2);


    return 0;
}
