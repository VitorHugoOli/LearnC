#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, menos, maior;
    menos=0;
    maior=0;

    while(idade>0)
    {

        printf("digite sua idade");
        scanf("%d", &idade);
        if(idade<=21)
            menos++;
        if(idade>=50)
            maior++;
    }
       printf("o total d epessoas co menos de 21 e: %d e o de maiors de 50 e:%d",menos,maior);
    return 0;
}
