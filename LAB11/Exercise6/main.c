#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_NAME 40
#define MAX_ID 10
#define MAX_COMMAND 30
#define MAX_ENTRY 128
#define MAX_ENTRIES 256

typedef struct _STUDENT{
    char name[MAX_NAME];
    char student_id[MAX_ID];
    float score;
    int empty;
} student;

int loadfile(char file[], student database[]);
int insert_student(char name[], char student_id[], float score, student database[]);
int view_student(char query[], student database[], char query_result[]);
int writefile(char file[], student database[]);
int delete_student(char query[], student database[]);
void printdatabase(student database[]);

int main()
{
    student database[MAX_ENTRIES];
    for (int i = 0; i<MAX_ENTRIES; i++){
        database[i].empty=1;
    }
    printf("Choose an option: \n");
    printf("1. Load file: L <file_to_be_loaded>\n");
    printf("2. Insert student data: I <student_Name_Surname> <student_ID> <score>\n");
    printf("3. Delete data: D <student_Name_Surname> or D <Student_ID>\n");
    printf("4. View data: V <student_Name_Surname> or V <Student_ID>\n");
    printf("5. Print the whole database; P\n");
    printf("6. Save the database: W\n");
    printf("7. Exit: Q\n");
    while(1==1){
        printf("Type command: ");
        char choice;
        char parameter1[MAX_COMMAND], parameter2[MAX_COMMAND];
        float score;
        int result;
        scanf("%c", &choice);
        switch(choice){
            case 'L':
                scanf("%s", parameter1);
                result = loadfile(parameter1, database);
                if (result==0){
                    printf("File has been loaded successfully!\n");
                }
                else{
                    fprintf(stderr, "There was an error loading the file, please try again!\n");
                }
                break;
            case 'I':
                scanf("%s %s %f", parameter1, parameter2, &score);
                result = insert_student(parameter1, parameter2, score, database);
                if(result == 0){
                    printf("The student has been inserted!\n");
                }
                else if(result == 1){
                    printf("There is no more space!\n");
                }
                break;
            case 'V':
                scanf("%s", parameter1);
                char query_result[MAX_ENTRY];
                result = view_student(parameter1, database, query_result);
                if (result == 0){
                    printf("%s\n", query_result);
                }
                else if(result == 1){
                    printf("The student could not be found!\n");
                }
                break;
            case 'D':
                scanf("%s", parameter1);
                result = delete_student(parameter1, database);
                if (result == 0){
                    printf("Student deleted successfully!\n");
                }
                else if (result == 1){
                    printf("The student could not be found!\n");
                }
                break;
            case 'P':
                printf("Printing complete database:\n");
                printdatabase(database);
                break;
            case 'W':
                scanf("%s", parameter1);
                writefile(parameter1, database);
                printf("File has been written successfully!\n");
                break;
            case 'Q':
                printf("Goodbye!\n");
                exit(EXIT_SUCCESS);
                break;
        }
        scanf("%*c");
        fflush(stdin);
    }
    return 0;
}

int loadfile(char file[], student database[]){
    FILE* input = fopen(file, "r");
    if (input == NULL){
        return 1;
    }
    char tmp[MAX_ENTRY];
    for (int i = 0; fgets(tmp, MAX_ENTRY, input) != NULL && i<MAX_ENTRIES; i++){
        sscanf(tmp, "%s %s %f", database[i].name, database[i].student_id, &database[i].score);
        database[i].empty=0;
    }
    fclose(input);
    return 0;
}

int insert_student(char name[], char student_id[], float score, student database[]){
    int found_empty=0;
    while(!found_empty){
        for (int i = 0; i<MAX_ENTRIES; i++){
            if (database[i].empty==1){
                strcpy(database[i].name, name);
                strcpy(database[i].student_id, student_id);
                database[i].score=score;
                database[i].empty=0;
                found_empty=1;
                return 0;
            }
        }
        found_empty=1;
    }
    return 1;
}

int delete_student(char query[], student database[]){
    int type = 0;
    if (isalpha(query[1])){
        type = 0; //IT's a name!
    }
    else if (isdigit(query[1])){
        type = 1; //It's a student ID!
    }
    if (type == 0){
        for (int i = 0; i<MAX_ENTRIES; i++){
            if(strcmp(query, database[i].name) == 0 && database[i].empty==0){
                database[i].empty=1;
                return 0;
            }
        }
    }
    else if (type == 1){
        for (int i = 0; i<MAX_ENTRIES; i++){
            if(strcmp(query, database[i].student_id)==0 && database[i].empty==0){
                database[i].empty=1;
                return 0;
            }
        }
    }
    return 1;
}

int view_student(char query[], student database[], char query_result[]){
    int type = 0;
    int found = 0;
    if (isalpha(query[1])){
        type = 0; //IT's a name!
    }
    else if (isdigit(query[1])){
        type = 1; //It's a student ID!
    }
    if (type == 0){
        while(!found){
            for (int i = 0; i<MAX_ENTRIES; i++){
                if (strcmp(query, database[i].name) == 0){
                    sprintf(query_result, "%s %s %f", database[i].name, database[i].student_id, database[i].score);
                    return 0;
                }
            }
        }
    }
    else if (type == 1){
        while(!found){
            for (int i = 0; i<MAX_ENTRIES; i++){
                if (strcmp(query, database[i].student_id) == 0){
                    sprintf(query_result, "%s %s %f", database[i].name, database[i].student_id, database[i].score);
                    return 0;
                }
            }
        }
    }
    return 1;
}

int writefile(char file[], student database[]){
    FILE* input = fopen(file, "w");
    for (int i = 0; i<MAX_ENTRIES; i++){
        if(database[i].empty == 0){
            fprintf(input, "%s %s %f\n", database[i].name, database[i].student_id, database[i].score);
        }
    }
    fclose(input);
    return 0;
}

void printdatabase(student database[]){
    for (int i = 0; i<MAX_ENTRIES; i++){
        if (!database[i].empty){
            printf("%s %s %f\n", database[i].name, database[i].student_id, database[i].score);
        }
    }
}
