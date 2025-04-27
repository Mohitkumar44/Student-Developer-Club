#include <stdio.h>

int main() {
    int arr[] = {14,15,87,98,24,57,65,78};
    int len = sizeof(arr)/sizeof(arr[0]);
    int lar_no = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]>lar_no)
        {
            lar_no = arr[i];
        }
    }
    printf("largest number in the array is %d",lar_no);
    return 0;
}