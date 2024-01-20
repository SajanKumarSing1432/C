//Write a program to enter side then calulate and print volume of cube 
#include<stdio.h>

 void main(){
    int side , vol;
    printf("Enter the side : ");
    scanf("%d",&side);
    vol = side*side*side;
    printf("VOlume is : %d",vol);

 }