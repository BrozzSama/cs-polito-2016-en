#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N_POINTS 4

float distance(float a_x, float a_y, float b_x, float b_y);
float path();
float data[N_POINTS][2];

int main(int argc, char* argv[])
{
    char parameter;
    if (argc != 2 + N_POINTS){
        fprintf(stderr, "Not enough parameters!");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%c", &parameter);
    for ( int i = 0; i<N_POINTS; i++){
        sscanf(argv[i+2], "(%f, %f)", &data[i][0], &data[i][1]);
    }
    if (parameter == 'a'){
        printf("The length of the path is: %f\n", path());
        exit(EXIT_SUCCESS);
    }
    else if (parameter == 'm'){
        float min_length=path();
        float len;
        for (int i = 0; i<N_POINTS; ++i){
            for (int t = 0; t<N_POINTS; ++t){
                if (i != t){
                    len = distance(data[i][0], data[i][1], data[t][0], data[t][1]);
                    if (len<min_length){
                        min_length=len;
                    }
                }
            }
        }
        printf("The minimum length is: %f\n", min_length);
        exit(EXIT_SUCCESS);
    }
    else{
        fprintf(stderr, "Parameter not recognized");
        exit(EXIT_FAILURE);
    }
    return 0;
}

float distance(float a_x, float a_y, float b_x, float b_y){
    return sqrt( (a_x-b_x)*(a_x-b_x) + (a_y-b_y)*(a_y-b_y) );
}

float path(){
    float path_length=0;
    for (int i = 0; i<N_POINTS; i++){
        if (i != N_POINTS+1){
            path_length+=distance(data[i][0], data[i][1], data[i+1][0], data[i+1][1]);
        }
        else{
            path_length+=distance(data[i][0], data[i][1], data[0][0], data[0][1]);
        }
    }
    return path_length;
}
