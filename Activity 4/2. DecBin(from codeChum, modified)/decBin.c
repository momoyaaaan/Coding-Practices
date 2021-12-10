#include <stdio.h>
int getNum(){
    int a;
    scanf("%d", &a);
    return a;
}
/*accepts input from the user.*/

long decBin(int n){
    long long bin = 0;
    int rem, i = 1;
    for(n; n != 0; i *=10){
        rem = n % 2;
        n /= 2;
        bin += rem * i;
    }
    return bin;
}
/*
    returns the binary equivalent of n. 
    Note: Use of built in functions that will automatically convert decimal to binary is not allowed.
*/

void display(long binary){
    printf("%lld", binary);

    return;
}
/*displays the binary equivalent*/
