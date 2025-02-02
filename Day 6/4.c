#include <stdio.h>
int main(){
    int number,sum=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    while(number!=0){
        sum=sum+number%10;
        number/=10;
    }
    printf("Sum of all digits : %d",sum);
    return 0;
}