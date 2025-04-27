#include <stdio.h>
int sum(int arr[],int len);
int sum(int arr[],int len){
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total = total + arr[i];
    }
    return total;
}

int main() {
    int arr[] = {54,54,87,9,7,2,49,65,4654,64,64,54,64,654,6512,198,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int Sum_of_array = sum(arr,len);
    printf("Sum of array is : %d",Sum_of_array);
    return 0;
}