#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char choice;
    printf("Yes or NO ");
    scanf("%s", &choice);
    switch (choice){ //Use switch when dealing with INT, not FLOAT. Conversion int->float = NASTY!!!
        case 'y':  //When using apostrophes this becomes a number!
        case 'Y':
            printf("YES\n");
            break;
        case 'n':
        case 'N':
            printf("NO\n");
            break;
    }
    printf("Type a number! ");
    scanf("%d", &i);
    switch (i){ // i can be any expression (i-3, 4-5, 4/5, etc...)
        case 1:
            printf("One");
            break; //Jumps out of the current block
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("\e[32mFour\e[0m");
            break;
        // The following block means 5 || 6
        case 5:
        case 6:
            printf("Either five or six");
            break;
        //END of 5 || 6
        default:
            printf("Unavailable");
            break;
    }
    return 0;
}
