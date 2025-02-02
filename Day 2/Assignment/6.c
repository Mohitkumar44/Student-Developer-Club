// write a program to check if a person is eligible to vote (age>=18) using relational operators.
#include <stdio.h>
int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if (age>=18){
        printf("Your are eligible to vote");
    }
    else{
        printf("Your are not eligible to vote");
    }
    return 0;
}