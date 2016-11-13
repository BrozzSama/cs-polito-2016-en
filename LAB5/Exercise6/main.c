#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//INCOMPLETE, part b is missing!

int main()
{
    int values[SIZE];
    int tmp;
    int firstvalue;
    for (int i = 0; i<SIZE; i++ ){
        printf("Enter value: ");
        scanf("%d", &tmp);
        if (tmp<0){
            printf("Exiting...");
            return 0;
        }
        tmp = values[i];
    }
    return 0;
}
