#include <stdio.h>
int main(){
    int a,b,c;
    a = 10;
    b = 5;
    c = a;
    a = b;
    b = c;
    printf("a is %d and b is %d",a,b);
    return 0;
}