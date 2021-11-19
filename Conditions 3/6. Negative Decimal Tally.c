#include <stdio.h>

int main(void){
    float a, b, c, d;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter the third number: ");
    scanf("%f", &c);

    printf("Enter the fourth number: ");
    scanf("%f", &d);
    
   
    if(a > 0){
        a = 0;
    }
  
    if(b > 0){
        b = 0;
    }
    
    if(c > 0){
        c = 0;
    }
   
    if(d > 0){
        d = 0;
    }
    

    float sum = a+b+c+d;
    printf("Sum of all negatives = %.2f", sum);
    return 0;
}
