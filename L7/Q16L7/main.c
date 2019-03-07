
#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main()
{
    int P[tam][2],i,j;
    char planta[tam][30],nope[80];
    for(i=0; i<tam; i++)
    {
        fflush(stdin);
        gets(planta[i]);
        for(j=0; j<2; j++)
        {
            if(j==0)
            {
                printf("quantidade ideal:\n");
                scanf("%d",&P[i][j]);
            }
            if(j==1)
            {
                printf("quantidade estoque:\n");
                scanf("%d",&P[i][j]);
            }
        }
        printf("\n");
    }
    for(i=0; i<tam; i++)
        for(j=0; j<2; j=j+2)
            if(P[i][j+1]<P[i][j])
            {
                puts(planta[i]);
                printf("faltam %d\n",-(P[i][j+1]-P[i][j]));
            }
    return nope;
}






