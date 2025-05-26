#include <stdio.h>

int main() {
    int arr[100];
    int n,zero=0,positive=0,negative=0;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements of array\n ",n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of arr[%d] element : ",i);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zero++;
        }
        else{
            if (arr[i]>0)
            {
                positive++;
            }
            else{
                negative++;
            }
            
        }
        
    }
    
    printf("Number of zero : %d\nNumber of Positive Numbers : %d\nNumber of Negative Numbers : %d\n",zero,positive,negative);
    
    return 0;
}