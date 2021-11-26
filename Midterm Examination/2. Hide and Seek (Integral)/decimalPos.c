#include <stdio.h>
#include <math.h>
float getNum(){
    float a;
    printf("Enter the number: ");
    scanf("%f", &a);

    return a;
}
int getPos(){
    int b;
    printf("Enter the integral position: ");
    scanf("%d", &b);

    return b;
}
int determineNum(float num, int pos){
    int ans;
    if(pos == 1){
        ans = (int)num % 10;
    }else if (pos == 2){
        ans = (int)num / 10 % 10;
    }else if (pos == 3){
        ans = (int)num / 10 / 10 % 10;
    }else if (pos == 4){
        ans = (int)num / 10 / 10 / 10 % 10;
    }


    return ans;
}

void display(int n){
    printf("Decimal value at integral position = %d", n);

    return;
}
