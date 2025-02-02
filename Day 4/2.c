#include <stdio.h>
int main(){
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);

    if (year%4==0 && year%100!=0){
        printf("This is a leap Year");
    }
    else if (year%100==0 && year%400==0){
        printf("This is a leap Year");
    }
    else{
        printf("This is not a leap Year");
    }
    return 0;
}