#include <stdio.h>
int findQuadrant(int x,int y){


    if(x == 0 && y == 0){
        return 0;
    }else if (x > 0 && y > 0){
        return 1;
    }else if (x < 0 && y > 0){
        return 2;
    }else if (x < 0 && y < 0){
        return 3;
    }else if (x > 0 && y < 0){
        return 4;
    }else if (x > 0 && y == 0){
        return 5;
    }else if (x == 0 && y > 0){
        return 6;
    }else if (x < 0 && y == 0){
        return 7;
    }else if (x == 0 && y < 0){
        return 8;
    }
}
void display(int quad){

    if( quad == 0){
        printf("Origin");
    }else if(quad == 1){
        printf("Quadrant 1");
    }else if(quad == 2){
        printf("Quadrant 2");
    }else if(quad == 3){
        printf("Quadrant 3");
    }else if(quad == 4){
        printf("Quadrant 4");
    }else if(quad == 5){
        printf("Positive X");
    }else if(quad == 6){
        printf("Positive Y");
    }else if(quad == 7){
        printf("Negative X");
    }else if(quad == 8){
        printf("Negative Y");
    }
    return;
}
