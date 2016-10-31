#include <stdio.h>
#include <stdlib.h>

int main()
{
    // for(initialization, condition, increment)
    int limit;
    char ch;
    printf("How many times do you want the character repeated?\n");
    scanf("%d", &limit);
    printf("What character do you want to repeat\n");
    scanf("%c", &ch); //We need two because apparently the ENTER key is reading as a f* char
    scanf("%c", &ch);
    for (int n = 0; n<=limit; n=n+1){
        printf("%c", ch);
    }
    return 0;
}
