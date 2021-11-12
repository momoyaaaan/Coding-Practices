#include <stdio.h>
int main() {
	int sec, h, m, s;
    
    printf("Enter the time (seconds): ");
    scanf("%d", &sec);

    h = (sec/3600);

    m = (sec -(3600*h))/60;

    s = (sec -(3600*h)-(m*60));

    printf("%d hr %d min %d sec",h,m,s);

    return 0;
}
