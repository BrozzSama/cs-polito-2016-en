#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int values[SIZE];
    int values_inverted[SIZE];
    int ispalindrome=0;
    printf("Type a sequence: ");
    for ( int i = 0; i<SIZE; ++i ){
        scanf("%d", &values[i]);
    }
    int t = 0;
    for (int i = SIZE-1; i>=0; --i){
        values_inverted[t]=values[i];
        ++t;
    }
    for (int i = 0; i<SIZE; ++i){
        if (values[i]!=values_inverted[i])
            ispalindrome=1;
    }
    if (ispalindrome==1)
        printf("NOT PALINDROME!\n");
    else
        printf("The sequence is palindrome");
    return 0;
}
