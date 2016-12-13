#include <stdio.h>
#include <stdlib.h>
#define FRIENDS_NUM 5
#define FRIENDS_LENGTH 42+1  //ONe space reserved for terminator

char Friends[FRIENDS_NUM][FRIENDS_LENGTH];

int main()
{
    printf("Enter names\n");
    for(int t = 0; t < FRIENDS_NUM; ++t){
        printf("Type friend %d's name: ", t+1);
        scanf("%s", Friends[t]);
    }
    printf("Your friends are: \n");
    for(int t = 0; t<FRIENDS_NUM; t++){
        printf("Friend %d name: %s", t+1, Friends[t]);
        printf("\n");
    }
    return 0;
}
