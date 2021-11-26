#include<stdio.h>
#include"taxi.h"
int main(void) {
    int distance;
    float fare;
    scanf("%d",&distance);
    fare = computeFare(distance);
    display(fare);
    return 0;
}
