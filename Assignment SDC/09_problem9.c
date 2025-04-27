#include <stdio.h>

int count_even(int arr[],int len);
int count_even(int arr[],int len){
    int even = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
    }
    return even;
}
int count_odd(int arr[],int len);
int count_odd(int arr[],int len){
    int odd = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2!=0)
        {
            odd++;
        }
    }
    return odd;
}

int main() {
    int arr[] = {9,8465,984,65,498,46,549,874,654,984,594,84,64,31,49,876,5413,764,34,68,4513,873541,3,4,374,354,9,78468,796,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int even = count_even(arr,len);
    int odd = count_odd(arr,len);
    printf("%d are odd\n%d are even",odd,even);
    return 0;
}