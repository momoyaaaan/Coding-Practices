#include <stdio.h>

int main(void){
    float a, b, c , d , e;
    printf("Enter the first number: ");
    scanf("\n%f", &a);

    printf("Enter the second number: ");
    scanf("\n%f", &b);
                    
    printf("Enter the third number: ");
    scanf("\n%f", &c);

    printf("Enter the fourth number: ");
    scanf("\n%f", &d);

    if( a < 0){
        a = 0;
    }else a = 1;
    if( b < 0){
        b = 0;
    }else b =1;
    if( c < 0){
        c = 0;
    }else c = 1;
    if( d < 0){
        d = 0;
   }else d = 1;
    e = a+b+c+d;
   printf("Count of positives = %.f", e );

   return 0;
}
