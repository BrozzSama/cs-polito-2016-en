#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

//Count how many times a value (num) is present in the array
int count(int arr[], int start, int end, int num){
    int r = 0;
    for(int t=start; t<end;++t){
        if(arr[t]==num){
            ++r;
        }
    }
    return r;
}

int main()
{
    int array[ARRAY_SIZE];
    for (int t = 0; t < ARRAY_SIZE; ++t){
        array[t]= rand()%10;
    }
    printf("\n");
    for (int t = 0; t < ARRAY_SIZE; ++t){
        printf("%d ", array[t]);
    }
    printf("\n");
    for (int t = 0; t<ARRAY_SIZE; ++t){
        int target=array[t];
        int prev_cnt=count(array,0,t,target); //Count how many times I ALREADY counted the value (NOTE t variable!!!)
        if(prev_cnt==0){
            printf("Number %d appears %d times\n", target, count(array,0,ARRAY_SIZE,target));
        }
    }
    return 0;
}
