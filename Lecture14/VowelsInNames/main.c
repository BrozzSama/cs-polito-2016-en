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

    int found = 0;
    for(int t = 0; strlen(OldFriends[t]) > 0; ++t){
        if(strcmp(OldFriends[t], argv[1])==0){
            found = 1;
        }
    }

    for(int t = 0; strlen(OldFriends[t]) > 0; t++){
        if(countv(OldFriends[t] > countv(OldFriends[maxv]))){
            maxv = t;
        }
    }

    printf("Alice has the most vowels #FETCH %s!\n", OldFriends[maxv]);
}

int countv(char *s){
    int cnt = 0;
    for(int t = 0; t !='\0'; t++){
        switch(s[t]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++cnt;
        }
    }
    return cnt;
}
