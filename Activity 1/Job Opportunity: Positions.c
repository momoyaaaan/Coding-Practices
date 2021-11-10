#include <stdio.h>

int main(void){

    char number[126];

    printf("Enter the 5-man team's numbers: ");
    scanf("%s", number);

    char *p = number;
    while (*p != '\0'){
        printf ("%c ", *p); 
        p++;
    }	
    return 0;
}
