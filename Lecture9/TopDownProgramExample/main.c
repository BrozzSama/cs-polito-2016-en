#include <stdio.h>
#include <stdlib.h>


void print_rows(int cols, char c){ //They do not return any value so VOID
    for(int t=0; t < cols; ++t){
        printf("%c", c);

    }
}
//Create a box of size rows x cols
void box(int rows, int cols){
    for(int t=0; t<rows; ++t){
        print_rows(cols, '#');
        printf("\n");
    }

}

int main()
{
    box(20,42);
    return EXIT_SUCCESS; //MACRO for 0
}
