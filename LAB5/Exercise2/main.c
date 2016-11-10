#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int array[SIZE];
    int sum;
    int max;
    int maxposition;
    float average;
    for (int t = 0; t<SIZE; t++){
        printf("Type value: ");
        scanf("%d", &array[t]);
    }
    for (int t = 0; t<SIZE; t++){
        printf("%d ", array[t]);
    }
    //Calculate sum
    for (int t = 0; t<SIZE; t++){
        sum+=array[t];
    }
    average=(float)sum/SIZE;
    printf("\nThe average is: \e[31m\e[43m%.2f\e[0m\n", average);
    //Caculate max using a nested for cycle
    for (int t=0; t<SIZE; t++){
        for (int i=0; i<SIZE; i++)
            if (i!=t){
                if(array[t]< array[i]){
                    max=array[i];
                    maxposition=i+1;
                }
            }
    }
    printf("The maximum values is: %d\n", max);
    printf("The maximum value position is: %d\n", maxposition);
    for (int t=0; t<SIZE; t++){
        if(array[t]==max && maxposition!=t+1){
            ++t;
            printf("The maximum value is repeated in position: %d\n", t);
        }
    }
    return 0;
}
