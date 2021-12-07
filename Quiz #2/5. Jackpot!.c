#include <stdio.h>

int main(void){
    int integer, digit;

    printf("Enter the 3-digit integer: ");
    scanf("%d", &integer);

    printf("Enter the digit to be searched (0 - 9): ");
    scanf("%d", &digit);

    if(integer == 111 && digit == 1){
        printf("Jackpot!");
    }else if(integer == 222 && digit == 2){
        printf("Jackpot!");
    }else if(integer == 333 && digit == 3){
        printf("Jackpot!");
    }else if(integer == 444 && digit == 4){
        printf("Jackpot!");
    }else if(integer == 555 && digit == 5){
        printf("Jackpot!");
    }else if(integer == 666 && digit == 6){
        printf("Jackpot!");
    }else if(integer == 777 && digit == 7){
        printf("Jackpot!");
    }else if(integer == 888 && digit == 8){
        printf("Jackpot!");
    }else if(integer == 999 && digit == 9){
        printf("Jackpot!");
    }else{
        printf("Nah");

    }
    return 0;
}
