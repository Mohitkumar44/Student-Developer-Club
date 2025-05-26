#include <stdio.h>

int main()
{
    int Main_arr[100];
    int arr_1[50];
    int arr_2[50];
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements of array\n ", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of arr[%d] element : ", i);
        scanf("%d", &Main_arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr_1[i] = Main_arr[i];
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            arr_2[i] = Main_arr[i + n / 2];
        }
    }

    else
    {
        for (int i = 0; i < n / 2 +1; i++)
        {
            arr_2[i] = Main_arr[i + (n / 2)];
        }
    }
    printf("array 1\n");
    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf("\narray 2\n");
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            printf("%d ", arr_2[i]);
        }
    }
    else
    {
        for (int i = 0; i < n / 2 + 1; i++)
        {
            printf("%d ", arr_2[i]);
        }
    }

    return 0;
}