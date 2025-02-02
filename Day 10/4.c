#include <stdio.h>
int main(){

    int row,column;
    printf("Enter Your row : ");
    scanf("%d",&row);
    printf("Enter Your column : ");
    scanf("%d",&column);

    for (int i = 0; i < row; i++)
    {
        for(int j = 0;j<column;j++){
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}