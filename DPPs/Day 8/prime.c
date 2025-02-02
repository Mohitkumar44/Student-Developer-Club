#include <stdio.h>
int main()
{
    int from, to;
    printf("from : ");
    scanf("%d", &from);
    printf("to : ");
    scanf("%d", &to);

    while (from <= to)
    {
        int prime = 1;
        if (from < 2)
        {
            from++;
            continue;
        }

        for (int i = 2; i * i <= from; i++)
        {
            if (from % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", from);
        }

        from++;
    }

    return 0;
}