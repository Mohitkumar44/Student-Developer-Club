#include <stdio.h>
void printFloydTriangle(int n) {
    // Write your code here
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}

int main() {
    printFloydTriangle(4);
    return 0;
}

