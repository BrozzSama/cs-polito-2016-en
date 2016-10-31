#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    if ( number == 1){
        printf("One");
    }
    else{
        if (number == 2){
            printf("Two\n");
            }
        else{
            if (number == 3){
                printf("Three\n");
                }
            }
        } // TOO MANY CURLY BRACKETS PLEASE HALP!
    if (number == 1){
        printf("One");
    }
    else if(number == 2){
        printf("Two");
    }
    else if(number == 3){
        printf("Three");
    }
    else if(number == 4){
        printf("Four");
    }
    //MUCH NICER. You can remove curly brackets if you have only one instruction!!!
    //#ReadAStylingGuide

}
