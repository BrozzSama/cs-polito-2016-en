#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5

int main()
{
    int array1[ARRAY_SIZE]={ 1, 2, 3, 4, 5};
    int array2[ARRAY_SIZE]={ 5, 3, 1, 2, 4};
    int canceled[ARRAY_SIZE]= {0};

    for (int t = 0; t < ARRAY_SIZE; ++t){
        for(int u = 0; u < ARRAY_SIZE; ++u){
            if(array1[t]==array2[u] && !canceled[u]){
                canceled[u]=1;
                break; //Exit from the inner loop, not clean!
            }
        }
    }

    //Cleaner version
    for (int t = 0; t < ARRAY_SIZE; ++t){
        int found = 0;
        for(int u = 0; !found /*found==0*/ && u < ARRAY_SIZE; ++u){
            if(array1[t]==array2[u] && !canceled[u]){
                canceled[u]=1;
                found = 1; //Much cleaner
            }
        }
    }


    return 0;
}
