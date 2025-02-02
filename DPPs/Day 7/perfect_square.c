#include <stdio.h>
int main(){
    int number,check=0;  
    // taking input
    printf("Enter your number : ");
    scanf("%d",&number);

    for (int i = 1; i*i <= number; i++)   // checking for perfect square
    {
        if ((i*i)==number)
        {
            check = 1;
            break;
        }
        check = 0;
    }
    if (check)
    {
        printf("A perfect square");
    }
    else{
        printf("Not a  perfect square");
    }
    return 0;
}