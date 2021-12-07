#include <stdio.h>

int main(void){
    float a, sum = 0;

    do{
        printf("Enter a number: ");
        scanf("%f", &a);
        
        sum+=a;
        
    }while(a > 0 && sum <= 100.0);
    printf("Sum = %.2f", sum);
    return 0;
}
