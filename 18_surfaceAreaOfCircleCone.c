//Write a program to enter length and radius then calculate and print  surface area of circle  cone 
#include<stdio.h>

void main(){
    int r, l,s;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the radius : ");
    scanf("%d",&r);
    s=3.14*r*l;
    printf("Surface area of circle cone is : %d",s);
    

}