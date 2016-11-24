#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int power(int base, int exponent);

int main()
{
    int vbase[SIZE]={5, 10, 2, 3, 4};
    int vexponents[SIZE]={2, 1, 4, 2, 2};
    int vres[SIZE];
    for (int t=0; t<SIZE; ++t){
        vres[t]=power(vbase[t], vexponents[t]);
    }
    printf("The respective powers are: ");
    for (int t=0; t<SIZE; ++t){
        printf("%d ", vres[t]);
    }
    return 0;
}

int power(int base, int exponent){
    if (exponent == 0){
        base=1;
    }
    for (int t = 1; t<exponent; ++t){
        base*=base;
    }
    return base;
}

