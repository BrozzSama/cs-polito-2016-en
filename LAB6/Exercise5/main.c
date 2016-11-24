#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main()
{
    int base;
    int exponent;
    printf("Type base: ");
    scanf("%d", &base);
    printf("Type exponent: ");
    scanf("%d", &exponent);
    printf("The power is %d", power(base, exponent));
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
