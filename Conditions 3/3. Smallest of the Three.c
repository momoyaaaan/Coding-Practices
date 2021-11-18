#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Enter the first integer: ");
    scanf("\n%d", &a);

    printf("Enter the second integer: ");
    scanf("\n%d", &b);

    printf("Enter the third integer: ");
    scanf("\n%d", &c);

    if(a < b && a < c){
        printf("Smallest = %d", a);
    }
    else if(b < c){
        printf("Smallest = %d", b);
    }
    else{
        printf("Smallest = %d", c);
    }
    return 0;
}
