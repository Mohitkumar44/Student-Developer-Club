// write a program to demonstrate all relational operators by comparing two numbers.
#include <stdio.h>
int main(){
    int number1 = 10;
    int number2 = 15;

    if (number1>number2){
        printf("True\n");
    }
    
    else{
       printf("False\n");
    }
    
    if (number1>=number2){
        printf("True\n");
    }
    
    else{
        printf("False\n");
    }
    
    if (number1<number2){
        printf("True\n");
    }
    
    else{
        printf("False\n");
    }
    
    if (number1<=number2){
        printf("True\n");
    }
    
    else{
        printf("False\n");
    }
    
    if (number1==number2){
        printf("True\n");
    }
    
    else{
        printf("False\n");
    }
    
    if (number1!=number2){
        printf("True\n");
    }

    else{
        printf("False\n");
    }
    return 0;
}