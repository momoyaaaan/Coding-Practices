#include <stdio.h>

int main(void){
    for(int i = 1; i <= 1000; i++){
        int cube = i*i*i;
        if(i % 3 ==0 || i % 5 == 0){
            continue;
        }
        printf("%d\n", cube);
    }
    return 0;
}
