#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[0] = { 0 };
    int foo = 42;
    printf("Foo: %d\n", foo);
    for( int t = 0; t < 12; ++t){
        array[t] = -1;
        printf("%d: foo: %d\n", t, foo); //BUFFFER OVERFLOW, other variables get re-written!
    }
    return 0;
}
