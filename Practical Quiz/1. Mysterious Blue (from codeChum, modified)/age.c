#include<stdio.h>
int getAge(){
    int age;
    scanf("%d", &age);
    return age;

}
/*get input from user*/
void display(int age){
    if(age < 18){
        printf("minor");
    }else if (age >= 18 && age < 60){
        printf("adult");
    }else if (age >= 60)
        printf("senior");
    return;
}
/*display minor, adult or senior depending on the age*/
