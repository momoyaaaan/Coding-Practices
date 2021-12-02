#include<stdio.h>
#include"leapYear.h"
int main(void) {
    int year = getYear();
    int l = isLeapYear(year);
    display(l);
    return 0;
}
