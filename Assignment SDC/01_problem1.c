// write a program to determine whether a small_letter entered by the user is a vowel or a consonant.
#include <stdio.h>
#include <ctype.h>

int main(){
    char small_letter,letter;
    printf("Please enter a single letter : ");
    scanf("%c",&letter);
    small_letter = tolower(letter);
    if (small_letter=='a'||small_letter=='e'||small_letter=='i'||small_letter=='o'||small_letter=='u'){
        printf("You entered a vowel");
    }
    else if( small_letter>='a'&&small_letter<='z')
    {
        printf("You entered a consonant");
    }
    else{
        printf("the input is not an alphabet");
    }
    
    return 0;
}