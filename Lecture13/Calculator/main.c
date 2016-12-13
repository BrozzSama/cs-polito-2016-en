#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4){
        printf("ERROR!");
        exit(EXIT_FAILURE);
    }
    double number1, number2;
    sscanf(argv[1], "%lf", &number1);
    sscanf(argv[3], "%lf", &number2);
    char operand = argv[2][0];
    float result;
    printf("%lf %c %lf\n", number1, operand, number2);
    switch(operand){
        case '+':
            result=number1+number2;
            break;
        case '-':
            result=number1=number2;
            break;
        case '*':
            result=number1*number2;
            break;
        case '/':
            result=number1/number2;
            break;
    }
    printf("Result: %lf\n", result);
    return 0;
}
