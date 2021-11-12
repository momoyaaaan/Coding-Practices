#include<stdio.h>

int main(void){

    char num[5];

    scanf("%s", &num);
    printf("%c%c%c%c%c", num[4],num[3],num[2],num[1],num[0]);


  return 0;
}






//or this interesting bloated code lmao
//


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int num;
    long long a,reversenum=0;

    printf("");
    scanf("%d",&num);

    a=num%10;
    num= num/10;
    reversenum=reversenum+a*10000;

    a=num%10;
    num=num/10;
    reversenum=reversenum+a*1000;

    a=num%10;
    num=num/10;
    reversenum=reversenum+a*100;

    a=num%10;
    num=num/10;
    reversenum=reversenum+a*10;

    a=num%10;
    num=num/10;
    reversenum=reversenum+a*1;

    printf("%d\n",reversenum);



    return 0;
}
