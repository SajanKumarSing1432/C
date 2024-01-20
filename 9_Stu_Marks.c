/*
W A P to  Enter student name and his three subject marks , finally print student names and his three subjecr marks. 
*/
#include<stdio.h>
void main (){
    char nam[30];
    int p,c,m;
    printf("\n\t Enter your name : ");
    scanf("%s",&nam);
    printf("\n \t Enter your physics marks :");
    scanf("%d",&p);
    printf("\n \t Enter your math marks :");
    scanf("%d",&m);
    printf("\n \t Enter your chemistry marks :");
    scanf("%d",&c);
    printf("\n \tYour name is %s",nam);
    printf("\n \t Your physics marks is %d",p);
    printf("\n \t Your math marks is %d",m);
    printf("\n \t Your chemistry marks is %d",c);

}