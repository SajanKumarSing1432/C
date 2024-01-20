/*W A P TO ENTER TO NUMBER THEN PRINT multipication OF THAT NUMBER */
#include<stdio.h>
void main(){
    int num1, num2,mult;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    mult = num1*num2;

    printf("Your 1st number is %d, 2nd number is %d, and the multipication is %d\n", num1, num2, mult);
}