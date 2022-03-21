#include <stdio.h>

int main(void){
    int n, c = 0;

    printf("Enter n: ");
    scanf("%d", &n);


    while(n >= 0){
        if(n % 10 == 0){
            c++;
            n = n / 10;
        }
        else{
            break;
        }
    }
    printf("Last zeroes count = %d", c);
    return 0;
}
