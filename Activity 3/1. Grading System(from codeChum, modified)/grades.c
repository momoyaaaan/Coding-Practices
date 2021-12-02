#include <stdio.h>
float getGrade(){
    float a;
    
    scanf("%f", &a);
    
    return a;
}
 /*accepts grade from user*/

 void display(float grade){
     if(grade < 63.0 && grade >= 0.0){
         printf("C-");
     }
     else if(grade >= 63.0 && grade <= 68.0)
     {
         printf("C");
     }
     else if(grade > 68.0 && grade <= 70.0)
     {
         printf("C+");
     }
     else if(grade > 70.0 && grade <= 73.0)
     {
         printf("B-");
     }
     else if(grade > 73.0 && grade <= 77.0)
     {
         printf("B");
     }
     else if(grade > 77.0 && grade <= 80.0)
     {
         printf("B+");
     }
     else if(grade > 80.0 && grade <= 86.0)
     {
         printf("A-");
     }
     else if(grade > 86.0 && grade <= 92.0)
     {
         printf("A");
     }
     else if(grade > 92.0 && grade <= 100.0)
     {
         printf("A+");
     }
     

 }
 /*display grade descriptor given the grades*/
