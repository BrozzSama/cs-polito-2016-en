#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 7;
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d ",a);
    printf("%d",b);
    return 0;
}
