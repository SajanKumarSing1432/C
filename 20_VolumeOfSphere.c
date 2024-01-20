//Write a program to enter radius then calculate and print volume of sphere 
#include<stdio.h>

void main() {
    float r, volume;
    printf("Enter the radius : ");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * 3.14 * r * r * r;

    printf("Volume of Sphere is %f", volume);
}
