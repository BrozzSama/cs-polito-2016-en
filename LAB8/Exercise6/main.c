#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SEQUENCE 20
#define MAX_STRINGS 128

int main()
{
   char data[MAX_SEQUENCE][MAX_STRINGS];
   int index;
   printf("Type your sequences and end with EOF\n");
   //When we reach EOF (aka NULL) interrupt the for cycle, the index<MAX_SEQUENCE prevents the program from overflowing
   //fgets is used because it also prevents the program from overflowing!
   for (index = 0; index<MAX_SEQUENCE && fgets(data[index], MAX_STRINGS, stdin)!=NULL; index++);
   //The check is done line by line, once we reach the maximum possible number of strings the loop stops
   for (int k = 0; k<MAX_SEQUENCE; k++){
       for (int i = 0; data[k][i]!= '\0'; i++){
            if( (data[k][i] == 'c' || data[k][i]=='C') && (data[k][i+1] == 'h' || data[k][i+1] == 'H')){
                data[k][i]='k';
                for (int j = i+1; data[k][j] != NULL; j++){
                    data[k][j]=data[k][j+1];
                }
            }
            if (data[k][i] == data[k][i+1]){
                for (int j = i+1; data[k][j] != NULL; j++){
                    data[k][j]=data[k][j+1];
                }
            }
        }
    }
    //PRINT RESULT!
    for (int i = 0; i<index; i++){
        printf("%s", data[i]);
    }

    return 0;
}
