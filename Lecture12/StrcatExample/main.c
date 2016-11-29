#include <stdio.h>
#include <stdlib.h>
#define BUFFER_LEN 4096

int main()
{
    char str[BUFFER_LEN];
    strcpy(str, "This");
    strcat(str, " ");
    strcat(str, "is");
    strcat(str, " ");
    strcat(str, "a");
    strcat(str, " ");
    strcat(str, "concatenated");
    strcat(str, " ");
    strcat(str, "string");
    printf("%s", str);
    return 0;
}
