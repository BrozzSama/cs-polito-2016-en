#include <stdio.h>
int main (void)
{
 int x;
 printf("Insert a number: ");
 scanf("%d", &x);
 if (x>0)
 printf("The value %d is positive\n", x);
 else
printf("The value %d is negative or equal to 0\n", x);
 return 0;
}
