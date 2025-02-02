/*Write a program to convert an amount in rupees into dollars 
( 1 Dollar = 84 rupee).*/ 
#include <stdio.h>
int main(){
    int rupees;
    printf("Enter Amount in Rupees : ");
    scanf("%d",&rupees);
    int dollars = rupees*84;
    printf("%d rupees in dollar : %d",rupees,dollars);
    return 0;
}