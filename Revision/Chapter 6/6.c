#include <stdio.h>
int main(){
    int i;
    printf("enter value of i : ");
    scanf("%d",&i);
    int *ptr1=&i;
    int **ptr2=&ptr1;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*ptr1);
    printf("the value of i is %d\n",**ptr2);
    return 0;
}