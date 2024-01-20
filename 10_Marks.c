/*
    W A P to enter student name and his three subject marks then calculate and print student name ,total marks and average marks.
*/

#include<stdio.h>
void main(){
    char nam[30];
    int p,c,m,Tmarks,AvgMarks;
    printf("\n\t Enter your name : ");
    scanf("%s",&nam);
    printf("\n \t Enter your physics marks :");
    scanf("%d",&p);
    printf("\n \t Enter your math marks :");
    scanf("%d",&m);
    printf("\n \t Enter your chemistry marks :");
    scanf("%d",&c);
    printf("\n \tYour name is %s",nam);
    Tmarks = p+c+m;
    AvgMarks=(p+c+m)/3;
    printf("\n \t Total Marks is %d",Tmarks);
    printf(" \n \t Average Marks is %d",AvgMarks);
    getch();
}