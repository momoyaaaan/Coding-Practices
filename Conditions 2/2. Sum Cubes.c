#include <stdio.h>

int main(void){
    int a, b ,c;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Enter the third integer: ");
    scanf("%d", &c);

    int sum = a*a*a+b*b*b+c*c*c;
    if(sum > 0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}
