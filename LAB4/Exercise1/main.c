#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    double delta;
    printf("Quadratic equation solver!\n");
    printf("Enter A: ");
    scanf("%lg", &a);
    printf("Enter B: ");
    scanf("%lg", &b);
    printf("Enter C: ");
    scanf("%lg", &c);
    delta = (b*b-4*a*c);
    if (delta > 0)
        printf("The equation has two real solutions!");
    else if (delta == 0)
        printf("The equation has one real root!");
    else if (delta < 0)
        printf("The equation doesn't have any real solutions");
    return 0;
}
