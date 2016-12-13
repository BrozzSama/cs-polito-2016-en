#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRINGS 60
#define MAX_SIZE 512
#define INITIAL_PRODUCTS 3

int main()
{
    char data[MAX_SIZE];
    float prices[MAX_SIZE];
    char names[MAX_STRINGS][MAX_SIZE];
    int productvalid=0;
    int index;
    int quantity;
    for (int i = 0; i<INITIAL_PRODUCTS; i++){
        printf("Enter product %d with its price separated by space: ", i+1);
        gets(data);
        sscanf(data, "%s %f", names[i], &prices[i]);
        if (prices[i] == 0){
            printf("The string doesn't look valid, please try again!");
            i--;
        }
    }
    for (int i = 0; i<MAX_SIZE; i++){
            data[i]=0;
    }
    while(productvalid==0){
        printf("Enter the product you wish to computer the price for: ");
        gets(data);
        for (int i = 0; i<MAX_STRINGS; i++){
            if(strcmp(data, names[i])==0){
                productvalid=1;
                index=i;
            }
        }
        if (productvalid){
            printf("%s is a valid product! \nEnter the quantity: ", names[index]);
            scanf("%d", &quantity);
            printf("The correct price is %f\n", (float)quantity*prices[index]);
        }
        else{
            printf("The product is not valid! Please try again!");
            productvalid=0;
        }
        for (int i = 0; i<MAX_SIZE; i++){
            data[i]=0;
        }
    }
    return 0;
}
