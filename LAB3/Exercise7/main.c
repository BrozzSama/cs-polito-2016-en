#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1, value2, value3, value4;
    int min,max;
    int result;
    printf("Type value 1: ");
    scanf("%d", &value1);
    printf("Type value 2: ");
    scanf("%d", &value2);
    printf("Type value 3: ");
    scanf("%d", &value3);
    printf("Type value 4: ");
    scanf("%d", &value4);
    if ( (value1<0) || (value1>=1000) ){
        printf("Value 1 is not valid! It will be initialized to zero");
        value1 = 0;
    }
    if ( (value2<0) || (value2>=1000) ){
        printf("Value 2 is not valid! It will be initialized to zero");
        value2 = 0;
    }
    if ( (value3<0) || (value3>=1000) ){
        printf("Value 3 is not valid! It will be initialized to zero");
        value3 = 0;
    }
    if ( (value4<0) || (value4>=1000) ){
        printf("Value 4 is not valid! It will be initialized to zero");
        value4 = 0;
    }

    if ((value1<value2) && (value1<value3) && (value1< value4)){
        min=value1;
    }
    if ((value2<value1) && (value2<value3) && (value2<value4)){
        min=value2;
    }
    if ((value3<value1) && (value3<value2) && (value3<value4)){
        min=value3;
    }
    if ((value4<value1) && (value4<value2) && (value4<value3)){
        min=value4;
    }
    if ((value1>value2) && (value1>value3) && (value1>value4)){
        max=value1;
    }
    if ((value2>value1) && (value1>value3) && (value1>value4)){
        max=value2;
    }
    if ((value3>value2) && (value3>value1) && (value3>value4)){
        max=value3;
    }
    if ((value4>value2) && (value4>value3) && (value4>value1)){
        max=value4;
    }
    result = max-min;
    if (result < 0){
        result = -result;
    }
    printf("The minimum difference is: %d", result);
    return 0;
}
