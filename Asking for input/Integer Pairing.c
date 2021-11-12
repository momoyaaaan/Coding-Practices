#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c, d, e, f, sum1, sum2, mul;
    

    printf("Enter integer 1: ");
    scanf("%d", &a);

    printf("Enter integer 2: ");
    scanf("%d", &b);

    printf("Enter integer 3: ");
    scanf("%d", &c);

    printf("Enter integer 4: ");
    scanf("%d", &d);

    printf("Enter integer 5: ");
    scanf("%d", &e);

    sum1 = a+b;
    sum2 = c+d;
    mul = sum1*sum2;

    printf("Result = %.lf", pow(mul, e));
   

    return 0;
}
