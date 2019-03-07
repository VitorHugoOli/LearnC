#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura,imc;
    printf("digite seu peso");
    scanf("%f",&peso);
    printf("digite sua altura");
    scanf("%f",&altura);
    imc= peso/(altura*altura);
    if(imc<20)
    {
        printf("abaixo do peso");
    }
    if(imc>=20 && imc<25)
    {
        printf("peso normal");
    }
    if(imc>=25 && imc<30)
    {
        printf("sobre peso");
    }
    if(imc>=30 && imc<40)
    {
        printf("obeso");
    }
    if(imc>=40)
    {
        printf("obeso morbido, %f",imc);
    }
    return 0;
}
