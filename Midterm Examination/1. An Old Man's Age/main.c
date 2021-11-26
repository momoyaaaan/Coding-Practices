#include <stdio.h>
int main() {
	int p, q, r, s;

    printf("Enter age of The Programmer: ");
    scanf("%d", &p);
    printf("Enter age of his teacher: ");
    scanf("%d", &q);
    printf("Enter age of his friend, Peter: ");
    scanf("%d", &r);
    
    printf("The age of the old man is %d", s = p+q-r);

    return 0;
}
