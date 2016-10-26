#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    float x,x1,x2;
    float delta;
    printf("Second degree equation solver\n");
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);
    printf("Enter C: ");
    scanf("%f", &c);
    if (a == 0){
        if (b == 0){
            if (c == 0){
                printf("Undetermined");
                return 0;
            }
            printf("Impossible!");
            return 1;
        }
        x = (-c / b); //If b and c were defined as integers you would have to multiply them by 1.0 to get a float expression
        printf("The only solution is: %f", x);
        return 0;
    }
    delta = (b * b - (4*a*c)); // An alternative solution would be checking whether delta < 0
    x1 = ((-b+sqrt(delta))/2);
    x2 = ((-b-sqrt(delta))/2);
    if (!isnan(x1)){
        printf("The first solution is: %f\n", x1);
    }
    if (!isnan(x2)){
        printf("The second solution is: %f", x2);
    }
    if (x1 == x2){
        printf("The only solution is: %f", x1);
    }
    if ((isnan(x1)) && (isnan(x2))){
        printf("There are no real solution to the equation");
    }
    return 0;
}
