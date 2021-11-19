#include<stdio.h>
#include"MathV1.h"
int main(void) {
     int x, y;
     int s,d,p,m;
     float q;
    scanf("%d",&x);
    scanf("%d",&y);
    s = sum(x,y);
    d = diff(x,y);
    p = prod(x,y);
    q = quot(x,y);
    m = mod(x,y);
    display(s,d,p,q,m);
    return 0;
}
