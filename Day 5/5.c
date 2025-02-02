#include <stdio.h>
int main(){
    int i=1,factorial,product=1;

    printf("Enter Number : ");
    scanf("%d",&factorial);

    while(i<=factorial){
        product=product*i;
        i++;
    }
    printf("Factorial of %d is %d",factorial,product);

    return 0;
}