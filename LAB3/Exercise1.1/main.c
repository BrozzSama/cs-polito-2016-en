#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_1;
    int int_2;
    float float_1;
    float float_2;
    float value;
    printf("Type real number: ");
    scanf("%f", &value);
    int_1 = value;
    int_2 = value;
    float_1 = value;
    float_2 = value;
    printf("%5d %5d\n", int_1, int_2); // You're supposed to put a breakpoint here and using watches to see what happens to the variables!
    printf("%5.2f\n%.3f", float_1, float_2);
    return 0;
}
