#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define MAX_SIZE 4096
//strcpy example
//This was supposed to prove something about strings

int main()
{
    char month[MAX_SIZE]="february";
    char month2[MAX_SIZE]="january";
    printf("The string \"%s\" contains %d characters\n", month, strlen(month));
    printf("The string \"%s\" contains %d characters\n", month2, strlen(month2));
    strcpy(month, "March");
    printf("The string \"%s\" contains %d characters\n", month, strlen(month));
    printf("The string \"%s\" contains %d characters", month2, strlen(month2));
    return 0;
}
