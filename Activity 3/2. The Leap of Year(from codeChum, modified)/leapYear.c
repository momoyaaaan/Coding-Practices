#include<stdio.h>

int getYear(){
    int a;

    scanf("%d", &a);

    return a;

}
/*accepts year input from the user*/

int isLeapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0)|| (year & 4 == 0 && year % 100 == 0 && year % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}
/*returns 1 if year is a leap year, else, returns 0*/

void display(int l){
    if(l == 1){
        printf("Leap Year");
    }else
        printf("Not a Leap Year");
    return;
}
/*prints "Leap Year" if l equals 1, else prints "Not a Leap Year"*/
