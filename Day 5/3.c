#include <stdio.h>
int main(){
    int sum = 0,number,i=1;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    while(i<=number){
        sum = sum + i;
        i++;
    }
    printf("The Sum of all natural numbers till %d is %d",number,sum);
    return 0;
}