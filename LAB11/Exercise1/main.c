#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N_POINTS 4

struct _POINT{
    float x;
    float y;
};

typedef struct _POINT POINT;


float distance(float a_x, float a_y, float b_x, float b_y);
float path(POINT data[]);

POINT data[N_POINTS];

int main(int argc, char* argv[])
{
    char parameter;
    if (argc != 2 + N_POINTS){
        fprintf(stderr, "Not enough parameters!");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%c", &parameter);
    for ( int i = 0; i<N_POINTS; i++){
        sscanf(argv[i+2], "(%f, %f)", &data[i].x, &data[i].y);
    }
    if (parameter == 'a'){
        printf("The length of the path is: %f\n", path(data));
        exit(EXIT_SUCCESS);
    }
    else if (parameter == 'm'){
        float min_length=path(data);
        float len;
        for (int i = 0; i<N_POINTS; ++i){
            for (int t = 0; t<N_POINTS; ++t){
                if (i != t){
                    len = distance(data[i].x, data[i].y, data[t].x, data[t].y);
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

float path(POINT data[]){
    float path_length=0;
    for (int i = 0; i<N_POINTS; i++){
        if (i != N_POINTS+1){
            path_length+=distance(data[i].x, data[i].y, data[i+1].x, data[i+1].y);
        }
        else{
            path_length+=distance(data[i].x, data[i].y, data[0].x, data[0].y);
        }
    }
    return path_length;
}
