#include <stdio.h>
#include <stdlib.h>

//Exercise courtesy of Simona because Francesco has no clue on how to use for

int main()
{
    int base;
    printf("Enter base: ");
    scanf("%d", &base);
    if (base >= 40 || base < 0){
        printf("Invalid base value!");
        return 1;
    }
    for (int r = 1; r<=base; r=r+1){
        for (int c = 1; c<=r; c = c + 1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
