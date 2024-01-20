/*
write a program to  enter item name and production cost then calculate the production cost of itme
by adding 10% sale tax and 5% local tax  finally print item name and sale cost of item 
*/
#include<stdio.h>

void main() {
    float pc, sc;
    char nam[25];

    printf("Enter item name: ");
    scanf("%s", nam);

    printf("Enter production cost: ");
    scanf("%f", &pc);

    // Calculate sale cost by adding 10% sales tax and 5% local tax
    sc = pc + (pc * 0.10) + (pc * 0.05);

    printf("Item name is %s\n", nam);
    printf("Sale cost of item: %f\n", sc);
}
