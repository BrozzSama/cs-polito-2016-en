#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    scanf("%d", &value);
    printf("%d", value); //Uncontrollable behaviour, and still goes into overflow. Won't solve our problem
    return 0;
}
