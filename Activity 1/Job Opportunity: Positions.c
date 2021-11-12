#include <stdio.h>

int main(void){

    char num,n1,n2,n3,n4,n5;

    printf("Enter the 5-man team's numbers: ");
    scanf("%c%c%c%c%c", &n1, &n2, &n3, &n4, &n5);

    printf("%c %c %c %c %c", n1,n2,n3,n4,n5);

    return 0;

}




// or with using pointers and while loop




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
