#include <stdio.h>
#include <stdlib.h>

void print_frame(int rows, int cols){
    print_rows(cols, '#');
    printf("\n");
    for(int t=0; t<rows-2;++t){
        printf("#");
        print_rows(cols-2,' ');
        printf("#\n");
    }
    print_rows(cols, '#');
    printf("\n");
}

void print_rows(int cols, char c){ //They do not return any value so VOID
    for(int t=0; t < cols; ++t){
        printf("%c", c);
    }

}

int main()
{
    print_frame(20,42);
    return EXIT_SUCCESS; //MACRO for 0
}
