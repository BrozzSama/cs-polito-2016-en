#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[10];
    u[100]=42; //The array is smaller! There is not enough memory reserved!
    printf("%d", u[100]);
    int s;
    int array[s]; //ALSO WRONG! Because int size is limited.
    return 0;
}
