#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000 //IF you edit this line the whole program is changed!!!

int main()
{
    int data[SIZE];
    srand(time(NULL)); //Number of seconds elapsed from january 1970 to the moment the program is runnning used at seed.
    for (int t=0; t<SIZE; ++t){
        data[t] = rand(); //Returns same sequence of values!
        printf("%d ", data[t]);
    }
    //Finding maximum and minimum!
    int max, min;
    max = data[0];
    min = data[0];
    for (int t=0; t<SIZE; ++t){
        if (data[t] > max)
            max=data[t];
        if (data[t] < min)
            min=data[t];
    }
    printf("%d ", min);
    printf("%d ", max);

    return 0;
}
