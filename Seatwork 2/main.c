#include<stdio.h>
#include"dating.h"
int main(void) {
    int num1, num2, res;
    scanf("%d %d",&num1,&num2);
    res = isDivisible(num1,num2);
    display(res);
    return 0;
}
