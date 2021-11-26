#include<stdio.h>
#include"square.h"
int main(void) {
    float side = getSide();
    float area = solveArea(side);
    display(area);
    return 0;
}
