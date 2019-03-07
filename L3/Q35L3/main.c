#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int elev,x,den,cont;
    float S;
       S=0;
       den=1;
       printf("digite seu x:");
       scanf("%d",&x);
       for(elev=25;elev>=1;elev--)
       {
         if(elev%2==0)
         {
            S=S-pow(x,elev)/den;
         }
         else
         {
            S=S+pow(x,elev)/den;
         }
        den++;
       }
       printf("o resultado foi:%f",S);
    return 0;
}
