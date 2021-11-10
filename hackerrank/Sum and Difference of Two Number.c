#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, ii;
    float f, ff;
    
    scanf("%d %d %f %f", &i, &ii, &f, &ff);
    printf("%d %d\n%.1f %.1f", i+ii, i-ii, f+ff, f-ff);
    
    return 0;
}
