#include <stdio.h>

int main(void){
    int num, sum = 0;


    do{   
        printf("\nEnter n: ");
        scanf("%d", &num);

        sum = num * num;
        printf("Square = %d\n", sum);
    } 
        while(num !=0 );

     return 0;
}
