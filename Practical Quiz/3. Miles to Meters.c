#include <stdio.h>

int main(void){

    float a, b;

    printf("Enter the distance (miles): ");
    scanf("%f", &a);

    b = a*1609.34;
    printf("Distance (meters) = %.2f", b);
    
    
    return 0;
}
