//Write a program to enter radius then calculate and print surface area of sphere
#include<stdio.h>

void main(){
    int r , s;
    printf("Enter radius : ");
    scanf("%d",&r);
    s=4*3.14*r*r;
    printf("Surface area of sphare is : %d",s);
    
}