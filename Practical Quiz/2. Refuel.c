#include <stdio.h>

int main(void){

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float d = c-(a*b);

    printf("%.2f", d);

    return 0;
}
