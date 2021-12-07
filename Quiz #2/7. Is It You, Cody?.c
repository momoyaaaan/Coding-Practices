#include <stdio.h>

int main(void){
    char a,b,c,d;

    printf("Enter the first character: ");
    scanf("\n%c", &a);

    printf("Enter the second character: ");
    scanf("\n%c", &b);

    printf("Enter the third character: ");
    scanf("\n%c", &c);

    printf("Enter the fourth character: ");
    scanf("\n%c", &d);

    if((a == 'c' || a == 'C') &&(b == 'o' || b == 'O') && (c == 'd' || c == 'D') && (d == 'y' || d == 'Y')){
    printf("Correct");
}else {
    printf("Wrong");
}
}
