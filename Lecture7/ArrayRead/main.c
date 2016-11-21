#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4096

int main()
{
    int array[MAX_SIZE]; //Allocate the memory, not the actual size!
    int array_len = 0;
    do {
        scanf("%d", &array[array_len]);
        ++array_len;
    } while( array[array_len-1] != -1);
    --array_len; //Remove the -1 value, since it's the condition for interrupting not an actual value!

    //Print using the size
    for(int t =0; t < array_len; ++t){
        printf("%d) %d\n", t, array[t]);
    }
    //Print using the marker we chose (-1)!
    for(int t=0; array[t]!=-1; ++t){
        printf("%d) %d\n", t, array[t]);
    }
}
