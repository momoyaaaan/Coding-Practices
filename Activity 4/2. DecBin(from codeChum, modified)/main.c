#include<stdio.h>
#include"decBin.h"
int main(void) {
    int n = getNum();
    long d = decBin(n);
    display(d);
    return 0;
}
