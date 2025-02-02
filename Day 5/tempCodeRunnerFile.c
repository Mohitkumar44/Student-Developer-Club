#include <stdio.h>
int main(){

    int number,i=1;

    printf("Enter Your Number : ");
    scanf("%d",&number);


    while(i<=10){
        printf("%d\n",number,i,number*i);
        i++;
    }