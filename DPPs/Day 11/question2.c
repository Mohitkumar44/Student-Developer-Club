#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int m = 1; m < i; m++)
        {
            printf("%d", i-m);
        }
        printf("\n");
    }

    return 0;
}