#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int one = 0;
    int two = 0;
    int three = 0;
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 2)
        {
            two++;
        }
        else{
            three++;
        }
    }

    printf("No. of 1 : %d\nNo. of 2 : %d\nNo. of 3 : %d",one,two,three);

    return 0;
}