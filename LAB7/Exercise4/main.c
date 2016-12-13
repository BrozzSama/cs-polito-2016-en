#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

float avgVect(int v[], int n);
int upperLimit(int v[], int n, float limit);

int main()
{
    int array[SIZE];
    float upper_limit;
    printf("Type %d for your array: ", SIZE);
    for (int i = 0; i<SIZE; i++){
        scanf("%d", &array[i]);
    }
    printf("Type the upper limit: ");
    scanf("%f", &upper_limit);
    printf("The average of the values is: %f\n", avgVect(array, SIZE));
    printf("The values that are above the upper limit are: %d", upperLimit(array, SIZE, upper_limit));
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

float avgVect(int v[], int n){
    float sum;
    float average;
    for (int i = 0; i<n; i++){
        sum+=v[i];
    }
    average=sum/n;
    return average;
}
