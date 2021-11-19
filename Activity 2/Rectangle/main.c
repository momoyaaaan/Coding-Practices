#include<stdio.h>
#include"rectangle.h"
int main(void) {
    float l, w;
    float areaR, peri, diag, areaT;
	scanf("%f",&l);
    scanf("%f",&w);
   	areaR = areaRect(l,w);
	peri = periRect(l,w); 
	diag = diagLine(l,w);   
	areaT = areaTria(l,w);
    display(areaR,peri,diag,areaT);
    return 0;
}
