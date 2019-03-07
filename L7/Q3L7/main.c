#include <stdio.h>
#include <stdlib.h>
#define tam 3
int main()
{
    int A[tam][tam],i,j;
    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            scanf ("%d", &A[i][j]);
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            if(j!=i&&j>i)
              printf("%d ",A[i][j]);
             else
                 printf("  ");

        printf("\n");
        }
    return 0;
}
