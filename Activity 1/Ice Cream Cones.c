#include <stdio.h>

int main(void){

    float r, h, vol;

    printf("Enter the radius of the cone: ");
    scanf("%f", &r);

    printf("Enter the height of the cone: ");
    scanf("%f", &h);

    printf("Volume of the cone = %.2f", vol = 0.33333333333*3.14*(r*r)*h);

    return 0;
}
