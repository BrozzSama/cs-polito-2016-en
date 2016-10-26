#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x<0){
        // = 0 - x;
        x=(-x);
        }
    else
        x=x;
    printf("%d",x); //RICORDA IL %d
    return 0;
}
