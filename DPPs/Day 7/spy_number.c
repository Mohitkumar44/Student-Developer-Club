#include <stdio.h>
int main()
{
    int number, sum=0, product=1,demo;
    // taking input
    printf("Enter your number : ");
    scanf("%d", &number);
    demo=number;

    while (number != 0) // sum of all digits
    {
        int digit = number % 10;
        sum += digit;
        product*=digit;
        number /= 10;
    }

    if (sum==product)
    {
        printf("A spy number");
    }
    else{
        printf("Not a spy number");
    }
    
    return 0;
}