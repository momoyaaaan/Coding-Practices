#include<stdio.h>
#include"inches.h"
int main(void) {
    float inch;
    float feet, yard, centi, meter;
	scanf("%f",&inch);
    feet = toFeet(inch);
    yard = toYard(inch);
    centi = toCenti(inch);
    meter = toMeter(inch);
    display(feet,yard,centi,meter);
    return 0;
}
