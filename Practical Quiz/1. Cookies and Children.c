#include <stdio.h>

int main(void){

    int a, b, aa, bb, a1;

    scanf("%d\n%d", &a ,& b);

    a1 = a % b;
    aa = b-a1;
    bb = (aa+a)/b;


    printf("I need to bake %d additional cookies to give each child %d cookies.", aa , bb);

    return 0;

}
