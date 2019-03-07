#include <stdio.h>
#include <stdlib.h>
#define tam 10
int cresc(int* v)
{
    int  i,j, troca;
    while(j!=tam)
    {
        for(i=0; i<tam; i++)
        {
            if(v[i+1]<v[i])
            {
                troca=v[i];
                v[i]=v[i+1];
                v[i+1]=troca;
            }
        }
        j++;
    }
}

int main()
{
    int v[tam],i;
    for(i=0; i<tam; i++)
        scanf("%d",&v[i]);
    cresc(v);
    for(i=0; i<tam; i++)
        printf("%d",v[i]);
    return 0;
}

