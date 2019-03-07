#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,conta,numcliente,negativados,cont;
    float saldo,saldoagencia;
    char nome[21];
    numcliente=0;
    saldoagencia=0;
    negativados=0;
    for(cont=0;cont<1000;cont++)
    {
        while(conta != -999)
         {
             printf("the number of your login:");
             scanf("%d",&conta);
             printf("write the name of user:");
             scanf("%s",&nome);
             printf("your saldo:");
             scanf("%f",&saldo);

             if(saldo>=0)
                {
                    printf("o nome do cliente e:%s",nome);
                    printf("o numero da saldo e: %f\n",saldo);
                    printf("positivo\n");
                }
             else
             {
                 printf("o nome do cliente e:%s",nome);
                 printf("o numero da saldo e: %f\n",saldo);
                 printf("negativo\n\n");
                 negativados++;
             }


             saldoagencia=saldoagencia+saldo;
             numcliente++;
         }
    }
         printf("o numero de clientes e:%d\n",numcliente);
         printf("o saldo da agencia e:%d\n",saldoagencia);
         printf("o numero de cliente negativados sao:%d",negativados);
    return 0;
}
