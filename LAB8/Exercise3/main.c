#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TIMELENGTH 5
int main()
{
    char time1[TIMELENGTH];
    char time2[TIMELENGTH];
    int timevalid;
    int difference;
    int hours1, hours2, minutes1, minutes2;
    int time1_absolute, time2_absolute;
    printf("Type the first time format HH:MM");
    gets(time1);
    printf("Type the second time format HH:MM");
    gets(time2);
    for ( int t = 0; t<TIMELENGTH; t++){
    timevalid=1;
    //Check format
    if (t==0 || t==1 || t==3 || t==4){
        if (!isdigit(time1[t]) || !isdigit(time2[t])){
            timevalid=0;
        }
    }
        if (t==2 && (time1[t]!=':' || time2[t]!=':')){
            timevalid=0;
        }
    }
    if (timevalid == 0){
        printf("Time is not valid! Exiting...");
        exit(1);
    }
    sscanf(time1, "%d:%d", &hours1, &minutes1);
    sscanf(time2, "%d:%d", &hours2, &minutes2);
    hours1=(hours1)*60;
    hours2=(hours2)*60;
    time1_absolute=hours1+minutes1;
    time2_absolute=hours2+minutes2;
    difference=time2_absolute-time1_absolute;
    printf("The difference in the two times is: %d minutes", difference);
    return 0;
}
