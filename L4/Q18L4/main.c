#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao;
    printf("digite o valor do seu salario bruto:");
    scanf("%f",&salario);
    printf("inform o valor da prestacao:");
    scanf("%f",&prestacao);
    if (prestacao<=salario*0.3)
    {
         printf("podera haver emprestimo");
    }
    else
    {
         printf("nao podera haver emprestimo");
    }

    return 0;
}
