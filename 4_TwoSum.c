/* W A P TO ENTER TWO NUMBER THEN PRINT SUM/ADDITION OF THAT NUMBER*/
#include<stdio.h>

void main() {
    int num1, num2, sum;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Your 1st number is %d, 2nd number is %d, and the sum is %d\n", num1, num2, sum);
}
