#include <stdio.h>
#include <math.h>
int main(){
    int power,sum=0;
    // Taking input
    printf("Enter Power for 2 : ");
    scanf("%d",&power);

    int value = pow(2,power);

    while (value!=0)
    {
        sum = sum + value%10;
        value/=10;
    }
    

    // result
    printf("Sum of digits : %d",sum);
    return 0;
}