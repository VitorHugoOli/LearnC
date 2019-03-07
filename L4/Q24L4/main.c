#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, credito;
    printf("digite o valor do saldo medio: ");
    scanf("%f",&saldo);
    if(saldo<=500)
    {
        printf("nenhum credito");
    }
    if(saldo>500 && saldo<=1000)
    {
        printf("seu saldo sera: %f\n",saldo*0.3);
        printf ("vc tera q pagar: %f\n",(saldo*0.3)*1.02);
    }
    if(saldo>500 && saldo<=3000)
    {
        printf("seu saldo sera: %f\n",saldo*0.4);
        printf ("vc tera q pagar: %f\n",(saldo*0.4)*1.02);
    }
    if(saldo>3000)
    {
        printf("seu saldo sera: %f\n",saldo*0.5);
        printf ("vc tera q pagar: %f\n",(saldo*0.5)*1.02);
    }
    return 0;
}
