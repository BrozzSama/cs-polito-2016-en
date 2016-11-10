#include <stdio.h>
#include <stdlib.h>
#define BITS 8

int main()
{
    printf("Binary number (8 bit): ");
    int binary[BITS];
    for(int t = 0; t < BITS; ++t){
        scanf("%d", &binary[t]);
    }
    int decimal = 0;
    int weight = 1;
    for(int t = BITS - 1; t>=0; --t){
        decimal += binary[t] * weight;
        weight *= 2;
    }
    printf("Decimal %d\n", decimal);
    return 0;
}
