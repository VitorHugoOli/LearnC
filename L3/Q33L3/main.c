#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chuva,T;
    printf("digite o valor de chuva em polegadas:");
    scanf("%f",&chuva);
    T=chuva*25.4;
    printf("o valor de chuva em milimetros e:%f",T);

    return 0;
}
