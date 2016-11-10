#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    value = 3000000000;
    long value2;
    value2 = 3000000000000000000;
    unsigned int value3;
    value3 = value = 30000000000000000000;
    // If you check the values through the watches uitility you'll notice that they are incorrect because the compiler whent into overflow!
    //This is not the proper way to figure out the maximum value of int, long and unsigned int!
    return 0;
}
