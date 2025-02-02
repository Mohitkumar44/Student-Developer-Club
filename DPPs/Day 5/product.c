#include <stdio.h>
int main(){
    int number,product=1,digit=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    while (number!=0)
    {
        digit = number%10;
        product*=digit;
        number/=10;
    }

    printf("Product of Digits will be : %d",product);
    
    return 0;
}