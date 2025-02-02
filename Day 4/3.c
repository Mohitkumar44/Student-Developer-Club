#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter First Side : ");
    scanf("%d",&side1);
    printf("Enter Second Side : ");
    scanf("%d",&side2);
    printf("Enter Third Side : ");
    scanf("%d",&side3);

    if ((side1+side2)<=side3 ||(side3+side2)<=side1 ||(side1+side3)<=side2 ){
        printf("Triangle is not possible");
    }
    else{
        printf("Triangle is possible");
    }
    return 0;
}