#include <stdio.h>
int main(){
    int number,sum=0;   // variables
    // taking input
    printf("Enter your number : ");
    scanf("%d",&number);

    while (number!=0)       // sum of all digits
    {
        int digit = number%10;
        sum+=digit;
        number/=10;
    }
    
    if (sum%2==0)    // checking for even and odd
    {
        printf("Sum of digits is even");
    }
    else{
        printf("Sum of digits is odd");
    }
    return 0;
}