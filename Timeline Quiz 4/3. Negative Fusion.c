#include <stdio.h>

int main(void){
    float num, sum, count = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if(num < 0){
        sum = sum + num;
        }
    }while(num != 0);
    printf("Sum of all negatives = %.3f", sum);
    return 0;
}
