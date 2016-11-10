#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    int v1[N]={0};
    int v2[N]={0};
    int sizev1=0;
    int sizev2=0;
    int pos1=0;
    int pos2=0;
    int tmp;
    while(sizev1<N && sizev2<N){
            printf("Enter value: ");
            scanf("%d", &tmp);
            if (tmp>0 || (tmp<0&&(tmp%3==0))){
                v1[pos1]=tmp;
                sizev1++;
                pos1++;
            }
            if (tmp<0 && ((tmp%2!=0)&&(tmp%3!=0))){
                v2[pos2]=tmp;
                sizev2++;
                pos2++;
            }
        }
    if (sizev1==N)
        printf("v1 reached its maximum\n");
    if (sizev2==N)
        printf("v2 reached its maximum\n");
    printf("Content of v1: ");
    for (int t=0; t<N; t++)
        printf("%d ", v1[t]);
    for (int t=0; t<N; t++)
        printf("%d ", v2[t]);
    return 0;
}
