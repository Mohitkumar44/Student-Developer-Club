#include <stdio.h>
int main()
{
    float radius;
    
    // To take radius as input
    
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float area = 3.14*radius*radius;
    
    // To print Area
    
    printf("%f",area);
    return 0;
}