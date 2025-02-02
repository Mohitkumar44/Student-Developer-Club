// write a program to find the largest digit in a given number using arithmatic operators.
#include <stdio.h>
int main(){
    int number1 =4 ;
    int number2 =8 ;
    int number3 =5 ;

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