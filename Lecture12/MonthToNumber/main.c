#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 4096

void my_string_to_lower(char s[]);

int main()
{
    char month_str[MAX_SIZE]= "january";
    int month_int=0;
    printf("Enter month: ");
    scanf("%s", month_str); //We don't need the & because the array is already the point in memory!
    my_string_to_lower(month_str); //An alternative solution would be using stricmp() which ignores case
    if(strcmp(month_str, "january") == 0){
        month_int = 1;
    } else if(strcmp(month_str, "february") == 0){
        month_int = 2;
    } else if(strcmp(month_str, "march") == 0){
        month_int = 3;
    } else if(strcmp(month_str, "april") == 0){
        month_int = 4;
    } else if(strcmp(month_str, "may") == 0){
        month_int = 5;
    } else if(strcmp(month_str, "june") == 0){
        month_int = 6;
    } else if(strcmp(month_str, "july") == 0){
        month_int = 7;
    } else if(strcmp(month_str, "august") == 0){
        month_int = 8;
    } else if(strcmp(month_str, "september") == 0){
        month_int = 9;
    } else if(strcmp(month_str, "october") == 0){
        month_int = 10;
    } else if(strcmp(month_str, "november") == 0){
        month_int = 11;
    } else if(strcmp(month_str, "december") == 0){
        month_int = 12;
    }
    else{
        printf("Not a valid month!");
        return 1;
    }
    printf("Month number: %d", month_int);
    return 0;
}



void my_string_to_lower(char s[]){
    for (int t = 0; s[t] != '\0'; ++t){ //Probably the most useful condition in the history of C (or at least that's what the teacher said)
        s[t] = tolower(s[t]);
    }
}
