//write a program to enter radius and height then calculate and print volume of circle cone 


#include<stdio.h>

void main(){
    float r,h,v;
    printf("Enter the radius : ");
    scanf("%f",&r);
    printf("Enter the height : ");
    scanf("%f",&h);
    v=0.33*3.14*r*r*h;
    printf("Volume of circle cone is : %f",v);
}
    