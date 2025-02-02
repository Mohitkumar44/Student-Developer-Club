#include <stdio.h>
int main(){
    int arr[]={0,1,2,3,5,6,7,9,10,12,13,14,15,17,19,21,22,23};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i=0,j=0;
    while (i < length)
    {
        if (arr[i]!=j)
        {
            printf("%d is missing\n",j);
            i--;
        }
        j++;
        i++;
    }
    
    
}