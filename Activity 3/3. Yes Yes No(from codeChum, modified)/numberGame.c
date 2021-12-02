#include <stdio.h>

int getNum(){
    int a;
    scanf("%d", &a);
    return a;

}
/*
accepts input from the user
*/

int identify(int num){
    if(num >= 15 && num <= 30 && num % 2 != 0){
        return 1;
    }else
        return 0;

}
/*
    returns 1 if num is positive, odd, and is in between 15 to 30 (inclusive), else, returns 0.
*/
void display(int res){
    if(res == 1){
        printf("yes");
    }else
        printf("no");

}
/*
    displays yes if res equals 1, else, displays 0.
*/
