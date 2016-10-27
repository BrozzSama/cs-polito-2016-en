#include <stdio.h>
#include <stdlib.h>
#define K 10

int main()
{
    int a;
    int b;
    int c;
    int d;
    float x;
    printf("Equation solver! Format ax+bcx+d10\n");
    printf("Insert parameter A ");
    scanf("%d", &a);
    printf("Insert parameter B ");
    scanf("%d", &b);
    printf("Insert paramater C ");
    scanf("%d", &c);
    printf("Insert parameter D ");
    scanf("%d", &d);
    x = (double)(-d*K)/(a+b*c);
    printf("The solution is %f", x);
    return 0;
}
