#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 60+1 //+1 because we need space for the terminator!

int main()
{
    char userinput[MAX_SIZE];
    int wordcount;
    int isaword;
    int lettercount = 0;
    int wordsize[MAX_SIZE]={0};
    int counter;
    float lettersum;
    printf("Enter text: ");
    gets(userinput);
    for (int i = 0; i<MAX_SIZE; i++){
        if (isalpha(userinput[i])){
            isaword=1;
            lettercount = 0;
            while(isalpha(userinput[i]) && userinput[i]!=' '){
                if (!isalpha(userinput[i+1]) && userinput[i+1]!=' ' && userinput[i+1]!='\0')
                    isaword=0;
                i++;
                lettercount++;
            }
            if (isaword == 1){
                wordcount++;
                wordsize[wordcount-1]=lettercount;
                lettersum+=lettercount;
            }
        }

    }
    printf("The string contaings %d words\n", wordcount);
    for (int i = 0; i<wordcount; i++){
        printf("The %d letter has %d words\n", i+1, wordsize[i]);
    }
    for (int i = 1; i<MAX_SIZE; i++){
        counter = 0;
        for (int j = 0; j<MAX_SIZE; j++){
            if (wordsize[j]==i){
                counter++;
            }
        }
        if (counter>0)
            if (counter==1)
                printf("There is %d word with %d characters\n", counter, i);
            if (counter>1)
                printf("There are %d words with %d characters\n", counter, i);
    }
    printf("The average word size is %f", (float)lettersum/wordcount);
    return 0;
}
