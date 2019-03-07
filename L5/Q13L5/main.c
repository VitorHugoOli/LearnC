#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primo,num,M,X,interv,cont2;
    printf("num");
    scanf("%d",&num);
    X=0;
    //intervalo do qual quero saber quantos primos
    for(interv=2; interv<=num; interv++)
    {
        M=0;
        //analisando cada valor interv para ver se ele e primo
        for(cont2=1; cont2<=interv; cont2++)
        {
            //caso o resto do termo do interv/cont2 seja  1 e ele mesmo o valor M vai a 2
            if(interv%cont2==0)
                M++;
        }
        if(M<=2)
          X++;
    }
    printf("A quantidae de primos nesse intervalo e %d",X);
}



