#include <stdio.h>

int main() {
    int arr[] = {14,15,87,98,24,57,65,78};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;
    
    for (int i = 0; i < length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-1-i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}