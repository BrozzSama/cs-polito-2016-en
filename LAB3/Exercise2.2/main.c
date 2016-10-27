#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 1;
    int B = 4;
    int X = 8;
    int C;
    C = ((A < X) && (X < B)); // The solution to the exercise is defining the mathematical operation using C operators, in this case we had to add &&
    if (C == 1)
        printf("%d is included in the interval (%d,%d)", X, A, B);
    else
        printf("%d is not included in (%d, %d)", X, A, B);
    return 0;
}
