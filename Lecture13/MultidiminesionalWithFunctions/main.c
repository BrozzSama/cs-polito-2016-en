#include <stdio.h>
#include <stdlib.h>
#define DIM_1 10
#define DIM_2 5

//Defining global variables
int X [DIM_1][DIM_2];
//Global variables are forever, only use them with multidimensional array and name them with capital letters
//Global variables start with zero, ALWAYS INITIALIZED!

int main()
{
     //The square brackets separate the lines,
    //Initizialize the array with random values
    for (int i = 0; i < DIM_1; i++){
        for (int j = 0; j< DIM_2; j++){
            printf("%02d ", X[i][j]); //0 is the padding character while 2 is the minimum size
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < DIM_1; i++){
        for (int j = 0; j< DIM_2; j++){
                X[i][j] = rand()%100; //Set [i][j] to a random positive value <100
            }
    }
    print2da();
}

//Printing a multdimensional array! JK, you can't so you have to use global variables and just do a cheap ass void function
void print2da(void){
    for (int i = 0; i < DIM_1; i++){
        for (int j = 0; j< DIM_2; j++){
            printf("%02d ", X[i][j]); //0 is the padding character while 2 is the minimum size
        }
        printf("\n");
    }
    return 0;
}
