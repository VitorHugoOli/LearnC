#include <stdio.h>
#include <stdlib.h>

int main()
{
   float r,a1,an,n;
   printf("digite a razao da sua pa:");
   scanf("%f",&r);
   printf("digite o primiro termo de sua pa:");
   scanf("%f",&a1);
   printf("digite o n da sua do seu termo:");
   scanf("%f",&n);
   an=a1+(n-1)*r;
   printf("o valor do termo e:%f",an);
    return 0;
}
