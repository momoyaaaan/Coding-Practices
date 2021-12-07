#include <stdio.h>

int main(void){
    int digit, integer, rem;
    int flag = 0;

    printf("Enter the digit (0 - 9): ");
    scanf("%d", &digit);

    printf("Enter the integer: ");
    scanf("%d", &integer);

    for(int i = 0; i < integer; i++){

        if(integer % 10 == digit){
            flag = 1;
            printf("Yes");
            break;
        }else{
            integer = integer / 10;
        }
    }
        if(flag == 0)
        printf("No");
     return 0;

}
