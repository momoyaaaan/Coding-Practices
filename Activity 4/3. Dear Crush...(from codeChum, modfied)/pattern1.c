#include <stdio.h>
int getNum(){
    int a;
    scanf("%d", &a);
    return a;
}
/*accepts input from the user*/
void display(int num){
    int j, space;
    int i = num;
    while(i >= 1)
    {
        space = 0;
        while(space < num - i)
        {
            printf(" ");
            space++;
        }

        j = i;
        while(j <= 2 * i - 1)
        {
            printf("*");
            j++;
        }
        j = 0;
        while(j < i - 1){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    
    return;
}
/*display the pattern*/
