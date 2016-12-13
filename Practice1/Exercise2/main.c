#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 512

int main()
{
    char data[BUFFER];
    char type[BUFFER];
    int stop=0;
    int garden_quantity=0;;
    int house_quantity=0;
    float price;
    float quantity;
    float garden_gain;
    float house_gain;
    while (!stop){
        printf("Enter quantity and price in the format \"type price_quantity\" where type is house or garden\n");
        gets(data);
        if (strcmp(type, "stop")==0){
            stop=1;
        }
        else{
            sscanf(data, "%s %f_%f", type, &price, &quantity);
            if (strcmp(type, "garden")==0){
                garden_gain+=price*quantity;
                garden_quantity+=quantity;
            }
            else { //We are assuming correct format! So it's either house or garden
                house_gain+=price*quantity;
                house_quantity+=quantity;
            }
        }
    }
    printf("The average gain for house is %f\n", house_gain/house_quantity);
    printf("The average gain for garden is %f\n", garden_gain/garden_quantity);
    return 0;
}
