#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 4096
#define MAX_LINES 20

int main()
{
    int index; //Number of lines
    char data[MAX_LINES][MAX_SIZE];
    for (index = 0; index<MAX_LINES && fgets(data[index], MAX_SIZE, stdin)!=NULL; index++);
    //Change letters
    for(int i = 0; i<index; i++){
        for (int j = 0; data[i][j]!='\0'; j++){
            //If i is equal to 0, or the previous char is equal to a space, or the previous char is equal to a new line AND
            //the current character is lower case -> CONVERT TO UPPER CASE
            if( ( (j==0) || (data[i][j-1]==' ') ) && islower(data[i][j]) ){
                data[i][j]=toupper(data[i][j]);
            }
        }
    }
    for (int i = 0; i<index; i++){
        printf("%s", data[i]);
    }
    return 0;
}
