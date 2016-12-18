#include <stdio.h>
#include <stdlib.h>
#define ROWS 5
#define COLUMNS 11

int findpath(int position);

int path[COLUMNS];
char swamp[ROWS][COLUMNS];

int main()
{
    int pathfound = 0;
    // Get swamp from swamp file!
    FILE* data=fopen("example.swamp", "r");
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            fscanf(data, "%c", &swamp[i][j]);
            printf("%c", swamp[i][j]);
        }
        printf("\n");
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
        for (int i = 0; i<COLUMNS; i++){
            printf("%d", path[i]);
        }
    }
    return 0;
}

//Search for a path in the swamp starting from the given row: variable position
int findpath(int position){
    int counter = 0;
    int j = 0;
    path[0]=position;
    while(j<COLUMNS){
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
            j = COLUMNS;
        }
        j++;
    }
    //If counter reached the number of columns-1 (-1 because we are starting from a row already) we found a path
    //Return POSITIVE result YAY!
    if (counter == COLUMNS - 1){
        return 1;
    }
    else {
        return 0;
    }
}
