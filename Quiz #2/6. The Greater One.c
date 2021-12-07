#include <stdio.h>

int main(void){
    float a, b ;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    if(a > b){
        printf("Greater");
    }else
        printf("Lesser");

    return 0;
}
