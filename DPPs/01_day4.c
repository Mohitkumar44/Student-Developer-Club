#include <stdio.h>
int main(){
    long long int num;
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,digit=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    if (num < 0) {
    num = -num;
    }
    while (num!=0)
    {
        digit = num%10;
        switch (digit)
        {
        case 0: zero++; break; case 1: one++; break; case 2: two++; break; case 3: three++; break; case 4: four++; break; case 5: five++; break; case 6: six++; break; case 7: seven++; break; case 8: eight++; break; case 9: nine++; break;
        }
        num/=10;
    }
    printf("Digit counts:\n0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}