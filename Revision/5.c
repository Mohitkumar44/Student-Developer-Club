#include <stdio.h>
int fact(int a);
int fact(int a){
    int f;
    if(a==1 || a==0){
        return 1;
    }
    else{
        f = a * fact(a-1);
        return f;
    }
}

int main(){
    int x;
    printf("Enter value of x : ");
    scanf("%d",&x);
    int fac = fact(x);
    printf("factorial is %d",fac);
    return 0;
}