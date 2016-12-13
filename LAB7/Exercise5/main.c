#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char char1, char2;
    printf("Type the first character: ");
    scanf("%c", &char1);
    printf("Type the second character: ");
    scanf(" %c", &char2);
    if ( isalpha(char1) && isalpha(char2) ){
        if (char1 == char2){
            printf("The two characters are equal!");
        }
        if (char1 != char2){
            if (char1 < char2){
                printf("The characters in alphabetic order are: %c %c", char1, char2);
            }
            else{
                printf("The characters in alphabetic order are: %c %c", char2, char1);
            }
        }
    }
    else{
        printf("At least one of the inserted value is a digit");
        }
    return 0;
}
