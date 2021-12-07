#include<stdio.h>
#include"quadrant.h"
int main(void) {
    int x,y,quad;
    scanf("%d %d",&x,&y);
    quad = findQuadrant(x,y);
    display(quad);
    return 0;
}
