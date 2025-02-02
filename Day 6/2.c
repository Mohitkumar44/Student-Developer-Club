#include <stdio.h>
int main(){

    int number,reversed_no=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    
    while (number!=0)
    {
        reversed_no=reversed_no*10 + number%10;
        number/=10;
    }
    printf("Reversed Number is : %d",reversed_no);

    return 0;
}