#include <stdio.h>

int Sum_of_even(int arr[],int len);
int Sum_of_even(int arr[],int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2==0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}
int main() {
    int arr[] = {9,8465,984,65,498,46,549,874,654,984,594,84,64,31,49,876,5413,764,34,68,4513,873541,3,4,374,354,9,78468,796,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = Sum_of_even(arr,len);
    printf("sum of all even elements in given array is : %d",sum);
    return 0;
}