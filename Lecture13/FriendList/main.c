#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FRIEND_NUM 5
#define FRIEND_NAME_MAX_LEN 50+1
#define NUMBEROFARGS 2

//IF you use this notation the string size is set to the initial value and it may not be changed later
char *OldFriends[]={
    "Alice", "Bob", "Mark", "Paul", "Carl","Francis", "\0" //A list of strings is ended by an empty string!
};
int main(int argc, char *argv[])
{
    if (argc != NUMBEROFARGS){
        printf("ERROR!");
        exit(EXIT_FAILURE);
    }
    int found = 0;
    for(int t = 0; strlen(OldFriends[t]) > 0; ++t){
        if(strcmp(OldFriends[t], argv[1])==0){
            found = 1;
        }
    }
    if (found){
        printf("I already knew %s\n", argv[1]);
    }   else {
        printf("Who's that?\n");
    }
    printf("List Of Friends!\n");
    for (int t = 0; strlen(OldFriends[t])>0; ++t){ //An alternative solution for strlen would be strcmp(OldFriends[t], "")
        printf("%s\n", OldFriends[t]);
    }
    return 0;
}
