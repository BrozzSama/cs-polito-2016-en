#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

float overAvg(int v[], int n, int *greater);
int upperLimit(int v[], int n, float limit);

int main()
{
    int array[SIZE];
    int greater;
    float upper_limit;
    printf("Type %d for your array: ", SIZE);
    for (int i = 0; i<SIZE; i++){
        scanf("%d", &array[i]);
    }
    printf("Type the upper limit: ");
    scanf("%f", &upper_limit);
    printf("The average of the values is: %f\n", overAvg(array, SIZE, &greater));
    printf("The values that are above the upper limit are: %d\n", upperLimit(array, SIZE, upper_limit));
    printf("The values that are greater than the average are: %d\n", greater);
    return 0;
}

int upperLimit(int v[], int n, float limit){
    int t=0;
    for (int i = 0; i<n; i++){
        if (v[i]>limit){
            t++;
        }
    }
    return t;
}

float overAvg(int v[], int n, int *greater){
    float sum;
    float average;
    int t=0;
    for (int i = 0; i<n; i++){
        sum+=v[i];
    }
    average=sum/n;
    for (int i = 0; i<n; i++){
        if ((float)v[i]>average){
            t++;
        }
    }
    *greater=t;
    return average;
}
