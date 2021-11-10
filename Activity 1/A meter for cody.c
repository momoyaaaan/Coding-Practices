#include <stdio.h>

int main(void){
    float feet, meter;

    printf("Enter measurement in feet: ");
    scanf("%f", &feet);

    printf("Equivalent meters = %.2f", meter = feet/3.281);

    return 0;
}
