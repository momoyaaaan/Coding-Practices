#include <stdio.h>
int getNum(){
    int n1, n2, n3, n4;

}
/*accepts input from the user.*/


void display(int n1, int n2, int n3, int n4){

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    int pound = 1;
    while(pound <= n1)
    {
        printf("#");

        if(pound < n1)
        {
        printf(" ");
        }

    pound++;
    }
printf("\n");

    int fSlash = 1, totalSpaces = n1 * 2 - 1;
    while(fSlash <= n2)
    {
        int space = 1;
        while(space <= totalSpaces)
        {
            printf(" ");
            space++;
        }
        printf("\\");
        printf("\n");
    fSlash++;
    totalSpaces++;
    }
    int bSlash = 1, totalSpaces2 = (n1 * 2 - 1) + (n2 - 1);
    while(bSlash <= n3)
    {
        int space = 1;
        while(space <= totalSpaces2)
        {
            printf(" ");
            space++;
        }
        printf("/");

        if(bSlash < n3)
        {
            printf("\n");
        }
    bSlash++;
    totalSpaces2--;
    }
    int underscore = 1;
    while(underscore <= n4)
    {
        printf("_");
    underscore++;
    }

    return;

}
/*displays the given pattern*/
