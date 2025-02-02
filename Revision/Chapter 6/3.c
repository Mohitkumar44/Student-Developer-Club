#include <stdio.h>
int change(int *k);
int change(int *k){
    *k=*k*10;
    return 0;
}
int main(){
    int i;
    printf("Enter your number : ");
    scanf("%d",&i);
    int *j=&i;
    printf("The value of i is %d\n",i);
    change(j);
    printf("The Ten Times of entered value is %d",i);
    return 0;
}