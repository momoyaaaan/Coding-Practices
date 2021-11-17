#include <stdio.h>

int main(void){
    float a, b, c , d, e;

    printf("Enter the first number: ");
    scanf("\n%f", &a);

    printf("Enter the second number: ");
    scanf("\n%f", &b);

    printf("Enter the third number: ");
    scanf("\n%f", &c);

    printf("Enter the fourth number: ");
    scanf("\n%f", &d);

    printf("Enter the fifth number: ");
    scanf("\n%f", &e);

    printf("%.1f %.1f %.1f %.1f %.1f", a, b, c, d, e);

    float sum = a+b+c+d;   
    if(sum > e){
        printf("\nYes");
    }
    
    return 0;
}
