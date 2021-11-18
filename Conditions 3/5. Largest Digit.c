#include<stdio.h>

int main() {

   int a, b, c = 0;

   printf("Enter a 3-digit integer: ");
   scanf("%d", &a);

   while (a > 0) {
       b = a % 10;
       if (c < b) {
           c = b;
       }
       a = a / 10;
   }
   printf("Largest = %d", c);

   return 0;
}
