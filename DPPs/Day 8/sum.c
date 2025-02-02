 #include <stdio.h>

 int sum_of_digits(int num);
 int sum_of_digits(int num){     // to find sum of digits of passed number
    int sum=0;

    while (num!=0)
    {
        int digit = num%10;
        sum+=digit;
        num/=10;
    }

    return sum;
 }

 int main(){
    int number;            
    printf("Enter your number : ");        // input
    scanf("%d",&number);

    while (number > 9)            // passing number in loop until one digit sum is obtained
    {
        number = sum_of_digits(number);
    }

    printf("single digit sum is : %d",number);     // result

    return 0;
 }