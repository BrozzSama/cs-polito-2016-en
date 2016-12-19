#include <stdio.h>
#include <stdlib.h>
#define ROWS 5 + 2 //(+1 new line and +1 for end of string!)
#define COLUMNS 11 + 2

int findpath(int position);

int path[COLUMNS-2]; //-2 because of terminator etc...
char swamp[ROWS][COLUMNS];

int main(int argc, char* argv[])
{
    int pathfound = 0;
    // Get swamp from swamp file!
    if (argc != 2){
        printf("Please specify a swamp file!");
        exit(EXIT_FAILURE);
    }
    FILE* data=fopen(argv[1], "r");
    for (int i = 0; i<ROWS; i++){
        fgets(swamp[i], COLUMNS, data);
        printf("%s", swamp[i]);
    }
    fclose(data);
    //For every row starting with a rock check if a path exists
    for (int i = 0; i<ROWS && !pathfound; i++){
        if(swamp[i][0]=='*'){
            pathfound=findpath(i);
        }
    }
    //If the function found a path then print the path array, since it contains a possible path!
    if (pathfound == 1){
        for (int i = 0; i<COLUMNS-2; i++){
            printf("%d ", path[i]);
        }
        printf("\n");
    }
    return 0;
}

//Search for a path in the swamp starting from the given row: variable position
int findpath(int position){
    int counter = 0;
    int j = 0;
    path[0]=position;
    while(j<COLUMNS-2){
        //If there is a rock on the top, move position to the top
        if (swamp[position][j]==swamp[position+1][j+1]){
            position+=1;
            path[j+1]=position;
            ++counter;
        }
        //If there is a rock in the row move forward in the row
        else if (swamp[position][j]==swamp[position][j+1]){
            path[j+1]=position;
            ++counter;
        }
        //If there is a rock on the bottom, move position to the bottom
        else if (swamp[position][j]==swamp[position-1][j+1]){
            position-=1;
            path[j+1]=position;
            ++counter;
        }
        //Interrupt the loop so we can look for another path starting from another row
        else {
            j = COLUMNS-2;
        }
        j++;
    }
    //If counter reached the number of columns-1 (-1 because we are starting from a row already) we found a path
    //Return POSITIVE result YAY!
    if (counter == COLUMNS - 3){
        return 1;
    }
    else {
        return 0;
    }
}
