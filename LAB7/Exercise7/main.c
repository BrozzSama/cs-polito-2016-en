#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 4096
#define MAX_LINES 20

int main()
{
    int index; //Number of lines
    int words;
    float sum=0;
    char data[MAX_LINES][MAX_SIZE];
    for (index = 0; index<MAX_LINES && fgets(data[index], MAX_SIZE, stdin)!=NULL; index++);
    //Change letters
    for(int i = 0; i<index; i++){
        for (int j = 0; data[i][j]!='\0'; j++){
            //Count a word when a word is found
            if( ( (j==0) || (data[i][j-1]==' ') ) && isalpha(data[i][j]) ){
                words++;
                //Increase sum until we get out of the word(until we reach a terminator or space)!
                for (int k = j; data[i][k]!=' ' && data[i][k]!='\0'; k++){
                    sum++;
                }
            }
        }
    }
    printf("Total number of words: %d", words);
    printf("Total number of lines: %d", index);
    printf("Average length of word: %f.1", (float)sum/words);
    return 0;
}

