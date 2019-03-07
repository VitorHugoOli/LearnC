#include <stdio.h>
#include <stdlib.h>

int main()
{
   int voto, cand1,cand2,cand3,cand4,nulo,branco,T;
    cand1=0;
    cand2=0;
    cand3=0;
    cand4=0;
    nulo=0;
    branco=0;
    while(voto != 99)
  {


     printf("Digite seu voto ");
     scanf("%d",&voto);
     if(voto==1)
      {
        cand1++;
      }
     if (voto==2)
      {
        cand2++;
      }
     if (voto==3)
      {
        cand3++;
      }
     if (voto==4)
      {
        cand4++;
      }
     if (voto==5)
      {
        nulo++;
      }
     if (voto==6)
      {
        branco++;
      }
  }
    printf("o cand1 recebeu %d votos\n",cand1);
    printf("o cand2 recebeu %d votos\n",cand2);
    printf("o cand3 recebeu %d votos\n",cand3);
    printf("o cand4 recebeu %d votos\n",cand4);
    printf("o nulo recebeu %d votos\n",nulo);
    printf("o branco recebeu %d votos\n",branco);
    T=cand1+cand2+cand3+cand4+nulo+branco;
    printf(" a porcentagem de numeros brancos e nulos e: %d",(nulo+branco)*100/T);
    return 0;




}
