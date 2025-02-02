#include <stdio.h>
int main(){
    int number,greatest_digit=0;
    printf("enter the number : ");
    scanf("%d",&number);
    number = number;
    while (number!=0)
    {
        if (number%10>greatest_digit)
        {
            greatest_digit = number%10;
        }        
        number/=10;
    }
    printf("%d is the largest digit",greatest_digit);
    return 0;
}