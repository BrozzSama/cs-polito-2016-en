#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 512

int main()
{
    char array[MAX_SIZE];
    int num_char=0;
    int num_alpha=0;
    int num_upper=0;
    int num_digit=0;
    int num_space=0;
    int num_words=0;
    int startpoint;
    for (int t=0; array[t-1]!='\n'; ++t){
        scanf("%c", &array[t]);
        num_char++;
        if (isalpha(array[t])){
            num_alpha++;
        }
        if (isupper(array[t])){
            num_upper++;
        }
        if (isdigit(array[t])){
            num_digit++;
        }
        if (isspace(array[t])){
            num_space++;
        }
    }
    //SCAN first word
    if(isalpha(array[0])){
        int isaword=1;
            for (int i=1; !isspace(array[i]); ++i){
                if (!isalpha(array[i])){
                    isaword=0;
                }
                startpoint=i;
            }
            if (isaword==1){
                num_words++;
            }
    }
    for (int t=startpoint; array[t-1]!='\n'; ++t){
        if (isalpha(array[t]) && isspace(array[t-1])){
            int isaword=1;
            for (int i=t+1; !isspace(array[i]); ++i){
                if (!isalpha(array[i])){
                    isaword=0;
                }
                t=i;
            }
            if (isaword==1){
                num_words++;
            }
        }

    }
    return 0;
}
