#include <stdio.h>
#include <stdlib.h>
#define N 5

void mult(int v[], int n, int x);

int main()
{
    int vect[N];
    int x;
    printf("Insert %d values for your array: ", N);
    for (int t=0; t<N; ++t){
        scanf("%d", &vect[t]);
    }
    printf("What number do you want to multiply the array for? ");
    scanf("%d", &x);
    mult(vect, N, x);
    printf("The values are: ");
    for (int t = 0; t<N; ++t){
        printf("%d ", vect[t]);
    }
    return 0;
}

void mult(int v[], int n, int x){
    for (int t =0; t<n; ++t){
        v[t]=v[t]*x;
    }
}
