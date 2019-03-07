#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    printf("digite um numero:");
    scanf("%lf", &n);
    if(n>0){printf("ele e possitivo");}
    else if(n==0){printf("ele e neutro");}
    else(n<0);{printf("ele e negativo");}
    return 0;
}
