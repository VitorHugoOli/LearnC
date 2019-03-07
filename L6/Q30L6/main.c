#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    int v[tam],v2[tam],cont,aux,cont2,n=0;
    for(cont=0; cont<tam; cont++)
    {
        scanf("%d",&v[cont]);
        v2[cont]=v[cont];
    }
    //crescente
    while(n!=tam)
    {
        for(cont=1; cont<tam; cont++)
        {
            if(v[cont]<v[cont-1])
            {
                aux=v[cont-1];
                v[cont-1]=v[cont];
                v[cont]=aux;
            }
        }
        n++;
    }
    for(cont=0; cont<tam; cont++)
        printf("%d ",v[cont]);
    printf("\n");
    n=0;
    //decrescente
    while(n!=tam)
    {
        for(cont=1; cont<tam; cont++)
        {
            if(v[cont]>v[cont-1])
            {
                aux=v[cont-1];
                v[cont-1]=v[cont];
                v[cont]=aux;
            }
        }
        n++;
    }
    for(cont=0; cont<tam; cont++)
        printf("%d ",v[cont]);

    return 0;
}
