#include <stdio.h>
#include <stdlib.h>
#define FILENAME "file.dat"
#define MAX_LINE 10
#define MAX_BUF 512

int main()
{
    FILE *input;
    /*
    fopen codes:
    r = reading;
    w = writing;
    w+ = create empty file and access r/w;
    r+ = access file r/w;
    a = append;
    There are more, but I won't even bother listing them here
    */

    input=fopen(FILENAME,"r");
    //ALWAYS include a check that prints an error to the standard error!
    if (input == NULL){
        fprintf(stderr, "Can't write to file!");
        exit(EXIT_FAILURE);
    }
    char buf[MAX_BUF];
    fgets(buf, MAX_LINE, input);
    printf(">>%s<<", buf);
    fclose(input);
    //YEP, pure MAGIC!
    return 0;
}

