#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b;
    if (argc != 3){
        fprintf(stderr, "ERROR! The program requires two parameters\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    if ((a<-10000) || (a>10000)){
        fprintf(stderr, "ERROR! The program requires two integers between [10000;-10000] in order to run! \n Please check the boundaries and try again");
        exit(EXIT_FAILURE);
    }
    if ((b<-10000) || (b>10000)){
        fprintf(stderr, "ERROR! The program requires two integers between [10000;-10000] in order to run! \n Please check the boundaries and try again");
        exit(EXIT_FAILURE);
    }
    printf("The sum is: %d\n", a+b);
    return 0;
}
