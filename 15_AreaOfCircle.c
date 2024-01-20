/*
W A P to enter the radius then calculate and print area of circle 
*/
#include<stdio.h>
void main(){
    int area,radius;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is : %d",area);

}