#include<stdio.h>
#include<math.h>
int findSum(int num){
    int sum = (( pow((num/100),3) + pow(((num/10)%10),3) + pow((num%10),3) ));
    return sum;
}
void display(int sum){
    printf("%d", sum);
    return;
}
