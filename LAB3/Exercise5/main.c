#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side1, side2, side3;
    printf("Type the length of side one\n");
    scanf("%d", &side1);
    printf("Type the length of side two\n");
    scanf("%d", &side2);
    printf("Type the length of side three\n");
    scanf("%d", &side3);
    if ( (side1+side2 < side3) || (side1+side3 < side2) || (side2+side3 < side1) ){
        printf("The triangle is not valid!");
        return 1;
    }
    if ( side1 == side2 && side2 == side3){
        printf("The triangle is equilateral!");
        return 0;
    }
    if ( side1 == side2 || side2 == side3 || side1 == side3 ){
        printf("The triangle is isoscele");
        return 0;
    }
    else{
        printf("The triangle is scalene");
        return 0;
    }
}
