// write a program to enter item name ,item rate and item quantity then calculate final price .finally print item name and final price 
#include<stdio.h>
void main(){
    int r,q;
    char nam[30];
    printf("Enter Item name :");
    scanf("%s",&nam);
    printf("Enter Item Rate :");
    scanf("%d",&r);
    printf("Enter Item quantity :");
    scanf("%d",&q);
    printf("Item name : %s \n",nam);
    printf(" Final price : %d",r*q);
}