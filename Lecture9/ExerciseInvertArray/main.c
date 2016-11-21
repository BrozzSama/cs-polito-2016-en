#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 512

//Create an array (array_dst) which has the same values in the inverse order of array_src

int main()
{
    int array_src[ARRAY_SIZE];
    int array_dst[ARRAY_SIZE];
    swap_copy(array_dst, array_src, ARRAY_SIZE);
    return 0;
}

void swap_copy(int array_dst[], int array_src[], int array_size){
    for (int t=0; t<array_size; ++t){
        array_dst[t]=array_src[array_size-1-t];
    }
}
