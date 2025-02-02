#include <stdio.h>
int main()
{
    int number1,number2;
    printf("Enter First number : ");
    scanf("%d",&number1);
    printf("Enter Second number : ");
    scanf("%d",&number2);

    if(number1>number2){
        printf("Greater Number is %d\n",number1);
    }
    else{
        printf("Greater Number is %d\n",number2);
    }

    return 0;
}