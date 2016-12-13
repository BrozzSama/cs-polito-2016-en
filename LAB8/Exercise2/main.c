#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 20

int main()
{
    char array[N];
    int words=0;
    printf("Type a string of %d characters: ", N);
    for ( int t = 0; t<N; t++){
        array[t]=getchar();
        if( t == N-1 ){
            array[t+1]='\0';
        }
    }
    for ( int t = 0; t<N; t++){
        if(!isalnum(array[t])){
            array[t]='_';
        }
        if(isupper(array[t])){
            array[t]=toupper(array[t]);
        }
        if(isdigit(array[t])){
            array[t]='*';
        }
    }
    for (int t = 0; t<N; t++){
        if (isalpha(array[t])){
            int notaword=0;
            int j;
            for (j = t+1; array[j]!='_' && j<N; j++){
                if (!isalpha(array[j])){
                    notaword=1;
                }
            }
            if (!notaword){
                words++;
            }
            t=j;
        }
    }
    printf("The number of words is: %d\n", words);
    printf("%s", array);
    return 0;
}
