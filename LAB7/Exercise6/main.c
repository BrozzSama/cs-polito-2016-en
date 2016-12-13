#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4096

int main()
{
    int n=0;
    int stilltext=1;
    char text[MAX_SIZE];
    while (stilltext==1){
        scanf("%c", &text[n]);
        if (text[n]=="" && text[n-1]=="\n"){
            stilltext=0;
        }
        n++;
    }
    return 0;
}
