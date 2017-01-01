#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M 20
#define FREE -2

char warehouse[N][M];
int insert_product(float price[], int n, char new_product[], float price_new_product, char database[]);
void print_all(float price[], int n, float *avg, float *max);
int update_product(float price[], int n, char product[] , float new_price, char database[]);
int remove_product(float price[], int n, char old_product[], char database[]);

int main(int argc, char *argv[])
{
    //Check if file is specified and exists
    float price[N];
    for (int i = 0; i<N; i++){
        price[i]=FREE;
    }
    int choice;
    int result;
    char tmp[M];
    char name[M];
    float price_input;
    float avg, max;
    if (argc != 2){
        fprintf(stderr, "Error! Specify a file!\n");
        exit(EXIT_FAILURE);
    }
    FILE* input = fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "ERROR! The database is not valid, please check if it exists!\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i<N && fgets(tmp, M, input) != NULL; i++){
        sscanf(tmp, "%s %f", warehouse[i], &price[i]);
    }
    fclose(input);
    printf("Choose an option for %s: \n", argv[1]);
    printf("1. Add item to warehouse\n");
    printf("2. List items\n");
    printf("3. Update price of an item\n");
    printf("4. Remove an item from the list\n");
    printf("5. Exit program\n");
    fscanf(stdin, "%d", &choice);
    switch(choice){
        case 1:
            printf("Insert product name: \n");
            fscanf(stdin, "%s", name);
            printf("Insert product price: \n");
            scanf("%f", &price_input);
            result = insert_product(price, N, name, price_input, argv[1]);
            if ( result == 0 ){
                printf("The product already exists!\n");
                exit(EXIT_SUCCESS);
            }
            else if ( result == 1){
                printf("The product has been added successfully!\n");
                exit(EXIT_SUCCESS);
            }
            else if( result == 2){
                fprintf(stderr, "The list is full!\n");
                exit(EXIT_FAILURE);
            }
        case 2:
            printf("Printing EVERYTHING!: \n");
            print_all(price, N, &avg, &max);
            printf("The average price is %f and the maximum price is %f EUR\n", avg, max);
            break;
        case 3:
            print_all(price, N, &avg, &max);
            printf("Type the name of the product you want to change the price of:\n");
            fscanf(stdin, "%s", name);
            printf("Insert the new price:\n");
            scanf("%f", &price_input);
            if (update_product(price, N, name, price_input, argv[1]) == 1){
                printf("Price updated!\n");
            }
            else {
                fprintf(stderr, "The price was not updated, please check that the product is in the list\n");
            }
            break;
        case 4:
            print_all(price, N, &avg, &max);
            printf("Type the name of the product you want to remove from the list:\n");
            fscanf(stdin, "%s", name);
            if (remove_product(price, N, name, argv[1]) == 1){
                printf("Product removed successfully!");
            }
            else{
                fprintf(stderr, "The product could not be found!");
            }
            break;
        case 5:
            printf("Exiting... \n");
            exit(EXIT_SUCCESS);
    }

    return 0;
}

int insert_product(float price[], int n, char new_product[], float price_new_product, char database[]){
    //Check if we have free space
    int nonempty = 0;
    for ( int i = 0; i<n; i++){
        if ( price[i] != FREE ){
            nonempty++;
        }
    }
    if (nonempty == n){
        return 2;
    }
    for ( int i = 0; i<n; i++){
        if (strcmp(warehouse[i], new_product)==0){
            return 0;
        }
    }
    //Nonempty gives us the first empty space!
    strcpy(warehouse[nonempty], new_product);
    price[nonempty]=price_new_product;

    //File already exists no check needed
    FILE* input = fopen(database, "w");
    for (int i = 0; i<n; i++){
        if (price[i]!=FREE){
            fprintf(input, "%s %f\n", warehouse[i], price[i]);
        }
    }
    fclose(input);
    return 1;
}

void print_all(float price[], int n, float *avg, float *max){
    float a = 0;
    float sum = 0;
    for (int i = 0; i<n; i++){
        if (price[i]!=FREE){
            printf("%s %f\n", warehouse[i], price[i]);
            a++;
            sum+=price[i];
            if (price[i] > *max){
                *max = price[i];
            }
        }
    }
    *avg = sum/a;
    return;
}
int update_product(float price[], int n, char product[] , float new_price, char database[]){
    int found = 0;
    int index;
    while(!found){
        for (int i = 0; !found && i<n; i++){
            if (strcmp(warehouse[i], product) == 0){
                found = 1;
                index = i;
            }
        }
        //IF the counter finished without finding, return error code 0
        if (!found){
            return 0;
        }
    }
    price[index]=new_price;
    //Write new price to database
    FILE* input = fopen(database, "w");
    for (int i = 0; i<n; i++){
        if (price[i]!=FREE){
            fprintf(input, "%s %f\n", warehouse[i], price[i]);
        }
    }
    fclose(input);
    return 1;
}

int remove_product(float price[], int n, char old_product[], char database[]){
    int found = 0;
    int index;
    while(!found){
        for (int i = 0; !found && i<n; i++){
            if (strcmp(warehouse[i], old_product) == 0){
                found = 1;
                index = i;
            }
        }
        //IF the counter finished without finding, return error code 0
        if (!found){
            return 0;
        }
    }
    price[index]=FREE;
    //Write new price to database
    FILE* input = fopen(database, "w");
    for (int i = 0; i<n; i++){
        if (price[i]!=FREE){
            fprintf(input, "%s %f\n", warehouse[i], price[i]);
        }
    }
    fclose(input);
    return 1;
}


