#include <stdio.h>
int main(){
    int number,sum_of_square=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    while (number!=0)
    {
        int digit = number%10;
        sum_of_square+=(digit*digit);
        number/=10;
    }
    printf("Sum of square of digits will be %d",sum_of_square);
    
    return 0;
}