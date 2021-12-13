#include <stdio.h>
#include <math.h>

int getNum(){
    int num;
    scanf("%d", &num);

    return 3*pow(num-1,2)+1;
}
/*accepts input from the user. */

void display(int num){
    int i = 0;
    int count = 0;
    while(i <= num)
    {
        if(count < i){
            i = 3*pow(count,2)+1;
            printf("%d ", i);
            count++;
        }
        i++;
    }
    return;
}
/*prints the sequence. Use only while loop.*/
