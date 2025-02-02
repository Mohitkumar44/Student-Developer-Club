#include <stdio.h>
int main(){
    int factorial;
    printf("Enter Your Number to get Factorial : ");
    scanf("%d",&factorial);
    int i=1;
    int finalanswer=1;

    while(i<=factorial){
        finalanswer=finalanswer*i;
        i++;
    }
    printf("factorial is %d",finalanswer);

    return 0;
}