#include <stdio.h>

int main(void){
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("%d %d", a, b);

    if(a == b){
        printf("\nEqual");
    }
    
    return 0;
}
