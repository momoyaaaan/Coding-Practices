#include <stdio.h>

int main(void){
    int a, b;
    int occ = 0;

    printf("Enter the first integer (0 - 9): ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    while(b != 0)
    {
        if(b % 10 == a){
            occ++;
        }
        b = b / 10;
    }
    printf("Occurrences = %d\n", occ);
    
    return 0;
}
