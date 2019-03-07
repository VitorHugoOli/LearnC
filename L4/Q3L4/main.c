#include <stdio.h>
#include <stdlib.h>
#inclued <math.h>
int main()
{
    float r,an,n,k,ak;
   printf("digite a razao da sua pa:");
   scanf("%f",&r);
   printf("digite o primiro termo de sua pa:");
   scanf("%f",&ak);
   printf("digite o n da sua do seu termo:");
   scanf("%f",&n);
   k=ak/r;
   an=ak+(n-k)*r;
   printf("o valor do termo e:%f",an);
    return 0;
}
