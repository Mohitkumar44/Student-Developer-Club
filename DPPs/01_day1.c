#include <stdio.h>
int main()
{

    int number1, number2, divisor; //  taking inputs
    printf("Enter your numbers : ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) // assigning greatest number to divisor
    {
        divisor = number1;
    }
    else
    {
        divisor = number2;
    }

    for (int i = divisor; i > 0; i--)     
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            printf("%d is the GCD", i);
            break;
        }
    }
    return 0;
}