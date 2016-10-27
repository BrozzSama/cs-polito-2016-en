#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1, value2;
    double result;
    printf("Arithmetic mean calculator\n");
    printf("Type value 1 ");
    scanf("%d", &value1);
    printf("Type value 2 ");
    scanf("%d", &value2);
    result = ((double)value1+value2)/2;
    printf("The arithmetic mean is: %lg", result);
    return 0;
}
