#include <stdio.h>
#include <stdlib.h>
#define N 6

int main()
{
    int array[N];
    int tmp;
    int position[N];
    for (int t=0;t<N;t++){
        position[t]=-1;
    }
   for(int t=0;t<N;t++)
   {
       printf("Enter a value:\n");
       scanf("%d", &tmp);
       if (tmp>0)
       {
           array[t]=tmp;
       }
       else
        {
        printf("Values must be positive!\n");
        exit(EXIT_FAILURE);
       }
   }

   int wanted;
   printf("what is the value you're loking for?\n");
   scanf("%d", &wanted);
   if (wanted<0){
     printf("Values must be positive!\n");
     exit(EXIT_FAILURE);
   }
   else{
    int a=0;
    for(int t=0;t<N;t++)
    {
        if(array[t]==wanted)
        {
            position[a]=t;
            a+=1;
        }
    }
   }
   
   printf("The value you're looking for can be found at the positions:\n");

   for(int u=0;u<N;u++)
   {
       if (position[u]!=-1){
        printf("%d\n",position[u]);
       }
       //printf("%d\n",position[u]); //come posso non stampare gli spazi inutili?
   }



    return 0;
}
