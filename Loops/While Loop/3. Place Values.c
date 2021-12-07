#include <stdio.h>

int main(void){
    int num;
    int rem;

    printf("Enter n: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        num = num / 10;

        printf("%d\n", rem);


    }
    return 0;
}
