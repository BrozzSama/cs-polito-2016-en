#include <stdio.h>
#include <stdlib.h>
#define SIZE 4096
int main()
{
    int a[SIZE];
    int b[SIZE];
    for(int t = 0; t<SIZE;t=t+1)
        a[t]=b[t];
    return 0;
}
