#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float P,I, smp,smi;
    smp=0;
    smi=0;
    P=0;
    I=0;
    while(num <= 0)
    {
      printf("digite o numero:");
      scanf("%d", &num);
      if(num%2==0)
      {
         smp++;
         P=P+num;
      }
      else
      {
         smi++;
         I=I+num;
      }
    }

    printf("a media sera dos impares e pares: %f,%f:" ,I/smi,P/smp);
    return 0;

}
