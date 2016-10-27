#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=1;
    int B=0;
    int C;
    C = ( (A && B) || (!B) ) && (!A);
    return 0;
}
