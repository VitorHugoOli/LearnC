#include <stdio.h>
#include <stdlib.h>


// Como eu faria para nao ter q declarar essa variavel global

int trs(int* v)
{
    int i,n=0;
    for(i=0; i<5; i++)
    {
        if(v[i]%3==0)
        {
            d[n]=v[i];
            n++;
        }
    }
}
int main()
{
    int v[5],d[5],i;
    for(i=0; i<5; i++)
        scanf("%d", &v[i]);
    trs(v);
    for(i=0; i<n; i++)
        printf("%d\n", d[i]);
    return 0;
}
