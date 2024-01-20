/*
W A P TO ENTER TWO FLOAT NUMBER THEN CALCULATE AND PRINT ADDITION ,SUBSTRACTION , MULTIPLICATION , DIVISION , AND MODULUS OF THAT NUMBER 
*/
#include<stdio.h>
void main (){
    float num1,num2;
    printf("Enter your 1st number : ");
    scanf("%f",&num1);
    printf("Enter your 2nd number : ");
    scanf("%f",&num2);
    printf("Addition of that number : %f \n",num1+num2);
    printf("Subtraction of that number : %f \n",num1-num2);
    printf("Multipication of that number : %f\n",num1*num2);
    printf("Division of that number : %f \n",num1/num2);
    int a,b;
    a=num1;
    b=num2;
    printf("Modulus of that number : %d ",a%b);
}
