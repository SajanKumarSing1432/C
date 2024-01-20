//Write a program to enter to metro city name and his fahrenhit temp then convert into celsious temp and finally print metro city name amd celsious temp ?
#include<stdio.h>

void main(){
    float ft, ct;
    char nm[30];
    printf("Enter your metro city name : ");
    scanf("%s",&nm);
    printf("Enter fahrenhit temp  : ");
    scanf("%f",&ft);
    ct=(ft-32)*5/9;
    printf("Your city name is : %s",nm);
    printf("Temp in celsious : %f",ct);
}