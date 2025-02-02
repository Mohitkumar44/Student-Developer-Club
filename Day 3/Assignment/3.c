/*
write a program to assign grades based on marks using the following criteria:
Marks >= 90: "A"  
Marks >= 75: "B" 
Marks >= 50: "C" 
Marks < 50: "Fail"
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d",&marks);
    if ( marks >=90){
        printf("Your Grade is : A");
    }
    else if ( marks < 90 && marks >=75){
        printf("Your Grade is : B");
    }
    else if ( marks < 75 && marks >=50){
        printf("Your Grade is : C");
    }
    else if ( marks <50){
        printf("Your are Fail");
    }
    return 0;
}