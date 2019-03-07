#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,conta,numcliente,negativados,cont;
    float saldo,saldoagencia;
    char nome[21];
    numcliente=0;

    negativados=0;
        while(conta<0)
         {
             printf("the number of your login:");
             scanf("%d",&conta);
             printf("your saldo:");
             scanf("%f",&saldo);

             if(saldo>=0)
                {

                    printf("positivo\n");
                }
             else
             {
                 printf("negativo\n\n");
                 negativados++;
             }
             numcliente++;
         }

         printf("o percentual de  cliente negativados sao:%d",negativados*100/numcliente);
    return 0;
}
