#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main()
{
    int array[MAX_SIZE];
    int index = 0;
    while(index < MAX_SIZE){
        scanf("%d", &array[index]);
        if(array(index) >= 1 && array[index]<= 30){
            index++;
        } else{
            printf("ERROR\n");
        }

    }
    for (int t = 0; t < MAX_SIZE; ++t){
        printf("%d", array[t]);
    }
    return 0;
}
