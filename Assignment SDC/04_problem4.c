// Write a Program to Check if a number is an Armstrong number or not. 
#include <stdio.h>
int main(){
    int number,i=0,k=0;
    printf("Enter your number : ");
    scanf("%d",&number);
    int digits[10];
    int square[10];
    int number_of_digits=0;
    while (number!=0)
    {
        digits[i]=number%10;
        number=number/10;
        number_of_digits++;
        i++;
        
    }
    while (digits[k]<10||digits[k]>0)
    {
        square[k]=digits[k]*number_of_digits;
    }

    return 0;
}