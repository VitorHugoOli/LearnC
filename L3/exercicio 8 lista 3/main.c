#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, conta, m;
    for(conta=1;conta<=100;conta++)
    {
        printf("digite os numeros:");
        scanf("%f", &n);
        m=n/2;
        printf("a metade dos numeros sao: %f\n",m);
    }
    return 0;
}
