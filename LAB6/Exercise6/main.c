#include <stdio.h>
#include <stdlib.h>
#define MAX_BASE 30
#define MAX_SIZE 512

int power(int base, int exponent);

int main()
{
    int n;
    int num;
    int values[MAX_SIZE];
    int nvalues;
    int sum;
    printf("Type value: ");
    scanf("%d", &num);
    n=num;
    for (int j=2; j<MAX_BASE; j++){
        n=num;
        nvalues=0;
        sum=0;
        for (nvalues=0; n!=0; ++nvalues){
            values[nvalues]=(n%j);
            n/=j;
        }
        for (int t=0; t<nvalues; ++t){
            sum+=values[t]*power(j, nvalues-t-1);
        }
        if (sum==num){
            printf("Palindrome in base %d.\n", j);
        }
    }
    return 0;
}

int power(int base, int exponent){
    if (exponent == 0){
        base=1;
    }
    for (int t = 1; t<exponent; ++t){
        base*=base;
    }
    return base;
}
