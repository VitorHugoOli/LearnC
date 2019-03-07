#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int elev,den,num;
    float S;
       num=480;
       den=10;
       for(elev=1;elev<=30;elev++)
       {
         if(num%2==0)
         {
            S=S+num/den;
         }
         else
         {
            S=S-num/den;
         }
        den++;
        num=num-5;
       }
       printf("o resultado foi:%f",S);
    return 0;
}
