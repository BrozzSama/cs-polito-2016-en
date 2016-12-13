#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main()
{
    float garden[SIZE]={0};
    float house[SIZE]={0};
    char string[SIZE];
    float price, quantity;
    float sum_garden=0;
    float sum_house=0;
    int t, u;
    printf("Enter your product\n");
    while (strcmp(gets(string), "stop")!=0){
        printf("Enter your product\n");
        gets(string);
        char type[SIZE];
        float size;
        int quantity;
        sscanf(string, "%s %f_%f", type, &price, &quantity);
        int a = 0;
        int b = 0;
        if (strcmp(type, "garden")==0){
            garden[a]=price*quantity;
            a++;
        }
        if (strcmp(type, "house")==0){
            house[b]=price*quantity;
            b++;
        }
        else{
            printf("Wrong input\n");
        }

        for (t=0; garden[t]!=0; ++t){
            sum_garden+=garden[t];
        }
        for (u=0; house[u]!=0; ++u){
            sum_house+=house[u];
        }
    }
    printf("The average of the money gained from garden is %f", sum_garden/t);
    printf("The average gain for house is %f", sum_house/u);

}
