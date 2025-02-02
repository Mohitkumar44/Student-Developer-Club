#include <stdio.h>
int main(){
    int a = 10;     // normal integer variable
    int *p;         // pointer to an integer
    p = &a;         // store the address of 'a' in pointer 'p'

    // accessing value and address 
    printf("value of a : %d\n",a);
    printf("address of a : %d\n",&a);
    printf("value of pointer p (address of a) : %d\n",p);
    printf("value of address stored in p : %d\n",*p);

    return 0;
}

/* output
 value of a : 10
 address of a : 6422296
 value of pointer p (address of a) : 6422296 
value of address stored in p : 10 */