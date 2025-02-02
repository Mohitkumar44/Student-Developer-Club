#include <stdio.h>

int count(int number);
int count(int number)
{
    int counting = 0;
    while (number != 0)
    {
        counting++;
        number = number / 10;
    }
    return counting;
}

int power(int base, int power);
int power(int base, int power)
{
    int result = 1;
    while (power != 0)
    {
        result = result * base;
        power = power - 1;
    }
    return result;
}
int main()
{

    int binary_number, decimal = 0;
    printf("Enter Your number in binary : ");
    scanf("%d", &binary_number);

    int no_of_digits = count(binary_number);
    int number = no_of_digits;

    while (binary_number != 0)
    {
        int digit = binary_number % 10;
        binary_number = binary_number / 10;
        decimal = decimal + digit * power(2, (number - no_of_digits));
        no_of_digits = no_of_digits - 1;
    }
    printf("%d", decimal);
    return 0;
}