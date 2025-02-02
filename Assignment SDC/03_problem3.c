// Write a program to print a number pyramid like this:
#include <stdio.h>
int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int space = 0; space < num-i; space++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
    }
    
    return 0;
}