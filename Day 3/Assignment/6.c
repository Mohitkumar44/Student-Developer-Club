// Write a program to find whether a given number is divisible by both 5 and 11.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter Your Number : ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11",number);
    }
    else if (number % 5 == 0)
    {
        printf("%d is divisible by 5 but not with 11",number);
    }
    else if (number % 11 == 0)
    {
        printf("%d is divisible by 11 but not with 5",number);
    }
    return 0;
}