#include <stdio.h>
int func(int *k);
int func(int *k){
    printf("The value of i is %d",*k);
    return 0;
}
int main(){
    int i=10;
    int *j=&i;
    func(j);
    return 0;
}