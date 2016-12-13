#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define ROWS 3

int main()
{
    int data[ROWS][COLUMNS];
    int found = 0;
    for (int i = 0; i<ROWS; i++){
        printf("Enter the %d row (Maximum values allowed: %d): ", i+1, COLUMNS);
        for (int j = 0; j<COLUMNS; j++){
            scanf("%d", &data[i][j]);
        }
    }
    //Got the input, let's check!
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            //Print result if we found a sequence of at least three zeroes!
            if (data[i][j] == 0 && data[i][j+1] == 0 && data[i][j+2] == 0){
                printf("Found sequence in %d row\n", i+1);
                j=ROWS;
            }
        }
    }

    return 0;
}
