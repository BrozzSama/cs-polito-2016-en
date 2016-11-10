#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Enter the date in the format dd/mm/yyyy\n");
    printf("Enter day ");
    scanf("%d", &day);
    printf("Enter month ");
    scanf("%d", &month);
    printf("Enter year ");
    scanf("%d", &year);
    if ( (month>12) || (month<0) ){
        printf("Not a valid month!");
        return 1;
    }
    else if ( (day<1) || (day>31) ){
        printf("Not a valid day");
        return 1;
    }
    else if ( (month<1) || (month>12) ){
        printf("Not a valid month");
    }
    switch (month){
        case 1:
            printf("%d January %d", day, year);
            break;
        case 2:
            printf("%d February %d", day, year);
            break;
        case 3:
            printf("%d March %d", day, year);
            break;
        case 4:
            printf("%d April %d", day, year);
            break;
        case 5:
            printf("%d May %d", day, year);
            break;
        case 6:
            printf("%d June %d", day, year);
            break;
        case 7:
            printf("%d July %d", day, year);
            break;
        case 8:
            printf("%d August %d", day, year);
            break;
        case 9:
            printf("%d September %d", day , year);
            break;
        case 10:
            printf("%d October %d",day , year);
            break;
        case 11:
            printf("%d November %d", day, year);
            break;
        case 12:
            printf("%d December %d", day ,year);
            break;
    }
    return 0;
}
