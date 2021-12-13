#include <stdio.h>
int getNum(){
    int num;

    scanf("%d", &num);
    return num;
}
/*accepts input from the user.*/

void display(int num){
    int i, j;
    i = num;
    while(i >=1){
        j = 1;
        while(j <= i)
        {
        printf("%d", i);
        j++;
        }
        printf("\n");
        i--;
    }
 
    return;
}
/*prints the number pattern*/
