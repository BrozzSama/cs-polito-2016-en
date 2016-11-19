#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int array1[SIZE];
    int array2[SIZE];
    int same_elements=0;
    printf("Type the first array (size: %d)", SIZE);
    for ( int i = 0; i<SIZE; ++i){
        scanf("%d", &array1[i]);
    }
    printf("Type the second array (size %d): ", SIZE);
    for ( int i = 0; i<SIZE; ++i){
        scanf("%d", &array2[i]);
    }

    for ( int i = 0; i<SIZE; ++i){
        for (int t = 0; t<SIZE; ++t)
            if(array1[t]==array2[i]){
                same_elements++;
            }
    }
    if (same_elements >= 10){
        printf("The two arrays contain the same elements");
    }
    return 0;
}
