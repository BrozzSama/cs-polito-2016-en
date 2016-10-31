#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    t = 0;
    printf("Loop example\n");
    while(t!=10){
        printf("Looping...\n");
        t = t+1;
    }
    printf("END LOOP\n");
    printf("Loop example with user input\n");
    int end;
    int t2;
    end = 0;
    while (end == 0){
        printf("Type a number between 0 and 10 to continue the loop\n");
        scanf("%d", &t2);
        if ( t2<=0 || t2>=10 ){
            end = 1;
        }
    }
    return 0;
}
