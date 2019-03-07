#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,numaulas,horaaula,INSS;
    printf("digite o valor da sua hora aula:");
    scanf("%f",&horaaula);
    printf("digite seu num de aulas no mes:");
    scanf("%f",&numaulas);
    printf("qual e o seu percentual no INSS:");
    scanf("%f",&INSS);
    INSS=-(INSS/100-1);
    printf("seu salario liquido e:%f",numaulas*horaaula*INSS);
    return 0;
}
