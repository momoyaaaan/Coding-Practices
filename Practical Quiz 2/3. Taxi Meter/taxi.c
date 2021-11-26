#include <stdio.h>
#include <math.h>
float computeFare(int distance){
    float fare = 40, m = distance;
    m-=250;
    fare+=2.50*ceil(m/200);
    return fare;
}
void display(float fare){
    printf("P%.2f", fare);
    return;
}
