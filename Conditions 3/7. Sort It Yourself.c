#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Enter the third integer: ");
    scanf("%d", &c);

    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("%d %d %d",c,b,a);
        }
        else
        {
            printf("%d %d %d",b,c,a);
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            printf("%d %d %d",c,a,b);
        }
        else
        {
            printf("%d %d %d",a,c,b);
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("%d %d %d",b,a,c);
        }
        else
        {
            printf("%d %d %d",a,b,c);
        }
    }
    return 0;
}
