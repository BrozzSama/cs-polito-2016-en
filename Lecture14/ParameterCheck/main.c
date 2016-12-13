#include <stdio.h>
#include <stdlib.h>
#define NUMBEROFARGS 2

int main(int argc, char *argv[])
{
    if (argc != NUMBEROFARGS){
        printf("Two arguments required, exiting...");
        exit(EXIT_FAILURE);
    }
    return 0;
}
