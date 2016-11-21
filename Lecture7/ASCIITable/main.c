#include <stdio.h>
#include <stdlib.h>

int main()
{
   // int t = 'A'; //converts a to the corresponding ASCII value
//    int t = 042; //OCTAL notation. A number starting with 0 is octal!
  //  int t = 0x42; //Hexadecimal notation
    unsigned char i = 1;
    while (i != 0){
        i++;
        printf("%d\n", i);
    }
    return 0;
}
