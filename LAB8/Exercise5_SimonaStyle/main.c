#include <stdio.h>
#include <stdlib.h>
#define SIZE 60
#include <ctype.h>
#include <string.h>

char name(char string[]);
char amount(char string[]);

int main()
{
    int amount;
    int productvalid=0;
    char name[SIZE];
    char product1[SIZE],product2[SIZE],product3[SIZE],target[SIZE];
    printf("enter the name of the product and its price separeted by a space:\n");
    gets(product1);
    char name1[SIZE];
    int price1;
    sscanf(product1, "%s %d", name1, &price1);

    printf("enter the name of the product and its price separeted by a space:\n");
    gets(product2);
    char name2[SIZE];
    int price2;
    sscanf(product2, "%s %d", name2, &price2);

    printf("enter the name of the product and its price separeted by a space:\n");
    gets(product3);
    char name3[SIZE];
    int price3;
    sscanf(product3, "%s %d", name3, &price3);

    printf("enter your product and its amount separeted by a space\n");
    gets(target);
    strcpy(name,name(target));
    amount=amount(target);


    while (!productvalid){
        if ((strcmp(name,name1))==0){
            printf(" You should pay %d\n", amount*price1);
            productvalid=1;
        }
        if ((strcmp(name,name2))==0){
            printf(" You should pay %d\n", amount*price2);
            productvalid=1;
        }
        if ((strcmp(name,name3))==0){
            printf(" You should pay %d\n", amount*price3);
            productvalid=1;
        }
        if (((strcmp(name,name1))!=0)&&((strcmp(name,name2))!=0)&&(((strcmp(name,name3))!=0))){
            printf(" wrong input! Retry!\n");
        }
    }

    return 0;
}

char name(char string[])
{
    char name[SIZE];
    sscanf(string[], "%s ", name);
    return name;
}

int amount(char string[])
{
    int amount;
    sscanf(target[], "%d",&amount);
    return amount;
}
