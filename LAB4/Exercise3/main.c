#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 1;
    int sum;
    while (value != 0){
        printf("Enter value: ");
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("The sum is: %d", sum);
    return 0;
}
