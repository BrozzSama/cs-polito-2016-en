#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 5
#define ROWS 5
//Value that needs to be searched
#define SEARCH 0
#define LENGTH_SEQ 3

int main(int argc, char* argv[])
{
    if (argc != 2){
        fprintf(stderr, "ERROR! Please specify a file!");
        exit(EXIT_FAILURE);
    }
    int data[ROWS][COLUMNS];
    int found = 0;
    FILE *input = fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "The file does not exist!");
        exit(EXIT_FAILURE);
    }
    int counter;
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            fscanf(input, "%d", &data[i][j]);
        }
    }
    fclose(input);
    //Got the input, let's check!
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            //Print result if we found a sequence of at least LENGTH_SEQ SEARCH (you can read macros, even though you're human)!
            if (data[i][j]==SEARCH){
                counter=1;
                for (int k = 0; k<LENGTH_SEQ; k++){
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
                counter=0;
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
                for (int k = 0; k<LENGTH_SEQ; k++){
                    if(data[j][i]==data[j+1][i]){
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
                counter=0;
            }

        }
    }

    return 0;
}
