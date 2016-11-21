#include <stdio.h>
#include <stdlib.h>

int return_value(int integer){ //Intger is an integer that we provided in main when we called douglas()
    int x;
    x=22;
    printf("Beeblebrox %d\n", integer); //We provided the variable integer in main()
    return x+42;
}

int main(void){
    int x; //Local variables! No connection to the x in main()
    x = return_value(999);
    printf("The answer is %d\n", x);
    return 0;
}
