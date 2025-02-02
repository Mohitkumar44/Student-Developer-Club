#include <stdio.h>
int main()
{
    float fahrenheit;
    printf("Enter the value of temperature : ");
    scanf("%f",&fahrenheit);

    float celcius = (fahrenheit-32)*(5/9.0);

    printf("%f fahrenheit in celcius is %f",fahrenheit,celcius);
    return 0;
}