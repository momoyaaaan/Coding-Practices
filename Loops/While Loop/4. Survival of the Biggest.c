#include <stdio.h>

int main(void){
    int num, large = 0, rem = 0;

    printf("Enter n: ");
    scanf("%d", &num);

    while(num != 0){
       rem = num % 10;

       if(rem > large){
            large = rem;
       }
       num = num / 10;
    }
    printf("Largest digit = %d", large);
    return 0;
}
