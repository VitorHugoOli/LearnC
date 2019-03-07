#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,num,S;
    S=0;
    while(num != 0)
    {

        printf("digite os nuemros inteiros: ");
        scanf ("%d",&num);
          if(num<0)
          {
              S=S+num;
          }

   }
   printf("o somatorio dos numeros negativos foi:%d",S);
    return 0;
}
