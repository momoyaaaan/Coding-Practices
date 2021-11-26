#include<stdio.h>
int findHour(int time){
    int hour = time / 100;

    return hour;
}
int findMin(int time){
    int min = time % 100;

    return min;
}
void display(int hour, int min){
    
    printf("Hour: %d\nMinutes: %d", hour, min);

    return;
}
