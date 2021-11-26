#include <stdio.h>
#include <math.h>
int getNum(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    return a;
}

int getPos(){
    int b;
    printf("Enter the digit position: ");
    scanf("%d", &b);
    return b;
}

int determineDigit(int num, int pos){
    int ans;
    if(pos == 1){
        ans = (int)num % 10;
    }else if (pos == 2){
        ans = (int)num / 10 % 10;
    }else if (pos == 3){
        ans = (int)num / 10 / 10 % 10;
    }else if (pos == 4){
        ans = (int)num / 10 / 10 / 10 % 10;
    }else if (pos == 5){
        ans = (int)num / 10 / 10 / 10 / 10 % 10;
    }
    return ans;
}
int raiseTo(int digit){
    int c = pow(2, digit);

    return c;
}

void display(int n){
    printf("2 raise to digit position = %d", n);

    return;
}
