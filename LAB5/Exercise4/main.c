#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //Necessary in order to use boolean data types! (works on C99 only, make sure you have a proper GCC setup)
#define SIZE 10 //Decide the size of the sequence!

int main()
{
    int values[SIZE]={0};
    int tprev=0;
    bool sequencetype; //TRUE Increasing sequence, FALSE decreasing sequence
    printf("Type a monotone sequence!\n");
    for (int t=0; t<SIZE; t++){
        printf("Type number: ");
        scanf("%d", &values[t]);
        //Identify the type of sequence once we have 2 values and store it in a boolean variables
        if (t==2){
            if (values[1]<values[2]){
                sequencetype=true;
            }
            else if (values[1]>values[2]){
                sequencetype=false;
            }
        }
        //Once we have the type of sequence (t>2) we can start analyzing the rest of the values
        //If the sequence is not monotone the program returns a code 1 error
        if (tprev>values[t] && sequencetype==true && t>2){
            printf("Not monotone!");
            return 1;
        }
        else if (tprev<values[t] && sequencetype==false && t>2){
            printf("Not monotone!");
            return 1;
        }
        tprev=values[t];
    }
    for (int t=0; t<SIZE; t++){
        printf("%d ", values[t]);
    }
    return 0;
}
