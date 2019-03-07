#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],i=0,j=0,cont;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++)
            scanf ("%d", &A[i][j]);
    }
    for(cont=0;cont<10;cont++){
    printf("%d",A[i][j]);
    i++;
    j++;
    }
    return 0;

}
