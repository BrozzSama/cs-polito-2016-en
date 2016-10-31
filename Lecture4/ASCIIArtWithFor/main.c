#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 40
#define ROWS 30
int main()
{
    //SIMPLE
    for(int r = 0; r < ROWS; r = r + 1){
        for(int c = 0; c < COLUMNS; c = c+1){
            printf("#");
        }
        printf("\n");
    }
    //ADVANCE
    for(int r = 0; r < ROWS; r = r + 1){
        for(int c = 0; c < COLUMNS; c = c+1){
            if ( c<39 && c>0 )
                printf(" ");
            else
                printf("#");
        }
        printf("\n"); //To be completed
    }
}
