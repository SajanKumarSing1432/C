/*
W A P to enter the length and width then calculate and print area of rectangular
*/
#include<stdio.h>
void main(){
    int area, length,width;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);
    area= length*width;
    printf("Area of rectangular is : %d",area);
}