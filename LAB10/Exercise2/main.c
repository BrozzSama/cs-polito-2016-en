#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4){
        printf("ERROR!");
        exit(EXIT_FAILURE);
    }
    double number1, number2;
    char ch = argv[3][0];
    sscanf(argv[1], "%lf", &number1);
    sscanf(argv[2], "%lf", &number2);
    float result;
    switch(ch){
        case 'a':
            result=number1+number2;
            break;
        case 'b':
            result=number1=number2;
            break;
        case 'c':
            result=number1*number2;
            break;
        case 'd':
            if (number2 == 0){
                fprintf(stderr, "ERROR! You cannot divide by zero.");
                exit(EXIT_FAILURE);
            }
            result=number1/number2;
            break;
        default:
            printf("Error! the operation is denoted by a, b, c or d");
            exit(EXIT_FAILURE);
    }
    printf("Result: %lf\n", result);
    return 0;
}
