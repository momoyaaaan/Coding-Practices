#include <stdio.h>

int main(void){
    int num, sum = 0;

    do{
        printf("Enter n: ");
        scanf("%d", &num);

        if(num < 0)
            sum+=num;
        }while (num != 0);
        printf("Sum of negatives = %d", sum);
    return 0;

}
