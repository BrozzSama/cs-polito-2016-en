#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    double sum;
    for (int t=0; !(t>10 && ((sum/t)>n)); t = t+1){
        printf("Enter value");
        scanf("%lg", &n);
        sum = sum + n;
    }
    return 0;
}
