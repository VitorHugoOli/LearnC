#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito,juros;
    printf("digite o valor dpo deposito:");
    scanf("%f",  &deposito);
    printf("digite a taxa de juros:");
    scanf("%f",&juros);
    printf("o valor final do rendimento foi:%f",deposito*(1+juros/100));


    return 0;
}
