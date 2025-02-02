#include <stdio.h>
int main(){
    int number;
    printf("Enter Your Number : ");
    scanf("%d",&number);

    for(int i = 0;i<number;i++){
        printf("*");
    }
    return 0;
}