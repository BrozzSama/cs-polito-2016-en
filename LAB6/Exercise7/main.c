#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double invsin(double z1, double z2, double k, double e);

int main()
{
    double z1,z2,k,c;
    printf("Type the value of \n");
    printf("Type left bound (remember that the interval must be monotone): ");
    scanf("%lg", &z1);
    printf("Type right bound (remember that the interval must be monotone): ");
    scanf("%lg", &z2);
    printf("Type the value of sin: ");
    scanf("%lg", &k);
    printf("Type the precision: ");
    scanf("%lg", &c);
    printf("Result: %lf", invsin(z1, z2, k, c));
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
    if (monotone == 1){
        double threshold = 1;
        while (threshold > e){
            solution=(double)(z1+z2)/(double)2;
            if ((sin(solution)-k<0 && sin(z1)-k>0) || (sin(solution)-k>0 && sin(z1)-k<0)){
                z2 = solution;
            }
            else if((sin(solution)-k<0 && sin(z2)-k>0) || (sin(solution)-k>0 && sin(z2)-k<0)){
                z1 = solution;
            }
            else{
                printf("Cannot find corresponding value! Please change the bounds...");
                exit(1);
            }
            n++;
            threshold = fabs(k - sin(solution));
        }
    return solution;
    }
    if (monotone == 0){
        printf("Not monotone... Won't return value.");
        exit(0);
    }
}
