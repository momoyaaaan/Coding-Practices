#include <stdio.h>

int main(void){
    int start, end;

    printf("Enter the starting point: ");
    scanf("%d", &start);

    printf("Enter the ending point: ");
    scanf("%d", &end);

    for(start; start <= end; start++){
        if(start % 2 == 0){
            printf("%d ", start);
        }
    } 
    return 0;
}
