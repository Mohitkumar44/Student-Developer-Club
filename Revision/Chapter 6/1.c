#include <stdio.h>
int main(){
    int i=10;
    int *j=&i;
    printf("The address of i is %u and the value of a is %d",j,*j);
    return 0;
}