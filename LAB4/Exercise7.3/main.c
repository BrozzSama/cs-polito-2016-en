#include <stdio.h>
#include <stdlib.h>
//francesco capo della cia!!!!
int main()
{
    int value =0;
    int showvalue = 0;
    //When int goes into overflow it becomes negative
    while (value>=0){
        //Update the control variable showvalue only if the next number is not negative, otherwise we would obtain a negative size of INT
        if ((value+1)>0){
            value=value+1;
            showvalue=showvalue+1;
        }
        if ((value+1)<0){
            value=value+1;
        }
    }
    printf("Maximum possible value for int: %d", showvalue);
    return 0;
}
