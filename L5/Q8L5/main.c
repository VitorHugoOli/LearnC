#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,cont;
    float a,S;
    S=0;
    printf("digite a: ");
    scanf("%f",&a);
    printf("digite b: ");
    scanf("%d",&b);
    for(cont=1; cont<=b;cont++)
    {
        S=S+a;
    }
    printf("%.2f\n",S);
    return 0;
}
