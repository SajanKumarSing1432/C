/*
writ a program to enter three items name , three items rate and three items quantity 
then calculate and print three items name and total amount by given 10% discount
*/
#include<stdio.h>

void main(){
    char nam1[25],nam2[25],nam3[25];
    float r1,r2,r3,q1,q2,q3 , fp,ta;  //r for rate and q for quantity
    printf("Enter 1st item name :");
    scanf("%s",&nam1);
    printf("Enter 2nd item name :");
    scanf("%s",&nam2);
    printf("Enter 3rd item name :");
    scanf("%s",&nam3);

    printf("Enter 1st item rate :");
    scanf("%f",&r1);
    printf("Enter 2nd item rate :");
    scanf("%f",&r2);
    printf("Enter 3rd item rate :");
    scanf("%f",&r3);

    printf("Enter 1st item quantity :");
    scanf("%f",&q1);
    printf("Enter 2nd item quantity :");
    scanf("%f",&q2);
    printf("Enter 3rd item quantity :");
    scanf("%f",&q3);

    fp=(r1*q1)+(r2*q2)+(r3*q3);
    ta=fp-fp*.1;

    printf("Three items are : %s \t %s \t %s \n",nam1,nam2,nam3);
    printf("Total amount is %f",ta);

}//End of main