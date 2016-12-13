#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE info; //info is a file stored inside the stdio.h
    FILE *file_pointer; //the type is FILE*
    int num;
    printf("%d\n", sizeof(info));
    fprintf(stdout, "Hello!\n"); //We are not sending the whole file but the pointer (aka the point in memory)
    fprintf(stderr, "Hello ERROR!\n");
    fscanf(stdin, "%d", &num); //Grab the input from the stdin and look for an integer!
    printf("%d", num);
    return 0;
}
