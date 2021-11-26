#include<stdio.h>
#include"digits.h"
int main(void) {
    int num, sum;
	scanf("%d",&num);
    sum = findSum(num);
    display(sum);
    return 0;
}
