// 2. Print all perfect squares between two given numbers.
#include <stdio.h>
int main(){
    int start,end;
    printf("Enter starting and ending numbers : ");
    scanf("%d %d", &start, &end);
    if (start>end)
    {
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start; i <= end; i++)
    {
        for (int j = 1; j*j <= i; j++)
        {
            if (j*j==i)
            {
                printf("%d ",i);
                break;
            }   
        }
    }
    return 0;
}