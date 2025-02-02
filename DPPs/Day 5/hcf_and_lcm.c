#include <stdio.h>
int main(){
    int first_no,second_no,HCF=1;
    printf("Enter Your Numbers : ");
    scanf("%d %d",&first_no,&second_no);

    int divide;
    if (first_no>=second_no)
    {
        divide = second_no;
    }
    else{
        divide = first_no;
    }
    
    int i=1;
    while (i < divide)
    {
        if (first_no%i==0 && second_no%i==0)
        {
            HCF = i;
        }
        i++;
    }

    // for lcm

    int lcm = (first_no*second_no)/HCF;    

    printf("HCF will be %d and LCM will be %d",HCF,lcm);
    
    return 0;
}