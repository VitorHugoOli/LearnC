#include <stdio.h>
#include <stdlib.h>

int main()
{
    float q,an,n,k,ak;
   printf("digite a razao da sua pa:");
   scanf("%f",&q);
   printf("digite o primiro termo de sua pa:");
   scanf("%f",&ak);
   printf("digite o n da sua do seu termo:");
   scanf("%f",&n);
   printf("digite o k:");
   scanf("%f",k);
   an=ak*pow(q,n-k);
   printf("o valor do termo e:%f",an);
   return 0;
}
