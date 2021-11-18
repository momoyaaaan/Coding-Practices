#include <stdio.h>

int main(void){
    char flc;

    char a = 'r';
    char aa = 'R';
    char b = 'b';
    char bb = 'B';
    char c = 'g';
    char cc = 'G';

    printf("Enter the first letter of the color: ");
    scanf("%c", &flc);

    if(flc == a || flc == aa){
        printf("Red");
    }
    else if(flc == b || flc == bb){
        printf("Blue");
    }
    else if(flc == c || flc == cc){
        printf("Green");
    }
    else{
        printf("None of the above");
    }
    
    return 0;
}
