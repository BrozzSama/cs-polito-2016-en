#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int pithagorean(int v1, int v2, int v3);

int pithagorean(int v1, int v2, int v3)
{
    printf("These are the pithagorean triplets:\n"); // how to handle overflow??
    for (int a=1;a<32767;++a){
        for (int b=1;b<32767;++b){
            int c=a*a+b*b;
            for (int d=1;d<32767;++d){
                if ((d*d == c)){
                    printf("%d, %d, %d\n", a, b, d);
                    if (a == v1 && b == v2 && d == v3){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main(){
    int a,b,c;
    printf("Enter a triplet: ");
    scanf("%d %d %d", &a, &b, &c);
    if(pithagorean(a,b,c)){
        printf("It is a triplet!");
        exit(0);
    }
    else{
        printf("Not a triplet!");
    }
}
