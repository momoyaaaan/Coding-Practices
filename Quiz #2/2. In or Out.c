#include <stdio.h>

int main(void){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("In");
    }else if(n % 2 != 0){
        printf("Out");
    }
    return 0;
}
