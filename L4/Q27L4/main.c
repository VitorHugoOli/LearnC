#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("o valor de x: ");
    scanf("%lf",&x);
    if(x<=4)
    {
        printf("nao e possivel");
    }
    else
    {
        printf("o resultado e:%.1lf",(5*x)+3/pow(x*x-16,0.5));
    }
    return 0;
}
