#include<stdio.h>


float toFeet(float inch){
    float f = inch / 12;
    return f;

}
float toYard(float inch){
    float y = inch / 36;
    return y;
}
float toCenti(float inch){
    float c = 2.54*inch;
    return c;
}
float toMeter(float inch){
    float m = inch / 39.37;
    return m;
}
void display(float f, float y, float c, float m){
    printf("%.2f\n%.2f\n%.2f\n%.2f\n", f, y, c, m);
    return;
}
