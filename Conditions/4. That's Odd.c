#include <stdio.h>

int main(void){
    int a;

    printf("Enter n: ");
    scanf("\n%d", &a);

    printf("%d", a);

    if(a % 2 != 0){
        printf("\nOdd");
    }
    
    return 0;
}
