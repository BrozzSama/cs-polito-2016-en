#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int array[SIZE]={ 0 };
    int tmp;
    int array_ordered[SIZE];
    int repeated_values[SIZE];
    int repeated_values_occurence[SIZE]={0};
    int is_the_value_present[SIZE]={0};
    int u=0;
    printf("Enter values: ");
    for ( int i = 0; i<SIZE; ++i){
        scanf("%d", &array[i]);
    }
    //Order the number as an increasing sequence
    for ( int i = 0; i<SIZE; ++i ){
        for ( int t=0; t<SIZE; ++t){
            //If one of the values of the array is SMALLER than any of the values of the array
            //It is pushed back in place of that value
            //At the end of the loop all the smaller values have been pushed back, so the order is increasing!
            if (array[t]>array[i]){
                tmp=array[i];
                array[i]=tmp;
                array[i]=array[t];
                array[t]=tmp;
            }
        }
    }

    for ( int i = 0; i<SIZE; ++i){
        //In order to find the repetitions we have to identify three different cases
        int t = i+1; //Next value
        int j = i-1; //Previous value
        int z = u-1; //Previous index
        //Pair of two equal values found for the FIRST TIME!
        //We add the value to the list and increase its occurence by TWO!
        if (array[i] == array[t] && array[i]!=repeated_values[z]){
            repeated_values[u]=array[i];
            is_the_value_present[u]=1;
            repeated_values_occurence[u]=repeated_values_occurence[u]+2;
            ++u;
            ++i;
        }
        //Pair of two equal values found for the n-th time
        //In this case we increase the occurence of the previous index by TWO
        if (array[i] == array[t] && array[i]==repeated_values[z]){
            --u;
            repeated_values[u]=array[i];
            is_the_value_present[u]=1;
            repeated_values_occurence[u]=repeated_values_occurence[u]+2;
            ++u;
            ++i;
        }
        //Single value repeating after a pair
        //We go to the previous index and increase the occurence by ONE!
        if (array[i] == array[j] && array[i]!=array[t]){
            --u;
            ++repeated_values_occurence[u];
            ++u;
        }
    }
    //Print the result using the arrays we created and defined
    for ( int i=0; i<SIZE; ++i){
        if ( is_the_value_present[i]==1)
            printf("Value %d occurs %d times\n", repeated_values[i], repeated_values_occurence[i]);
    }
}
