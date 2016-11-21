#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10

int main()
{
    int array[LENGTH];
    int at_least_one = 0;
    for(int t=0; t < LENGTH; ++t){
        scanf("%d", &array[t]);
    }
    int n_pos=0;
    for (int t = 0; t < LENGTH; ++t){
        if(array[t] >= 0)
            ++n_pos;
            at_least_one=1; // FLAG, we only need one condition! Optimizes the program.

    }
    if(n_pos == LENGTH){
        printf("10 positive elements!")
    }
    if(at_least_one == 0){
        printf("10 positive elements");
    }
    return 0;
}
