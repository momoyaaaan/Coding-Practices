#include <stdio.h>

int main(void){
    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Adult");
    }
    else{
        printf("Minor");
    }
    return 0;
}
