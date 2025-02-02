#include <stdio.h>
int main(){
    
    int number,i=0,sum=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);

    while (i<=number)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of numbers till %d is %d",number,sum);
    return 0;
}