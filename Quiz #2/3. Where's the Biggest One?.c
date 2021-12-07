#include <stdio.h>

int main(void){
    int a, b ,c , d , e;

    printf("Enter integer 1: ");
    scanf("%d", &a);

    printf("Enter integer 2: ");
    scanf("%d", &b);
    
    printf("Enter integer 3: ");
    scanf("%d", &c);

    printf("Enter integer 4: ");
    scanf("%d", &d);

    printf("Enter integer 5: ");
    scanf("%d", &e);

    if(a > b && a > c && a > d && a > e){
        printf("Leftmost");
    }else if (c > a && c > b && c > d && c > e){
        printf("Middle");
    }else if ( e > a && e >b && e > c && e > d){
        printf("Rightmost");
    }else{
        printf("Unknown");
    }
    return 0;
}
