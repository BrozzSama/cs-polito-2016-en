#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int decimal;
    int binary[256]; //Size of unsigned int
    int pos=0;
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0){
        binary[pos++] = 0;
    }
    else {
        while (decimal > 0){
            binary[pos++]=decimal%2;
            decimal/=2llu; //WE add long long unsigned to avoid automatic casting! (llu)
            }

    }
    printf("The corresponding binary number is: \n");
    for (int i = pos - 1; i>=0; --i){ //pos-1 because pos represents the first empty block in the array
        printf("%d", binary[i]); //Number
    }
    return 0;
}
