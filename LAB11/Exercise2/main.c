#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 20
#define MAX_SURNAME 20
#define MAX_NUMBER 20
#define MAX_MOBILE 20
#define MAX_ENTRIES 100

struct _CONTACT{
    char name[MAX_NAME];
    char surname[MAX_SURNAME];
    char number[MAX_NUMBER];
    char mobile[MAX_MOBILE];
    int empty;
};

typedef struct _CONTACT CONTACT;

void printlist(CONTACT entries[]);
int addcontact(CONTACT entries[], char name[], char surname[], char number[], char mobile[]);
int removecontact(CONTACT entries[], char name_to_be_removed[], char surname_to_be_removed[]);
void fileupdate(char database[], CONTACT entries[]);

int main(int argc, char* argv[])
{
    if (argc != 2){
        fprintf(stderr, "Please check the arguments and try again!\n");
        exit(EXIT_FAILURE);
    }
    FILE* input=fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "The file doesn't seem to exist!");
        exit(EXIT_FAILURE);
    }
    CONTACT entries[MAX_ENTRIES];
    for (int i = 0; i<MAX_ENTRIES; i++){
        entries[i].empty=1;
    }
    char tmp[MAX_NUMBER+MAX_MOBILE+MAX_NAME+MAX_SURNAME+3+1];
    for (int i = 0; fgets(tmp, MAX_ENTRIES, input) != NULL && i<MAX_ENTRIES; i++){
        sscanf(tmp, "%s %s %s %s", entries[i].name, entries[i].surname, entries[i].number, entries[i].mobile);
        entries[i].empty=0;
    }
    fclose(input);
    char insert_name[MAX_NAME];
    char insert_surname[MAX_SURNAME];
    char insert_mobile[MAX_MOBILE];
    char insert_number[MAX_NUMBER];
    char name_to_be_removed[MAX_NAME];
    char surname_to_be_removed[MAX_SURNAME];
    int result;
    while (1){
        int choice=0;
        printf("CONTACTS!\n");
        printf("Please choose an entry from the menu:\n");
        printf("1. Print list\n");
        printf("2. Add contact\n");
        printf("3. Remove contact\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printlist(entries);
                break;
            case 2:
                printf("Please type the name (no spaces allowed)\n");
                scanf("%s", insert_name);
                printf("Please type the surname (no spaces allowed)\n");
                scanf("%s", insert_surname);
                printf("Please type the phone number:\n");
                scanf("%s", insert_number);
                printf("Please type the mobile:\n");
                scanf("%s", insert_mobile);
                result = addcontact(entries, insert_name, insert_surname, insert_number, insert_mobile);
                if ( result == 0 ){
                    fileupdate(argv[1], entries);
                    printf("Contact added successfully!\n");
                }
                else if (result == 1){
                    printf("ERROR! The contact already exists!\n");
                }
                break;
            case 3:
                printlist(entries);
                printf("Type the name of the contact you want to remove: \n");
                scanf("%s", name_to_be_removed);
                printf("Type the surname of the contact you want to remove:\n");
                scanf("%s", surname_to_be_removed);
                result = removecontact(entries, name_to_be_removed, surname_to_be_removed);
                if (result == 0){
                    fileupdate(argv[1], entries);
                    printf("Contact removed succesffully!\n");
                }
                else if (result == 1){
                    printf("Error! The contact could not be found!\n");
                }
                break;
            case 4:
                exit(EXIT_SUCCESS);
            default:
                printf("Wrong entry! Please try again!");
                break;
        }
    }
    return 0;
}

void printlist(CONTACT entries[]){
    for (int i = 0; i<MAX_ENTRIES; i++){
        if (entries[i].empty != 1){
            printf("%s %s %s %s\n", entries[i].name, entries[i].surname, entries[i].number, entries[i].mobile);
        }
    }
}

int addcontact(CONTACT entries[], char name[], char surname[], char number[], char mobile[]){
    for (int i = 0; i<MAX_ENTRIES; i++){
        if (entries[i].empty == 0 && strcmp(entries[i].name, name)==0 && strcmp(entries[i].surname, surname)==0){
            return 1;
        }
    }
    for (int i = 0; i<MAX_ENTRIES; i++){
        if (entries[i].empty == 1){
                strcpy(entries[i].name, name);
                strcpy(entries[i].surname, surname);
                strcpy(entries[i].number, number);
                strcpy(entries[i].mobile, number);
                entries[i].empty = 0;
                i=MAX_ENTRIES;
        }
    }
    return 0;
}

int removecontact(CONTACT entries[], char name_to_be_removed[], char surname_to_be_removed[]){
    int found = 0;
    int i = 0;
    while (i<MAX_ENTRIES){
        if (strcmp(name_to_be_removed, entries[i].name) == 0 && strcmp(surname_to_be_removed, entries[i].surname) == 0){
            entries[i].empty=1;
            return 0;
        }
        i++;
    }
    return 1;
}

void fileupdate(char database[], CONTACT entries[]){
    FILE* input = fopen(database, "w");
    for (int i = 0; i<MAX_ENTRIES; i++){
        if (entries[i].empty != 1){
            fprintf(input, "%s %s %s %s\n", entries[i].name, entries[i].surname, entries[i].number, entries[i].mobile);
        }
    }
    fclose(input);
}
