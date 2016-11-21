#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10

int main()
{
    int array[LENGTH];
    for(int t = 0; t < LENGTH; ++t){
        scanf("%d", &array[t]);
    }

    int all_positive = 1;
    int all_negative = 1;
    //NOTE: once inside the loop you can change the value only once!
    //You may not change the value to 0 and then back to 1.
    for (int t=0; t < LENGTH; ++t){
        if(array[t] >= 0)
            all_negative = 0;
        if(array[t] <= 0)
            all_positive = 0;
    }

    if (all_positive==1 || all_negative==1){
        printf("WOAH!");
    }
    return 0;
}
