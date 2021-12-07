#include <stdio.h>

int main(void){
    char a, b;
    int counter = 0;

    do{
        printf("Enter a character: ");
        scanf("\n%c", &a);

        counter++;
        printf("%c\n\n", a);
        

    }while(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u' && counter < 5);

    return 0;
}
