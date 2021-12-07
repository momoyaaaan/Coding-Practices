int findQuadrant(int x,int y);
/*returns 0 if x and y are bothe 0
 returns 1 if both x and y are (+)
 returns 2 if x (-) and y (+) 
 returns 3 if x and y are (-)
 returns 4 if x (+) and y (-)
 returns 5 if x (+) and y is 0
 returns 6 if x is 0 and y (+)
 returns 7 if x (-) and y is 0
 returns 8 if x is 0 and y (-)
 */
void display(int quad);
/*
prints:
Origin if quad = 0
Quadrant 1 if quad = 1
Quadrant 2 if quad = 2
Quadrant 3 if quad = 3
Quadrant 4 if quad = 4
Positive X if quad = 5
Positive Y if quad = 6
Negative X if quad = 7
Negative Y if quad = 8
*/
