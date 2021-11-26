#include<stdio.h>
#include"Time.h"
int main(void) {
    int time, hour, min;
	scanf("%d",&time);
    hour = findHour(time);
    min = findMin(time);
    display(hour,min);
    return 0;
}
