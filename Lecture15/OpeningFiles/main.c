#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input;
    input = fopen("file1", "r");
    //ALWAYS include a check that prints an error to the standard error!
    if (input == NULL){
        fprintf(stderr, "Can't write to file!");
        exit(EXIT_FAILURE);
    }

    int num;
    /* With this the last number is repeated because even when we reached the end, the last scanf did not fail!
    do {
        fscanf(input, "%d", &num);
        printf("=> %d\n", num);
    } while(!feof(input));
   */

    //Much better solution, also the most common way to read a file
    while (fscanf(input, "%d", &num) != EOF){
        printf("=> %d\n", num);
    }
    fclose(input);
    return EXIT_SUCCESS;
}
