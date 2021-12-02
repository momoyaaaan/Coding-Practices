#include<stdio.h>
#include"numberGame.h"
int main(void) {
    int num = getNum();
    int res = identify(num);
    display(res);
    return 0;
}
