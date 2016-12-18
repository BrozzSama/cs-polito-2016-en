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

    FILE* data=fopen("example.swamp", "r");
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLUMNS; j++){
            fscanf(data, "%c", &swamp[i][j]);
            printf("%c", swamp[i][j]);
        }
        printf("\n");
    }
    fclose(data);
    for (int i = 0; i<ROWS && !pathfound; i++){
        if(swamp[i][0]=='*'){
            pathfound=findpath(i);
        }
    }
    if (pathfound == 1){
        for (int i = 0; i<COLUMNS; i++){
            printf("%d", path[i]);
        }
    }
    return 0;
}

int findpath(int position){
    int counter = 0;
    int j = 0;
    path[0]=position;
    while(j<COLUMNS){
        if (swamp[position][j]==swamp[position+1][j+1]){
            position+=1;
            path[j+1]=position;
            ++counter;
        }
        else if (swamp[position][j]==swamp[position][j+1]){
            path[j+1]=position;
            ++counter;
        }
        else if (swamp[position][j]==swamp[position-1][j+1]){
            position-=1;
            path[j+1]=position;
            ++counter;
        }
        else {
            j = COLUMNS;
        }
        j++;
    }
    if (counter == COLUMNS - 1){
        return 1;
    }
    else {
        return 0;
    }
}
