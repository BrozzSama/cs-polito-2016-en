#include <stdio.h>
#include <stdlib.h>

#define FIVE 5.0

int main()
{
    int a,b;

    a = 5;
    b = 2;

    int c;
    float d;
    c = a / b;
    d = c; //expect 2.0 since C was an int

    float e;
    e = 5.0; //defined like this because 5 and 5.0 are different for a programmer

    const float f = FIVE; //ALWAYS give names to constants


    printf("%d\n", c);
    printf("%f", d);
    return 0;
}
