#include <stdio.h>

int main(void){
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int a = 1; a <= n; a++){
        if(a > 3){
            printf("%d\n", a);
        }
    }
    return 0;

}
