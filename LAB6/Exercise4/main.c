#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int array[N];
    int tmp;
    int index;
    printf("Type %d values: ", N);
    for(int i = 0; i<N; i++){
        scanf("%d", &array[i]);
        index=i; //If we keep using i, it becomes hard to track changes when we swap variables!
        for (int j=index; j>=0; j--){
            //If one of the previous values is bigger than the new one SWAP VARIABLES!
            if(array[index]<array[j]){
                tmp=array[index];
                array[index]=array[j];
                array[j]=tmp;
                index=j; //Update the index, so the program knows where the variable is!
            }
        }
    }
    printf("The sequence in order is: ");
    for (int i = 0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
