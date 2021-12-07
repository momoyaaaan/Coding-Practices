#include <stdio.h>
int getAge(){
    int age;
    scanf("%d", &age);
    return age;
}
void display(int age){
/*prints the following:
Child - 0 to 12 years old
Teenager - 13 to 17 years old
Adult - 18 to 59 years old
Senior Citizen - 60 years old and above
*/
    
    if(age >= 0 && age <= 12){
        printf("Child");
    }else if (age >= 13 && age <= 17){
        printf("Teenager");
    }else if (age >= 18 && age <= 59){
        printf("Adult");
    }else if (age >= 60 && age <= 99){
        printf("Senior Citizen");
    }
        return;
}
