#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int value1,value2,value3;
    int pos1,pos2,pos3;
    int sequence[SIZE]={0};
    printf("Type a sequence: \n");
    for (int i = 0; i<SIZE; i++){
        printf("Enter value: ");
        scanf("%d", &sequence[i]);
        value1=value2;
        value2=value3;
        value3=sequence[i];
        pos1=pos2;
        pos2=pos3;
        pos3=i;
        //If we have at least 3 numbers we can start the check! (i<3)
        if (i>1 && value1<value2 && value2<value3){
            printf("There are three consecutive numbers in the sequence you typed!\n");
            printf("The numbers are: %d %d %d\n", value1, value2, value3);
            printf("Their positions are: %d %d %d\n", pos1+1, pos2+1, pos3+1);
            return 0;
            }
    }
    printf("No consecutive sequence has been found, exiting...");
    return 0;
}
