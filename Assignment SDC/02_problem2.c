// write a program in c to swap the values of two variables without using any extra variable.
#include <stdio.h>
int main(){
    int number1,number2;
    printf("enter your first number : ");
    scanf("%d",&number1);
    printf("enter your second number : ");
    scanf("%d",&number2);
    printf("First no. = %d and second no. = %d before swaping\n",number1,number2);
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    printf("First no. = %d and second no. = %d after swaping\n",number1,number2);
    return 0;
}