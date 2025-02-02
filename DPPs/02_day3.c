#include <stdio.h>
int main(){

    // variables
    int number,i=1,sum=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);

    // loop to add all factors except that number
    while (i<number)
    {
        if (number%i==0)
        {
            sum+=i;
        }
        i++;
        
    }

    // checking result
    if (sum==number)
    {
        printf("%d is a perfect number",number);
    }
    else{
        printf("%d is not a perfect number",number);
    }
    
    return 0;
}