#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,aux=0;
    scanf("%d",&n);
    int m[n][n],t[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&m[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            t[i][j]=m[j][i];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            m[i][j]=m[i][j]*-1;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(t[i][j]==m[i][j])
                aux++;
    if(aux==n*n)
        printf("anti simetrica");
    return 0;
}
