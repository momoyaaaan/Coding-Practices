#include <stdio.h>

int main(void){
    int a, b, i, gcd;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    for(i = 1; i <= a && i <= b; ++i){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d", a, b, gcd);
}
