// Write a program to find the largest number between 3 number given by user.
#include <stdio.h>
int main(){
    int number1,number2,number3;

    printf("Enter Your First Number : ");
    scanf("%d",&number1);

    printf("Enter Your Second Number : ");
    scanf("%d",&number2);

    printf("Enter Your Third Number : ");
    scanf("%d",&number3);

    if (number1>number2 && number1>number3){
        printf("The Largest number is %d",number1);
    }
    if (number2>number1 && number2>number3){
        printf("The Largest number is %d",number2);
    }
    if (number3>number2 && number3>number1){
        printf("The Largest number is %d",number3);
    }
    return 0;
}