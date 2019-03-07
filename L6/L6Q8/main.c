#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,id[100],vt=0,vp[100],cont;
    n=0;
    scanf("%d",&id[n]);
    while(id[n]>0)
    {
        scanf("%d",&vp[n]);
        vt=vt+vp[n];
        n++;
        for(cont=0;cont<n;cont++)
        printf("id %d,valor pago %d\n",id[cont],vp[cont]);
        scanf("%d",&id[n]);
    }
    printf("%d",vt);
    return 0;
}
