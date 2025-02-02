#include <stdio.h>
int fact(int digit);
int fact(int digit){
    int factorial;
    if (digit==0||digit==1)
    {
        return 1;
    }
    
    if (digit!=1)
    {
        factorial = digit * fact(digit - 1);
    }
    return factorial;
    
}
int main(){
    int number,original_number,result=0;
    printf("Enter Your Number : ");
    scanf("%d",&original_number);
    number = original_number;
    while (number!=0)
    {
        int digit = number%10;
        result+=fact(digit);
        number/=10;
    }
    if (original_number==result)
    {
        printf("You entered a strong number");
    }
    else{
        printf("Entered number is not a strong number");
    }
    
    
    return 0;
}