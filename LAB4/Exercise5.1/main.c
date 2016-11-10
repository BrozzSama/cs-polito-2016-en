#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c; //Using int only 9 numbers of the sequence are reprsented because int cannot store bigger values!
    a = 1;
    b = 2;
    printf("Fiboancci UP TWO 20!\n");
    for ( int t=0; (t<20) ; t=t+1){
        printf("%d\n", a);
        c = a*b;
        a = b;
        b = c;
    }
    return 0;
}
