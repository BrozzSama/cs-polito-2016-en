#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TIME 5
#define MAX_STRING 256
#define MAX_ENTRIES 512

struct _ENTRY{
    char station_departure[MAX_STRING];
    char station_arrival[MAX_STRING];
    int hours_departure, minutes_departure;
    int hours_arrival, minutes_arrival;
};

typedef struct _ENTRY entry;

int main(int argc, char *argv[])
{
    char tmp[MAX_STRING];
    char selected_station[MAX_STRING];
    int length=0;
    entry entries[512];
    if (argc != 2){
        fprintf(stderr, "ERROR! You must specify the file as input\n");
        exit(EXIT_FAILURE);
    }
    FILE* input=fopen(argv[1], "r");
    if (input == NULL){
        fprintf(stderr, "The file does not exist, exiting...");
        exit(EXIT_FAILURE);
    }
    //Parse the file and put the data into the struct
    for (int i = 0; fgets(tmp, MAX_STRING, input) != NULL; i++){
        sscanf(tmp, "%s %d:%d %s %d:%d", entries[i].station_departure, &entries[i].hours_departure, &entries[i].minutes_departure, entries[i].station_arrival, &entries[i].hours_arrival, &entries[i].minutes_departure);
        length++;
    }

    fclose(input);
    printf("File parsed and added to memory! \nPlease input the name of the station\n");
    fgets(selected_station, MAX_STRING, stdin);
    selected_station[strlen(selected_station)-1]='\0';
    printf("\n");
    for (int i = 0; i<length; i++){
        if (strcmp(selected_station, entries[i].station_departure) == 0){
            printf("%s %d:%d %s %d:%d\n", entries[i].station_departure, entries[i].hours_departure, entries[i].minutes_departure, entries[i].station_arrival, entries[i].hours_arrival, entries[i].minutes_departure);
        }
    }
    return 0;
}
