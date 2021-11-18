#include <stdio.h>

int main(void){
    char a, b ,c;

    printf("Enter the first character: ");
    scanf("\n%c", &a);
    
    printf("Enter the second character: ");
    scanf("\n%c", &b);

    printf("Enter the third character: ");
    scanf("\n%c", &c);

    
    if(a == b && a == c && b == c){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}
