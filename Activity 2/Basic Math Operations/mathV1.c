#include<stdio.h>
#include<math.h>

int sum(int x, int y){
    int s = x+y;

    return s;
}
int diff(int x, int y){
    int d = x-y;
    
    return d;
}
int prod(int x, int y){
    int p = x*y;

    return p;
}
float quot(int x, int y){
    float q = (double)x/y;

    return q;
}
int mod(int x, int y){
    int m = x % y;

    return m;
}
void display(int s, int d, int p, float q, int m){
    printf("%d\n%d\n%d\n%.2f\n%d\n", s, d, p, q, m);
    return;
}
