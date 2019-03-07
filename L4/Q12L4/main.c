#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas,min;
    printf("digite o quantas de horas :");
    scanf("%f",&horas);
    printf("digite o quantos mim :");
    scanf("%f",&min);
    printf("o total de minutos passado desde o inicio do dia e:%f",(horas*60)+min);
    return 0;
}
