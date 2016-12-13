#include <stdio.h>
#include <stdlib.h>
#define BUFFER 512

int main()
{
    char string1[BUFFER];
    char string2[BUFFER];
    printf("Enter string1: ");
    gets(string1);
    printf("Enter string2: ");
    gets(string2);

    return 0;
}
