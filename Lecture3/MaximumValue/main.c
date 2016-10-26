#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max;
    scanf("%d", &max);
    int n;

    scanf("%d", &n);
    if(n > max){
        max = n;
    }

    printf("Max is %d\n", max);
    return 0;
}
