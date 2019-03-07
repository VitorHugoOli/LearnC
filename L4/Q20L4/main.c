#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("digite o valor numero");
    scanf("%f",&num);
    if(num>20 && num<=90)
    {
       printf("o numeor esta na faixa coomprenedida");
    }
    else
    {
        printf("o numero nao esta na faixa");
    }

    return 0;
}
