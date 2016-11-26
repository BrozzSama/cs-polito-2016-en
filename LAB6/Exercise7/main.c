#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define UNIT 0.0000000000000002

double invsin(double z1, double z2, double k, double e);

int main()
{
    double z1,z2,k,n;
    printf("Type the value of \n");
    printf("Type left bound (remember that the interval must be monotone): ");
    scanf("%lg", &z1);
    printf("Type right bound (remember that the interval must be monotone): ");
    scanf("%lg", &z2);
    printf("The Type the value of sin: ");
    scanf("%lg", &k);
    printf("Type the values of iteration (the more values, the more precision):  ");
    scanf("%lg", &n);
    printf("Result: %lg", invsin(z1, z2, k, n));
    return 0;
}

double invsin(double z1, double z2, double k, double e){
    int monotone=1;
    double solution;
    int n=0;
    //Check monotonicity
    for (double i = z1; i<z2; i++){
        if (sin(i)<sin(i+1) && sin(z1)>sin(z2)){
            monotone=0;
        }
        if (sin(i)>sin(i+1) && sin(z1)<sin(z2)){
            monotone=0;
        }
    }
    double n1,n2;
    if (monotone == 1){
        while (n<e){
            solution=(z1+z2)/2;
            if ((sin(solution)-k<0 && sin(z1)-k>0) || (sin(solution)-k>0 && sin(z1)-k<0)){
                z2 = solution;
            }
            else if((sin(solution)-k<0 && sin(z2)-k>0) || (sin(solution)-k>0 && sin(z2)-k<0)){
                z1 = solution;
            }
            n++;
            if (n==n-1){
                n1=solution;
            }
            if (n==n-2){
                n2=solution;
            }
        }
        printf("Difference of last two iterations: %lg\n", n2-n1);
        return solution;
    }
    if (monotone == 0){
        printf("Not monotone... Won't return value.");
        exit(0);
    }
}
