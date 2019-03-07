#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wats,sm;
    printf("digite o valor do salario minimo:");
    scanf("%f",&sm);
    printf("digite o valor de quilowatts");
    scanf("%f",&wats);
    printf("valor de cada quilowatts:%f\n",(sm*1/7)/100);
    printf("valor total a ser pago:%f\n",(sm*wats)/700);
    printf("com um desconto de 10 porcento o novo valor sera:%f\n",(sm*wats/700)*0.9);
    return 0;
}
