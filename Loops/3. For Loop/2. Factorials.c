#include <stdio.h>

int main(void){
    int num, fact = 1;

    printf("Enter n: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++ ){
        fact = fact * i;
    }
    printf("Factorial of %d = %d", num, fact);
    return 0;
}
