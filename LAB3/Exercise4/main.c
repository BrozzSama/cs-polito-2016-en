#include <stdio.h>
#include <stdlib.h>
#define baseprice 100
#define extrafeature 40
#define pricepermonthused 20
#define monthsinayear 12

int main()
{
    int price, features, months, years;
    printf("How many features does the phone have?\n");
    scanf("%d", &features);
    printf("How many years has the phone been used for?\n");
    scanf("%d", &years);
    months = (years*monthsinayear);
    price = baseprice + (extrafeature*features);
    price = price - (months*pricepermonthused);
    printf("The total cost will be %d", price);
}
