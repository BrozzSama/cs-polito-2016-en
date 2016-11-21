#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 512

int main()
{
    int array1[ARRAY_SIZE]={ 0 };
    int array2[ARRAY_SIZE];

    if(array1 == array2){ //ERROR! You are not comparing the arrays, you are checking whether they have the same position in memory

    }

    //Correct way of comparing arrays

    int arrays_same_elements = 1; //Initialize flag
    for (int t=0; t<ARRAY_SIZE; ++t){
        if(array1[t] != array2[t])
            arrays_same_elements=0; //Raise flag!
    }

    if(arrays_same_elements != 0){
        printf("Equal!");
    }
    else{
        //If they are not equal copy array1 to array2
        printf("Not equal!");
        for (int t =0; t<ARRAY_SIZE; ++t){
            array2[t]=array1[t];
        }
    }
    printf("\n%p", array1); //Position in memory!
    exit(EXIT_FAILURE); //Exit the program EXIT_SUCCESS EXIT_FAILURE
    return 0; //Exits a function but doesn't exit the program if we're dealing with another function
}
