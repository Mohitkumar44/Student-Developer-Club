#include <stdio.h>
int main(){

    char character;
    printf("Enter Your Character : ");
    scanf("%c",&character);

    if (character>='a' && character<='z')
        printf("all are in small letter");
    
    else if(character>='A' && character<='Z')
        printf("all are in capital letter");
    
    else
        printf("some are small letters and some are capital letters");
    
    return 0;
}