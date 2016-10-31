#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Not a bad idea to include math.h when dealing with double

int main()
{
    //Calculate the average of 5 numbers between 1 and 5
    int sum, valid_inputs;
    double average;
    sum = 0;
    valid_inputs = 0;
    for(int n = 0; n<=5; n=n+1){
        int n;
        printf("Insert value:");
        scanf("%d", &n);
        if ( n>=0 && n<=5 ){
            valid_inputs=valid_inputs+1;
            sum=sum+n;
        }
    }
    if (valid_inputs>0){
        average = sum/(double)valid_inputs; //Manual casting! Don't let the compiler convert the values automatically!!!
        printf("%g", average);
        return 0;
    }
    else{
        printf("There are not valid inputs!");
        return 1;
    }
}
