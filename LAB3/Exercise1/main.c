#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_1;
    int int_2;
    float float_1;
    float float_2;
    printf("Type first integer: ");
    scanf("%d", &int_1);
    printf("Type second integer: ");
    scanf("%d", &int_2);
    printf("Type first real number: ");
    scanf("%f", &float_1);
    printf("Type second real number: ");
    scanf("%f", &float_2);
    printf("%5d %5d\n", int_1, int_2); // %05d will fill all the empty spaces with ZEROES %+5d will show the sign of the value even if the value is positive
    printf("%5.2f\n%.3f", float_1, float_2);
    return 0;
}

