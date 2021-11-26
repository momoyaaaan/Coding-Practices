#include<stdio.h>
#include"digitPos.h"
int main(void) {
    int num = getNum();
    int pos = getPos();
    int digit = determineDigit(num,pos);
    int n = raiseTo(digit);
    display(n);
    return 0;
}
