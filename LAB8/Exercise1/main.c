#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 4096

int main()
{
    char array[MAX_SIZE];
    gets(array);
    int length = 0;
    int digits = 0;
    int alphabetic = 0;
    for ( int t = 0; array[t]!='\0'; t++){
        length++;
    }
    for ( int t = 0; t<length; t++){
        if(isdigit(array[t])){
            digits++;
        }
    }
    for ( int t = 0; t<length; t++){
        if(isalpha(array[t])){
            alphabetic++;
        };
    }
    printf("The string is %d characters long\n", length);
    printf("%d characters are alphabetic\n", alphabetic);
    printf("%d characters are numeric\n", digits);
    return 0;
}
