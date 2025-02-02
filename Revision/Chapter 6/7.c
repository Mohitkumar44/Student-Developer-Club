#include <stdio.h>
int tentimes(int i);
int tentimes(int i){
    i=i*10;
    return i;
}
int main(){
    int i;
    printf("Enter your number : ");
    scanf("%d",&i);
    tentimes(i);
    // not working because of we know that it is not possible with values but it is possible by call by reference
    printf("The ten times of entered value is %d",i);
    return 0;
}