//  1. Write a program to print 1 to 100 numbers but skip the multiples of 5 and 7
#include <stdio.h>
int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%5==0||i%7==0)
        {
            continue;
        }
        else{
            printf("%d ",i);
        }
        
    }
    
    return 0;
}