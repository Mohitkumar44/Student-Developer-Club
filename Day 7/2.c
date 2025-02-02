#include <stdio.h>

int main(){
    int physics,chemistry,maths,computer,english,average;

    printf("Enter marks of English : ");
    scanf("%d",&english);

    printf("Enter marks of Computer : ");
    scanf("%d",&computer);
    
    printf("Enter marks of Maths : ");
    scanf("%d",&maths);
    
    printf("Enter marks of Chemistry : ");
    scanf("%d",&chemistry);
    
    printf("Enter marks of Physics : ");
    scanf("%d",&physics);

    average = (physics+chemistry+maths+english+computer)/5;

    if (average>=90 && average<=100){
        printf("Your Grade is A");
    }
    
    else if (average<90 && average>=80){
        printf("Your Grade is B");
    }
    
    else if (average<80 && average>=70){
        printf("Your Grade is C");
    }
    
    else if (average<70 && average>=60){
        printf("Your Grade is D");
    }
    
    else if (average<60 && average>=50){
        printf("Your Grade is E");
    }
    
    else if (average<50 && average>=40){
        printf("Your Grade is F");
    }
    
    else if (average<40 && average>=33){
        printf("Your Grade is G");
    }
    
    else if (average<33 && average>=00){
        printf("Your are fail");
    }
    
    return 0;
}
