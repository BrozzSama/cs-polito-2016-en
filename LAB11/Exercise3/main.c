#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_SIZE 20
#define MAX_ENTRY_SIZE MAX_WORD_SIZE*6+5
#define MAX_ENTRIES 80
#define MAX_ACADEMIC_PERIODS 4


struct _ENTRY{
    char subject[20];
    char prof_name[20];
    char prof_surname[20];
    int period;
    int credits;
    float pass_rate;
};

typedef struct _ENTRY entry;
int getmaxcredit(entry data[], int size);
int gethardest(entry data[], int period, int size);
float get_average(entry data[], char surname[], int size);
int sumofcredits(entry data[], char surname[], int size);

int main(int argc, char* argv[])
{
    if (argc != 2){
        fprintf(stderr, "Error! Please specify the file as the only argument!");
        exit(EXIT_FAILURE);
    }
    FILE* input = fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "Error! The file does not exist");
        exit(EXIT_FAILURE);
    }
    char line[MAX_ENTRY_SIZE];
    entry data[MAX_ENTRIES];
    int size;
    for (size = 0; size<MAX_ENTRIES && fgets(line, MAX_ENTRY_SIZE, input) != NULL; size++){
        sscanf(line, "%s %s %s %d %d %f",
            data[size].subject, data[size].prof_name, data[size].prof_surname, &data[size].period, &data[size].credits, &data[size].pass_rate);
    }
    fclose(input);
    int max_credit=getmaxcredit(data, size);
    printf("The subject that assigns the maximum credits is: %s\n", data[max_credit].subject);
    int hardest_exam;
    for (int i = 0; i<MAX_ACADEMIC_PERIODS; i++){
        hardest_exam=gethardest(data, i+1, size);
        printf("The most difficult subject for period %d is: %s\n", i+1, data[hardest_exam].subject);
    }
    char selected_surname[MAX_WORD_SIZE];
    printf("Please enter the surname of the professor you want the average pass rate and courses of: ");
    scanf("%s", selected_surname);
    float average=get_average(data, selected_surname, size);
    if (average == -1){
        fprintf(stderr,"The surname does not exist!");
        exit(EXIT_FAILURE);
    }
    printf("The average pass rate is: %f\n", average);
    int sumcredits = sumofcredits(data, selected_surname, size);
    printf("The sum of the credits is: %d", sumcredits);
    return 0;
}

int getmaxcredit(entry data[], int size){
    int max = 0;
    for (int i = 0; i<size; i++){
        if (data[max].credits<data[i].credits){
            max = i;
        }
    }
    return max;
}

int gethardest(entry data[], int period, int size){
    int hardest = 0;
    for (int i = 0; i<size; i++){
        if (data[i].period == period){
            if (data[hardest].pass_rate>data[i].pass_rate){
                hardest = i;
            }
        }
    }
    return hardest;
}

float get_average(entry data[], char surname[], int size){
    float sum = 0;
    float nsubjects = 0;
    for (int i = 0; i<size; i++){
        if (strcmp(data[i].prof_surname, surname) == 0){
            sum+=data[i].pass_rate;
            nsubjects++;
        }
    }
    if (nsubjects == 0){
        return -1;
    }
    return sum/nsubjects;
}

int sumofcredits(entry data[], char surname[], int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        if (strcmp(data[i].prof_surname, surname) == 0){
            sum+=data[i].credits;
        }
    }
    return sum;
}
