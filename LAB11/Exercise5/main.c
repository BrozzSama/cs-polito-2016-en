#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ATHLETES 100
#define MAX_NAME 20
#define MAX_LINE 50
struct _athlete{
    char name[MAX_NAME];
    int score;
};

typedef struct _athlete athlete;

int main(int argc, char* argv[])
{
    if (argc != 2){
        fprintf(stderr, "Error! Please specify a file as argument\n");
    }
    FILE* input = fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "Error! The file does not exist\n");
    }
    athlete data[MAX_ATHLETES];
    athlete tmp;
    char line[MAX_LINE];
    int size = 0;
    while (fgets(line, MAX_LINE, input)!=NULL){
        sscanf(line, "%s %d", data[size].name, &data[size].score);
        size++;
    }
    fclose(input);

    FILE* output = fopen("contest_ord.txt", "w");
    for (int i = 0; i<size-1; i++){
        if (strcmp(data[i].name, data[i+1].name)>0){
            tmp=data[i];
            data[i]=data[i+1];
            data[i+1]=tmp;
            if (i>0){
                i-=2;
            }
        }
    }

    for (int i = 0; i<size; i++){
        printf("%s %d\n", data[i].name, data[i].score);
        fprintf(output, "%s %d\n", data[i].name, data[i].score);
    }

    float scores[size];
    float leaderboard[3]={0};
    int index_leaderboard[3];
    for (int i = 0; i<size; i++){
        scores[i]=data[i].score;
    }
    for (int t = 0; t<size; t++){
        if (leaderboard[0]<scores[t]){
            leaderboard[0]=scores[t];
            index_leaderboard[0]=t;
        }
        else if (leaderboard[1]<scores[t]){
            leaderboard[1]=scores[t];
            index_leaderboard[1]=t;
        }
        else if (leaderboard[2]<scores[t]){
            leaderboard[2]=scores[t];
            index_leaderboard[2]=t;
        }
    }
    printf("1. %s %f\n2. %s %f\n3. %s %f\n",
        data[index_leaderboard[0]].name, leaderboard[0], data[index_leaderboard[1]].name, leaderboard[1], data[index_leaderboard[2]].name, leaderboard[2]);
    fclose(output);
}
