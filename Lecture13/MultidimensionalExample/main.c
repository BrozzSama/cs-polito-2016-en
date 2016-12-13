#include <stdio.h>
#include <stdlib.h>
#define DIM_1 10
#define DIM_2 5

int main()
{
    int x[DIM_1][DIM_2] =
        { {5,4} , 2 , 4 , 7 }; //The square brackets separate the lines,
    //Initizialize the array with random values
    for (int i = 0; i < DIM_1; i++){
        for (int j = 0; j< DIM_2; j++){
                x[i][j] = rand()%100; //Set [i][j] to a random positive value <100
            }
    }
    for (int i = 0; i < DIM_1; i++){
        for (int j = 0; j< DIM_2; j++){
            printf("%02d ", x[i][j]); //0 is the padding character while 2 is the minimum size
        }
        printf("\n");
    }
    return 0;
}

//Printing a multdimensional array!
void print2da(void){

}
