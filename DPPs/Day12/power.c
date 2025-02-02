//  1.WAP to calculate a ^b using loop.
#include <stdio.h>
int main(){
    int num,power,result;
    printf("Enter number and power : ");
    scanf("%d %d",&num,&power);
    result = num;
    for (int i = 1; i < power; i++)
    {
        result = result*num;
    }
    printf("Result is : %d",result);
    return 0;
}