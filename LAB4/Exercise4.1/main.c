#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    printf("Enter base of isoscele triangle (odd numbers only): ");
    scanf("%d", &base);
    if ( (base%2) == 0){
        printf("Invalid value!");
        return 1;
    }
    for (int r = 0; r<=(base/2+1); r=r+1){
        for (int space1 = 0; space1<=(base-((base/2)-1)-r); space1 = space1 + 1){
            printf(" ");
        }
        for (int asterisk1 = 0; (asterisk1<=r*2); asterisk1 = asterisk1 + 1){
            printf("*");
        }
        for (int space2 = 0; space2<=(base-((base/2)-1)-r); space2 = space2 + 1){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
