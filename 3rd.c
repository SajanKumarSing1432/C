/* W A P to enter your name and age then print inputted name and age . */
#include<stdio.h>
void main(){
    int age;
    char name[30];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your name is %s and your age is %d years",name,age);
}