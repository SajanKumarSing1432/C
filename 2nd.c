/*W A P to enter your name then print inputted name on the computer screen.*/
#include<stdio.h>

int main(){
    char name[30];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Your name is a %s",name);
}