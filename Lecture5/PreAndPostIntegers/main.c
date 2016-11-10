#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3;
    a--; //decrease by one
    a++; //increse by one
    int z;
    z = a++ + 43; //the result will be a+43 because the increase happens AFTER!
    z = ++a + 43; //This is the proper declaration!
    return 0;
}
