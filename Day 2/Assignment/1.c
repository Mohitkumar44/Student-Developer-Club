//  write a program to calculate the average of three numbers.
#include <stdio.h>
int main()
{
    int number1 =10 ;
    int number2 =11 ;
    int number3 =12 ;

    int average = (number1+number2+number3)/3;

    printf("Average of %d, %d and %d is %d",number1,number2,number3,average);
    return 0;
}