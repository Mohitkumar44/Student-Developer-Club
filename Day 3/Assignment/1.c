// write a program to check if a number is positive ?
#include <stdio.h>

int main()
{
    int number;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    if ( number >=0){
        printf("%d is positive", number);
    }
    else{
        printf("%d is negative", number);
    }
    return 0;
}