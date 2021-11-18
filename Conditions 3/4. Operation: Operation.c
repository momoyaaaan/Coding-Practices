#include <stdio.h>

int main(void){
    float a;
    float b;
    float result;
    char aa;
    char q ='+';
    char w ='-';
    char e ='*';
    char r ='/';

    printf("Enter the first number: ");
    scanf("\n%f", &a);

    printf("Select the operator (+, -, *, /): ");
    scanf("\n%c", &aa);

    printf("Enter the second number: ");
    scanf("\n%f", &b);

    if(aa == q){
        result = a+b;
        printf("Result = %.2f", result);
    }
    else if(aa == w){
        result = a-b;
        printf("Result = %.2f", result);
    }
    else if(aa == e){
        result = a*b;
        printf("Result = %.2f", result);
    }
    else if(aa == r){
        result = a/b;
        printf("Result = %.2f", result); 
    }
    return 0;
}
