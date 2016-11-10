#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1;
    int value2;
    int tmp;
    printf("Input the two numbers you want to calculate the GCD of: ");
    scanf("%d %d", &value1, &value2);
    if ( value1 < value2 ){
        tmp=value1;
        value1=value2;
        value2=tmp;
    }
    int remainder = value1%value2;
    while(remainder != 0){
        remainder = value1%value2;
        value1 = value2;
        if (remainder != 0)
            value2 = remainder;
    }
    printf("The greatest common divisor is: %d", value2);
    return 0;
}
