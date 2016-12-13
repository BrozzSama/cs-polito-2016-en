#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define ROWS 3
//Value that needs to be searched
#define SEARCH 4

int main()
{
    int data[ROWS][COLUMNS];
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
            if (data[i][j] == SEARCH && data[i][j+1] == SEARCH && data[i][j+2] == SEARCH){
                printf("Found sequence in row %d\n", i+1);
                j=ROWS;
            }
        }
    }
    //Columns check!
    //#JisTheNewI! and #ColumnsAreTheNewRows
    for (int j = 0; j<COLUMNS; j++){
        for (int i = 0; i<ROWS; i++){
            //Print result if we found a sequence of at least three zeroes!
            if (data[j][i] == SEARCH && data[j][i+1] == SEARCH && data[j][i+2] == SEARCH){
                printf("Found sequence in column %d\n", j+1);
                j=ROWS;
            }
        }
    }

    return 0;
}
