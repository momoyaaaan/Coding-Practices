#include <stdio.h>

int main(void){
    int a = 1;
    int b;
    printf("Enter n: ");
    scanf("%d", &b);

    while(a <= b){
        if(b % 2 != 0){
            printf("%d\n", b);
        }
        b--;
    }
    return 0;
}
