#include<stdio.h>
#include"decimalPos.h"
int main(void) {
    float num = getNum();
    int pos = getPos();
    int n = determineNum(num, pos);
    display(n);
    return 0;
}
