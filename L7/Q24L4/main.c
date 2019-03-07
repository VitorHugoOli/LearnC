#include <stdio.h>
#include <stdlib.h>

int main() //q24
{
    int m[5][5], i, j, m2[5][5],aux;
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            scanf("%d", &m[i][j]);
    for(j=0; j<5; j++){
        aux=m[3][j];
        m[3][j]=m[2][j];
        m[2][j]=aux;
        }
    for(i=0; i<5; i++){
        aux=m[i][4];
        m[i][4]=m[i][3];
        m[i][3]=aux;
        }
        for(i=0; i<5; i++)
            for(j=0; j<5; j++)
                m2[i][j]=m[i[j];
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
        if(i==j)
         m2[i][j]=aux1
         aux=m[i][j];
        if(i+j+1==5)
         aux1=m2[i][j];
          m2[i][j]=aux;


    printf("\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;


}
