#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float q,a1,an,n;
   printf("digite a razao da sua pa:");
   scanf("%f",&q);
   printf("digite o primiro termo de sua pa:");
   scanf("%f",&a1);
   printf("digite o n da sua do seu termo:");
   scanf("%f",&n);
   an=a1*pow(q,n-1);
   printf("o valor do termo e:%f",an);
    return 0;
}
