#include <stdio.h>
int main(){

    int number,num,reversed_no=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    num=number;
    
    while (number!=0)
    {
        reversed_no=reversed_no*10 + number%10;
        number/=10;
    }
    printf("Reversed Num. is %d\n",reversed_no);

    if (num == reversed_no){
        printf("A pallindrome number");
    }
    else {
        printf("Not a pallindrome number");
    }
    return 0;
}