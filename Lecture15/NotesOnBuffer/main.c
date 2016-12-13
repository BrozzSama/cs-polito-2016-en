#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *output;
    /*
    fopen codes:
    r = reading;
    w = writing;
    w+ = create empty file and access r/w;
    r+ = access file r/w;
    a = append;
    There are more, but I won't even bother listing them here
    */

    output=fopen("file.dat","w"); //THIS APPENDS!
    //ALWAYS include a check that prints an error to the standard error!
    if (output == NULL){
        fprintf(stderr, "Can't write to file!");
        exit(EXIT_FAILURE);
    }
    fprintf(output, "FILES ARE AWESOME!\n");
    //Notes on fclose
    //Put a breakpoint on the next line and look at the file before and after this line
    fclose(output);
    //YEP, pure MAGIC!
    return 0;
}
