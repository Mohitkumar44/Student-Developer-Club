#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number=");
    scanf("%d",&number);

    int square=number*number;

    printf("square of %d is =%d",number,square);
    return 0;
}