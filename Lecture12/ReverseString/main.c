#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 4096

void reversestring(char str[], char reversed[]);

int main()
{
    char str[BUFFER_SIZE];
    char reversed[BUFFER_SIZE];
    while ( gets(str) != NULL ){ //The loop is infinite, and stops only if there is no input source available
        reversestring(str,reversed);
        printf("%s", reversed);
    }
    return 0;
}

void reversestring(char str[], char reversed[]){
    int len = strlen(str);
    for( int i = 0; str[i]!='\0'; i++ ){
        reversed[i]=str[strlen(str)-i-1];
    }
    reversed[len]='\0'; //Not a string without a terminator!
}
