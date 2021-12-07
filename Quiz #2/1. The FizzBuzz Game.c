#include <stdio.h>

int main(void){
    int num;
    printf("Enter n: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0){
        printf("FizzBuzz");
    }else if(num % 5 == 0){
        printf("Buzz");
    }else if(num % 3 == 0){
        printf("Fizz");
    }
    return 0;
}
