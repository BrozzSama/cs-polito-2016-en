#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    /*Elegant way of zeroing an array! Otherwise the values are default values.
    If the first element is 0, the others are 0 as well (unless they are defined)*/
    int data[SIZE]={0};
    //Manually defining an array!
    int datum[4]={1,2,3,4};
    // Get values with scanf and put them into an array, then print the result!
    // #ArraysAreFUN!
    int datum[SIZE]; //Generally defining an array and its SIZE (defined by a MACRO)
    for (int i = 0; i<SIZE; i++)
        scanf("%d", &datum[i]);
    for (int i = (SIZE-1); i>=0; i--)
        printf("%d\n", datum[i]);
    return 0;
}
