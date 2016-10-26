#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    float tax;
    float quantorubalostato;
    price=5.89; //Prezzo nutella 1KG
    tax=21;
    quantorubalostato=(price*tax/100);
    printf("Lo stato ruba sulla tua nutella: %0.2f", quantorubalostato);
    return 0;
}
