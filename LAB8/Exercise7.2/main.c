//Let's make this s* even MORE generic
#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define ROWS 3
//Value that needs to be searched
#define SEARCH 4
#define LENGTH_SEQ 2

int main()
{
    int data[ROWS][COLUMNS];
    int counter;
    for (int i = 0; i<ROWS; i++){
        printf("Enter the %d row (Maximum values allowed: %d): ", i+1, COLUMNS);
        for (int j = 0; j<COLUMNS; j++){
            scanf("%d", &data[i][j]);
        }
    }
    //Got the input, let's check!
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            //Print result if we found a sequence of at least LENGTH_SEQ SEARCH (you can read macros, even though you're human)!
            if (data[i][j]==SEARCH){
                counter=1;
                for (int k = 0; k<=LENGTH_SEQ; k++){
                    if(data[i][j]==data[i][j+1]){
                        counter++;
                        j++;
                    }
                    // If there is no sequence exit the counter loop and keep going with the search!
                    else{
                        k=LENGTH_SEQ;
                    }
                }
            }
            // If we found the sequence go to the next ROW
            if (counter >= LENGTH_SEQ){
                printf("A sequence of %d of length %d has been found in row %d\n", SEARCH, LENGTH_SEQ, i+1);
                j=COLUMNS;
            }

        }
    }
    //Columns check!
    //#JisTheNewI! and #ColumnsAreTheNewRows
    for (int i = 0; i<COLUMNS; i++){
        for (int j = 0; j<ROWS; j++){
            //Print result if we found a sequence of at least SEQUENCE SEARCH (you can read macros, even though you're human)!
            if (data[j][i]==SEARCH){
                counter=1;
                for (int k = 0; k<=E=LENGTH_SEQ; k++){
                    if(data[j][i]==data[j][i+1]){
                        counter++;
                        j++;
                    }
                    // If there is no sequence exit the counter loop and keep going with the search!
                    else{
                        k = LENGTH_SEQ;
                    }
                }
            }
            // IF found print message and go to next COLUMN
            if (counter >= LENGTH_SEQ){
                printf("A sequence of %d of length %d has been found in column %d\n", SEARCH, LENGTH_SEQ, i+1);
                j=COLUMNS;
            }

        }
    }

    return 0;
}

