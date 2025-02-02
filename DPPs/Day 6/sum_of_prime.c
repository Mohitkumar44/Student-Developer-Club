#include <stdio.h>

int check_for_prime(int num){     // function to check for prime numbers
    if (num<=1)
    {
        return 0;
    }
    for (int i = 2; i*i<= num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}

int main(){
    int number;             // variables
    printf("Enter Your Number : ");
    scanf("%d",&number);

    int check = 0;    // for true and false

    for (int i = 2; i<= number/2; i++)
    {
        if (check_for_prime(i)&&check_for_prime(number-i))
        {
            printf("%d can be expressed as the sum of two prime number which are %d and %d",number,i,number-i);
            check = 1;
            break;
        }
        
    }

    if (!check)    // for those nubmers which can't be expressed as the sum of two prime numbers
    {
        printf("Entered Number cannot be expressed in sum of two prime numbers");
    }
     

    return 0;
}