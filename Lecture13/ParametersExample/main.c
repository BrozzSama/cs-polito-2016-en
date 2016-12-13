#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //General prototype for parameter passing. argv is an array of char*, so an array of strings
{
    printf("ARGC: %d\n", argc);
    for (int t = 0; t < argc; t++){
        printf("%s\n", argv[t]);
    }
    return EXIT_SUCCESS;
}
