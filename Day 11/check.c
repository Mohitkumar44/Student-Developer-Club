#include <stdio.h>
int main(){
    int matrix1[3][3] = {{2,5,8},{7,9,8},{5,6,4}};
    int matrix2[3][3] = {{2,5,8},{7,7,8},{5,6,4}};
    int equal = 1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix1[i][j]!=matrix2[i][j])
            {
                equal = 0;
                break;
            } 
        }
    }
    if (equal){
        printf("Both matrices are equal");
    }
    else{
        printf("Matrices are not equal");
    }
    return 0;
}