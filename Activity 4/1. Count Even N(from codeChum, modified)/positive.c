#include <stdio.h>

int getNum(){
    int a;
    scanf("%d", &a);
    
    return a*=2;
}
/*accepts input from the user.*/

void display(int n){
    int i = 0;
    do
    {
        if(i % 2 == 0){
        printf("%d\n", i);
        }
        i++;
    }while(i < n);
   
    return;
}
/*prints the first n even numbers starting from 0.*/
