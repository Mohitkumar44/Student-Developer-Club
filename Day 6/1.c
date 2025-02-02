#include <stdio.h>
int main (){
    int number,i=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);

    while (number!=0)
    {
        i = i*10 + number%10;
        number/=10;
    }
    printf("reversed  num. is : %d",i);
    return 0;
}