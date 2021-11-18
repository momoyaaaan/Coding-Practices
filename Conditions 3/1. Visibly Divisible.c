#include <stdio.h>

int main(void){
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 4 == 0){
        printf("Divisible by 3 and 4");
    }
    else if(n % 3 == 0){
        printf("Divisible by 3");
    }
    else if(n % 4 == 0){
        printf("Divisible by 4");
    }
    
    return 0;
}
