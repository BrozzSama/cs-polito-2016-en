#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ANOTHER WHILE EXAMPLE!\n");
    // Do something while the condition is met!
    // Very useless operation :C
    int n = 30;
    do {
        printf("%d\n", n);
        n = n-1;
    } while(n >= 0);
    printf("BANG\n");
    return 0;
}s
