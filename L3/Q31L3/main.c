#include <stdio.h>
#include <stdlib.h>

int main()
{

    int carros,vdc,cont;
    float S,R;
    R=0;
    printf("digite quantos carros voce vendeu:");
    scanf("%d",&carros);
    for(cont=1;cont<=carros;cont++)
    {
        printf("digite o valor do carro:");
        scanf("%d", &vdc);
        R=R+(vdc*0.05);
    }


    S=500+(50*carros)+R;
    printf("o salario mensal do trabalhador e: %f",S);
    return 0;
}
