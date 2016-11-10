#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    // Get values with scanf and put them into an array, then print the result!
    // #ArraysAreFUN!
    int datum[SIZE]; //BETTER if defined with macro
    datum[0] = 42;
    for (int i = 1; i<SIZE; i++){
        datum[i]=datum[i-1]+1;
        printf("%d ", datum[i]);
        }
    return 0;
}
