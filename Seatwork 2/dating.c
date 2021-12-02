#include <stdio.h>
int isDivisible(int num1, int num2){

    if(num1 % num2 ==0)
		return 1;
	else
		return 0;
}
void display(int res){
    if(res == 1)
		printf("divisible");
        else
            printf("not");
    return;
}
